__int64 __fastcall sub_927700(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  unsigned int v6; // r13d
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 result; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int8 **v19; // r14
  void *v20; // [rsp+10h] [rbp-88h]
  unsigned int v21; // [rsp+18h] [rbp-80h]
  void *v22; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-70h]
  void *v24; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-60h]
  void *v26; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-50h]
  void *v28; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-40h]
  char v30; // [rsp+5Ch] [rbp-3Ch]

  v6 = *(_DWORD *)(a3 + 8);
  v7 = sub_A2CB40(a1);
  v8 = (unsigned __int16)*a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    v8 &= *(_DWORD *)(a3 + 8) - 1;
    *a4 = v8;
  }
  if ( v6 <= 1 || (unsigned __int16)v8 < (unsigned __int16)v6 )
  {
LABEL_5:
    if ( (unsigned __int16)(*(_DWORD *)(a3 + 8) - 1) < (unsigned __int16)v8 )
    {
      sub_922330((__int64)&v28, -1, 0);
      v11 = v29;
      v20 = v28;
      v21 = v29;
LABEL_30:
      v25 = v11;
      v12 = *(_QWORD *)(a1 + 184);
      if ( (unsigned int)v11 > 0x40 )
      {
        sub_2585B30(&v24);
        v11 = v25;
      }
      else
      {
        v24 = v20;
      }
      sub_2587E20(&v28, &v24, v11);
      v27 = v29;
      if ( v29 > 0x40 )
      {
        sub_2585B30(&v26);
        if ( v29 > 0x40 && v28 )
          operator delete[](v28);
      }
      else
      {
        v26 = v28;
      }
      v13 = sub_A1A4E0(v12, 16);
      v14 = v27;
      v27 = 0;
      *(_DWORD *)(v13 + 8) = v14;
      *(_QWORD *)v13 = v26;
      if ( v25 > 0x40 && v24 )
        operator delete[](v24);
      if ( v21 > 0x40 )
      {
        if ( v20 )
          operator delete[](v20);
      }
      return 1;
    }
    v23 = 3;
    v22 = &byte_7;
    v29 = 16;
    v28 = (void *)(unsigned __int16)v8;
    sub_2587E20(&v26, &v28, v6);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    v25 = v27;
    if ( v27 > 0x40 )
    {
      sub_2585B30(&v24);
      if ( v27 > 0x40 && v26 )
      {
        operator delete[](v26);
        v29 = *(_DWORD *)(a3 + 8);
        if ( v29 <= 0x40 )
          goto LABEL_12;
        goto LABEL_45;
      }
    }
    else
    {
      v24 = v26;
    }
    v29 = *(_DWORD *)(a3 + 8);
    if ( v29 <= 0x40 )
    {
LABEL_12:
      v28 = *(void **)a3;
      goto LABEL_13;
    }
LABEL_45:
    sub_2585B30(&v28);
LABEL_13:
    sub_8CC780((__int64)&v28, (__int64)&v24, (__int64)&v22);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    v9 = v23;
    v25 = v23;
    if ( v23 > 0x40 )
    {
      sub_2585B30(&v24);
      v9 = v25;
    }
    else
    {
      v24 = v22;
    }
    sub_2587E20(&v28, &v24, v9);
    v27 = v29;
    if ( v29 > 0x40 )
    {
      sub_2585B30(&v26);
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
    }
    else
    {
      v26 = v28;
    }
    v20 = v26;
    v10 = v27;
    v27 = 0;
    v21 = v10;
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    if ( v23 > 0x40 && v22 )
      operator delete[](v22);
    v11 = v21;
    goto LABEL_30;
  }
  v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v17 = (unsigned __int16)*a4;
  v30 = 1;
  v29 = 16;
  v28 = (void *)v17;
  v18 = *(_QWORD *)(v16 + 8);
  v26 = (void *)sub_A2E240(a1, v16, 2220, 0);
  v19 = (unsigned __int8 **)v26;
  if ( v26 )
  {
    sub_8DF340((unsigned __int8 ***)&v26, (__int64)&v28);
    sub_8D69A0(v19, v18);
    sub_8D6E40(v19, v6);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    LOWORD(v8) = *a4;
    goto LABEL_5;
  }
  if ( v29 > 0x40 && v28 )
  {
    operator delete[](v28);
    return 0;
  }
  return result;
}

