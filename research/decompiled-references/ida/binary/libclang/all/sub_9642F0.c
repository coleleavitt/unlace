__int64 __fastcall sub_9642F0(__int64 a1, __int64 a2, int *a3, __int64 a4)
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
  int v18; // r15d
  unsigned int v19; // eax
  void *v20; // rdx
  unsigned int v21; // eax
  void *v22; // rdi
  int v23; // ebx
  void *v24; // rdi
  __int64 v25; // [rsp+8h] [rbp-80h]
  __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  void *v27; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-60h]
  void *v29; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-50h]
  char v31; // [rsp+3Ch] [rbp-4Ch]
  void *v32; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v29, 0x1Fu, *(_DWORD *)(a4 + 8));
    v33 = *(_DWORD *)(a4 + 8);
    if ( v33 > 0x40 )
      sub_2585B30(&v32);
    else
      v32 = *(void **)a4;
    sub_8CC340((__int64)&v32, &v29, a4);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
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
    v26 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (void *)sub_A2E1B0(a1, &v26, 2242, 0);
    v12 = *(unsigned int *)(a4 + 8);
    v27 = v11;
    sub_2587BE0(&v32, a4, v12);
    v13 = v33;
    v31 = 0;
    v30 = v33;
    v29 = v32;
    if ( v27 )
    {
      sub_8DF340((unsigned __int8 ***)&v27, (__int64)&v29);
      v13 = v30;
    }
    if ( v13 > 0x40 && v29 )
      operator delete[](v29);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_938B60((__int64)&v32, a4);
      if ( *(_DWORD *)(a4 + 8) > 0x40u )
      {
        if ( *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
      }
      *(_QWORD *)a4 = v32;
      *(_DWORD *)(a4 + 8) = v33;
      return sub_9647C0(a1, a2, a3, a4);
    }
    return result;
  }
  sub_92DD40((__int64)&v32, 0x20u, v8);
  if ( (int)sub_25867A0(a4, &v32) < 0 )
  {
    if ( v33 <= 0x40 || (v24 = v32) == nullptr )
    {
LABEL_18:
      sub_92DD40((__int64)&v32, 0x1Fu, *(_DWORD *)(a4 + 8));
      v17 = sub_922490(a4, (__int64)&v32);
      if ( v33 > 0x40 && v32 )
        operator delete[](v32);
      v18 = -1;
      if ( v17 == 3 )
        goto LABEL_35;
      v19 = *(_DWORD *)(a4 + 8);
      v28 = v19;
      if ( v19 > 0x40 )
      {
        sub_2585B30(&v27);
        v19 = v28;
        v30 = v28;
        if ( v28 > 0x40 )
        {
          sub_2585B30(&v29);
          v19 = v30;
LABEL_25:
          if ( v19 > 0x20 )
          {
            sub_25877E0(&v32, &v29, 32);
            v21 = v33;
            v22 = v32;
            if ( v33 <= 0x40 )
            {
LABEL_27:
              LOBYTE(v23) = 0;
              if ( v21 )
                v23 = (__int64)((_QWORD)v22 << (64 - (unsigned __int8)v21)) >> (64 - (unsigned __int8)v21);
              goto LABEL_29;
            }
            v23 = *(_DWORD *)v32;
          }
          else
          {
            sub_2587BE0(&v32, &v29, 32);
            v21 = v33;
            v22 = v32;
            if ( v33 <= 0x40 )
              goto LABEL_27;
            v23 = *(_DWORD *)v32;
            if ( !v32 )
            {
LABEL_29:
              if ( v30 > 0x40 && v29 )
                operator delete[](v29);
              v18 = *a3 >> v23;
              if ( v28 > 0x40 && v27 )
                operator delete[](v27);
LABEL_35:
              *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v18;
              return 1;
            }
          }
          operator delete[](v22);
          goto LABEL_29;
        }
        v20 = v27;
      }
      else
      {
        v20 = *(void **)a4;
        v30 = v19;
        v27 = v20;
      }
      v29 = v20;
      goto LABEL_25;
    }
LABEL_50:
    operator delete[](v24);
    goto LABEL_18;
  }
  if ( v33 > 0x40 && v32 )
    operator delete[](v32);
  v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v32, a4, *(unsigned int *)(a4 + 8));
  v31 = 0;
  v30 = v33;
  v29 = v32;
  v25 = *(_QWORD *)(v15 + 8);
  v32 = (void *)sub_A2E240(a1, v15, 2220, 0);
  v16 = (unsigned __int8 **)v32;
  if ( v32 )
  {
    sub_8DF340((unsigned __int8 ***)&v32, (__int64)&v29);
    sub_8D69A0(v16, v25);
    sub_8D6E40(v16, 32);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v30 <= 0x40 )
      goto LABEL_18;
    v24 = v29;
    if ( !v29 )
      goto LABEL_18;
    goto LABEL_50;
  }
  if ( v30 > 0x40 && v29 )
  {
    operator delete[](v29);
    return 0;
  }
  return result;
}

