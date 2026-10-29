unsigned __int64 __fastcall extract_insn_cmts_from_metadata(__int64 *a1, void *a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  char *v5; // r15
  char *v6; // r8
  __int64 v7; // rsi
  char *v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned int v11; // eax
  _BYTE *v12; // r14
  bool v13; // cf
  char *v14; // rax
  __int64 *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  char *v21; // [rsp+0h] [rbp-88h]
  char *v22; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  char v26; // [rsp+30h] [rbp-58h]
  __int64 *v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v27 = a1;
  v26 = 1;
  v25 = 0;
  src = a2;
  v24 = a3;
  LODWORD(v25) = unpack_dd(&src);
  while ( (unsigned __int64)src < v24 )
  {
    v9 = unpack_dd(&src);
    if ( v26 == 1 || v9 )
    {
      v10 = v24;
      HIDWORD(v25) += v9;
      v11 = unpack_dd(&src);
      v12 = src;
      v13 = __CFADD__(src, v11);
      v14 = (char *)src + v11;
      if ( v13 )
        return v28 - __readfsqword(0x28u);
      if ( v10 < (unsigned __int64)v14 )
        return v28 - __readfsqword(0x28u);
      src = v14;
      if ( !v12 )
        return v28 - __readfsqword(0x28u);
      v15 = v27;
      v16 = v27[1];
      v17 = *v27;
      if ( v27[2] < (unsigned __int64)(v16 + 1) )
      {
        v18 = qvector_reserve(v27, v17, v16 + 1, 32);
        v16 = v15[1];
        *v15 = v18;
        v17 = v18;
      }
      v3 = v17 + 32 * v16;
      *(_QWORD *)v3 = -1;
      *(_QWORD *)(v3 + 8) = 0;
      *(_OWORD *)(v3 + 16) = 0;
      ++v15[1];
      v4 = *(_QWORD *)(v3 + 16);
      *(_QWORD *)v3 = v25;
      v5 = (char *)((_BYTE *)src - v12);
      v6 = (char *)((_BYTE *)src - v12);
      if ( v4 )
        v6 = &v5[--v4];
      v7 = *(_QWORD *)(v3 + 8);
      v8 = v6 + 1;
      if ( *(_QWORD *)(v3 + 24) < (unsigned __int64)(v6 + 1) )
      {
        v22 = v6;
        v21 = v6 + 1;
        v19 = qvector_reserve(v3 + 8, v7, v8, 1);
        v6 = v22;
        v8 = v21;
        *(_QWORD *)(v3 + 8) = v19;
        v7 = v19;
      }
      *(_QWORD *)(v3 + 16) = v8;
      v6[v7] = 0;
      memmove((void *)(v4 + *(_QWORD *)(v3 + 8)), v12, (size_t)v5);
      if ( v26 )
        v26 = 0;
    }
    else
    {
      v25 = (unsigned int)unpack_dd(&src);
      v26 = 1;
    }
  }
  return v28 - __readfsqword(0x28u);
}

