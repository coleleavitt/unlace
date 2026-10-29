__int64 __fastcall sub_939E00(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v10; // r12
  unsigned int v11; // eax
  unsigned int v12; // r13d
  __int16 v13; // cx
  int v14; // edx
  int v15; // r13d
  void *v16; // rdi
  __int64 v18; // rsi
  void *v19; // rdi
  void *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+0h] [rbp-68h]
  __int64 v23; // [rsp+0h] [rbp-68h]
  unsigned __int8 **v24; // [rsp+8h] [rbp-60h]
  void *v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-50h]
  char v27; // [rsp+1Ch] [rbp-4Ch]
  void *v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-40h]
  char v30; // [rsp+2Ch] [rbp-3Ch]

  v7 = a4;
  if ( a5 <= 1 )
  {
LABEL_2:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v10 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    LOWORD(v11) = *a3;
    if ( (__int16)*a3 < 0 )
    {
      v20 = (void *)sub_A2E240(a1, v10, 2225, 0);
      v21 = (unsigned __int16)*a3;
      v30 = 0;
      v25 = v20;
      v29 = 16;
      v28 = (void *)v21;
      if ( v20 )
      {
        sub_8DF340((unsigned __int8 ***)&v25, (__int64)&v28);
        if ( v29 > 0x40 )
        {
          if ( v28 )
            operator delete[](v28);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v12 = 16;
    if ( !(_WORD)v11 )
    {
LABEL_15:
      if ( *(_DWORD *)(v7 + 8) <= 0x20u )
      {
        sub_2587D60(&v28, v7);
        v16 = v28;
        LODWORD(v7) = (_DWORD)v28;
        if ( v29 <= 0x40 )
          goto LABEL_19;
        v7 = *(_QWORD *)v28;
        if ( !v28 )
          goto LABEL_19;
      }
      else
      {
        sub_25877E0(&v28, v7, 32);
        v16 = v28;
        LODWORD(v7) = (_DWORD)v28;
        if ( v29 <= 0x40 )
        {
LABEL_19:
          if ( v12 >= (unsigned int)v7 )
            return 1;
          sub_A2E240(a1, v10, 2224, 0);
          return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
        }
        LODWORD(v7) = *(_DWORD *)v28;
      }
      operator delete[](v16);
      goto LABEL_19;
    }
    v13 = SBYTE1(v11);
    v14 = (__int16)v11;
    if ( BYTE1(v11) )
    {
      v11 = (__int16)v11 >> 12;
      if ( v14 >> 12 )
      {
        v12 = 0;
        v11 = (unsigned __int16)v11;
        if ( (unsigned int)v14 >> 14 )
        {
LABEL_14:
          v12 |= 1u;
          goto LABEL_15;
        }
        goto LABEL_44;
      }
      LOWORD(v11) = v13;
      v15 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v11 >> 4 )
      {
        LOWORD(v11) = (int)(unsigned __int8)v11 >> 4;
        v12 = 8;
LABEL_11:
        v11 = (unsigned __int16)v11;
        if ( (int)(unsigned __int16)v11 >> 2 )
        {
          v11 = (int)(unsigned __int16)v11 >> 2;
          goto LABEL_13;
        }
LABEL_44:
        v12 |= 2u;
LABEL_13:
        if ( v11 >> 1 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v15 = 8;
    }
    v12 = v15 | 4;
    goto LABEL_11;
  }
  sub_92A4D0((__int64)&v28, a5, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(v7, &v28) < 0 )
  {
    if ( v29 <= 0x40 )
      goto LABEL_2;
    v19 = v28;
    if ( !v28 )
      goto LABEL_2;
LABEL_29:
    operator delete[](v19);
    goto LABEL_2;
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  v22 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v28, v7);
  v27 = 1;
  v26 = v29;
  v18 = v22;
  v25 = v28;
  v23 = *(_QWORD *)(v22 + 8);
  v28 = (void *)sub_A2E240(a1, v18, 2220, 0);
  v24 = (unsigned __int8 **)v28;
  if ( v28 )
  {
    sub_8DF340((unsigned __int8 ***)&v28, (__int64)&v25);
    sub_8D69A0(v24, v23);
    sub_8D6E40(v24, a5);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v26 <= 0x40 )
      goto LABEL_2;
    v19 = v25;
    if ( !v25 )
      goto LABEL_2;
    goto LABEL_29;
  }
  if ( v26 > 0x40 && v25 )
  {
    operator delete[](v25);
    return 0;
  }
  return result;
}

