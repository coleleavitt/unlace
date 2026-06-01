__int64 __fastcall sub_D199F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rbp
  __int64 result; // rax
  unsigned int v16; // eax
  __int64 v17; // rsi
  bool v18; // cc
  __int64 v19; // rsi
  __int64 v20; // r15
  char v21; // [rsp+8h] [rbp-60h]
  unsigned __int8 v22; // [rsp+8h] [rbp-60h]
  void *v23; // [rsp+8h] [rbp-60h]
  void *v24; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-50h]
  void *v26; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-40h]
  char v28; // [rsp+2Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v25 = v10;
  if ( v10 <= 0x40 )
  {
    v24 = (void *)(v9 - 1);
    v27 = v10;
    v26 = v24;
    v25 = 0;
    v28 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v21 = v11;
  sub_21E1730(&v24, v12, 0);
  v10 = v25;
  v12 = (unsigned __int64)v24;
  v25 = 0;
  v18 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v27 = v10;
  v26 = v24;
  v28 = v21;
  if ( v18 )
    goto LABEL_4;
  sub_21E1E20(a4, &v26);
  v10 = v27;
LABEL_5:
  if ( v10 > 0x40 && v26 )
    operator delete[](v26);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) )
  {
    v13 = *(_QWORD *)a4;
    if ( *(_DWORD *)(a4 + 8) > 0x40u )
      v13 = *(_QWORD *)v13;
LABEL_14:
    if ( v9 <= 1 || v9 > (unsigned int)v13 )
    {
LABEL_16:
      LODWORD(v14) = v9 - 1;
      if ( !sub_9C8900(a4, (unsigned int)v14) )
      {
        v14 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v14) = *v14;
      }
      sub_CD4A30((__int64)&v26, a3, (unsigned int)v14);
      sub_CCCB10(a5, (__int64)&v26);
      if ( v27 > 0x40 )
      {
        if ( v26 )
          operator delete[](v26);
      }
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
      return 1;
    }
    v23 = (void *)v13;
    v19 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v27 = 64;
    v26 = v23;
    v28 = 1;
    v20 = *(_QWORD *)(v19 + 8);
    v24 = (void *)sub_E0FF50(a1, v19, 2422, 0);
    if ( v24 )
    {
      sub_CD4D00((unsigned __int8 ***)&v24, (__int64)&v26);
      if ( v24 )
      {
        sub_AC60B0((unsigned __int8 **)v24, v20, 8u);
        if ( v24 )
          sub_AC60B0((unsigned __int8 **)v24, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
      goto LABEL_16;
    }
    if ( v27 <= 0x40 )
      return result;
    goto LABEL_35;
  }
  if ( !sub_CCCAE0((__int64 *)a4) )
  {
    v16 = *(_DWORD *)(a4 + 8);
    v17 = *(_QWORD *)a4;
    if ( v16 > 0x40 )
    {
      v13 = *(_QWORD *)v17;
    }
    else
    {
      v13 = 0;
      if ( v16 )
        v13 = v17 << (64 - (unsigned __int8)v16) >> (64 - (unsigned __int8)v16);
    }
    goto LABEL_14;
  }
  v24 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v26 = (void *)sub_E0FFE0(a1, &v24, 2444, 0);
  if ( v26 )
    sub_CD4D00((unsigned __int8 ***)&v26, a4);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    sub_BF2C20((__int64)&v26, a4);
    result = sub_D19D40(a1, a2, a3, &v26, a5);
    if ( v27 > 0x40 )
    {
LABEL_35:
      if ( v26 )
      {
        v22 = result;
        operator delete[](v26);
        return v22;
      }
    }
  }
  return result;
}

