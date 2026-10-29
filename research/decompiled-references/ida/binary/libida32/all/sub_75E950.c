__int64 __fastcall sub_75E950(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v4; // rdi
  unsigned int v6; // r12d
  size_t v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  size_t v12; // r9
  _BYTE *v13; // rsi
  const char *v14; // rdx
  const char *v15; // rdx
  size_t v16; // [rsp+0h] [rbp-88h]
  size_t v17; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 40);
  v23 = __readfsqword(0x28u);
  v19 = 0;
  src = nullptr;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, _QWORD, _QWORD))(*(_QWORD *)v4 + 16LL))(v4, &src, a2, 0) )
  {
    if ( a3 )
    {
      v6 = 2;
      goto LABEL_5;
    }
    sub_3573A0((char **)&src);
  }
  v6 = sub_755F90((_QWORD *)a1, *(_DWORD *)(a1 + 96), a2, a3);
  if ( !(_BYTE)v6 )
  {
    sub_756780((__int64)&ptr, a1, *(_DWORD *)(a1 + 96), 1);
    v10 = v19;
    if ( (_QWORD)v19 )
    {
      v8 = v19 - 1;
      if ( (_QWORD)v19 != 1 )
      {
        v11 = v21;
        v12 = v19 - 1;
        if ( v21 )
        {
          v11 = v21 - 1;
          v12 = v8 + v21 - 1;
          v10 = v19 + v21 - 1;
        }
        v13 = ptr;
        if ( v22 < v10 )
        {
          v17 = v19 - 1;
          v16 = v12;
          ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
          v8 = v17;
          v13 = ptr;
          v12 = v16;
        }
        v21 = v10;
        v13[v12] = 0;
        memcpy((char *)ptr + v11, src, v8);
      }
    }
    v14 = haystack;
    if ( v21 )
      v14 = (const char *)ptr;
    sub_396090(0x43u, *(_QWORD *)(a1 + 32), v14, a3, v8, v9, v16, v17);
    v15 = haystack;
    if ( v21 )
      v15 = (const char *)ptr;
    sub_754740(a1, 67, v15, a3);
    if ( ptr )
    {
      v21 = 0;
      qfree(ptr);
    }
  }
LABEL_5:
  if ( src )
  {
    *(_QWORD *)&v19 = 0;
    qfree(src);
  }
  return v6;
}

