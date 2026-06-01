__int64 __fastcall sub_96E170(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
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
  unsigned int v18; // edx
  void *v19; // rax
  void *v20; // rdi
  int v21; // r12d
  unsigned int v22; // ebx
  void *v23; // rdi
  void *v24; // rdi
  int v25; // esi
  unsigned int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // [rsp+8h] [rbp-80h]
  __int64 v29; // [rsp+18h] [rbp-70h] BYREF
  void *v30; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-60h]
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-50h]
  char v34; // [rsp+3Ch] [rbp-4Ch]
  void *v35; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v32, 0x1Fu, *(_DWORD *)(a4 + 8));
    v36 = *(_DWORD *)(a4 + 8);
    if ( v36 > 0x40 )
      sub_2585B30(&v35);
    else
      v35 = *(void **)a4;
    sub_8CC340((__int64)&v35, &v32, a4);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
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
    v29 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (void *)sub_A2E1B0(a1, &v29, 2242, 0);
    v12 = *(unsigned int *)(a4 + 8);
    v30 = v11;
    sub_2587BE0(&v35, a4, v12);
    v13 = v36;
    v34 = 0;
    v33 = v36;
    v32 = v35;
    if ( v30 )
    {
      sub_8DF340((unsigned __int8 ***)&v30, (__int64)&v32);
      v13 = v33;
    }
    if ( v13 > 0x40 && v32 )
      operator delete[](v32);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_938B60((__int64)&v35, a4);
      if ( *(_DWORD *)(a4 + 8) > 0x40u )
      {
        if ( *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
      }
      *(_QWORD *)a4 = v35;
      *(_DWORD *)(a4 + 8) = v36;
      return sub_96E6B0(a1, a2, a3, a4);
    }
    return result;
  }
  sub_92DD40((__int64)&v35, 0x20u, v8);
  if ( (int)sub_25867A0(a4, &v35) < 0 )
  {
    if ( v36 <= 0x40 || (v24 = v35) == nullptr )
    {
LABEL_18:
      sub_92DD40((__int64)&v35, 0x1Fu, *(_DWORD *)(a4 + 8));
      v17 = sub_922490(a4, (__int64)&v35);
      if ( v36 > 0x40 && v35 )
        operator delete[](v35);
      v18 = *(_DWORD *)(a4 + 8);
      if ( v17 == 3 )
      {
        v25 = 32;
        if ( *a3 )
        {
          _BitScanReverse(&v26, *a3);
          v25 = v26 ^ 0x1F;
        }
        sub_92DD40((__int64)&v35, v25, v18);
        if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
        *(_QWORD *)a4 = v35;
        v27 = v36;
        *(_DWORD *)(a4 + 8) = v36;
        if ( v27 > 0x40 )
          sub_2585B30(&v35);
        v22 = *a3 << sub_8CCCE0((__int64)&v35);
        if ( v36 <= 0x40 )
          goto LABEL_35;
        v23 = v35;
        if ( !v35 )
          goto LABEL_35;
LABEL_34:
        operator delete[](v23);
LABEL_35:
        *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v22;
        return 1;
      }
      v31 = *(_DWORD *)(a4 + 8);
      if ( v18 > 0x40 )
      {
        sub_2585B30(&v30);
        v18 = v31;
        v33 = v31;
        if ( v31 > 0x40 )
        {
          sub_2585B30(&v32);
          v18 = v33;
LABEL_25:
          if ( v18 > 0x20 )
          {
            sub_25877E0(&v35, &v32, 32);
            v20 = v35;
            LOBYTE(v21) = (_BYTE)v35;
            if ( v36 <= 0x40 )
              goto LABEL_29;
            v21 = *(_DWORD *)v35;
          }
          else
          {
            sub_2587BE0(&v35, &v32, 32);
            v20 = v35;
            LOBYTE(v21) = (_BYTE)v35;
            if ( v36 <= 0x40 || (v21 = *(_DWORD *)v35, !v35) )
            {
LABEL_29:
              if ( v33 > 0x40 && v32 )
                operator delete[](v32);
              v22 = *a3 << v21;
              if ( v31 <= 0x40 )
                goto LABEL_35;
              v23 = v30;
              if ( !v30 )
                goto LABEL_35;
              goto LABEL_34;
            }
          }
          operator delete[](v20);
          goto LABEL_29;
        }
        v19 = v30;
      }
      else
      {
        v19 = *(void **)a4;
        v33 = v18;
        v30 = v19;
      }
      v32 = v19;
      goto LABEL_25;
    }
LABEL_50:
    operator delete[](v24);
    goto LABEL_18;
  }
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v35, a4, *(unsigned int *)(a4 + 8));
  v34 = 0;
  v33 = v36;
  v32 = v35;
  v28 = *(_QWORD *)(v15 + 8);
  v35 = (void *)sub_A2E240(a1, v15, 2220, 0);
  v16 = (unsigned __int8 **)v35;
  if ( v35 )
  {
    sub_8DF340((unsigned __int8 ***)&v35, (__int64)&v32);
    sub_8D69A0(v16, v28);
    sub_8D6E40(v16, 32);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v33 <= 0x40 )
      goto LABEL_18;
    v24 = v32;
    if ( !v32 )
      goto LABEL_18;
    goto LABEL_50;
  }
  if ( v33 > 0x40 && v32 )
  {
    operator delete[](v32);
    return 0;
  }
  return result;
}

