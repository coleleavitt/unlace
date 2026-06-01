__int64 __fastcall sub_926D70(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v7; // r13d
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rdx
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  void *v20; // rax
  unsigned __int8 **v21; // r14
  unsigned int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-90h]
  void *v24; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-80h]
  void *v26; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-70h]
  void *v28; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-60h]
  void *v30; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-50h]
  void *v32; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-40h]
  char v34; // [rsp+5Ch] [rbp-3Ch]

  v7 = *(_DWORD *)(a3 + 8);
  v8 = sub_A2CB40(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 = (*(_DWORD *)(a3 + 8) - 1) & (unsigned int)v9;
    *a4 = v9;
  }
  if ( v7 <= 1 || v9 < v7 )
  {
LABEL_5:
    v10 = *(_DWORD *)(a3 + 8);
    v25 = 3;
    v24 = &byte_7;
    if ( (unsigned int)(v10 - 1) < v9 )
    {
      v22 = sub_831980(a3);
      v33 = 64;
      *a4 = v22;
      v32 = (void *)v22;
      sub_2587E20(&v30, &v32, v7);
      if ( v33 > 0x40 && v32 )
        operator delete[](v32);
      v33 = v31;
      if ( v31 > 0x40 )
      {
        sub_2585B30(&v32);
        if ( v31 > 0x40 && v30 )
          operator delete[](v30);
      }
      else
      {
        v32 = v30;
      }
      v29 = *(_DWORD *)(a3 + 8);
      if ( v29 > 0x40 )
        sub_2585B30(&v28);
      else
        v28 = *(void **)a3;
      sub_8CC200((__int64)&v30, (__int64)&v28);
      sub_8CC680((__int64)&v30, (__int64)&v32, (__int64)&v24);
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      if ( v33 <= 0x40 )
        goto LABEL_24;
      v12 = v32;
      if ( !v32 )
        goto LABEL_24;
LABEL_23:
      operator delete[](v12);
LABEL_24:
      v13 = v25;
      v14 = *(_QWORD *)(a1 + 184);
      v29 = v25;
      if ( v25 > 0x40 )
      {
        sub_2585B30(&v28);
        v13 = v29;
      }
      else
      {
        v28 = v24;
      }
      sub_2587E20(&v32, &v28, v13);
      v31 = v33;
      if ( v33 > 0x40 )
      {
        sub_2585B30(&v30);
        if ( v33 > 0x40 && v32 )
          operator delete[](v32);
      }
      else
      {
        v30 = v32;
      }
      v15 = sub_A1A4E0(v14, 16);
      v16 = v31;
      v31 = 0;
      *(_DWORD *)(v15 + 8) = v16;
      *(_QWORD *)v15 = v30;
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      if ( v25 > 0x40 )
      {
        if ( v24 )
          operator delete[](v24);
      }
      return 1;
    }
    v33 = 64;
    v32 = (void *)v9;
    sub_2587E20(&v30, &v32, v7);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
    v29 = v31;
    if ( v31 > 0x40 )
    {
      sub_2585B30(&v28);
      if ( v31 > 0x40 && v30 )
      {
        operator delete[](v30);
        v11 = *(unsigned int *)(a3 + 8);
        v27 = v11;
        if ( (unsigned int)v11 <= 0x40 )
          goto LABEL_12;
        goto LABEL_39;
      }
    }
    else
    {
      v28 = v30;
    }
    v11 = *(unsigned int *)(a3 + 8);
    v27 = v11;
    if ( (unsigned int)v11 <= 0x40 )
    {
LABEL_12:
      v26 = *(void **)a3;
      goto LABEL_13;
    }
LABEL_39:
    sub_2585B30(&v26);
    v11 = v27;
LABEL_13:
    sub_2587E20(&v32, &v26, v11);
    v31 = v33;
    if ( v33 > 0x40 )
    {
      sub_2585B30(&v30);
      if ( v33 > 0x40 && v32 )
        operator delete[](v32);
    }
    else
    {
      v30 = v32;
    }
    sub_8CC680((__int64)&v30, (__int64)&v28, (__int64)&v24);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    if ( v29 <= 0x40 )
      goto LABEL_24;
    v12 = v28;
    if ( !v28 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v18 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v34 = 1;
  v19 = v18;
  v20 = (void *)*a4;
  v33 = 64;
  v32 = v20;
  v23 = *(_QWORD *)(v19 + 8);
  v30 = (void *)sub_A2E240(a1, v19, 2220, 0);
  v21 = (unsigned __int8 **)v30;
  if ( v30 )
  {
    sub_8DF340((unsigned __int8 ***)&v30, (__int64)&v32);
    sub_8D69A0(v21, v23);
    sub_8D6E40(v21, v7);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
    v9 = *a4;
    goto LABEL_5;
  }
  if ( v33 > 0x40 && v32 )
  {
    operator delete[](v32);
    return 0;
  }
  return result;
}

