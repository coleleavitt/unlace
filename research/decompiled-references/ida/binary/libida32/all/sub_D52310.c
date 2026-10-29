__int64 __fastcall sub_D52310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5)
{
  unsigned int v9; // ebx
  unsigned int v10; // eax
  char v11; // r14
  unsigned __int64 v12; // rsi
  _DWORD *v13; // rdx
  char v14; // al
  _DWORD *v15; // rbx
  void *v16; // rdi
  __int16 v17; // dx
  __int64 result; // rax
  bool v19; // cc
  char v20; // [rsp+0h] [rbp-78h]
  unsigned __int8 v21; // [rsp+0h] [rbp-78h]
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v24; // [rsp+8h] [rbp-70h]
  unsigned __int8 **v25; // [rsp+18h] [rbp-60h] BYREF
  void *v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-50h]
  void *v28; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-40h]
  char v30; // [rsp+3Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v27 = v10;
  if ( v10 <= 0x40 )
  {
    v26 = (void *)(v9 - 1);
    v29 = v10;
    v28 = v26;
    v27 = 0;
    v30 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  sub_21E1730(&v26, v12, 0);
  v10 = v27;
  v12 = (unsigned __int64)v26;
  v27 = 0;
  v19 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v30 = v11;
  v29 = v10;
  v28 = v26;
  if ( v19 )
    goto LABEL_4;
  sub_21E1E20(a4, &v28);
  v10 = v29;
LABEL_5:
  if ( v10 > 0x40 && v28 )
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
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_BF2C20((__int64)&v28, a4);
      result = sub_D526B0(a1, a2, a3, &v28, a5);
      if ( v29 > 0x40 )
      {
LABEL_35:
        if ( v28 )
        {
          v21 = result;
          operator delete[](v28);
          return v21;
        }
      }
    }
  }
  else
  {
    v13 = *(_DWORD **)a4;
    v27 = *(_DWORD *)(a4 + 8);
    v14 = *(_BYTE *)(a3 + 12);
    v26 = v13;
    v20 = v14;
    if ( v9 <= 1 )
      goto LABEL_14;
    if ( !(unsigned __int8)sub_D4DD10((__int64)&v26, v9) )
    {
      v20 = *(_BYTE *)(a3 + 12);
      goto LABEL_14;
    }
    v24 = sub_DFB220(*(_QWORD *)(a1 + 400));
    sub_D23FD0((__int64)&v28, (__int64)&v26, 0);
    v22 = *(_QWORD *)(v24 + 8);
    v25 = (unsigned __int8 **)sub_E0FF50(a1, v24, 2422, 0);
    if ( v25 )
    {
      sub_CD4D00(&v25, (__int64)&v28);
      if ( v25 )
      {
        sub_AC60B0(v25, v22, 8u);
        if ( v25 )
          sub_AC60B0(v25, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      v20 = *(_BYTE *)(a3 + 12);
LABEL_14:
      LODWORD(v15) = v9 - 1;
      if ( !sub_9C8900(a4, (unsigned int)v15) )
      {
        v15 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v15) = *v15;
      }
      sub_CD4410((__int64)&v28, a3, (unsigned int)v15);
      v16 = v28;
      if ( v20 )
      {
        if ( v29 <= 0x40 )
        {
          *a5 = (_WORD)v28;
LABEL_20:
          *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *a5;
          return 1;
        }
      }
      else if ( v29 <= 0x40 )
      {
        v17 = 0;
        if ( v29 )
          v17 = (__int64)((_QWORD)v28 << (64 - (unsigned __int8)v29)) >> (64 - (unsigned __int8)v29);
        *a5 = v17;
        goto LABEL_20;
      }
      *a5 = *(_QWORD *)v28;
      if ( v16 )
        operator delete[](v16);
      goto LABEL_20;
    }
    if ( v29 > 0x40 )
      goto LABEL_35;
  }
  return result;
}

