__int64 __fastcall sub_93ECD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned __int64 v16; // rax
  void *v17; // rdi
  unsigned int v18; // r12d
  __int64 v20; // rsi
  void *v21; // rdi
  unsigned __int8 **v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned __int8 **v27; // [rsp+8h] [rbp-70h]
  unsigned __int8 **v28; // [rsp+18h] [rbp-60h] BYREF
  void *v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-50h]
  char v31; // [rsp+2Ch] [rbp-4Ch]
  void *v32; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-40h]

  if ( a5 <= 1 )
  {
LABEL_2:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v11 = *(_DWORD *)(a3 + 8);
    v12 = v10;
    v13 = 1LL << ((unsigned __int8)v11 - 1);
    v14 = *(_QWORD *)a3;
    if ( v11 > 0x40 )
    {
      if ( (*(_QWORD *)(v14 + 8LL * ((v11 - 1) >> 6)) & v13) == 0 )
      {
LABEL_7:
        sub_93CCE0((__int64)&v29, (__int64 *)a3);
        v15 = v30;
        if ( v30 > 0x40 )
        {
          v15 = sub_2587400(&v29);
        }
        else if ( v29 )
        {
          _BitScanReverse64(&v16, (unsigned __int64)v29);
          v15 = v30 + (v16 ^ 0x3F) - 64;
        }
        if ( *(_DWORD *)(a4 + 8) > 0x20u )
        {
          sub_25877E0(&v32, a4, 32);
          v17 = v32;
          v18 = (unsigned int)v32;
          if ( v33 <= 0x40 )
            goto LABEL_14;
          v18 = *(_DWORD *)v32;
        }
        else
        {
          sub_2587D60(&v32, a4);
          v17 = v32;
          v18 = (unsigned int)v32;
          if ( v33 <= 0x40 )
            goto LABEL_14;
          v18 = *(_DWORD *)v32;
          if ( !v32 )
            goto LABEL_14;
        }
        operator delete[](v17);
LABEL_14:
        if ( v30 > 0x40 )
        {
          if ( v29 )
            operator delete[](v29);
        }
        if ( v15 >= v18 )
          return 1;
        sub_A2E240(a1, v12, 2224, 0);
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      }
    }
    else if ( (v14 & v13) == 0 )
    {
      goto LABEL_7;
    }
    v22 = (unsigned __int8 **)sub_A2E240(a1, v12, 2225, 0);
    v23 = *(unsigned int *)(a3 + 8);
    v28 = v22;
    sub_2587BE0(&v32, a3, v23);
    v24 = v33;
    v31 = 0;
    v30 = v33;
    v29 = v32;
    if ( v28 )
    {
      sub_8DF340(&v28, (__int64)&v29);
      v24 = v30;
    }
    if ( v24 > 0x40 && v29 )
      operator delete[](v29);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  sub_92A4D0((__int64)&v32, a5, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(a4, &v32) < 0 )
  {
    if ( v33 <= 0x40 )
      goto LABEL_2;
    v21 = v32;
    if ( !v32 )
      goto LABEL_2;
LABEL_27:
    operator delete[](v21);
    goto LABEL_2;
  }
  if ( v33 > 0x40 && v32 )
    operator delete[](v32);
  v25 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v32, a4);
  v31 = 1;
  v30 = v33;
  v20 = v25;
  v29 = v32;
  v26 = *(_QWORD *)(v25 + 8);
  v32 = (void *)sub_A2E240(a1, v20, 2220, 0);
  v27 = (unsigned __int8 **)v32;
  if ( v32 )
  {
    sub_8DF340((unsigned __int8 ***)&v32, (__int64)&v29);
    sub_8D69A0(v27, v26);
    sub_8D6E40(v27, a5);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v30 <= 0x40 )
      goto LABEL_2;
    v21 = v29;
    if ( !v29 )
      goto LABEL_2;
    goto LABEL_27;
  }
  if ( v30 > 0x40 && v29 )
  {
    operator delete[](v29);
    return 0;
  }
  return result;
}

