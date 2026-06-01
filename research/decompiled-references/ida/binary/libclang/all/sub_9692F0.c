__int64 __fastcall sub_9692F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // edx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 result; // rax
  int v15; // eax
  char v16; // r15
  unsigned int v17; // edx
  void *v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r15
  void *v23; // rdi
  unsigned int v24; // eax
  unsigned int v25; // eax
  void *v26; // rdx
  __int64 v28; // [rsp+0h] [rbp-98h]
  unsigned int v29; // [rsp+0h] [rbp-98h]
  unsigned __int8 **v30; // [rsp+8h] [rbp-90h]
  void *v31; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v32; // [rsp+18h] [rbp-80h]
  void *v33; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-70h]
  void *v35; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-60h]
  void *v37; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-50h]
  char v39; // [rsp+4Ch] [rbp-4Ch]
  void *v40; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v37, *(_DWORD *)(a3 + 8) - 1, *(_DWORD *)(a4 + 8));
    v41 = *(_DWORD *)(a4 + 8);
    if ( v41 > 0x40 )
      sub_2585B30(&v40);
    else
      v40 = *(void **)a4;
    sub_8CC340((__int64)&v40, &v37, a4);
    if ( v41 > 0x40 && v40 )
      operator delete[](v40);
    if ( v38 > 0x40 && v37 )
      operator delete[](v37);
  }
  v8 = *(_DWORD *)(a4 + 8);
  v9 = *(_QWORD *)a4;
  v10 = 1LL << ((unsigned __int8)v8 - 1);
  if ( v8 > 0x40 )
  {
    if ( (*(_QWORD *)(v9 + 8LL * ((v8 - 1) >> 6)) & v10) != 0 )
      goto LABEL_4;
  }
  else if ( (v10 & v9) != 0 )
  {
LABEL_4:
    v33 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (void *)sub_A2E1B0(a1, &v33, 2242, 0);
    v12 = *(unsigned int *)(a4 + 8);
    v35 = v11;
    sub_2587BE0(&v40, a4, v12);
    v13 = v41;
    v39 = 0;
    v38 = v41;
    v37 = v40;
    if ( v35 )
    {
      sub_8DF340((unsigned __int8 ***)&v35, (__int64)&v37);
      v13 = v38;
    }
    if ( v13 > 0x40 && v37 )
      operator delete[](v37);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_938B60((__int64)&v40, a4);
      if ( *(_DWORD *)(a4 + 8) > 0x40u )
      {
        if ( *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
      }
      *(_QWORD *)a4 = v40;
      *(_DWORD *)(a4 + 8) = v41;
      return sub_9699C0(a1, a2, a3, a4);
    }
    return result;
  }
  if ( v7 <= 1 )
  {
LABEL_13:
    v15 = *(_DWORD *)(a3 + 8);
    v32 = 3;
    v31 = &byte_7;
    sub_92DD40((__int64)&v40, v15 - 1, v8);
    v16 = sub_922490(a4, (__int64)&v40);
    if ( v41 > 0x40 && v40 )
      operator delete[](v40);
    v17 = *(_DWORD *)(a4 + 8);
    if ( v16 == 3 )
    {
      v29 = *(_DWORD *)(a4 + 8);
      v24 = sub_831980(a3);
      sub_92DD40((__int64)&v40, v24, v29);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      v25 = v41;
      v26 = v40;
      *(_DWORD *)(a4 + 8) = v41;
      *(_QWORD *)a4 = v26;
      v38 = v25;
      if ( v25 > 0x40 )
        sub_2585B30(&v37);
      else
        v37 = v26;
      sub_91FE00((__int64)&v40, (__int64)&v37, v7);
      v34 = *(_DWORD *)(a3 + 8);
      if ( v34 > 0x40 )
        sub_2585B30(&v33);
      else
        v33 = *(void **)a3;
      sub_8CC200((__int64)&v35, (__int64)&v33);
      sub_8CC680((__int64)&v35, (__int64)&v40, (__int64)&v31);
      if ( v36 > 0x40 && v35 )
        operator delete[](v35);
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
      if ( v41 > 0x40 && v40 )
        operator delete[](v40);
      if ( v38 <= 0x40 )
        goto LABEL_37;
      v18 = v37;
      if ( !v37 )
        goto LABEL_37;
    }
    else
    {
      v36 = *(_DWORD *)(a4 + 8);
      if ( v17 > 0x40 )
        sub_2585B30(&v35);
      else
        v35 = *(void **)a4;
      if ( !v7 )
        v7 = v36;
      sub_2587E80(&v40, &v35, v7);
      v38 = v41;
      if ( v41 > 0x40 )
      {
        sub_2585B30(&v37);
        if ( v41 > 0x40 && v40 )
          operator delete[](v40);
      }
      else
      {
        v37 = v40;
      }
      v34 = *(_DWORD *)(a3 + 8);
      if ( v34 > 0x40 )
        sub_2585B30(&v33);
      else
        v33 = *(void **)a3;
      sub_8CC200((__int64)&v40, (__int64)&v33);
      sub_8CC680((__int64)&v40, (__int64)&v37, (__int64)&v31);
      if ( v41 > 0x40 && v40 )
        operator delete[](v40);
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
      if ( v38 > 0x40 && v37 )
        operator delete[](v37);
      if ( v36 <= 0x40 )
        goto LABEL_37;
      v18 = v35;
      if ( !v35 )
        goto LABEL_37;
    }
    operator delete[](v18);
LABEL_37:
    v19 = *(_QWORD *)(a1 + 184);
    v38 = v32;
    if ( v32 > 0x40 )
      sub_2585B30(&v37);
    else
      v37 = v31;
    sub_8CC200((__int64)&v40, (__int64)&v37);
    v20 = sub_A1A4E0(v19, 16);
    v21 = v41;
    v41 = 0;
    *(_DWORD *)(v20 + 8) = v21;
    *(_QWORD *)v20 = v40;
    if ( v38 > 0x40 && v37 )
      operator delete[](v37);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    return 1;
  }
  sub_92DD40((__int64)&v40, v7, v8);
  if ( (int)sub_25867A0(a4, &v40) < 0 )
  {
    if ( v41 <= 0x40 )
      goto LABEL_68;
    v23 = v40;
    if ( !v40 )
      goto LABEL_68;
LABEL_67:
    operator delete[](v23);
LABEL_68:
    v8 = *(_DWORD *)(a4 + 8);
    goto LABEL_13;
  }
  if ( v41 > 0x40 && v40 )
    operator delete[](v40);
  v22 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v40, a4, *(unsigned int *)(a4 + 8));
  v39 = 0;
  v38 = v41;
  v37 = v40;
  v28 = *(_QWORD *)(v22 + 8);
  v40 = (void *)sub_A2E240(a1, v22, 2220, 0);
  v30 = (unsigned __int8 **)v40;
  if ( v40 )
  {
    sub_8DF340((unsigned __int8 ***)&v40, (__int64)&v37);
    sub_8D69A0(v30, v28);
    sub_8D6E40(v30, v7);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v38 <= 0x40 )
      goto LABEL_68;
    v23 = v37;
    if ( !v37 )
      goto LABEL_68;
    goto LABEL_67;
  }
  if ( v38 > 0x40 && v37 )
  {
    operator delete[](v37);
    return 0;
  }
  return result;
}

