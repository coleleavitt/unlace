__int64 __fastcall sub_960400(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 result; // rax
  void *v15; // rax
  void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  void *v19; // rax
  unsigned __int8 **v20; // r15
  __int64 v21; // [rsp+0h] [rbp-98h]
  void *v22; // [rsp+10h] [rbp-88h]
  unsigned int v23; // [rsp+18h] [rbp-80h]
  void *v24; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-70h]
  void *v26; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-60h]
  void *v28; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-50h]
  void *v30; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-40h]
  char v32; // [rsp+5Ch] [rbp-3Ch]

  v6 = *(_DWORD *)(a3 + 8);
  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    v8 = (*(_DWORD *)(a3 + 8) - 1) & (unsigned int)v8;
    *a4 = v8;
  }
  else if ( v8 < 0 )
  {
    v26 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v15 = (void *)sub_A2E1B0(a1, &v26, 2242, 0);
    v16 = (void *)*a4;
    v32 = 0;
    v28 = v15;
    v31 = 64;
    v30 = v16;
    if ( v15 )
    {
      sub_8DF340((unsigned __int8 ***)&v28, (__int64)&v30);
      if ( v31 > 0x40 )
      {
        if ( v30 )
          operator delete[](v30);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_9608E0(a1, a2, a3, a4);
    }
    return result;
  }
  if ( v6 <= 1 || v6 > v8 )
  {
LABEL_5:
    if ( (unsigned int)(*(_DWORD *)(a3 + 8) - 1) < v8 )
    {
      sub_922330((__int64)&v30, -1, 0);
      v22 = v30;
      v10 = v31;
      v23 = v31;
    }
    else
    {
      v25 = 3;
      v24 = &byte_7;
      v31 = 64;
      v30 = (void *)v8;
      sub_2587E80(&v28, &v30, v6);
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
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
      v31 = *(_DWORD *)(a3 + 8);
      if ( v31 > 0x40 )
        sub_2585B30(&v30);
      else
        v30 = *(void **)a3;
      sub_8CC560((__int64)&v30, (__int64)&v26, (__int64)&v24);
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
      v29 = v25;
      if ( v25 > 0x40 )
        sub_2585B30(&v28);
      else
        v28 = v24;
      sub_8CC270((__int64)&v30, (__int64)&v28);
      v22 = v30;
      v9 = v31;
      v31 = 0;
      v23 = v9;
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      if ( v25 > 0x40 && v24 )
        operator delete[](v24);
      v10 = v23;
    }
    v29 = v10;
    v11 = *(_QWORD *)(a1 + 184);
    if ( v10 > 0x40 )
      sub_2585B30(&v28);
    else
      v28 = v22;
    sub_8CC190((__int64)&v30, (__int64)&v28);
    v12 = sub_A1A4E0(v11, 16);
    v13 = v31;
    v31 = 0;
    *(_DWORD *)(v12 + 8) = v13;
    *(_QWORD *)v12 = v30;
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    if ( v23 > 0x40 )
    {
      if ( v22 )
        operator delete[](v22);
    }
    return 1;
  }
  v17 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v32 = 0;
  v18 = v17;
  v19 = (void *)*a4;
  v31 = 64;
  v30 = v19;
  v21 = *(_QWORD *)(v18 + 8);
  v28 = (void *)sub_A2E240(a1, v18, 2220, 0);
  v20 = (unsigned __int8 **)v28;
  if ( v28 )
  {
    sub_8DF340((unsigned __int8 ***)&v28, (__int64)&v30);
    sub_8D69A0(v20, v21);
    sub_8D6E40(v20, v6);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    v8 = *a4;
    goto LABEL_5;
  }
  if ( v31 > 0x40 && v30 )
  {
    operator delete[](v30);
    return 0;
  }
  return result;
}

