__int64 __fastcall sub_9532F0(__int64 a1, __int64 a2, _WORD *a3, __int64 *a4, unsigned int a5)
{
  __int64 *v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // r13d
  __int16 v16; // cx
  int v17; // edx
  int v18; // r13d
  void *v19; // rdi
  __int64 v20; // rsi
  void *v21; // rdi
  unsigned __int8 **v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // eax
  void *v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+0h] [rbp-78h]
  unsigned __int8 **v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int8 **v31; // [rsp+18h] [rbp-60h] BYREF
  void *v32; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-50h]
  char v34; // [rsp+2Ch] [rbp-4Ch]
  void *v35; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-40h]
  char v37; // [rsp+3Ch] [rbp-3Ch]

  v9 = a4;
  v10 = *((_DWORD *)a4 + 2);
  v11 = *a4;
  if ( v10 > 0x40 )
    v11 = *(_QWORD *)(v11 + 8LL * ((v10 - 1) >> 6));
  if ( (v11 & (1LL << ((unsigned __int8)v10 - 1))) != 0 )
  {
    v30 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v22 = (unsigned __int8 **)sub_A2E1B0(a1, &v30, 2242, 0);
    v23 = *((unsigned int *)v9 + 2);
    v31 = v22;
    sub_2587BE0(&v35, v9, v23);
    v24 = v36;
    v34 = 0;
    v33 = v36;
    v32 = v35;
    if ( v31 )
    {
      sub_8DF340(&v31, (__int64)&v32);
      v24 = v33;
    }
    if ( v24 > 0x40 && v32 )
      operator delete[](v32);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
      return 0;
  }
  if ( a5 <= 1 )
  {
LABEL_5:
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      return 1;
    v13 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    LOWORD(v14) = *a3;
    if ( (__int16)*a3 < 0 )
    {
      v25 = (void *)sub_A2E240(a1, v13, 2225, 0);
      v26 = (unsigned __int16)*a3;
      v37 = 0;
      v32 = v25;
      v36 = 16;
      v35 = (void *)v26;
      if ( v25 )
      {
        sub_8DF340((unsigned __int8 ***)&v32, (__int64)&v35);
        if ( v36 > 0x40 )
        {
          if ( v35 )
            operator delete[](v35);
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    }
    v15 = 16;
    if ( !(_WORD)v14 )
    {
LABEL_20:
      if ( *((_DWORD *)v9 + 2) <= 0x20u )
      {
        sub_2587BE0(&v35, v9, 32);
        v19 = v35;
        LODWORD(v9) = (_DWORD)v35;
        if ( v36 <= 0x40 )
          goto LABEL_24;
        v9 = *(__int64 **)v35;
        if ( !v35 )
          goto LABEL_24;
      }
      else
      {
        sub_25877E0(&v35, v9, 32);
        v19 = v35;
        LODWORD(v9) = (_DWORD)v35;
        if ( v36 <= 0x40 )
        {
LABEL_24:
          if ( v15 >= (unsigned int)v9 )
            return 1;
          sub_A2E240(a1, v13, 2224, 0);
          return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
        }
        LODWORD(v9) = *(_DWORD *)v35;
      }
      operator delete[](v19);
      goto LABEL_24;
    }
    v16 = SBYTE1(v14);
    v17 = (__int16)v14;
    if ( BYTE1(v14) )
    {
      v14 = (__int16)v14 >> 12;
      if ( v17 >> 12 )
      {
        v15 = 0;
        v14 = (unsigned __int16)v14;
        if ( (unsigned int)v17 >> 14 )
        {
LABEL_19:
          v15 |= 1u;
          goto LABEL_20;
        }
        goto LABEL_12;
      }
      LOWORD(v14) = v16;
      v18 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v14 >> 4 )
      {
        LOWORD(v14) = (int)(unsigned __int8)v14 >> 4;
        v15 = 8;
LABEL_16:
        v14 = (unsigned __int16)v14;
        if ( (int)(unsigned __int16)v14 >> 2 )
        {
          v14 = (int)(unsigned __int16)v14 >> 2;
LABEL_18:
          if ( v14 >> 1 )
            goto LABEL_20;
          goto LABEL_19;
        }
LABEL_12:
        v15 |= 2u;
        goto LABEL_18;
      }
      v18 = 8;
    }
    v15 = v18 | 4;
    goto LABEL_16;
  }
  sub_92DD40((__int64)&v35, a5, *((_DWORD *)v9 + 2));
  if ( (int)sub_25867A0(v9, &v35) < 0 )
  {
    if ( v36 <= 0x40 )
      goto LABEL_5;
    v21 = v35;
    if ( !v35 )
      goto LABEL_5;
LABEL_34:
    operator delete[](v21);
    goto LABEL_5;
  }
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  v27 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v35, v9, *((unsigned int *)v9 + 2));
  v34 = 0;
  v33 = v36;
  v20 = v27;
  v32 = v35;
  v28 = *(_QWORD *)(v27 + 8);
  v35 = (void *)sub_A2E240(a1, v20, 2220, 0);
  v29 = (unsigned __int8 **)v35;
  if ( v35 )
  {
    sub_8DF340((unsigned __int8 ***)&v35, (__int64)&v32);
    sub_8D69A0(v29, v28);
    sub_8D6E40(v29, a5);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)) )
  {
    if ( v33 <= 0x40 )
      goto LABEL_5;
    v21 = v32;
    if ( !v32 )
      goto LABEL_5;
    goto LABEL_34;
  }
  if ( v33 <= 0x40 || !v32 )
    return 0;
  operator delete[](v32);
  return 0;
}

