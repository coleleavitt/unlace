unsigned __int64 __fastcall extract_extra_cmts_from_metadata(__int64 *a1, void *a2, unsigned __int64 a3)
{
  int v3; // eax
  unsigned __int64 v4; // rbx
  unsigned int v5; // eax
  void *v6; // r12
  size_t v7; // r13
  char *v8; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // eax
  _BYTE *v11; // r15
  bool v12; // cf
  char *v13; // rax
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rsi
  size_t v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rsi
  size_t v21; // rdx
  __int64 v22; // r13
  char *v23; // r14
  char *v24; // r8
  __int64 v25; // rsi
  char *v26; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // [rsp+0h] [rbp-88h]
  size_t v32; // [rsp+0h] [rbp-88h]
  char *v33; // [rsp+8h] [rbp-80h]
  size_t v34; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  char v38; // [rsp+30h] [rbp-58h]
  __int64 *v39; // [rsp+38h] [rbp-50h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v39 = a1;
  v38 = 1;
  v37 = 0;
  src = a2;
  v36 = a3;
  LODWORD(v37) = unpack_dd(&src);
LABEL_2:
  while ( (unsigned __int64)src < v36 )
  {
    while ( 1 )
    {
      v3 = unpack_dd(&src);
      if ( v38 != 1 && !v3 )
        break;
      v4 = v36;
      HIDWORD(v37) += v3;
      v5 = unpack_dd(&src);
      v6 = src;
      v7 = v5;
      v8 = (char *)src + v5;
      if ( __CFADD__(v7, src) )
        return v40 - __readfsqword(0x28u);
      if ( v4 < (unsigned __int64)v8 )
        return v40 - __readfsqword(0x28u);
      src = v8;
      if ( !v6 )
        return v40 - __readfsqword(0x28u);
      v9 = v36;
      v10 = unpack_dd(&src);
      v11 = src;
      v12 = __CFADD__(src, v10);
      v13 = (char *)src + v10;
      if ( v12 )
        return v40 - __readfsqword(0x28u);
      if ( v9 < (unsigned __int64)v13 )
        return v40 - __readfsqword(0x28u);
      src = v13;
      if ( !v11 )
        return v40 - __readfsqword(0x28u);
      v14 = v39;
      v15 = v39[1];
      v16 = *v39;
      if ( v39[2] < (unsigned __int64)(v15 + 1) )
      {
        v30 = qvector_reserve(v39, v16, v15 + 1, 56);
        v15 = v14[1];
        *v14 = v30;
        v16 = v30;
      }
      v17 = v7;
      v18 = v16 + 56 * v15;
      *(_QWORD *)v18 = -1;
      *(_OWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 32) = 0;
      *(_OWORD *)(v18 + 40) = 0;
      ++v14[1];
      v19 = *(_QWORD *)(v18 + 16);
      *(_QWORD *)v18 = v37;
      if ( v19 )
      {
        --v19;
        v17 = v7 + v19;
      }
      v20 = *(_QWORD *)(v18 + 8);
      v21 = v17 + 1;
      if ( *(_QWORD *)(v18 + 24) < v17 + 1 )
      {
        v34 = v17;
        v32 = v17 + 1;
        v29 = qvector_reserve(v18 + 8, v20, v21, 1);
        v17 = v34;
        v21 = v32;
        *(_QWORD *)(v18 + 8) = v29;
        v20 = v29;
      }
      *(_QWORD *)(v18 + 16) = v21;
      *(_BYTE *)(v20 + v17) = 0;
      memmove((void *)(v19 + *(_QWORD *)(v18 + 8)), v6, v7);
      v22 = *(_QWORD *)(v18 + 40);
      v23 = (char *)((_BYTE *)src - v11);
      v24 = (char *)((_BYTE *)src - v11);
      if ( v22 )
        v24 = &v23[--v22];
      v25 = *(_QWORD *)(v18 + 32);
      v26 = v24 + 1;
      if ( *(_QWORD *)(v18 + 48) < (unsigned __int64)(v24 + 1) )
      {
        v33 = v24;
        v31 = v24 + 1;
        v28 = qvector_reserve(v18 + 32, v25, v26, 1);
        v24 = v33;
        v26 = v31;
        *(_QWORD *)(v18 + 32) = v28;
        v25 = v28;
      }
      *(_QWORD *)(v18 + 40) = v26;
      v24[v25] = 0;
      memmove((void *)(v22 + *(_QWORD *)(v18 + 32)), v11, (size_t)v23);
      if ( !v38 )
        goto LABEL_2;
      v38 = 0;
      if ( (unsigned __int64)src >= v36 )
        return v40 - __readfsqword(0x28u);
    }
    v37 = (unsigned int)unpack_dd(&src);
    v38 = 1;
  }
  return v40 - __readfsqword(0x28u);
}
