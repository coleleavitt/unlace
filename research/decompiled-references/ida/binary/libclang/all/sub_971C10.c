__int64 __fastcall sub_971C10(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
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
  __int64 v21; // r12
  int v22; // ebx
  void *v23; // rdi
  void *v24; // rdi
  int v25; // eax
  unsigned int v26; // esi
  int v27; // r9d
  int v28; // r8d
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+18h] [rbp-70h] BYREF
  void *v33; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-60h]
  void *v35; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-50h]
  char v37; // [rsp+3Ch] [rbp-4Ch]
  void *v38; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v35, 7u, *(_DWORD *)(a4 + 8));
    v39 = *(_DWORD *)(a4 + 8);
    if ( v39 > 0x40 )
      sub_2585B30(&v38);
    else
      v38 = *(void **)a4;
    sub_8CC340((__int64)&v38, &v35, a4);
    if ( v39 > 0x40 && v38 )
      operator delete[](v38);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
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
    v32 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (void *)sub_A2E1B0(a1, &v32, 2242, 0);
    v12 = *(unsigned int *)(a4 + 8);
    v33 = v11;
    sub_2587BE0(&v38, a4, v12);
    v13 = v39;
    v37 = 0;
    v36 = v39;
    v35 = v38;
    if ( v33 )
    {
      sub_8DF340((unsigned __int8 ***)&v33, (__int64)&v35);
      v13 = v36;
    }
    if ( v13 > 0x40 && v35 )
      operator delete[](v35);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_938B60((__int64)&v38, a4);
      if ( *(_DWORD *)(a4 + 8) > 0x40u )
      {
        if ( *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
      }
      *(_QWORD *)a4 = v38;
      *(_DWORD *)(a4 + 8) = v39;
      return sub_9721A0(a1, a2, a3, a4);
    }
    return result;
  }
  sub_92DD40((__int64)&v38, 8u, v8);
  if ( (int)sub_25867A0(a4, &v38) < 0 )
  {
    if ( v39 <= 0x40 || (v24 = v38) == nullptr )
    {
LABEL_18:
      sub_92DD40((__int64)&v38, 7u, *(_DWORD *)(a4 + 8));
      v17 = sub_922490(a4, (__int64)&v38);
      if ( v39 > 0x40 && v38 )
        operator delete[](v38);
      v18 = *(_DWORD *)(a4 + 8);
      if ( v17 == 3 )
      {
        v25 = *a3;
        v26 = 8;
        if ( (_BYTE)v25 )
        {
          if ( v25 >> 4 )
          {
            v25 >>= 4;
            v27 = 1;
            v26 = 3;
            v28 = 0;
            v29 = 2;
          }
          else
          {
            v27 = 5;
            v26 = 7;
            v29 = 6;
            v28 = 4;
          }
          if ( v25 >> 2 )
          {
            v26 = v27;
            v25 >>= 2;
            v29 = v28;
          }
          if ( (unsigned int)v25 >> 1 )
            v26 = v29;
        }
        sub_92DD40((__int64)&v38, v26, v18);
        if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
        *(_QWORD *)a4 = v38;
        v30 = v39;
        *(_DWORD *)(a4 + 8) = v39;
        if ( v30 > 0x40 )
          sub_2585B30(&v38);
        v22 = *a3 << sub_8CC910((__int64)&v38);
        if ( v39 <= 0x40 )
          goto LABEL_35;
        v23 = v38;
        if ( !v38 )
          goto LABEL_35;
LABEL_34:
        operator delete[](v23);
LABEL_35:
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v22;
        return 1;
      }
      v34 = *(_DWORD *)(a4 + 8);
      if ( v18 > 0x40 )
      {
        sub_2585B30(&v33);
        v18 = v34;
        v36 = v34;
        if ( v34 > 0x40 )
        {
          sub_2585B30(&v35);
          v18 = v36;
LABEL_25:
          if ( v18 > 8 )
          {
            sub_25877E0(&v38, &v35, 8);
            v20 = v38;
            LOBYTE(v21) = (_BYTE)v38;
            if ( v39 <= 0x40 )
              goto LABEL_29;
            LOBYTE(v21) = *(_BYTE *)v38;
          }
          else
          {
            sub_2587BE0(&v38, &v35, 8);
            v20 = v38;
            LOBYTE(v21) = (_BYTE)v38;
            if ( v39 <= 0x40 || (v21 = *(_QWORD *)v38, !v38) )
            {
LABEL_29:
              if ( v36 > 0x40 && v35 )
                operator delete[](v35);
              v22 = *a3 << v21;
              if ( v34 <= 0x40 )
                goto LABEL_35;
              v23 = v33;
              if ( !v33 )
                goto LABEL_35;
              goto LABEL_34;
            }
          }
          operator delete[](v20);
          goto LABEL_29;
        }
        v19 = v33;
      }
      else
      {
        v19 = *(void **)a4;
        v36 = v18;
        v33 = v19;
      }
      v35 = v19;
      goto LABEL_25;
    }
LABEL_50:
    operator delete[](v24);
    goto LABEL_18;
  }
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v38, a4, *(unsigned int *)(a4 + 8));
  v37 = 0;
  v36 = v39;
  v35 = v38;
  v31 = *(_QWORD *)(v15 + 8);
  v38 = (void *)sub_A2E240(a1, v15, 2220, 0);
  v16 = (unsigned __int8 **)v38;
  if ( v38 )
  {
    sub_8DF340((unsigned __int8 ***)&v38, (__int64)&v35);
    sub_8D69A0(v16, v31);
    sub_8D6E40(v16, 8);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v36 <= 0x40 )
      goto LABEL_18;
    v24 = v35;
    if ( !v35 )
      goto LABEL_18;
    goto LABEL_50;
  }
  if ( v36 > 0x40 && v35 )
  {
    operator delete[](v35);
    return 0;
  }
  return result;
}

