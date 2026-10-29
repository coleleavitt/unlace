__int64 __fastcall sub_D5DCA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // eax
  char v10; // r13
  unsigned __int64 v11; // rsi
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  void *v14; // rdx
  unsigned int v15; // r13d
  _DWORD *v16; // rbx
  __int64 v18; // rcx
  bool v19; // cc
  char v21; // [rsp+10h] [rbp-68h]
  void *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-50h]
  char v24; // [rsp+2Ch] [rbp-4Ch]
  void *v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-40h]
  char v27; // [rsp+3Ch] [rbp-3Ch]

  v8 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v9 = *(_DWORD *)(a4 + 8);
  v10 = *(_BYTE *)(a4 + 12);
  v11 = v8 - 1;
  v23 = v9;
  if ( v9 <= 0x40 )
  {
    v22 = (void *)(v8 - 1);
    v26 = v9;
    v25 = v22;
    v23 = 0;
    v27 = v10;
LABEL_4:
    *(_QWORD *)a4 &= v11;
    goto LABEL_5;
  }
  sub_21E1730(&v22, v11, 0);
  v9 = v23;
  v11 = (unsigned __int64)v22;
  v23 = 0;
  v19 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v27 = v10;
  v26 = v9;
  v25 = v22;
  if ( v19 )
    goto LABEL_4;
  sub_21E1E20(a4, &v25);
  v9 = v26;
LABEL_5:
  if ( v9 > 0x40 && v25 )
    operator delete[](v25);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
LABEL_11:
  if ( !*(_BYTE *)(a4 + 12) && sub_CCCAE0((__int64 *)a4) )
  {
    v22 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v25 = (void *)sub_E0FFE0(a1, &v22, 2444, 0);
    if ( v25 )
      sub_CD4D00((unsigned __int8 ***)&v25, a4);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v15 )
    {
      sub_BF2C20((__int64)&v25, a4);
      v15 = sub_D5DF70(a1, a2, a3, &v25, a5);
      if ( v26 > 0x40 )
      {
        if ( v25 )
          operator delete[](v25);
      }
    }
  }
  else
  {
    v12 = *(_DWORD **)a4;
    v26 = *(_DWORD *)(a4 + 8);
    v13 = *(_DWORD *)(a3 + 8);
    v25 = v12;
    v14 = *(void **)a3;
    v23 = v13;
    if ( v13 <= 0x40 )
    {
      v18 = 0;
      if ( v13 )
        v18 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      v22 = (void *)v18;
    }
    else
    {
      v22 = v14;
    }
    v15 = sub_D5DA60(a1, a2, (__int64)&v22, (__int64)&v25, v8);
    if ( (_BYTE)v15 )
    {
      LODWORD(v16) = v8 - 1;
      if ( !sub_9C8900(a4, (unsigned int)v16) )
      {
        v16 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v16) = *v16;
      }
      v21 = *(_BYTE *)(a3 + 12);
      sub_CD4410((__int64)&v25, a3, (unsigned int)v16);
      v23 = v26;
      v24 = v21;
      v22 = v25;
      sub_CE8850(a5, (__int64)&v22);
      if ( v23 > 0x40 && v22 )
        operator delete[](v22);
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
    }
  }
  return v15;
}

