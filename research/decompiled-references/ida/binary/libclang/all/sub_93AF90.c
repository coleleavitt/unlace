__int64 __fastcall sub_93AF90(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // r12
  unsigned int v11; // eax
  unsigned int v12; // r13d
  void *v13; // rdi
  unsigned int v14; // ebp
  __int64 v16; // rsi
  void *v17; // rdi
  void *v18; // rax
  void *v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-68h]
  __int64 v21; // [rsp+0h] [rbp-68h]
  unsigned __int8 **v22; // [rsp+8h] [rbp-60h]
  void *v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-50h]
  char v25; // [rsp+1Ch] [rbp-4Ch]
  void *v26; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-40h]
  char v28; // [rsp+2Ch] [rbp-3Ch]

  if ( a5 <= 1 )
  {
LABEL_2:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v11 = *a3;
    if ( (*a3 & 0x80000000) != 0 )
    {
      v18 = (void *)sub_A2E240(a1, v10, 2225, 0);
      v19 = (void *)*a3;
      v28 = 0;
      v23 = v18;
      v27 = 32;
      v26 = v19;
      if ( v18 )
      {
        sub_8DF340((unsigned __int8 ***)&v23, (__int64)&v26);
        if ( v27 > 0x40 )
        {
          if ( v26 )
            operator delete[](v26);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v12 = 32;
    if ( v11 )
    {
      _BitScanReverse(&v11, v11);
      v12 = v11 ^ 0x1F;
    }
    if ( *(_DWORD *)(a4 + 8) <= 0x20u )
    {
      sub_2587D60(&v26, a4);
      v13 = v26;
      v14 = (unsigned int)v26;
      if ( v27 <= 0x40 )
        goto LABEL_12;
      v14 = *(_DWORD *)v26;
      if ( !v26 )
        goto LABEL_12;
    }
    else
    {
      sub_25877E0(&v26, a4, 32);
      v13 = v26;
      v14 = (unsigned int)v26;
      if ( v27 <= 0x40 )
      {
LABEL_12:
        if ( v12 >= v14 )
          return 1;
        sub_A2E240(a1, v10, 2224, 0);
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      }
      v14 = *(_DWORD *)v26;
    }
    operator delete[](v13);
    goto LABEL_12;
  }
  sub_92A4D0((__int64)&v26, a5, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(a4, &v26) < 0 )
  {
    if ( v27 <= 0x40 )
      goto LABEL_2;
    v17 = v26;
    if ( !v26 )
      goto LABEL_2;
LABEL_22:
    operator delete[](v17);
    goto LABEL_2;
  }
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  v20 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v26, a4);
  v25 = 1;
  v24 = v27;
  v16 = v20;
  v23 = v26;
  v21 = *(_QWORD *)(v20 + 8);
  v26 = (void *)sub_A2E240(a1, v16, 2220, 0);
  v22 = (unsigned __int8 **)v26;
  if ( v26 )
  {
    sub_8DF340((unsigned __int8 ***)&v26, (__int64)&v23);
    sub_8D69A0(v22, v21);
    sub_8D6E40(v22, a5);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v24 <= 0x40 )
      goto LABEL_2;
    v17 = v23;
    if ( !v23 )
      goto LABEL_2;
    goto LABEL_22;
  }
  if ( v24 > 0x40 && v23 )
  {
    operator delete[](v23);
    return 0;
  }
  return result;
}

