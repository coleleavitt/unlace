__int64 __fastcall sub_D5D520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // eax
  char v10; // cl
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // eax
  void *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  _DWORD *v17; // rbp
  unsigned int v19; // edx
  __int64 v20; // rsi
  bool v21; // cc
  char v23; // [rsp+8h] [rbp-60h]
  void *v24; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-50h]
  void *v26; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-40h]
  char v28; // [rsp+2Ch] [rbp-3Ch]

  v8 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v9 = *(_DWORD *)(a4 + 8);
  v10 = *(_BYTE *)(a4 + 12);
  v11 = v8 - 1;
  v25 = v9;
  if ( v9 <= 0x40 )
  {
    v24 = (void *)(v8 - 1);
    v27 = v9;
    v26 = v24;
    v25 = 0;
    v28 = v10;
LABEL_4:
    *(_QWORD *)a4 &= v11;
    goto LABEL_5;
  }
  v23 = v10;
  sub_21E1730(&v24, v11, 0);
  v9 = v25;
  v11 = (unsigned __int64)v24;
  v25 = 0;
  v21 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v27 = v9;
  v26 = v24;
  v28 = v23;
  if ( v21 )
    goto LABEL_4;
  sub_21E1E20(a4, &v26);
  v9 = v27;
LABEL_5:
  if ( v9 > 0x40 && v26 )
    operator delete[](v26);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) )
  {
    v12 = *(_QWORD *)a4;
    if ( *(_DWORD *)(a4 + 8) > 0x40u )
      v12 = *(_QWORD *)v12;
LABEL_14:
    v24 = (void *)v12;
    v13 = *(_DWORD *)(a3 + 8);
    v14 = *(void **)a3;
    v27 = v13;
    if ( v13 > 0x40 )
    {
      v26 = v14;
    }
    else
    {
      v15 = 0;
      if ( v13 )
        v15 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      v26 = (void *)v15;
    }
    v16 = sub_D4A870(a1, a2, (__int64)&v26, &v24, v8);
    if ( (_BYTE)v16 )
    {
      LODWORD(v17) = v8 - 1;
      if ( !sub_9C8900(a4, (unsigned int)v17) )
      {
        v17 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v17) = *v17;
      }
      sub_CD4A30((__int64)&v26, a3, (unsigned int)v17);
      sub_CE8850(a5, (__int64)&v26);
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
    }
    return v16;
  }
  if ( !sub_CCCAE0((__int64 *)a4) )
  {
    v19 = *(_DWORD *)(a4 + 8);
    v20 = *(_QWORD *)a4;
    if ( v19 > 0x40 )
    {
      v12 = *(_QWORD *)v20;
    }
    else
    {
      v12 = 0;
      if ( v19 )
        v12 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
    }
    goto LABEL_14;
  }
  v24 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v26 = (void *)sub_E0FFE0(a1, &v24, 2444, 0);
  if ( v26 )
    sub_CD4D00((unsigned __int8 ***)&v26, a4);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v16 )
  {
    sub_BF2C20((__int64)&v26, a4);
    v16 = sub_D5D210(a1, a2, a3, (__int64)&v26, a5);
    if ( v27 > 0x40 )
    {
      if ( v26 )
        operator delete[](v26);
    }
  }
  return v16;
}

