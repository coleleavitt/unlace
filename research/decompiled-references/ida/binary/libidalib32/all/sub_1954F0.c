unsigned __int64 __fastcall sub_1954F0(__int64 *a1, __int64 a2, const char *a3, char a4)
{
  const char *v7; // r15
  size_t v8; // r14
  int v9; // eax
  __int64 v10; // r14
  size_t v11; // rax
  size_t v12; // r13
  __int64 v14; // rbp
  void *v15; // r14
  void *v16; // rax
  void *v17; // rdi
  size_t v18; // r14
  __int64 v19; // rax
  void *src; // [rsp+8h] [rbp-58h] BYREF
  __int128 v21; // [rsp+10h] [rbp-50h]
  unsigned __int64 v22; // [rsp+20h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  a1[2] = 0;
  a1[5] = 0;
  a1[9] = 0;
  *(_OWORD *)(a1 + 3) = 0;
  *((_OWORD *)a1 + 3) = 0;
  *((_OWORD *)a1 + 5) = 0;
  v7 = *(const char **)(a2 + 40);
  *a1 = a2;
  a1[1] = 0;
  a1[8] = 0;
  src = nullptr;
  v21 = 0;
  if ( v7 )
  {
    v8 = strlen(v7);
    src = (void *)qvector_reserve();
    *(_QWORD *)&v21 = v8 + 1;
    memmove(src, v7, v8);
    *((_BYTE *)src + v8) = 0;
  }
  v9 = sub_192EE0((const char **)&src, (__int64)(a1 + 9));
  v10 = *a1;
  *((_DWORD *)a1 + 17) = v9;
  if ( (*(_BYTE *)(v10 + 14) & 1) != 0 )
    v9 |= 2u;
  *((_DWORD *)a1 + 17) = v9;
  if ( a3 )
  {
    v11 = strlen(a3);
    v12 = v11;
    if ( !v11 )
    {
LABEL_7:
      a1[3] = 0;
      goto LABEL_8;
    }
    v17 = (void *)a1[2];
    v18 = v11 + 1;
    if ( a1[4] < v11 + 1 )
    {
      v19 = qvector_reserve();
      a1[2] = v19;
      v17 = (void *)v19;
    }
    a1[3] = v18;
    memmove(v17, a3, v12);
    *(_BYTE *)(a1[2] + v12) = 0;
    v10 = *a1;
  }
  else if ( a1 + 2 != (__int64 *)&src )
  {
    v14 = v21;
    if ( (unsigned __int64)v21 < 2 )
      goto LABEL_7;
    v15 = src;
    v16 = (void *)a1[2];
    if ( a1[4] < (unsigned __int64)v21 )
    {
      v16 = (void *)qvector_reserve();
      a1[2] = (__int64)v16;
    }
    a1[3] = v14;
    memmove(v16, v15, v14 - 1);
    *(_BYTE *)(a1[2] + v14 - 1) = 0;
    v10 = *a1;
  }
LABEL_8:
  if ( (*(_BYTE *)(v10 + 12) & 1) != 0 )
    *((_DWORD *)a1 + 16) |= 1u;
  if ( a4 )
    *((_DWORD *)a1 + 16) |= 2u;
  if ( src )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v22 - __readfsqword(0x28u);
}

