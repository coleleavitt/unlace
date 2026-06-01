__int64 __fastcall sub_928010(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v6; // r13d
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  void *v18; // rax
  unsigned __int8 **v19; // r14
  __int64 v20; // [rsp+8h] [rbp-90h]
  void *v21; // [rsp+10h] [rbp-88h]
  unsigned int v22; // [rsp+18h] [rbp-80h]
  void *v23; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-70h]
  void *v25; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-60h]
  void *v27; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-50h]
  void *v29; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-40h]
  char v31; // [rsp+5Ch] [rbp-3Ch]

  v6 = *(_DWORD *)(a3 + 8);
  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    v8 = (*(_DWORD *)(a3 + 8) - 1) & (unsigned int)v8;
    *a4 = v8;
  }
  if ( v6 <= 1 || v8 < v6 )
  {
LABEL_5:
    if ( (unsigned int)(*(_DWORD *)(a3 + 8) - 1) < v8 )
    {
      sub_922330((__int64)&v29, -1, 0);
      v11 = v30;
      v21 = v29;
      v22 = v30;
LABEL_30:
      v26 = v11;
      v12 = *(_QWORD *)(a1 + 184);
      if ( (unsigned int)v11 > 0x40 )
      {
        sub_2585B30(&v25);
        v11 = v26;
      }
      else
      {
        v25 = v21;
      }
      sub_2587E20(&v29, &v25, v11);
      v28 = v30;
      if ( v30 > 0x40 )
      {
        sub_2585B30(&v27);
        if ( v30 > 0x40 && v29 )
          operator delete[](v29);
      }
      else
      {
        v27 = v29;
      }
      v13 = sub_A1A4E0(v12, 16);
      v14 = v28;
      v28 = 0;
      *(_DWORD *)(v13 + 8) = v14;
      *(_QWORD *)v13 = v27;
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      if ( v22 > 0x40 )
      {
        if ( v21 )
          operator delete[](v21);
      }
      return 1;
    }
    v24 = 3;
    v23 = &byte_7;
    v30 = 64;
    v29 = (void *)v8;
    sub_2587E20(&v27, &v29, v6);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    v26 = v28;
    if ( v28 > 0x40 )
    {
      sub_2585B30(&v25);
      if ( v28 > 0x40 && v27 )
      {
        operator delete[](v27);
        v30 = *(_DWORD *)(a3 + 8);
        if ( v30 <= 0x40 )
          goto LABEL_12;
        goto LABEL_45;
      }
    }
    else
    {
      v25 = v27;
    }
    v30 = *(_DWORD *)(a3 + 8);
    if ( v30 <= 0x40 )
    {
LABEL_12:
      v29 = *(void **)a3;
      goto LABEL_13;
    }
LABEL_45:
    sub_2585B30(&v29);
LABEL_13:
    sub_8CC780((__int64)&v29, (__int64)&v25, (__int64)&v23);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    v9 = v24;
    v26 = v24;
    if ( v24 > 0x40 )
    {
      sub_2585B30(&v25);
      v9 = v26;
    }
    else
    {
      v25 = v23;
    }
    sub_2587E20(&v29, &v25, v9);
    v28 = v30;
    if ( v30 > 0x40 )
    {
      sub_2585B30(&v27);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
    }
    else
    {
      v27 = v29;
    }
    v21 = v27;
    v10 = v28;
    v28 = 0;
    v22 = v10;
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
    v11 = v22;
    goto LABEL_30;
  }
  v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v31 = 1;
  v17 = v16;
  v18 = (void *)*a4;
  v30 = 64;
  v29 = v18;
  v20 = *(_QWORD *)(v17 + 8);
  v27 = (void *)sub_A2E240(a1, v17, 2220, 0);
  v19 = (unsigned __int8 **)v27;
  if ( v27 )
  {
    sub_8DF340((unsigned __int8 ***)&v27, (__int64)&v29);
    sub_8D69A0(v19, v20);
    sub_8D6E40(v19, v6);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    v8 = *a4;
    goto LABEL_5;
  }
  if ( v30 > 0x40 && v29 )
  {
    operator delete[](v29);
    return 0;
  }
  return result;
}

