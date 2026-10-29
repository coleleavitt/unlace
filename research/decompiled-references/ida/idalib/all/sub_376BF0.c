__int64 __fastcall sub_376BF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rax
  __int64 v6; // rdx
  char *v8; // r12
  size_t v9; // rax
  size_t v10; // rbp
  size_t v11; // r13
  void *v12; // rax
  char *s; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+8h] [rbp-A0h]
  __int64 (__fastcall **v15)(); // [rsp+20h] [rbp-88h] BYREF
  int v16; // [rsp+28h] [rbp-80h]
  __int64 v17; // [rsp+30h] [rbp-78h]
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  void *ptr; // [rsp+68h] [rbp-40h]
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v16 = 0;
  v15 = off_2B25850;
  v17 = getinf(19);
  v19 = 0;
  v20 = -1;
  v21 = 0;
  ptr = &v15;
  v18 = 0;
  v5 = (void *)idaplace_t__clone(&v15, a2, v2, off_2B25850, v3, v4, 0, 0, 0);
  v6 = *(unsigned int *)(a1 + 8);
  ptr = v5;
  if ( (unsigned __int8)bookmarks_t_get_desc(&s, &v18, v6, 0) )
  {
    if ( (_QWORD)v14 && (v8 = s) != nullptr )
    {
      v9 = strlen(s);
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
  if ( s )
  {
    *(_QWORD *)&v14 = 0;
    qfree(s);
  }
  return 0;
}
