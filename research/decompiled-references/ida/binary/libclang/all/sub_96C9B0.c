__int64 __fastcall sub_96C9B0(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v8; // edx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 result; // rax
  __int64 v15; // r15
  unsigned __int8 **v16; // r13
  char v17; // r13
  __int64 v18; // r15
  unsigned int v19; // eax
  void *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r12
  void *v23; // rdi
  __int64 v24; // [rsp+8h] [rbp-80h]
  __int64 v25; // [rsp+18h] [rbp-70h] BYREF
  void *v26; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-60h]
  void *v28; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-50h]
  char v30; // [rsp+3Ch] [rbp-4Ch]
  void *v31; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v28, 0x3Fu, *(_DWORD *)(a4 + 8));
    v32 = *(_DWORD *)(a4 + 8);
    if ( v32 > 0x40 )
      sub_2585B30(&v31);
    else
      v31 = *(void **)a4;
    sub_8CC340((__int64)&v31, &v28, a4);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
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
    v25 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (void *)sub_A2E1B0(a1, &v25, 2242, 0);
    v12 = *(unsigned int *)(a4 + 8);
    v26 = v11;
    sub_2587BE0(&v31, a4, v12);
    v13 = v32;
    v30 = 0;
    v29 = v32;
    v28 = v31;
    if ( v26 )
    {
      sub_8DF340((unsigned __int8 ***)&v26, (__int64)&v28);
      v13 = v29;
    }
    if ( v13 > 0x40 && v28 )
      operator delete[](v28);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_938B60((__int64)&v31, a4);
      if ( *(_DWORD *)(a4 + 8) > 0x40u )
      {
        if ( *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
      }
      *(_QWORD *)a4 = v31;
      *(_DWORD *)(a4 + 8) = v32;
      return sub_96C460(a1, a2, a3, a4);
    }
    return result;
  }
  sub_92DD40((__int64)&v31, 0x40u, v8);
  if ( (int)sub_25867A0(a4, &v31) < 0 )
  {
    if ( v32 <= 0x40 || (v23 = v31) == nullptr )
    {
LABEL_18:
      sub_92DD40((__int64)&v31, 0x3Fu, *(_DWORD *)(a4 + 8));
      v17 = sub_922490(a4, (__int64)&v31);
      if ( v32 > 0x40 && v31 )
        operator delete[](v31);
      v18 = -1;
      if ( v17 == 3 )
        goto LABEL_35;
      v19 = *(_DWORD *)(a4 + 8);
      v27 = v19;
      if ( v19 > 0x40 )
      {
        sub_2585B30(&v26);
        v29 = v27;
        if ( v27 > 0x40 )
        {
          sub_2585B30(&v28);
          if ( v29 > 0x40 )
          {
            sub_25877E0(&v31, &v28, 64);
            LOBYTE(v21) = (_BYTE)v31;
            if ( v32 > 0x40 )
            {
              v21 = *(_QWORD *)v31;
              operator delete[](v31);
            }
            goto LABEL_29;
          }
LABEL_25:
          sub_2587BE0(&v31, &v28, 64);
          LOBYTE(v21) = (_BYTE)v31;
          if ( v32 > 0x40 )
          {
            v22 = *(_QWORD *)v31;
            if ( v31 )
              operator delete[](v31);
            LOBYTE(v21) = v22;
          }
LABEL_29:
          if ( v29 > 0x40 && v28 )
            operator delete[](v28);
          v18 = *a3 >> v21;
          if ( v27 > 0x40 && v26 )
            operator delete[](v26);
LABEL_35:
          *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v18;
          return 1;
        }
        v20 = v26;
      }
      else
      {
        v20 = *(void **)a4;
        v29 = v19;
        v26 = v20;
      }
      v28 = v20;
      goto LABEL_25;
    }
LABEL_50:
    operator delete[](v23);
    goto LABEL_18;
  }
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v31, a4, *(unsigned int *)(a4 + 8));
  v30 = 0;
  v29 = v32;
  v28 = v31;
  v24 = *(_QWORD *)(v15 + 8);
  v31 = (void *)sub_A2E240(a1, v15, 2220, 0);
  v16 = (unsigned __int8 **)v31;
  if ( v31 )
  {
    sub_8DF340((unsigned __int8 ***)&v31, (__int64)&v28);
    sub_8D69A0(v16, v24);
    sub_8D6E40(v16, 64);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v29 <= 0x40 )
      goto LABEL_18;
    v23 = v28;
    if ( !v28 )
      goto LABEL_18;
    goto LABEL_50;
  }
  if ( v29 > 0x40 && v28 )
  {
    operator delete[](v28);
    return 0;
  }
  return result;
}

