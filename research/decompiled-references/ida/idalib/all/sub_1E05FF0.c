__int64 __fastcall sub_1E05FF0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r8
  __int64 v9; // r14
  unsigned __int64 *v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  char v18; // al
  __int64 result; // rax
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // [rsp-10h] [rbp-F8h]
  char v23; // [rsp+Fh] [rbp-D9h]
  unsigned __int64 *v24; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v25; // [rsp+18h] [rbp-D0h]
  void *v26; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-C0h]
  _BYTE v28[48]; // [rsp+30h] [rbp-B8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v30; // [rsp+68h] [rbp-80h]
  _BYTE v31[48]; // [rsp+70h] [rbp-78h] BYREF
  char v32; // [rsp+A0h] [rbp-48h]

  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  v23 = *(_BYTE *)(a2 + 40);
  v10 = (unsigned __int64 *)v8;
  v11 = v8 + 8LL * *(_QWORD *)(a2 + 32);
  v26 = v28;
  v27 = 0x600000000LL;
  v24 = (unsigned __int64 *)v11;
  if ( v8 == v11 )
  {
    v30 = 0x600000000LL;
    ptr = v31;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v12 = sub_1DF2070(*(_QWORD *)a1, *v10, *(_QWORD *)(a1 + 8), v11, v8, a8, a3, a4);
        if ( (unsigned __int64)v12 > 1 )
        {
          v13 = sub_1AA8160(
                  *(__int64 **)(*(_QWORD *)a1 + 744LL),
                  **(unsigned __int8 **)(a1 + 32),
                  *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1LL),
                  (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL);
          if ( v13 > 1 )
            break;
        }
        if ( v24 == ++v10 )
          goto LABEL_9;
      }
      v11 = (unsigned int)v27;
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v27 + 1LL;
      if ( v15 > HIDWORD(v27) )
      {
        v25 = v14;
        sub_2237220(&v26, v28, v15, 8);
        v11 = (unsigned int)v27;
        v14 = v25;
      }
      ++v10;
      *((_QWORD *)v26 + v11) = v14;
      LODWORD(v27) = v27 + 1;
    }
    while ( v24 != v10 );
LABEL_9:
    ptr = v31;
    v30 = 0x600000000LL;
    if ( (_DWORD)v27 )
      sub_1576230((char ***)&ptr, (char ***)&v26);
  }
  v32 = v23;
  v16 = *(unsigned __int8 *)(v9 + 144);
  if ( (_BYTE)v16 != 0xFF )
  {
    if ( (_BYTE)v16 == 4 )
    {
      sub_1576230((char ***)(v9 + 16), (char ***)&ptr);
      *(_BYTE *)(v9 + 80) = v32;
      goto LABEL_17;
    }
    funcs_1576A39[v16]();
  }
  v17 = v30;
  *(_QWORD *)(v9 + 16) = v9 + 32;
  *(_QWORD *)(v9 + 24) = 0x600000000LL;
  if ( v17 )
    sub_1576230((char ***)(v9 + 16), (char ***)&ptr);
  v18 = v32;
  *(_BYTE *)(v9 + 144) = 4;
  *(_BYTE *)(v9 + 80) = v18;
LABEL_17:
  if ( ptr != v31 )
    free(ptr);
  if ( v26 != v28 )
    free(v26);
  result = sub_1AC3EF0(
             *(_QWORD *)(*(_QWORD *)a1 + 744LL),
             *(char **)(a1 + 32),
             *(_BYTE *)(a2 + 40),
             *(double *)a3.m128_u64);
  if ( !(_BYTE)result )
  {
    v20 = *(_QWORD *)(a1 + 32);
    v21 = *(_BYTE *)(v20 + 1);
    if ( v21 == 41 || *(_BYTE *)(v20 + 144) != 4 )
      abort();
    *(_QWORD *)(a1 + 40) = sub_EB47D0(
                             *(_QWORD **)(*(_QWORD *)a1 + 248LL),
                             v21,
                             *(_DWORD *)(v20 + 4),
                             *(_DWORD *)(v20 + 12),
                             *(unsigned __int8 *)(v20 + 80),
                             *(unsigned int *)(v20 + 8),
                             *(void **)(v20 + 16),
                             *(unsigned int *)(v20 + 24));
    return v22;
  }
  return result;
}
