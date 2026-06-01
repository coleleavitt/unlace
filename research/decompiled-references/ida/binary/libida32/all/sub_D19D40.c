__int64 __fastcall sub_D19D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rbp
  char v15; // bl
  __int64 result; // rax
  unsigned int v17; // eax
  __int64 v18; // rsi
  bool v19; // cc
  __int64 v20; // rsi
  __int64 v21; // r15
  char v22; // [rsp+8h] [rbp-60h]
  unsigned __int8 v23; // [rsp+8h] [rbp-60h]
  void *v24; // [rsp+8h] [rbp-60h]
  void *v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-50h]
  char v27; // [rsp+1Ch] [rbp-4Ch]
  void *v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-40h]
  char v30; // [rsp+2Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v26 = v10;
  if ( v10 <= 0x40 )
  {
    v25 = (void *)(v9 - 1);
    v29 = v10;
    v28 = v25;
    v26 = 0;
    v30 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v22 = v11;
  sub_21E1730(&v25, v12, 0);
  v10 = v26;
  v12 = (unsigned __int64)v25;
  v26 = 0;
  v19 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v29 = v10;
  v28 = v25;
  v30 = v22;
  if ( v19 )
    goto LABEL_4;
  sub_21E1E20(a4, &v28);
  v10 = v29;
LABEL_5:
  if ( v10 > 0x40 && v28 )
    operator delete[](v28);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
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
      v15 = *(_BYTE *)(a3 + 12);
      sub_CD4410((__int64)&v28, a3, (unsigned int)v14);
      v27 = v15;
      v26 = v29;
      v25 = v28;
      sub_CCCB10(a5, (__int64)&v25);
      if ( v26 > 0x40 )
      {
        if ( v25 )
          operator delete[](v25);
      }
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
      return 1;
    }
    v24 = (void *)v13;
    v20 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v29 = 64;
    v28 = v24;
    v30 = 1;
    v21 = *(_QWORD *)(v20 + 8);
    v25 = (void *)sub_E0FF50(a1, v20, 2422, 0);
    if ( v25 )
    {
      sub_CD4D00((unsigned __int8 ***)&v25, (__int64)&v28);
      if ( v25 )
      {
        sub_AC60B0((unsigned __int8 **)v25, v21, 8u);
        if ( v25 )
          sub_AC60B0((unsigned __int8 **)v25, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      goto LABEL_16;
    }
    if ( v29 <= 0x40 )
      return result;
    goto LABEL_35;
  }
  if ( !sub_CCCAE0((__int64 *)a4) )
  {
    v17 = *(_DWORD *)(a4 + 8);
    v18 = *(_QWORD *)a4;
    if ( v17 > 0x40 )
    {
      v13 = *(_QWORD *)v18;
    }
    else
    {
      v13 = 0;
      if ( v17 )
        v13 = v18 << (64 - (unsigned __int8)v17) >> (64 - (unsigned __int8)v17);
    }
    goto LABEL_14;
  }
  v25 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v28 = (void *)sub_E0FFE0(a1, &v25, 2444, 0);
  if ( v28 )
    sub_CD4D00((unsigned __int8 ***)&v28, a4);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    sub_BF2C20((__int64)&v28, a4);
    result = sub_D199F0(a1, a2, a3, (__int64)&v28, a5);
    if ( v29 > 0x40 )
    {
LABEL_35:
      if ( v28 )
      {
        v23 = result;
        operator delete[](v28);
        return v23;
      }
    }
  }
  return result;
}

