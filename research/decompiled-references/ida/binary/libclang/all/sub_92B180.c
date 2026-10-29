__int64 __fastcall sub_92B180(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // edx
  char v10; // r15
  unsigned int v11; // edx
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 result; // rax
  __int64 v16; // r15
  void *v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax
  void *v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-98h]
  unsigned int v22; // [rsp+0h] [rbp-98h]
  unsigned __int8 **v23; // [rsp+8h] [rbp-90h]
  void *v24; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-80h]
  void *v26; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-70h]
  void *v28; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-60h]
  void *v30; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-50h]
  char v32; // [rsp+4Ch] [rbp-4Ch]
  void *v33; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v30, *(_DWORD *)(a3 + 8) - 1, *(_DWORD *)(a4 + 8));
    v34 = *(_DWORD *)(a4 + 8);
    if ( v34 > 0x40 )
      sub_2585B30(&v33);
    else
      v33 = *(void **)a4;
    sub_8CC450((__int64)&v33, &v30, a4);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
  }
  if ( v7 <= 1 )
  {
LABEL_3:
    v8 = *(_DWORD *)(a3 + 8);
    v9 = *(_DWORD *)(a4 + 8);
    v25 = 3;
    v24 = &byte_7;
    sub_92A4D0((__int64)&v33, v8 - 1, v9);
    v10 = sub_922400(a4, (__int64)&v33);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    v11 = *(_DWORD *)(a4 + 8);
    if ( v10 == 3 )
    {
      v22 = *(_DWORD *)(a4 + 8);
      v18 = sub_831980(a3);
      sub_92A4D0((__int64)&v33, v18, v22);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      v19 = v34;
      v20 = v33;
      *(_DWORD *)(a4 + 8) = v34;
      *(_QWORD *)a4 = v20;
      v29 = v19;
      if ( v19 <= 0x40 )
      {
        v28 = v20;
LABEL_7:
        if ( !v7 )
          v7 = v29;
        sub_2587E20(&v33, &v28, v7);
        v31 = v34;
        if ( v34 > 0x40 )
        {
          sub_2585B30(&v30);
          if ( v34 > 0x40 && v33 )
          {
            operator delete[](v33);
            v27 = *(_DWORD *)(a3 + 8);
            if ( v27 <= 0x40 )
              goto LABEL_12;
            goto LABEL_58;
          }
        }
        else
        {
          v30 = v33;
        }
        v27 = *(_DWORD *)(a3 + 8);
        if ( v27 <= 0x40 )
        {
LABEL_12:
          v26 = *(void **)a3;
          goto LABEL_13;
        }
LABEL_58:
        sub_2585B30(&v26);
LABEL_13:
        sub_8CC200((__int64)&v33, (__int64)&v26);
        sub_8CC680((__int64)&v33, (__int64)&v30, (__int64)&v24);
        if ( v34 > 0x40 && v33 )
          operator delete[](v33);
        if ( v27 > 0x40 && v26 )
          operator delete[](v26);
        if ( v31 > 0x40 && v30 )
          operator delete[](v30);
        if ( v29 > 0x40 && v28 )
          operator delete[](v28);
        v12 = *(_QWORD *)(a1 + 184);
        v31 = v25;
        if ( v25 > 0x40 )
          sub_2585B30(&v30);
        else
          v30 = v24;
        sub_8CC200((__int64)&v33, (__int64)&v30);
        v13 = sub_A1A4E0(v12, 16);
        v14 = v34;
        v34 = 0;
        *(_DWORD *)(v13 + 8) = v14;
        *(_QWORD *)v13 = v33;
        if ( v31 > 0x40 && v30 )
          operator delete[](v30);
        if ( v25 > 0x40 )
        {
          if ( v24 )
            operator delete[](v24);
        }
        return 1;
      }
    }
    else
    {
      v29 = *(_DWORD *)(a4 + 8);
      if ( v11 <= 0x40 )
      {
        v28 = *(void **)a4;
        goto LABEL_7;
      }
    }
    sub_2585B30(&v28);
    goto LABEL_7;
  }
  sub_92A4D0((__int64)&v33, v7, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(a4, &v33) < 0 )
  {
    if ( v34 <= 0x40 )
      goto LABEL_3;
    v17 = v33;
    if ( !v33 )
      goto LABEL_3;
LABEL_46:
    operator delete[](v17);
    goto LABEL_3;
  }
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v33, a4);
  v32 = 1;
  v31 = v34;
  v30 = v33;
  v21 = *(_QWORD *)(v16 + 8);
  v33 = (void *)sub_A2E240(a1, v16, 2220, 0);
  v23 = (unsigned __int8 **)v33;
  if ( v33 )
  {
    sub_8DF340((unsigned __int8 ***)&v33, (__int64)&v30);
    sub_8D69A0(v23, v21);
    sub_8D6E40(v23, v7);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v31 <= 0x40 )
      goto LABEL_3;
    v17 = v30;
    if ( !v30 )
      goto LABEL_3;
    goto LABEL_46;
  }
  if ( v31 > 0x40 && v30 )
  {
    operator delete[](v30);
    return 0;
  }
  return result;
}

