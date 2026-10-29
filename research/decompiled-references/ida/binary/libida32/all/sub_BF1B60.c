__int64 __fastcall sub_BF1B60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 **v5; // r13
  __int64 v6; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  const char *v15; // r14
  unsigned __int8 **v16; // rbp
  unsigned int v17; // eax
  unsigned __int8 *v18; // rbx
  unsigned __int8 *v19; // rdx
  __int64 v20; // rax
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  unsigned __int8 *v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // r13
  void *v31; // rdi
  unsigned __int8 *v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // r13
  void *v38; // rdi

  v5 = (unsigned __int64 **)a2;
  v6 = (int)a3;
  v8 = *a1;
  v9 = *(_QWORD *)(v8 + 32);
  v10 = *(_QWORD *)(v9 + 24);
  if ( !v10 )
    goto LABEL_10;
  if ( !sub_B6AF40(*(_QWORD *)(v9 + 24)) )
  {
    v8 = *a1;
LABEL_10:
    v12 = v8;
    goto LABEL_11;
  }
  v11 = *(_QWORD *)(v10 + 40);
  v12 = *a1;
  if ( (v11 & 7) == 0 )
  {
    v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
      if ( *(_DWORD *)v14 == 18 )
      {
        a2 = v14 + 16;
        a3 = *(_QWORD *)(v14 + 16) ^ 0x69687469775F7369LL;
        a4 = a3 | *(_QWORD *)(v14 + 24) ^ 0x69746566696C5F6ELL;
        if ( !a4 && *(_WORD *)(v14 + 32) == 25965 )
        {
          v15 = "std::is_within_lifetime";
          v16 = (unsigned __int8 **)sub_E0FDF0(*a1, *(unsigned int *)(*(_QWORD *)(*a1 + 32LL) + 120LL), 2327, 0);
          goto LABEL_12;
        }
      }
    }
  }
LABEL_11:
  v15 = "__builtin_is_within_lifetime";
  v17 = sub_BDCD00(**v5, a2, a3, a4, a5);
  v16 = (unsigned __int8 **)sub_E0FDF0(v12, v17, 2327, 0);
