__int64 __fastcall sub_925E70(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // r13d
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rdx
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 result; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int8 **v21; // r14
  unsigned __int8 v22; // al
  void *v23; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-80h]
  void *v25; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-70h]
  void *v27; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-60h]
  void *v29; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-50h]
  void *v31; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-40h]
  char v33; // [rsp+5Ch] [rbp-3Ch]

  v7 = *(_DWORD *)(a3 + 8);
  v8 = sub_A2CB40(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 &= *(_DWORD *)(a3 + 8) - 1;
    *a4 = v9;
  }
  if ( v7 <= 1 || (unsigned __int8)v9 < (unsigned __int8)v7 )
  {
LABEL_5:
    v10 = *(_DWORD *)(a3 + 8);
    v24 = 3;
    v23 = &byte_7;
    if ( (unsigned __int8)(v10 - 1) < (unsigned __int8)v9 )
    {
      v22 = sub_831980(a3);
      v32 = 8;
      *a4 = v22;
      v31 = (void *)v22;
      sub_2587E20(&v29, &v31, v7);
      if ( v32 > 0x40 && v31 )
        operator delete[](v31);
      v32 = v30;
      if ( v30 > 0x40 )
      {
        sub_2585B30(&v31);
        if ( v30 > 0x40 && v29 )
          operator delete[](v29);
      }
      else
      {
        v31 = v29;
      }
      v28 = *(_DWORD *)(a3 + 8);
      if ( v28 > 0x40 )
        sub_2585B30(&v27);
      else
        v27 = *(void **)a3;
      sub_8CC200((__int64)&v29, (__int64)&v27);
      sub_8CC680((__int64)&v29, (__int64)&v31, (__int64)&v23);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      if ( v32 <= 0x40 )
        goto LABEL_24;
      v12 = v31;
      if ( !v31 )
        goto LABEL_24;
LABEL_23:
      operator delete[](v12);
LABEL_24:
      v13 = v24;
      v14 = *(_QWORD *)(a1 + 184);
      v28 = v24;
      if ( v24 > 0x40 )
      {
        sub_2585B30(&v27);
        v13 = v28;
      }
      else
      {
        v27 = v23;
      }
      sub_2587E20(&v31, &v27, v13);
      v30 = v32;
      if ( v32 > 0x40 )
      {
        sub_2585B30(&v29);
        if ( v32 > 0x40 && v31 )
          operator delete[](v31);
      }
      else
      {
        v29 = v31;
      }
      v15 = sub_A1A4E0(v14, 16);
      v16 = v30;
      v30 = 0;
      *(_DWORD *)(v15 + 8) = v16;
      *(_QWORD *)v15 = v29;
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      if ( v24 > 0x40 )
      {
        if ( v23 )
          operator delete[](v23);
      }
      return 1;
    }
    v31 = (void *)(unsigned __int8)v9;
    v32 = 8;
    sub_2587E20(&v29, &v31, v7);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    v28 = v30;
    if ( v30 > 0x40 )
    {
      sub_2585B30(&v27);
      if ( v30 > 0x40 && v29 )
      {
        operator delete[](v29);
        v11 = *(unsigned int *)(a3 + 8);
        v26 = v11;
        if ( (unsigned int)v11 <= 0x40 )
          goto LABEL_12;
        goto LABEL_39;
      }
    }
    else
    {
      v27 = v29;
    }
    v11 = *(unsigned int *)(a3 + 8);
    v26 = v11;
    if ( (unsigned int)v11 <= 0x40 )
    {
LABEL_12:
      v25 = *(void **)a3;
      goto LABEL_13;
    }
LABEL_39:
    sub_2585B30(&v25);
    v11 = v26;
LABEL_13:
    sub_2587E20(&v31, &v25, v11);
    v30 = v32;
    if ( v32 > 0x40 )
    {
      sub_2585B30(&v29);
      if ( v32 > 0x40 && v31 )
        operator delete[](v31);
    }
    else
    {
      v29 = v31;
    }
    sub_8CC680((__int64)&v29, (__int64)&v27, (__int64)&v23);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    if ( v28 <= 0x40 )
      goto LABEL_24;
    v12 = v27;
    if ( !v27 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v18 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v19 = *a4;
  v33 = 1;
  v32 = 8;
  v31 = (void *)v19;
  v20 = *(_QWORD *)(v18 + 8);
  v29 = (void *)sub_A2E240(a1, v18, 2220, 0);
  v21 = (unsigned __int8 **)v29;
  if ( v29 )
  {
    sub_8DF340((unsigned __int8 ***)&v29, (__int64)&v31);
    sub_8D69A0(v21, v20);
    sub_8D6E40(v21, v7);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    LOBYTE(v9) = *a4;
    goto LABEL_5;
  }
  if ( v32 > 0x40 && v31 )
  {
    operator delete[](v31);
    return 0;
  }
  return result;
}

