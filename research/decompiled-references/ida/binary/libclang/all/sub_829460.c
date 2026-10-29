__int64 __fastcall sub_829460(__int64 **a1, int a2)
{
  __int64 *v2; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  bool v5; // al
  const char *v6; // r15
  unsigned int v7; // eax
  __int64 result; // rax
  unsigned __int8 **v9; // rbx
  unsigned __int8 *v10; // r12
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  unsigned __int8 *v13; // r12
  unsigned __int8 *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 *v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r13
  void *v24; // rdi
  unsigned __int8 *v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r13
  void *v31; // rdi

  v2 = *a1;
  v3 = (*a1)[4];
  v4 = *(_QWORD *)(v3 + 24);
  if ( v4
    && (v5 = sub_79C450(*(_QWORD *)(v3 + 24)), v2 = *a1, v5)
    && (v15 = *(_QWORD *)(v4 + 40), (v15 & 7) == 0)
    && (v16 = v15 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (v17 = *(_QWORD *)(v16 + 16), *(_DWORD *)v17 == 18)
    && !(*(_QWORD *)(v17 + 24) ^ 0x69746566696C5F6ELL | *(_QWORD *)(v17 + 16) ^ 0x69687469775F7369LL)
    && *(_WORD *)(v17 + 32) == 25965 )
  {
    v6 = "std::is_within_lifetime";
    result = sub_A2E050(*a1, *(unsigned int *)(v2[4] + 168), 2127, 0);
    v9 = (unsigned __int8 **)result;
  }
  else
  {
    v6 = "__builtin_is_within_lifetime";
    v7 = sub_8124E0(*a1[1]);
    result = sub_A2E050(v2, v7, 2127, 0);
    v9 = (unsigned __int8 **)result;
  }
  if ( v9 )
  {
    v10 = *v9;
    if ( !*v9 )
    {
      v18 = v9[1];
      v19 = *((_DWORD *)v18 + 3744);
      if ( v19 )
      {
        v20 = (unsigned int)(v19 - 1);
        *((_DWORD *)v18 + 3744) = v20;
        v10 = *(unsigned __int8 **)&v18[8 * v20 + 14848];
        v21 = *((unsigned int *)v10 + 134);
        v22 = *((_QWORD *)v10 + 66);
        *v10 = 0;
        *((_DWORD *)v10 + 106) = 0;
        v23 = v22 + (v21 << 6);
        while ( v22 != v23 )
        {
          while ( 1 )
          {
            v23 -= 64;
            v24 = *(void **)(v23 + 24);
            if ( v24 == (void *)(v23 + 40) )
              break;
            operator delete(v24, *(_QWORD *)(v23 + 40) + 1LL);
            if ( v22 == v23 )
              goto LABEL_20;
          }
        }
LABEL_20:
        *((_DWORD *)v10 + 134) = 0;
      }
      else
      {
        v10 = (unsigned __int8 *)operator new(0x3A0u);
        *v10 = 0;
        *((_QWORD *)v10 + 12) = v10 + 112;
        *((_QWORD *)v10 + 16) = v10 + 144;
        *((_QWORD *)v10 + 20) = v10 + 176;
        *((_QWORD *)v10 + 24) = v10 + 208;
        *((_QWORD *)v10 + 28) = v10 + 240;
        *((_QWORD *)v10 + 32) = v10 + 272;
        *((_QWORD *)v10 + 36) = v10 + 304;
        *((_QWORD *)v10 + 40) = v10 + 336;
        *((_QWORD *)v10 + 44) = v10 + 368;
        *((_QWORD *)v10 + 48) = v10 + 400;
        *((_QWORD *)v10 + 13) = 0;
        v10[112] = 0;
        *((_QWORD *)v10 + 17) = 0;
        v10[144] = 0;
        *((_QWORD *)v10 + 21) = 0;
        v10[176] = 0;
        *((_QWORD *)v10 + 25) = 0;
        v10[208] = 0;
        *((_QWORD *)v10 + 29) = 0;
        v10[240] = 0;
        *((_QWORD *)v10 + 33) = 0;
        v10[272] = 0;
        *((_QWORD *)v10 + 37) = 0;
        v10[304] = 0;
        *((_QWORD *)v10 + 41) = 0;
        v10[336] = 0;
        *((_QWORD *)v10 + 45) = 0;
        v10[368] = 0;
        *((_QWORD *)v10 + 49) = 0;
        v10[400] = 0;
        *((_QWORD *)v10 + 52) = v10 + 432;
        *((_QWORD *)v10 + 53) = 0x800000000LL;
        *((_QWORD *)v10 + 66) = v10 + 544;
        *((_QWORD *)v10 + 67) = 0x600000000LL;
      }
      *v9 = v10;
    }
    v10[*v10 + 1] = 1;
    v11 = *v9;
    v12 = **v9;
    *v11 = v12 + 1;
    *(_QWORD *)&v11[8 * v12 + 16] = v6;
    v13 = *v9;
    if ( !*v9 )
    {
      v25 = v9[1];
      v26 = *((_DWORD *)v25 + 3744);
      if ( v26 )
      {
        v27 = (unsigned int)(v26 - 1);
        *((_DWORD *)v25 + 3744) = v27;
        v13 = *(unsigned __int8 **)&v25[8 * v27 + 14848];
        v28 = *((unsigned int *)v13 + 134);
        v29 = *((_QWORD *)v13 + 66);
        *v13 = 0;
        *((_DWORD *)v13 + 106) = 0;
        v30 = v29 + (v28 << 6);
        while ( v29 != v30 )
        {
          while ( 1 )
          {
            v30 -= 64;
            v31 = *(void **)(v30 + 24);
            if ( v31 == (void *)(v30 + 40) )
              break;
            operator delete(v31, *(_QWORD *)(v30 + 40) + 1LL);
            if ( v29 == v30 )
              goto LABEL_27;
          }
        }
LABEL_27:
        *((_DWORD *)v13 + 134) = 0;
      }
      else
      {
        v13 = (unsigned __int8 *)operator new(0x3A0u);
        *v13 = 0;
        *((_QWORD *)v13 + 12) = v13 + 112;
        *((_QWORD *)v13 + 16) = v13 + 144;
        *((_QWORD *)v13 + 20) = v13 + 176;
        *((_QWORD *)v13 + 24) = v13 + 208;
        *((_QWORD *)v13 + 28) = v13 + 240;
        *((_QWORD *)v13 + 32) = v13 + 272;
        *((_QWORD *)v13 + 36) = v13 + 304;
        *((_QWORD *)v13 + 40) = v13 + 336;
        *((_QWORD *)v13 + 44) = v13 + 368;
        *((_QWORD *)v13 + 48) = v13 + 400;
        *((_QWORD *)v13 + 13) = 0;
        v13[112] = 0;
        *((_QWORD *)v13 + 17) = 0;
        v13[144] = 0;
        *((_QWORD *)v13 + 21) = 0;
        v13[176] = 0;
        *((_QWORD *)v13 + 25) = 0;
        v13[208] = 0;
        *((_QWORD *)v13 + 29) = 0;
        v13[240] = 0;
        *((_QWORD *)v13 + 33) = 0;
        v13[272] = 0;
        *((_QWORD *)v13 + 37) = 0;
        v13[304] = 0;
        *((_QWORD *)v13 + 41) = 0;
        v13[336] = 0;
        *((_QWORD *)v13 + 45) = 0;
        v13[368] = 0;
        *((_QWORD *)v13 + 49) = 0;
        v13[400] = 0;
        *((_QWORD *)v13 + 52) = v13 + 432;
        *((_QWORD *)v13 + 53) = 0x800000000LL;
        *((_QWORD *)v13 + 66) = v13 + 544;
        *((_QWORD *)v13 + 67) = 0x600000000LL;
      }
      *v9 = v13;
    }
    v13[*v13 + 1] = 2;
    v14 = *v9;
    result = **v9;
    *v14 = result + 1;
    *(_QWORD *)&v14[8 * result + 16] = a2;
  }
  return result;
}

