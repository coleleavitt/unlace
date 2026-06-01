__int64 __fastcall sub_D4E3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // eax
  char v10; // r14
  unsigned __int64 v11; // rsi
  unsigned int v12; // eax
  bool v13; // zf
  _WORD *v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // r13d
  _DWORD *v18; // rbp
  void *v19; // rdi
  __int16 v20; // dx
  bool v22; // cc
  char v25; // [rsp+8h] [rbp-60h]
  void *v26; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-50h]
  void *v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-40h]
  char v30; // [rsp+2Ch] [rbp-3Ch]

  v8 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v9 = *(_DWORD *)(a4 + 8);
  v10 = *(_BYTE *)(a4 + 12);
  v11 = v8 - 1;
  v27 = v9;
  if ( v9 <= 0x40 )
  {
    v26 = (void *)(v8 - 1);
    v29 = v9;
    v28 = v26;
    v27 = 0;
    v30 = v10;
LABEL_4:
    *(_QWORD *)a4 &= v11;
    goto LABEL_5;
  }
  sub_21E1730(&v26, v11, 0);
  v9 = v27;
  v11 = (unsigned __int64)v26;
  v27 = 0;
  v22 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v30 = v10;
  v29 = v9;
  v28 = v26;
  if ( v22 )
    goto LABEL_4;
  sub_21E1E20(a4, &v28);
  v9 = v29;
LABEL_5:
  if ( v9 > 0x40 && v28 )
    operator delete[](v28);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
LABEL_11:
  if ( !*(_BYTE *)(a4 + 12) && sub_CCCAE0((__int64 *)a4) )
  {
    v26 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v28 = (void *)sub_E0FFE0(a1, &v26, 2444, 0);
    if ( v28 )
      sub_CD4D00((unsigned __int8 ***)&v28, a4);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v17 )
    {
      sub_BF2C20((__int64)&v28, a4);
      v17 = sub_D4E6D0(a1, a2, a3, &v28, a5);
      if ( v29 > 0x40 )
      {
        if ( v28 )
          operator delete[](v28);
      }
    }
  }
  else
  {
    v12 = *(_DWORD *)(a4 + 8);
    v13 = *(_BYTE *)(a3 + 12) == 0;
    v14 = *(_WORD **)a3;
    v28 = *(void **)a4;
    v15 = *(_DWORD *)(a3 + 8);
    v29 = v12;
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
    LOWORD(v26) = v16;
    v17 = sub_D4E140(a1, a2, &v26, (__int64)&v28, v8);
    if ( (_BYTE)v17 )
    {
      LODWORD(v18) = v8 - 1;
      if ( !sub_9C8900(a4, (unsigned int)v18) )
      {
        v18 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v18) = *v18;
      }
      v25 = *(_BYTE *)(a3 + 12);
      sub_CD4410((__int64)&v28, a3, (unsigned int)v18);
      v19 = v28;
      if ( v25 )
      {
        if ( v29 <= 0x40 )
        {
          *a5 = (_WORD)v28;
LABEL_25:
          *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *a5;
          return v17;
        }
      }
      else if ( v29 <= 0x40 )
      {
        v20 = 0;
        if ( v29 )
          v20 = (__int64)((_QWORD)v28 << (64 - (unsigned __int8)v29)) >> (64 - (unsigned __int8)v29);
        *a5 = v20;
        goto LABEL_25;
      }
      *a5 = *(_QWORD *)v28;
      if ( v19 )
        operator delete[](v19);
      goto LABEL_25;
    }
  }
  return v17;
}

