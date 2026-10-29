__int64 __fastcall sub_D73D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  unsigned int v9; // ebx
  unsigned int v10; // eax
  char v11; // r14
  unsigned __int64 v12; // rsi
  _DWORD *v13; // rdx
  _DWORD *v14; // rbx
  void *v15; // rdi
  char v16; // dl
  __int64 v17; // rsi
  __int64 result; // rax
  bool v19; // cc
  __int64 v21; // [rsp+0h] [rbp-78h]
  __int64 v22; // [rsp+0h] [rbp-78h]
  unsigned __int8 v23; // [rsp+0h] [rbp-78h]
  unsigned __int8 **v24; // [rsp+18h] [rbp-60h] BYREF
  void *v25; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-50h]
  void *v27; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-40h]
  char v29; // [rsp+3Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v26 = v10;
  if ( v10 <= 0x40 )
  {
    v25 = (void *)(v9 - 1);
    v28 = v10;
    v27 = v25;
    v26 = 0;
    v29 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  sub_2205470(&v25, v12, 0);
  v10 = v26;
  v12 = (unsigned __int64)v25;
  v26 = 0;
  v19 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v29 = v11;
  v28 = v10;
  v27 = v25;
  if ( v19 )
    goto LABEL_4;
  sub_2205B60(a4, &v27);
  v10 = v28;
LABEL_5:
  if ( v10 > 0x40 && v27 )
    operator delete[](v27);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
LABEL_11:
  if ( !*(_BYTE *)(a4 + 12) && sub_CF0820((__int64 *)a4) )
  {
    v25 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v27 = (void *)sub_E33D20(a1, &v25, 2444, 0);
    if ( v27 )
      sub_CF8A40((unsigned __int8 ***)&v27, a4);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_C16960((__int64)&v27, a4);
      result = sub_D74100(a1, a2, a3, &v27, a5);
      if ( v28 > 0x40 )
      {
LABEL_41:
        if ( v27 )
        {
          v23 = result;
          operator delete[](v27);
          return v23;
        }
      }
    }
  }
  else
  {
    v13 = *(_DWORD **)a4;
    v26 = *(_DWORD *)(a4 + 8);
    v25 = v13;
    if ( v9 <= 1 || !(unsigned __int8)sub_D71A50((__int64)&v25, v9) )
      goto LABEL_14;
    v21 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    sub_D47D10((__int64)&v27, (__int64)&v25, 0);
    v17 = v21;
    v22 = *(_QWORD *)(v21 + 8);
    v24 = (unsigned __int8 **)sub_E33C90(a1, v17, 2422, 0);
    if ( v24 )
    {
      sub_CF8A40(&v24, (__int64)&v27);
      if ( v24 )
      {
        sub_AE9DF0(v24, v22, 8u);
        if ( v24 )
          sub_AE9DF0(v24, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
LABEL_14:
      LODWORD(v14) = v9 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v14) )
      {
        v14 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v14) = *v14;
      }
      sub_CF8770((__int64)&v27, a3, (unsigned int)v14);
      if ( v29 )
      {
        v15 = v27;
        if ( v28 <= 0x40 )
        {
          *a5 = (_BYTE)v27;
          goto LABEL_33;
        }
        *a5 = *(_QWORD *)v27;
        if ( !v15 )
        {
LABEL_33:
          *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *a5;
          return 1;
        }
      }
      else
      {
        v15 = v27;
        if ( v28 <= 0x40 )
        {
          v16 = 0;
          if ( v28 )
            v16 = (__int64)((_QWORD)v27 << (64 - (unsigned __int8)v28)) >> (64 - (unsigned __int8)v28);
          *a5 = v16;
          goto LABEL_33;
        }
        *a5 = *(_QWORD *)v27;
      }
      operator delete[](v15);
      goto LABEL_33;
    }
    if ( v28 > 0x40 )
      goto LABEL_41;
  }
  return result;
}
