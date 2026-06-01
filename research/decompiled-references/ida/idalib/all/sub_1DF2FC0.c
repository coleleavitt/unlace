unsigned __int64 __fastcall sub_1DF2FC0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  unsigned __int64 *v11; // r13
  unsigned __int16 *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rax
  char v19; // si
  unsigned __int64 result; // rax
  char v21; // [rsp+7h] [rbp-D1h]
  unsigned __int64 v22; // [rsp+8h] [rbp-D0h]
  void *v23; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-C0h]
  _BYTE v25[48]; // [rsp+20h] [rbp-B8h] BYREF
  void *ptr; // [rsp+50h] [rbp-88h] BYREF
  __int64 v27; // [rsp+58h] [rbp-80h]
  _BYTE v28[48]; // [rsp+60h] [rbp-78h] BYREF
  char v29; // [rsp+90h] [rbp-48h]

  v8 = *(unsigned __int64 **)(a2 + 24);
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(_QWORD *)(a1 + 24);
  v21 = *(_BYTE *)(a2 + 40);
  v11 = &v8[v9];
  v23 = v25;
  v24 = 0x600000000LL;
  if ( v8 == v11 )
  {
    v27 = 0x600000000LL;
    ptr = v28;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v12 = sub_1DC71F0(*(__int64 **)a1, *v8, v9, a6, a7, a8, a3, a4);
        if ( (unsigned __int64)v12 > 1 )
        {
          v13 = sub_1AA8160(
                  *(__int64 **)(**(_QWORD **)a1 + 744LL),
                  **(unsigned __int8 **)(a1 + 24),
                  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL),
                  (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL);
          if ( v13 > 1 )
            break;
        }
        if ( v11 == ++v8 )
          goto LABEL_9;
      }
      a6 = (unsigned int)v24;
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v24 + 1LL;
      if ( v15 > HIDWORD(v24) )
      {
        v22 = v14;
        sub_2237220(&v23, v25, v15, 8);
        a6 = (unsigned int)v24;
        v14 = v22;
      }
      v9 = (unsigned __int64)v23;
      ++v8;
      *((_QWORD *)v23 + a6) = v14;
      LODWORD(v24) = v24 + 1;
    }
    while ( v11 != v8 );
LABEL_9:
    ptr = v28;
    v27 = 0x600000000LL;
    if ( (_DWORD)v24 )
      sub_1576230((char ***)&ptr, (char ***)&v23);
  }
  v29 = v21;
  v16 = *(unsigned __int8 *)(v10 + 144);
  if ( (_BYTE)v16 != 0xFF )
  {
    if ( (_BYTE)v16 == 4 )
    {
      sub_1576230((char ***)(v10 + 16), (char ***)&ptr);
      *(_BYTE *)(v10 + 80) = v29;
      goto LABEL_17;
    }
    funcs_1576A39[v16]();
  }
  *(_QWORD *)(v10 + 16) = v10 + 32;
  *(_QWORD *)(v10 + 24) = 0x600000000LL;
  if ( (_DWORD)v27 )
    sub_1576230((char ***)(v10 + 16), (char ***)&ptr);
  v17 = v29;
  *(_BYTE *)(v10 + 144) = 4;
  *(_BYTE *)(v10 + 80) = v17;
LABEL_17:
  if ( ptr != v28 )
    free(ptr);
  if ( v23 != v25 )
    free(v23);
  v18 = *(_QWORD *)(a1 + 24);
  v19 = *(_BYTE *)(v18 + 1);
  if ( v19 == 41 || *(_BYTE *)(v18 + 144) != 4 )
    abort();
  result = sub_EB49D0(
             *(_QWORD **)(**(_QWORD **)a1 + 248LL),
             v19,
             *(_DWORD *)(v18 + 4),
             *(_DWORD *)(v18 + 12),
             *(unsigned __int8 *)(v18 + 80),
             *(unsigned int *)(v18 + 8),
             *(void **)(v18 + 16),
             *(unsigned int *)(v18 + 24));
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
