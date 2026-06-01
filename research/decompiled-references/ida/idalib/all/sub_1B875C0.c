__int64 __fastcall sub_1B875C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int16 *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int16 *v15; // rsi
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rax
  int v19; // r15d
  _QWORD *v20; // r14
  unsigned int v22; // eax
  unsigned int v23; // [rsp+Ch] [rbp-3Ch]

  v8 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v8 == 1 )
    return 1;
  v12 = *(unsigned __int16 **)(a2 + 32);
  v13 = v8;
  if ( v12 )
  {
    v14 = sub_1B7CAD0(a1, v12, a6, a7, v9, v10, v11);
    if ( v14 == 1 )
      return 1;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(unsigned __int16 **)(a2 + 40);
  if ( v15 )
  {
    v16 = sub_1B7CAD0(a1, v15, a6, a7, v9, v10, v11);
    if ( v16 == 1 )
      return 1;
  }
  else
  {
    v16 = 0;
  }
  if ( !*(_DWORD *)(a2 + 16) )
  {
    v17 = *(_QWORD **)(a2 + 48);
    if ( !v17 )
    {
      v19 = *(_DWORD *)(a2 + 64);
      v20 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
      return sub_1B18720(
               *(__int64 **)(*a1 + 760),
               v13 & 0xFFFFFFFFFFFFFFFELL,
               (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL),
               *(_DWORD *)(a2 + 56),
               *(_DWORD *)(a2 + 60),
               v20,
               a6,
               a7,
               v17,
               v19);
    }
    v18 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 48), a6, a7, v9, v10, v11);
    if ( v18 != 1 )
    {
      v19 = *(_DWORD *)(a2 + 64);
      v17 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
      v20 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
      if ( !*(_DWORD *)(a2 + 16) )
        return sub_1B18720(
                 *(__int64 **)(*a1 + 760),
                 v13 & 0xFFFFFFFFFFFFFFFELL,
                 (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL),
                 *(_DWORD *)(a2 + 56),
                 *(_DWORD *)(a2 + 60),
                 v20,
                 a6,
                 a7,
                 v17,
                 v19);
      goto LABEL_13;
    }
    return 1;
  }
  v19 = *(_DWORD *)(a2 + 64);
  v20 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
LABEL_13:
  v23 = *(_DWORD *)(a2 + 56);
  v22 = sub_EEC140(*(_QWORD *)(a2 + 24));
  return sub_1AA4090(
           *(__int64 **)(*a1 + 744),
           v13 & 0xFFFFFFFFFFFFFFFELL,
           v22,
           (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL),
           v23,
           v20,
           a6,
           a7,
           v19);
}