LABEL_12:
  if ( v16 )
  {
    v18 = *v16;
    if ( !*v16 )
    {
      v25 = v16[1];
      v26 = *((_DWORD *)v25 + 3744);
      if ( v26 )
      {
        v27 = (unsigned int)(v26 - 1);
        *((_DWORD *)v25 + 3744) = v27;
        v18 = *(unsigned __int8 **)&v25[8 * v27 + 14848];
        v28 = *((unsigned int *)v18 + 134);
        *v18 = 0;
        v29 = *((_QWORD *)v18 + 66);
        *((_DWORD *)v18 + 106) = 0;
        v30 = v29 + (v28 << 6);
        while ( v29 != v30 )
        {
          while ( 1 )
          {
            v30 -= 64;
            v31 = *(void **)(v30 + 24);
            if ( v31 == (void *)(v30 + 40) )
              break;
            operator delete(v31);
            if ( v29 == v30 )
              goto LABEL_22;
          }
        }
LABEL_22:
        *((_DWORD *)v18 + 134) = 0;
      }
      else
      {
        v18 = (unsigned __int8 *)operator new(0x3A0u);
        *v18 = 0;
        *((_QWORD *)v18 + 12) = v18 + 112;
        *((_QWORD *)v18 + 16) = v18 + 144;
        *((_QWORD *)v18 + 20) = v18 + 176;
        *((_QWORD *)v18 + 24) = v18 + 208;
        *((_QWORD *)v18 + 28) = v18 + 240;
        *((_QWORD *)v18 + 32) = v18 + 272;
        *((_QWORD *)v18 + 36) = v18 + 304;
        *((_QWORD *)v18 + 40) = v18 + 336;
        *((_QWORD *)v18 + 44) = v18 + 368;
        *((_QWORD *)v18 + 48) = v18 + 400;
        *((_QWORD *)v18 + 52) = v18 + 432;
        *((_QWORD *)v18 + 13) = 0;
        v18[112] = 0;
        *((_QWORD *)v18 + 17) = 0;
        v18[144] = 0;
        *((_QWORD *)v18 + 21) = 0;
        v18[176] = 0;
        *((_QWORD *)v18 + 25) = 0;
        v18[208] = 0;
        *((_QWORD *)v18 + 29) = 0;
        v18[240] = 0;
        *((_QWORD *)v18 + 33) = 0;
        v18[272] = 0;
        *((_QWORD *)v18 + 37) = 0;
        v18[304] = 0;
        *((_QWORD *)v18 + 41) = 0;
        v18[336] = 0;
        *((_QWORD *)v18 + 45) = 0;
        v18[368] = 0;
        *((_QWORD *)v18 + 49) = 0;
        v18[400] = 0;
        *((_QWORD *)v18 + 53) = 0x800000000LL;
        *((_QWORD *)v18 + 66) = v18 + 544;
        *((_QWORD *)v18 + 67) = 0x600000000LL;
      }
      *v16 = v18;
    }
    v18[*v18 + 1] = 1;
    v19 = *v16;
    v20 = **v16;
    *v19 = v20 + 1;
    *(_QWORD *)&v19[8 * v20 + 16] = v15;
    v21 = *v16;
    if ( !*v16 )
    {
      v32 = v16[1];
      v33 = *((_DWORD *)v32 + 3744);
      if ( v33 )
      {
        v34 = (unsigned int)(v33 - 1);
        *((_DWORD *)v32 + 3744) = v34;
        v21 = *(unsigned __int8 **)&v32[8 * v34 + 14848];
        v35 = *((unsigned int *)v21 + 134);
        *v21 = 0;
        v36 = *((_QWORD *)v21 + 66);
        *((_DWORD *)v21 + 106) = 0;
        v37 = v36 + (v35 << 6);
        while ( v36 != v37 )
        {
          while ( 1 )
          {
            v37 -= 64;
            v38 = *(void **)(v37 + 24);
            if ( v38 == (void *)(v37 + 40) )
              break;
            operator delete(v38);
            if ( v36 == v37 )
              goto LABEL_28;
          }
        }
LABEL_28:
        *((_DWORD *)v21 + 134) = 0;
      }
      else
      {
        v21 = (unsigned __int8 *)operator new(0x3A0u);
        *v21 = 0;
        *((_QWORD *)v21 + 12) = v21 + 112;
        *((_QWORD *)v21 + 16) = v21 + 144;
        *((_QWORD *)v21 + 20) = v21 + 176;
        *((_QWORD *)v21 + 24) = v21 + 208;
        *((_QWORD *)v21 + 28) = v21 + 240;
        *((_QWORD *)v21 + 32) = v21 + 272;
        *((_QWORD *)v21 + 36) = v21 + 304;
        *((_QWORD *)v21 + 40) = v21 + 336;
        *((_QWORD *)v21 + 44) = v21 + 368;
        *((_QWORD *)v21 + 48) = v21 + 400;
        *((_QWORD *)v21 + 52) = v21 + 432;
        *((_QWORD *)v21 + 13) = 0;
        v21[112] = 0;
        *((_QWORD *)v21 + 17) = 0;
        v21[144] = 0;
        *((_QWORD *)v21 + 21) = 0;
        v21[176] = 0;
        *((_QWORD *)v21 + 25) = 0;
        v21[208] = 0;
        *((_QWORD *)v21 + 29) = 0;
        v21[240] = 0;
        *((_QWORD *)v21 + 33) = 0;
        v21[272] = 0;
        *((_QWORD *)v21 + 37) = 0;
        v21[304] = 0;
        *((_QWORD *)v21 + 41) = 0;
        v21[336] = 0;
        *((_QWORD *)v21 + 45) = 0;
        v21[368] = 0;
        *((_QWORD *)v21 + 49) = 0;
        v21[400] = 0;
        *((_QWORD *)v21 + 53) = 0x800000000LL;
        *((_QWORD *)v21 + 66) = v21 + 544;
        *((_QWORD *)v21 + 67) = 0x600000000LL;
      }
      *v16 = v21;
    }
    v21[*v21 + 1] = 2;
    v22 = *v16;
    v23 = **v16;
    *v22 = v23 + 1;
    *(_QWORD *)&v22[8 * v23 + 16] = v6;
  }
  return 0;
}

