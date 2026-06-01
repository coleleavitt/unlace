__int64 __fastcall sub_938260(__int64 a1, __int64 a2, char *a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v10; // r12
  int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // edx
  void *v14; // rdi
  __int64 v16; // rsi
  void *v17; // rdi
  int v18; // eax
  void *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-68h]
  __int64 v22; // [rsp+0h] [rbp-68h]
  unsigned __int8 **v23; // [rsp+8h] [rbp-60h]
  void *v24; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-50h]
  char v26; // [rsp+1Ch] [rbp-4Ch]
  void *v27; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-40h]
  char v29; // [rsp+2Ch] [rbp-3Ch]

  v7 = a4;
  if ( a5 <= 1 )
  {
LABEL_2:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v11 = *a3;
    if ( *a3 < 0 )
    {
      v19 = (void *)sub_A2E240(a1, v10, 2225, 0);
      v20 = (unsigned __int8)*a3;
      v29 = 0;
      v24 = v19;
      v28 = 8;
      v27 = (void *)v20;
      if ( v19 )
      {
        sub_8DF340((unsigned __int8 ***)&v24, (__int64)&v27);
        if ( v28 > 0x40 )
        {
          if ( v27 )
            operator delete[](v27);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v12 = 8;
    if ( *a3 )
    {
      v13 = v11 >> 4;
      if ( v11 >> 4 )
      {
        v12 = 1;
        if ( (unsigned int)v11 >> 6 )
          goto LABEL_12;
        v12 = 2;
      }
      else
      {
        v13 = *a3;
        v18 = v11 >> 2;
        v12 = 6;
        if ( v18 )
        {
          v13 = v18;
          v12 = 4;
        }
      }
      if ( !(v13 >> 1) )
        v12 |= 1u;
    }
LABEL_12:
    if ( *(_DWORD *)(v7 + 8) <= 0x20u )
    {
      sub_2587D60(&v27, v7);
      v14 = v27;
      LODWORD(v7) = (_DWORD)v27;
      if ( v28 <= 0x40 )
        goto LABEL_16;
      v7 = *(_QWORD *)v27;
      if ( !v27 )
        goto LABEL_16;
    }
    else
    {
      sub_25877E0(&v27, v7, 32);
      v14 = v27;
      LODWORD(v7) = (_DWORD)v27;
      if ( v28 <= 0x40 )
      {
LABEL_16:
        if ( v12 >= (unsigned int)v7 )
          return 1;
        sub_A2E240(a1, v10, 2224, 0);
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      }
      LODWORD(v7) = *(_DWORD *)v27;
    }
    operator delete[](v14);
    goto LABEL_16;
  }
  sub_92A4D0((__int64)&v27, a5, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(v7, &v27) < 0 )
  {
    if ( v28 <= 0x40 )
      goto LABEL_2;
    v17 = v27;
    if ( !v27 )
      goto LABEL_2;
LABEL_26:
    operator delete[](v17);
    goto LABEL_2;
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  v21 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v27, v7);
  v26 = 1;
  v25 = v28;
  v16 = v21;
  v24 = v27;
  v22 = *(_QWORD *)(v21 + 8);
  v27 = (void *)sub_A2E240(a1, v16, 2220, 0);
  v23 = (unsigned __int8 **)v27;
  if ( v27 )
  {
    sub_8DF340((unsigned __int8 ***)&v27, (__int64)&v24);
    sub_8D69A0(v23, v22);
    sub_8D6E40(v23, a5);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v25 <= 0x40 )
      goto LABEL_2;
    v17 = v24;
    if ( !v24 )
      goto LABEL_2;
    goto LABEL_26;
  }
  if ( v25 > 0x40 && v24 )
  {
    operator delete[](v24);
    return 0;
  }
  return result;
}

