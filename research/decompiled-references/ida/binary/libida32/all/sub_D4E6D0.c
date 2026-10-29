__int64 __fastcall sub_D4E6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // eax
  char v10; // r14
  unsigned __int64 v11; // rsi
  unsigned int v12; // eax
  bool v13; // zf
  _WORD *v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // r13d
  _DWORD *v18; // rbx
  void *v19; // rdi
  __int16 v20; // dx
  bool v22; // cc
  void *v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-50h]
  void *v27; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-40h]
  char v29; // [rsp+2Ch] [rbp-3Ch]

  v8 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v9 = *(_DWORD *)(a4 + 8);
  v10 = *(_BYTE *)(a4 + 12);
  v11 = v8 - 1;
  v26 = v9;
  if ( v9 <= 0x40 )
  {
    v25 = (void *)(v8 - 1);
    v28 = v9;
    v27 = v25;
    v26 = 0;
    v29 = v10;
LABEL_4:
    *(_QWORD *)a4 &= v11;
    goto LABEL_5;
  }
  sub_21E1730(&v25, v11, 0);
  v9 = v26;
  v11 = (unsigned __int64)v25;
  v26 = 0;
  v22 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v29 = v10;
  v28 = v9;
  v27 = v25;
  if ( v22 )
    goto LABEL_4;
  sub_21E1E20(a4, &v27);
  v9 = v28;
LABEL_5:
  if ( v9 > 0x40 && v27 )
    operator delete[](v27);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
LABEL_11:
  if ( !*(_BYTE *)(a4 + 12) && sub_CCCAE0((__int64 *)a4) )
  {
    v25 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v27 = (void *)sub_E0FFE0(a1, &v25, 2444, 0);
    if ( v27 )
      sub_CD4D00((unsigned __int8 ***)&v27, a4);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v17 )
    {
      sub_BF2C20((__int64)&v27, a4);
      v17 = sub_D4E3C0(a1, a2, a3, (__int64)&v27, a5);
      if ( v28 > 0x40 )
      {
        if ( v27 )
          operator delete[](v27);
      }
    }
  }
  else
  {
    v12 = *(_DWORD *)(a4 + 8);
    v13 = *(_BYTE *)(a3 + 12) == 0;
    v14 = *(_WORD **)a3;
    v27 = *(void **)a4;
    v15 = *(_DWORD *)(a3 + 8);
    v28 = v12;
    if ( v13 )
    {
      if ( v15 > 0x40 )
      {
        LOWORD(v16) = *v14;
      }
      else
      {
        LOWORD(v16) = 0;
        if ( v15 )
          v16 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v15)) >> (64 - (unsigned __int8)v15);
      }
    }
    else
    {
      LOWORD(v16) = (_WORD)v14;
      if ( v15 > 0x40 )
        v16 = *(_QWORD *)v14;
    }
    LOWORD(v25) = v16;
    v17 = sub_D4E030(a1, a2, (__int64)&v25, (__int64)&v27, v8);
    if ( (_BYTE)v17 )
    {
      LODWORD(v18) = v8 - 1;
      if ( !sub_9C8900(a4, (unsigned int)v18) )
      {
        v18 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v18) = *v18;
      }
      sub_CD4A30((__int64)&v27, a3, (unsigned int)v18);
      if ( v29 )
      {
        v19 = v27;
        if ( v28 <= 0x40 )
        {
          *a5 = (_WORD)v27;
          goto LABEL_37;
        }
        *a5 = *(_QWORD *)v27;
        if ( !v19 )
        {
LABEL_37:
          *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *a5;
          return v17;
        }
      }
      else
      {
        v19 = v27;
        if ( v28 <= 0x40 )
        {
          v20 = 0;
          if ( v28 )
            v20 = (__int64)((_QWORD)v27 << (64 - (unsigned __int8)v28)) >> (64 - (unsigned __int8)v28);
          *a5 = v20;
          goto LABEL_37;
        }
        *a5 = *(_QWORD *)v27;
      }
      operator delete[](v19);
      goto LABEL_37;
    }
  }
  return v17;
}

