__int64 __fastcall sub_96A010(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 result; // rax
  void *v14; // rax
  void *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  void *v18; // rax
  unsigned __int8 **v19; // r13
  unsigned int v20; // eax
  __int64 v21; // [rsp+8h] [rbp-80h]
  void *v22; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-70h]
  void *v24; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-60h]
  void *v26; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-50h]
  void *v28; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-40h]
  char v30; // [rsp+4Ch] [rbp-3Ch]

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
    v24 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v14 = (void *)sub_A2E1B0(a1, &v24, 2242, 0);
    v15 = (void *)*a4;
    v30 = 0;
    v26 = v14;
    v29 = 64;
    v28 = v15;
    if ( v14 )
    {
      sub_8DF340((unsigned __int8 ***)&v26, (__int64)&v28);
      if ( v29 > 0x40 )
      {
        if ( v28 )
          operator delete[](v28);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_96A450(a1, a2, a3, a4);
    }
    return result;
  }
  if ( v6 <= 1 || v6 > v8 )
    goto LABEL_5;
  v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v30 = 0;
  v17 = v16;
  v18 = (void *)*a4;
  v29 = 64;
  v28 = v18;
  v21 = *(_QWORD *)(v17 + 8);
  v26 = (void *)sub_A2E240(a1, v17, 2220, 0);
  v19 = (unsigned __int8 **)v26;
  if ( v26 )
  {
    sub_8DF340((unsigned __int8 ***)&v26, (__int64)&v28);
    sub_8D69A0(v19, v21);
    sub_8D6E40(v19, v6);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    v8 = *a4;
LABEL_5:
    v9 = *(_DWORD *)(a3 + 8);
    v23 = 3;
    v22 = &byte_7;
    if ( (unsigned int)(v9 - 1) < v8 )
    {
      v20 = sub_831980(a3);
      *a4 = v20;
      sub_91FC70((__int64)&v28, (void *)v20, v6);
      v25 = *(_DWORD *)(a3 + 8);
      if ( v25 <= 0x40 )
      {
        v24 = *(void **)a3;
LABEL_11:
        sub_8CC200((__int64)&v26, (__int64)&v24);
        sub_8CC680((__int64)&v26, (__int64)&v28, (__int64)&v22);
        if ( v27 > 0x40 && v26 )
          operator delete[](v26);
        if ( v25 > 0x40 && v24 )
          operator delete[](v24);
        if ( v29 > 0x40 && v28 )
          operator delete[](v28);
        v10 = *(_QWORD *)(a1 + 184);
        v27 = v23;
        if ( v23 > 0x40 )
          sub_2585B30(&v26);
        else
          v26 = v22;
        sub_8CC200((__int64)&v28, (__int64)&v26);
        v11 = sub_A1A4E0(v10, 16);
        v12 = v29;
        v29 = 0;
        *(_DWORD *)(v11 + 8) = v12;
        *(_QWORD *)v11 = v28;
        if ( v27 > 0x40 && v26 )
          operator delete[](v26);
        if ( v23 > 0x40 )
        {
          if ( v22 )
            operator delete[](v22);
        }
        return 1;
      }
    }
    else
    {
      v29 = 64;
      v28 = (void *)v8;
      sub_2587E80(&v26, &v28, v6);
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      v29 = v27;
      if ( v27 > 0x40 )
      {
        sub_2585B30(&v28);
        if ( v27 > 0x40 && v26 )
          operator delete[](v26);
      }
      else
      {
        v28 = v26;
      }
      v25 = *(_DWORD *)(a3 + 8);
      if ( v25 <= 0x40 )
      {
        v24 = *(void **)a3;
        goto LABEL_11;
      }
    }
    sub_2585B30(&v24);
    goto LABEL_11;
  }
  if ( v29 > 0x40 && v28 )
  {
    operator delete[](v28);
    return 0;
  }
  return result;
}

