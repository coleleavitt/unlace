__int64 __fastcall sub_1C87E10(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int16 *v13; // rbp
  unsigned __int16 *v14; // r12
  unsigned __int64 v15; // rsi
  unsigned __int16 *v16; // r13
  unsigned __int64 v17; // r8
  unsigned __int16 *v18; // rax
  int v19; // r14d
  _QWORD *v20; // r13
  unsigned int v21; // eax
  unsigned int v23; // eax
  unsigned int v24; // [rsp+0h] [rbp-48h]
  unsigned int v25; // [rsp+0h] [rbp-48h]
  int v26; // [rsp+4h] [rbp-44h]
  _QWORD *v27; // [rsp+8h] [rbp-40h]

  v8 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v12 = *(_QWORD *)(a2 + 32);
  v13 = v8;
  if ( v12 )
  {
    v14 = sub_1C7CFE0(a1, v12, a6, a7, v9, v10, v11);
    if ( v14 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return 1;
  }
  else
  {
    v14 = nullptr;
  }
  v15 = *(_QWORD *)(a2 + 40);
  if ( v15 )
  {
    v16 = sub_1C7CFE0(a1, v15, a6, a7, v9, v10, v11);
    if ( v16 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return 1;
  }
  else
  {
    v16 = nullptr;
  }
  if ( !*(_DWORD *)(a2 + 16) )
  {
    v17 = *(_QWORD *)(a2 + 48);
    if ( !v17 )
    {
      v19 = *(_DWORD *)(a2 + 64);
      v20 = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_10;
    }
    v18 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 48), a6, a7, v9, v10, v17);
    if ( v18 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v19 = *(_DWORD *)(a2 + 64);
      v20 = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
      v17 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(a2 + 16) )
      {
LABEL_10:
        v27 = (_QWORD *)v17;
        v26 = *(_DWORD *)(a2 + 60);
        v24 = *(_DWORD *)(a2 + 56);
        v21 = sub_EEC140(*(_QWORD *)(a2 + 24));
        return sub_1B176A0(
                 *(__int64 **)(*a1 + 760),
                 (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL,
                 a6,
                 a7,
                 v21,
                 (_QWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL),
                 v24,
                 v26,
                 v20,
                 v27,
                 v19);
      }
      goto LABEL_13;
    }
    return 1;
  }
  v19 = *(_DWORD *)(a2 + 64);
  v20 = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
LABEL_13:
  v25 = *(_DWORD *)(a2 + 56);
  v23 = sub_EEC140(*(_QWORD *)(a2 + 24));
  return sub_1AA4090(
           *(__int64 **)(*a1 + 744),
           (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL,
           v23,
           (_QWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL),
           v25,
           v20,
           a6,
           a7,
           v19);
}
