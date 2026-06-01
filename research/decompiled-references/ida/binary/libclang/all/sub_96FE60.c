__int64 __fastcall sub_96FE60(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
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
  unsigned __int16 v25; // cx
  unsigned int v26; // esi
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+18h] [rbp-70h] BYREF
  void *v31; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-60h]
  void *v33; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-50h]
  char v35; // [rsp+3Ch] [rbp-4Ch]
  void *v36; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v33, 0xFu, *(_DWORD *)(a4 + 8));
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
    v30 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (void *)sub_A2E1B0(a1, &v30, 2242, 0);
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
      return sub_970400(a1, a2, a3, a4);
    }
    return result;
  }
  sub_92DD40((__int64)&v36, 0x10u, v8);
  if ( (int)sub_25867A0(a4, &v36) < 0 )
  {
    if ( v37 <= 0x40 || (v24 = v36) == nullptr )
    {
LABEL_18:
      sub_92DD40((__int64)&v36, 0xFu, *(_DWORD *)(a4 + 8));
      v17 = sub_922490(a4, (__int64)&v36);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
      v18 = *(_DWORD *)(a4 + 8);
      if ( v17 == 3 )
      {
        v25 = *a3;
        v26 = 16;
        if ( *a3 )
        {
          v27 = v25;
          v26 = 8;
          if ( (v25 & 0xFF00) != 0 )
          {
            v26 = 0;
            v27 = HIBYTE(v25);
          }
          if ( v27 >> 4 )
            v27 >>= 4;
          else
            v26 |= 4u;
          if ( v27 >> 2 )
            v27 >>= 2;
          else
            v26 |= 2u;
          if ( !((unsigned int)v27 >> 1) )
            v26 |= 1u;
        }
        sub_92DD40((__int64)&v36, v26, v18);
        if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
        *(_QWORD *)a4 = v36;
        v28 = v37;
        *(_DWORD *)(a4 + 8) = v37;
        if ( v28 > 0x40 )
          sub_2585B30(&v36);
        v22 = *a3 << sub_8CC860((__int64)&v36);
        if ( v37 <= 0x40 )
          goto LABEL_35;
        v23 = v36;
        if ( !v36 )
          goto LABEL_35;
LABEL_34:
        operator delete[](v23);
LABEL_35:
        *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v22;
        return 1;
      }
      v32 = *(_DWORD *)(a4 + 8);
      if ( v18 > 0x40 )
      {
        sub_2585B30(&v31);
        v18 = v32;
        v34 = v32;
        if ( v32 > 0x40 )
        {
          sub_2585B30(&v33);
          v18 = v34;
LABEL_25:
          if ( v18 > 0x10 )
          {
            sub_25877E0(&v36, &v33, 16);
            v20 = v36;
            LOBYTE(v21) = (_BYTE)v36;
            if ( v37 <= 0x40 )
              goto LABEL_29;
            LOWORD(v21) = *(_WORD *)v36;
          }
          else
          {
            sub_2587BE0(&v36, &v33, 16);
            v20 = v36;
            LOBYTE(v21) = (_BYTE)v36;
            if ( v37 <= 0x40 || (v21 = *(_QWORD *)v36, !v36) )
            {
LABEL_29:
              if ( v34 > 0x40 && v33 )
                operator delete[](v33);
              v22 = *a3 << v21;
              if ( v32 <= 0x40 )
                goto LABEL_35;
              v23 = v31;
              if ( !v31 )
                goto LABEL_35;
              goto LABEL_34;
            }
          }
          operator delete[](v20);
          goto LABEL_29;
        }
        v19 = v31;
      }
      else
      {
        v19 = *(void **)a4;
        v34 = v18;
        v31 = v19;
      }
      v33 = v19;
      goto LABEL_25;
    }
LABEL_50:
    operator delete[](v24);
    goto LABEL_18;
  }
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587BE0(&v36, a4, *(unsigned int *)(a4 + 8));
  v35 = 0;
  v34 = v37;
  v33 = v36;
  v29 = *(_QWORD *)(v15 + 8);
  v36 = (void *)sub_A2E240(a1, v15, 2220, 0);
  v16 = (unsigned __int8 **)v36;
  if ( v36 )
  {
    sub_8DF340((unsigned __int8 ***)&v36, (__int64)&v33);
    sub_8D69A0(v16, v29);
    sub_8D6E40(v16, 16);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v34 <= 0x40 )
      goto LABEL_18;
    v24 = v33;
    if ( !v33 )
      goto LABEL_18;
    goto LABEL_50;
  }
  if ( v34 > 0x40 && v33 )
  {
    operator delete[](v33);
    return 0;
  }
  return result;
}

