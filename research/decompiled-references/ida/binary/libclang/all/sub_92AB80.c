__int64 __fastcall sub_92AB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r14d
  char v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 result; // rax
  __int64 v16; // r15
  void *v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-98h]
  unsigned __int8 **v19; // [rsp+8h] [rbp-90h]
  void *v20; // [rsp+10h] [rbp-88h]
  unsigned int v21; // [rsp+18h] [rbp-80h]
  void *v22; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-70h]
  void *v24; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-60h]
  void *v26; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-50h]
  char v28; // [rsp+4Ch] [rbp-4Ch]
  void *v29; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v26, *(_DWORD *)(a3 + 8) - 1, *(_DWORD *)(a4 + 8));
    v30 = *(_DWORD *)(a4 + 8);
    if ( v30 > 0x40 )
      sub_2585B30(&v29);
    else
      v29 = *(void **)a4;
    sub_8CC450((__int64)&v29, &v26, a4);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
  }
  if ( v7 <= 1 )
  {
LABEL_3:
    sub_92A4D0((__int64)&v29, *(_DWORD *)(a3 + 8) - 1, *(_DWORD *)(a4 + 8));
    v8 = sub_922400(a4, (__int64)&v29);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v8 == 3 )
    {
      sub_922330((__int64)&v29, -1, 0);
      v11 = v30;
      v20 = v29;
      v21 = v30;
LABEL_27:
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
      sub_2587E20(&v29, &v24, v11);
      v27 = v30;
      if ( v30 > 0x40 )
      {
        sub_2585B30(&v26);
        if ( v30 > 0x40 && v29 )
          operator delete[](v29);
      }
      else
      {
        v26 = v29;
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
    v9 = *(_DWORD *)(a4 + 8);
    v23 = 3;
    v22 = &byte_7;
    v25 = v9;
    if ( v9 > 0x40 )
      sub_2585B30(&v24);
    else
      v24 = *(void **)a4;
    if ( !v7 )
      v7 = v25;
    sub_2587E20(&v29, &v24, v7);
    v27 = v30;
    if ( v30 > 0x40 )
    {
      sub_2585B30(&v26);
      if ( v30 > 0x40 && v29 )
      {
        operator delete[](v29);
        v30 = *(_DWORD *)(a3 + 8);
        if ( v30 <= 0x40 )
          goto LABEL_12;
        goto LABEL_70;
      }
    }
    else
    {
      v26 = v29;
    }
    v30 = *(_DWORD *)(a3 + 8);
    if ( v30 <= 0x40 )
    {
LABEL_12:
      v29 = *(void **)a3;
LABEL_13:
      sub_8CC780((__int64)&v29, (__int64)&v26, (__int64)&v22);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
      if ( v25 > 0x40 && v24 )
      {
        operator delete[](v24);
        v27 = v23;
        if ( v23 > 0x40 )
          goto LABEL_66;
      }
      else
      {
        v27 = v23;
        if ( v23 > 0x40 )
        {
LABEL_66:
          sub_2585B30(&v26);
LABEL_22:
          sub_8CC200((__int64)&v29, (__int64)&v26);
          v20 = v29;
          v10 = v30;
          v30 = 0;
          v21 = v10;
          if ( v27 > 0x40 && v26 )
            operator delete[](v26);
          if ( v23 > 0x40 && v22 )
            operator delete[](v22);
          v11 = v21;
          goto LABEL_27;
        }
      }
      v26 = v22;
      goto LABEL_22;
    }
LABEL_70:
    sub_2585B30(&v29);
    goto LABEL_13;
  }
  sub_92A4D0((__int64)&v29, v7, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(a4, &v29) < 0 )
  {
    if ( v30 <= 0x40 )
      goto LABEL_3;
    v17 = v29;
    if ( !v29 )
      goto LABEL_3;
LABEL_50:
    operator delete[](v17);
    goto LABEL_3;
  }
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v29, a4);
  v28 = 1;
  v27 = v30;
  v26 = v29;
  v18 = *(_QWORD *)(v16 + 8);
  v29 = (void *)sub_A2E240(a1, v16, 2220, 0);
  v19 = (unsigned __int8 **)v29;
  if ( v29 )
  {
    sub_8DF340((unsigned __int8 ***)&v29, (__int64)&v26);
    sub_8D69A0(v19, v18);
    sub_8D6E40(v19, v7);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v27 <= 0x40 )
      goto LABEL_3;
    v17 = v26;
    if ( !v26 )
      goto LABEL_3;
    goto LABEL_50;
  }
  if ( v27 > 0x40 && v26 )
  {
    operator delete[](v26);
    return 0;
  }
  return result;
}

