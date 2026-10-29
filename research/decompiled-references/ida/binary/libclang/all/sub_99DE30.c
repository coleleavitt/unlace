__int64 __fastcall sub_99DE30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r13
  unsigned __int8 **v7; // rbx
  unsigned __int8 *v8; // rdx
  __int64 v9; // rax
  unsigned __int8 *v10; // r13
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  unsigned __int8 *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r14
  void *v20; // rdi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r14
  void *v27; // rdi

  v5 = sub_A2E1A0(a1, a2, 2288, 0);
  if ( v5 )
  {
    v6 = *(unsigned __int8 **)v5;
    v7 = (unsigned __int8 **)v5;
    if ( !*(_QWORD *)v5 )
    {
      v21 = *(_QWORD *)(v5 + 8);
      v22 = *(_DWORD *)(v21 + 14976);
      if ( v22 )
      {
        v23 = (unsigned int)(v22 - 1);
        *(_DWORD *)(v21 + 14976) = v23;
        v6 = *(unsigned __int8 **)(v21 + 8 * v23 + 14848);
        v24 = *((unsigned int *)v6 + 134);
        *v6 = 0;
        v25 = *((_QWORD *)v6 + 66);
        *((_DWORD *)v6 + 106) = 0;
        v26 = v25 + (v24 << 6);
        while ( v25 != v26 )
        {
          while ( 1 )
          {
            v26 -= 64;
            v27 = *(void **)(v26 + 24);
            if ( v27 == (void *)(v26 + 40) )
              break;
            operator delete(v27, *(_QWORD *)(v26 + 40) + 1LL);
            if ( v25 == v26 )
              goto LABEL_18;
          }
        }
LABEL_18:
        *((_DWORD *)v6 + 134) = 0;
      }
      else
      {
        v6 = (unsigned __int8 *)operator new(0x3A0u);
        *v6 = 0;
        *((_QWORD *)v6 + 12) = v6 + 112;
        *((_QWORD *)v6 + 16) = v6 + 144;
        *((_QWORD *)v6 + 20) = v6 + 176;
        *((_QWORD *)v6 + 24) = v6 + 208;
        *((_QWORD *)v6 + 28) = v6 + 240;
        *((_QWORD *)v6 + 32) = v6 + 272;
        *((_QWORD *)v6 + 36) = v6 + 304;
        *((_QWORD *)v6 + 40) = v6 + 336;
        *((_QWORD *)v6 + 44) = v6 + 368;
        *((_QWORD *)v6 + 48) = v6 + 400;
        *((_QWORD *)v6 + 13) = 0;
        v6[112] = 0;
        *((_QWORD *)v6 + 17) = 0;
        v6[144] = 0;
        *((_QWORD *)v6 + 21) = 0;
        v6[176] = 0;
        *((_QWORD *)v6 + 25) = 0;
        v6[208] = 0;
        *((_QWORD *)v6 + 29) = 0;
        v6[240] = 0;
        *((_QWORD *)v6 + 33) = 0;
        v6[272] = 0;
        *((_QWORD *)v6 + 37) = 0;
        v6[304] = 0;
        *((_QWORD *)v6 + 41) = 0;
        v6[336] = 0;
        *((_QWORD *)v6 + 45) = 0;
        v6[368] = 0;
        *((_QWORD *)v6 + 49) = 0;
        v6[400] = 0;
        *((_QWORD *)v6 + 52) = v6 + 432;
        *((_QWORD *)v6 + 53) = 0x800000000LL;
        *((_QWORD *)v6 + 66) = v6 + 544;
        *((_QWORD *)v6 + 67) = 0x600000000LL;
      }
      *v7 = v6;
    }
    v6[*v6 + 1] = 2;
    v8 = *v7;
    v9 = **v7;
    *v8 = v9 + 1;
    *(_QWORD *)&v8[8 * v9 + 16] = 1;
    v10 = *v7;
    if ( !*v7 )
    {
      v14 = v7[1];
      v15 = *((_DWORD *)v14 + 3744);
      if ( v15 )
      {
        v16 = (unsigned int)(v15 - 1);
        *((_DWORD *)v14 + 3744) = v16;
        v10 = *(unsigned __int8 **)&v14[8 * v16 + 14848];
        v17 = *((unsigned int *)v10 + 134);
        *v10 = 0;
        v18 = *((_QWORD *)v10 + 66);
        *((_DWORD *)v10 + 106) = 0;
        v19 = v18 + (v17 << 6);
        while ( v18 != v19 )
        {
          while ( 1 )
          {
            v19 -= 64;
            v20 = *(void **)(v19 + 24);
            if ( v20 == (void *)(v19 + 40) )
              break;
            operator delete(v20, *(_QWORD *)(v19 + 40) + 1LL);
            if ( v18 == v19 )
              goto LABEL_11;
          }
        }
LABEL_11:
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
      *v7 = v10;
    }
    v10[*v10 + 1] = 10;
    v11 = *v7;
    v12 = **v7;
    *v11 = v12 + 1;
    *(_QWORD *)&v11[8 * v12 + 16] = a3;
  }
  return sub_A2DD70(a1, *(unsigned int *)(a3 + 24), 2284);
}

