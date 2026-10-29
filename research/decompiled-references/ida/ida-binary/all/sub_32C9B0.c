__int64 __fastcall sub_32C9B0(__int64 *a1, unsigned __int64 *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rdi
  double v18; // xmm0_8
  __int64 v19; // rdi
  unsigned __int64 v21; // r13
  __int64 v22; // rbx
  size_t v23; // r13
  unsigned __int64 v24; // r12
  void *v25; // rdi
  __int64 v26; // [rsp+0h] [rbp-48h] BYREF
  __int128 v27; // [rsp+8h] [rbp-40h]
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v5 = a2[1];
  if ( v5 <= 1 )
    return -1;
  v8 = v5 - 1;
  v9 = v5 - 2;
  if ( a3 >= v8 )
    a3 = v9;
  v11 = sub_32C7D0(*a2, a3, a4);
  v12 = v11 >> 32;
  if ( (_DWORD)v11 == HIDWORD(v11) )
    return -1;
  v13 = a2[1];
  if ( !v13 )
    goto LABEL_6;
  v21 = v13 - 1;
  a3 = SHIDWORD(v11);
  v11 = (int)v11;
  if ( v13 - 1 < v12 )
  {
    if ( (int)v11 > v21 )
      v11 = v13 - 1;
    v22 = v11;
    v23 = v21 - v11;
  }
  else
  {
    if ( (int)v12 <= (unsigned __int64)(int)v11 )
      v11 = (int)v12;
    a3 = (int)v12 - v11;
    v22 = v11;
    v23 = a3;
  }
  v26 = 0;
  v24 = *a2;
  v27 = 0;
  if ( v23 )
  {
    v25 = nullptr;
    if ( v23 != -1 )
    {
      v26 = qvector_reserve(&v26, 0, v23 + 1, 1);
      v25 = (void *)v26;
    }
    a3 = v24 + v22;
    *(_QWORD *)&v27 = v23 + 1;
    memmove(v25, (const void *)(v24 + v22), v23);
    *(_BYTE *)(v26 + v23) = 0;
    v16 = v26;
    v14 = *((_QWORD *)&v27 + 1);
    v15 = v27;
  }
  else
  {
LABEL_6:
    v14 = 0;
    v15 = 0;
    v16 = 0;
  }
  v17 = *a1;
  v26 = 0;
  v27 = 0;
  if ( v17 )
  {
    a1[1] = 0;
    v18 = qfree(v17, (const char *)a3);
    v19 = v26;
    *a1 = v16;
    a1[1] = v15;
    a1[2] = v14;
    if ( v19 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v19, (const char *)a3, v18);
      v15 = a1[1];
    }
  }
  else
  {
    *a1 = v16;
    a1[1] = v15;
    a1[2] = v14;
  }
  return (v15 == 0) + v15 - 1;
}
