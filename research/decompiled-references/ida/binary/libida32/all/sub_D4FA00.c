__int64 __fastcall sub_D4FA00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  char v9; // r14
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  void *v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // r13d
  _DWORD *v15; // rbx
  bool v17; // cc
  void *v20; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-50h]
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+2Ch] [rbp-3Ch]

  v7 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v8 = *(_DWORD *)(a4 + 8);
  v9 = *(_BYTE *)(a4 + 12);
  v10 = v7 - 1;
  v21 = v8;
  if ( v8 <= 0x40 )
  {
    v20 = (void *)(v7 - 1);
    v23 = v8;
    v22 = v20;
    v21 = 0;
    v24 = v9;
LABEL_4:
    *(_QWORD *)a4 &= v10;
    goto LABEL_5;
  }
  sub_21E1730(&v20, v10, 0);
  v8 = v21;
  v10 = (unsigned __int64)v20;
  v21 = 0;
  v17 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v24 = v9;
  v23 = v8;
  v22 = v20;
  if ( v17 )
    goto LABEL_4;
  sub_21E1E20(a4, &v22);
  v8 = v23;
LABEL_5:
  if ( v8 > 0x40 && v22 )
    operator delete[](v22);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) || !sub_CCCAE0((__int64 *)a4) )
  {
    v11 = *(_DWORD *)(a4 + 8);
    v22 = *(void **)a4;
    v12 = *(void **)a3;
    v23 = v11;
    v13 = *(_DWORD *)(a3 + 8);
    v20 = v12;
    v21 = v13;
    v14 = sub_D4F520(a1, a2, (__int64)&v20, (__int64)&v22, v7);
    if ( (_BYTE)v14 )
    {
      LODWORD(v15) = v7 - 1;
      if ( !sub_9C8900(a4, (unsigned int)v15) )
      {
        v15 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v15) = *v15;
      }
      sub_CD4A30((__int64)&v22, a3, (unsigned int)v15);
      sub_CCCB10(a5, (__int64)&v22);
      if ( v23 > 0x40 && v22 )
        operator delete[](v22);
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
    }
  }
  else
  {
    v20 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v22 = (void *)sub_E0FFE0(a1, &v20, 2444, 0);
    if ( v22 )
      sub_CD4D00((unsigned __int8 ***)&v22, a4);
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v14 )
    {
      sub_BF2C20((__int64)&v22, a4);
      v14 = sub_D4F740(a1, a2, a3, (__int64)&v22, a5);
      if ( v23 > 0x40 )
      {
        if ( v22 )
          operator delete[](v22);
      }
    }
  }
  return v14;
}

