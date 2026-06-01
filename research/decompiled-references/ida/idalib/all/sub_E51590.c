void __fastcall sub_E51590(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  bool v6; // r12
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  _BYTE *v22; // rax
  __int64 v23; // rdi
  _BYTE *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  __int64 v27; // r10
  unsigned __int64 v28; // rax
  __int64 v29; // rbp
  _DWORD *v30; // r12
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  char v34; // al
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = 0;
  v7 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = sub_E3D330(*a1, a2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 <= 2 )
  {
    v10 = *(_QWORD *)(v7 + 128);
    if ( v10 )
      v6 = (*(_BYTE *)(v10 + 10) & 0x20) != 0;
  }
  v11 = *(_BYTE *)(v9 + 8) & 0x7F;
  if ( (unsigned __int8)v11 <= 0x27u
    && (v12 = 0xFC00040100LL, _bittest64(&v12, v11))
    && (unsigned __int8)sub_B843B0((_BYTE *)v7) == 1
    && !v6 )
  {
    if ( (*(_BYTE *)(v9 + 8) & 0x7F) != 0 && (*(_BYTE *)(v9 + 8) & 0x7F) != 0x18 )
    {
      do
      {
        v32 = *a1;
        v33 = sub_B8C1B0(v9);
        v9 = sub_E3D330(v32, v33);
        v34 = *(_BYTE *)(v9 + 8) & 0x7F;
      }
      while ( v34 != 24 && v34 );
    }
  }
  else
  {
    v13 = sub_E3D330(*a1, v7);
    v14 = *(_BYTE *)(v13 + 8) & 0x7F;
    if ( (*(_BYTE *)(v13 + 8) & 0x7F) != 0 && (_BYTE)v14 != 24 )
    {
      if ( (unsigned __int8)v14 <= 0x27u && (v15 = 0xFC00040100LL, _bittest64(&v15, v14)) )
      {
        v16 = a2 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_13:
        if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 58 <= 3
          && (!v6 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0xAFu) )
        {
          goto LABEL_30;
        }
      }
      else
      {
        while ( 1 )
        {
          v36 = sub_B8C1B0(v13);
          v13 = sub_E3D330(*a1, v36);
          v19 = *(_BYTE *)(v13 + 8) & 0x7F;
          if ( (_BYTE)v19 == 24 )
            break;
          v16 = v36;
          v20 = 0xFC00040100LL;
          if ( !(_BYTE)v19 )
            break;
          if ( (unsigned __int8)v19 <= 0x27u && _bittest64(&v20, v19) )
            goto LABEL_13;
        }
      }
    }
  }
  v17 = sub_E38940((__int64)a1, v7);
  if ( !v17 )
  {
    v18 = *(_BYTE *)(v9 + 8) & 0x7F;
    if ( (unsigned __int8)v18 > 0x27u )
      goto LABEL_18;
    v25 = 0xFC00040100LL;
    if ( !_bittest64(&v25, v18) )
    {
      while ( (_BYTE)v18 == 2 )
      {
        while ( 1 )
        {
          v27 = *(_QWORD *)(sub_B8C1B0(v9) + 16);
          if ( (v27 & 4) != 0 )
            break;
          v9 = v27 & 0xFFFFFFFFFFFFFFF8LL;
          LOBYTE(v18) = *(_BYTE *)((v27 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0x7F;
          if ( (_BYTE)v18 != 2 )
            goto LABEL_35;
        }
        v26 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = *(_QWORD *)v26;
        LOBYTE(v18) = *(_BYTE *)(*(_QWORD *)v26 + 8LL) & 0x7F;
      }
LABEL_35:
      if ( !(_BYTE)v18 )
      {
LABEL_36:
        v37[0] = 0;
        v28 = sub_E38B70(a2, a3, v37);
        v29 = v28;
        if ( v28 )
        {
          sub_E4E150((__int64)a1, v28, v9, a4, a5);
          v30 = (_DWORD *)v37[0];
          v31 = sub_E38B30(v29);
          sub_E4FC20(a1, v31, v30);
        }
        else
        {
          sub_E4DEA0(a1, a2, v9, a4, a5);
        }
        return;
      }
LABEL_18:
      if ( (_BYTE)v18 != 24 || !sub_E3D7C0(a1, v9) )
      {
        sub_E50400(a1, a2, a3, v9, a4, 0, *(double *)a5.m128_u64);
        return;
      }
      goto LABEL_36;
    }
LABEL_30:
    sub_E50840(a1, a2, a3, a4);
    return;
  }
  v21 = a1[1];
  v22 = *(_BYTE **)(v21 + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
  {
    sub_227BA10(v21, 78);
  }
  else
  {
    *(_QWORD *)(v21 + 32) = v22 + 1;
    *v22 = 78;
  }
  sub_E4FFD0((__int64)a1, v17, 0);
  sub_E4D010(a1, a2, *(_QWORD *)(v7 + 40), 0, a4, *(double *)a5.m128_u64);
  v23 = a1[1];
  v24 = *(_BYTE **)(v23 + 32);
  if ( (unsigned __int64)v24 >= *(_QWORD *)(v23 + 24) )
  {
    sub_227BA10(v23, 69);
  }
  else
  {
    *(_QWORD *)(v23 + 32) = v24 + 1;
    *v24 = 69;
  }
}
