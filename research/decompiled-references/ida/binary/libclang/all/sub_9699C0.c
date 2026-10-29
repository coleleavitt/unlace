__int64 __fastcall sub_9699C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r15d
  unsigned int v8; // edx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 result; // rax
  char v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r14
  void *v23; // rdi
  __int64 v25; // [rsp+0h] [rbp-98h]
  unsigned __int8 **v26; // [rsp+8h] [rbp-90h]
  void *v27; // [rsp+10h] [rbp-88h]
  unsigned int v28; // [rsp+18h] [rbp-80h]
  void *v29; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-70h]
  void *v31; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-60h]
  void *v33; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-50h]
  char v35; // [rsp+4Ch] [rbp-4Ch]
  void *v36; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+58h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v33, *(_DWORD *)(a3 + 8) - 1, *(_DWORD *)(a4 + 8));
    v37 = *(_DWORD *)(a4 + 8);
    if ( v37 > 0x40 )
      sub_2585B30(&v36);
    else
      v36 = *(void **)a4;
    sub_8CC340((__int64)&v36, &v33, a4);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
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
    v29 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (void *)sub_A2E1B0(a1, &v29, 2242, 0);
    v12 = *(unsigned int *)(a4 + 8);
    v31 = v11;
    sub_2587BE0(&v36, a4, v12);
    v13 = v37;
    v35 = 0;
    v34 = v37;
    v33 = v36;
    if ( v31 )
    {
      sub_8DF340((unsigned __int8 ***)&v31, (__int64)&v33);
      v13 = v34;
    }
    if ( v13 > 0x40 && v33 )
      operator delete[](v33);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_938B60((__int64)&v36, a4);
      if ( *(_DWORD *)(a4 + 8) > 0x40u )
      {
        if ( *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
      }
      *(_QWORD *)a4 = v36;
      *(_DWORD *)(a4 + 8) = v37;
      return sub_9692F0(a1, a2, a3, a4);
    }
    return result;
  }
  if ( v7 <= 1 )
    goto LABEL_13;
  sub_92DD40((__int64)&v36, v7, v8);
  if ( (int)sub_25867A0(a4, &v36) < 0 )
  {
    if ( v37 <= 0x40 )
      goto LABEL_74;
    v23 = v36;
    if ( !v36 )
      goto LABEL_74;
LABEL_73:
    operator delete[](v23);
LABEL_74:
    v8 = *(_DWORD *)(a4 + 8);
LABEL_13:
    sub_92DD40((__int64)&v36, *(_DWORD *)(a3 + 8) - 1, v8);
    v15 = sub_922490(a4, (__int64)&v36);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    if ( v15 == 3 )
    {
      sub_922330((__int64)&v36, -1, 0);
      v27 = v36;
      v18 = v37;
      v28 = v37;
    }
    else
    {
      v16 = *(_DWORD *)(a4 + 8);
      v30 = 3;
      v29 = &byte_7;
      v32 = v16;
      if ( v16 > 0x40 )
        sub_2585B30(&v31);
      else
        v31 = *(void **)a4;
      if ( !v7 )
        v7 = v32;
      sub_2587E80(&v36, &v31, v7);
      v34 = v37;
      if ( v37 > 0x40 )
      {
        sub_2585B30(&v33);
        if ( v37 > 0x40 && v36 )
          operator delete[](v36);
      }
      else
      {
        v33 = v36;
      }
      v37 = *(_DWORD *)(a3 + 8);
      if ( v37 > 0x40 )
        sub_2585B30(&v36);
      else
        v36 = *(void **)a3;
      sub_8CC780((__int64)&v36, (__int64)&v33, (__int64)&v29);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
      if ( v32 > 0x40 && v31 )
        operator delete[](v31);
      v34 = v30;
      if ( v30 > 0x40 )
        sub_2585B30(&v33);
      else
        v33 = v29;
      sub_8CC200((__int64)&v36, (__int64)&v33);
      v27 = v36;
      v17 = v37;
      v37 = 0;
      v28 = v17;
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      v18 = v28;
    }
    v34 = v18;
    v19 = *(_QWORD *)(a1 + 184);
    if ( v18 > 0x40 )
      sub_2585B30(&v33);
    else
      v33 = v27;
    sub_8CC200((__int64)&v36, (__int64)&v33);
    v20 = sub_A1A4E0(v19, 16);
    v21 = v37;
    v37 = 0;
    *(_DWORD *)(v20 + 8) = v21;
    *(_QWORD *)v20 = v36;
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    return 1;
  }
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  v22 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v36, a4, *(unsigned int *)(a4 + 8));
  v35 = 0;
  v34 = v37;
  v33 = v36;
  v25 = *(_QWORD *)(v22 + 8);
  v36 = (void *)sub_A2E240(a1, v22, 2220, 0);
  v26 = (unsigned __int8 **)v36;
  if ( v36 )
  {
    sub_8DF340((unsigned __int8 ***)&v36, (__int64)&v33);
    sub_8D69A0(v26, v25);
    sub_8D6E40(v26, v7);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v34 <= 0x40 )
      goto LABEL_74;
    v23 = v33;
    if ( !v33 )
      goto LABEL_74;
    goto LABEL_73;
  }
  if ( v34 > 0x40 && v33 )
  {
    operator delete[](v33);
    return 0;
  }
  return result;
}

