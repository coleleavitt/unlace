__int64 __fastcall sub_3731F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rax
  __int64 v6; // rdx
  const void *v8; // r12
  size_t v9; // rax
  size_t v10; // rbp
  size_t v11; // r13
  void *v12; // rax
  __int64 (**v13)(void); // [rsp+0h] [rbp-98h] BYREF
  int v14; // [rsp+8h] [rbp-90h]
  _BYTE v15[12]; // [rsp+Ch] [rbp-8Ch] BYREF
  __int128 v16; // [rsp+18h] [rbp-80h]
  __int128 v17; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  void *ptr; // [rsp+58h] [rbp-40h]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v16 = 0;
  *(_DWORD *)&v15[8] = 0;
  v14 = 0;
  v13 = off_2AFC770;
  *(_QWORD *)v15 = (unsigned int)getinf(19);
  v18 = 0;
  v19 = -1;
  v20 = 0;
  ptr = &v13;
  v17 = 0;
  v5 = (void *)((__int64 (__fastcall *)(__int64 (***)(void), __int64, __int64, __int64 (**)(void), __int64, __int64))idaplace_t__clone)(
                 &v13,
                 a2,
                 v2,
                 off_2AFC770,
                 v3,
                 v4);
  v6 = *(unsigned int *)(a1 + 8);
  ptr = v5;
  if ( (unsigned __int8)bookmarks_t_get_desc(&v15[4], &v17, v6, 0) )
  {
    if ( (_QWORD)v16 && (v8 = *(const void **)&v15[4]) != nullptr )
    {
      v9 = strlen(*(const char **)&v15[4]);
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      v10 = v9;
      *(_OWORD *)(a2 + 16) = 0;
      if ( v9 )
      {
        v11 = v9 + 1;
        v12 = (void *)qvector_reserve(a2 + 8, 0, v9 + 1, 1);
        *(_QWORD *)(a2 + 8) = v12;
        *(_QWORD *)(a2 + 16) = v11;
        memmove(v12, v8, v10);
        *(_BYTE *)(*(_QWORD *)(a2 + 8) + v10) = 0;
      }
    }
    else
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
    }
  }
  if ( ptr )
    qfree(ptr);
  if ( *(_QWORD *)&v15[4] )
  {
    *(_QWORD *)&v16 = 0;
    qfree(*(void **)&v15[4]);
  }
  return 0;
}

