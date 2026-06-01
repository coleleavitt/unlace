unsigned __int8 **__fastcall sub_A44EA0(unsigned __int8 **a1, __int64 *a2)
{
  __int64 v2; // r13
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rdx
  __int64 v6; // rax
  unsigned __int8 *v8; // rdx
  __int64 v9; // rax
  unsigned __int8 *v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r12
  void *v16; // rdi
  unsigned __int8 *v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r12
  void *v23; // rdi

  v2 = *a2;
  v4 = *a1;
  if ( *a2 )
  {
    if ( !v4 )
    {
      v10 = a1[1];
      v11 = *((_DWORD *)v10 + 3744);
      if ( v11 )
      {
        v12 = (unsigned int)(v11 - 1);
        *((_DWORD *)v10 + 3744) = v12;
        v4 = *(unsigned __int8 **)&v10[8 * v12 + 14848];
        v13 = *((unsigned int *)v4 + 134);
        *v4 = 0;
        v14 = *((_QWORD *)v4 + 66);
        *((_DWORD *)v4 + 106) = 0;
        v15 = v14 + (v13 << 6);
        while ( v14 != v15 )
        {
          while ( 1 )
          {
            v15 -= 64;
            v16 = *(void **)(v15 + 24);
            if ( v16 == (void *)(v15 + 40) )
              break;
            operator delete(v16);
            if ( v14 == v15 )
              goto LABEL_13;
          }
        }
LABEL_13:
        *((_DWORD *)v4 + 134) = 0;
      }
      else
      {
        v4 = (unsigned __int8 *)operator new(0x3A0u);
        *v4 = 0;
        *((_QWORD *)v4 + 12) = v4 + 112;
        *((_QWORD *)v4 + 16) = v4 + 144;
        *((_QWORD *)v4 + 20) = v4 + 176;
        *((_QWORD *)v4 + 24) = v4 + 208;
        *((_QWORD *)v4 + 28) = v4 + 240;
        *((_QWORD *)v4 + 32) = v4 + 272;
        *((_QWORD *)v4 + 36) = v4 + 304;
        *((_QWORD *)v4 + 40) = v4 + 336;
        *((_QWORD *)v4 + 44) = v4 + 368;
        *((_QWORD *)v4 + 48) = v4 + 400;
        *((_QWORD *)v4 + 52) = v4 + 432;
        *((_QWORD *)v4 + 13) = 0;
        v4[112] = 0;
        *((_QWORD *)v4 + 17) = 0;
        v4[144] = 0;
        *((_QWORD *)v4 + 21) = 0;
        v4[176] = 0;
        *((_QWORD *)v4 + 25) = 0;
        v4[208] = 0;
        *((_QWORD *)v4 + 29) = 0;
        v4[240] = 0;
        *((_QWORD *)v4 + 33) = 0;
        v4[272] = 0;
        *((_QWORD *)v4 + 37) = 0;
        v4[304] = 0;
        *((_QWORD *)v4 + 41) = 0;
        v4[336] = 0;
        *((_QWORD *)v4 + 45) = 0;
        v4[368] = 0;
        *((_QWORD *)v4 + 49) = 0;
        v4[400] = 0;
        *((_QWORD *)v4 + 53) = 0x800000000LL;
        *((_QWORD *)v4 + 66) = v4 + 544;
        *((_QWORD *)v4 + 67) = 0x600000000LL;
      }
      *a1 = v4;
    }
    v4[*v4 + 1] = 10;
    v5 = *a1;
    v6 = **a1;
    *v5 = v6 + 1;
    *(_QWORD *)&v5[8 * v6 + 16] = v2;
    return a1;
  }
  else
  {
    if ( !v4 )
    {
      v17 = a1[1];
      v18 = *((_DWORD *)v17 + 3744);
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 1);
        *((_DWORD *)v17 + 3744) = v19;
        v4 = *(unsigned __int8 **)&v17[8 * v19 + 14848];
        v20 = *((unsigned int *)v4 + 134);
        *v4 = 0;
        v21 = *((_QWORD *)v4 + 66);
        *((_DWORD *)v4 + 106) = 0;
        v22 = v21 + (v20 << 6);
        while ( v21 != v22 )
        {
          while ( 1 )
          {
            v22 -= 64;
            v23 = *(void **)(v22 + 24);
            if ( v23 == (void *)(v22 + 40) )
              break;
            operator delete(v23);
            if ( v21 == v22 )
              goto LABEL_19;
          }
        }
LABEL_19:
        *((_DWORD *)v4 + 134) = 0;
      }
      else
      {
        v4 = (unsigned __int8 *)operator new(0x3A0u);
        *v4 = 0;
        *((_QWORD *)v4 + 12) = v4 + 112;
        *((_QWORD *)v4 + 16) = v4 + 144;
        *((_QWORD *)v4 + 20) = v4 + 176;
        *((_QWORD *)v4 + 24) = v4 + 208;
        *((_QWORD *)v4 + 28) = v4 + 240;
        *((_QWORD *)v4 + 32) = v4 + 272;
        *((_QWORD *)v4 + 36) = v4 + 304;
        *((_QWORD *)v4 + 40) = v4 + 336;
        *((_QWORD *)v4 + 44) = v4 + 368;
        *((_QWORD *)v4 + 48) = v4 + 400;
        *((_QWORD *)v4 + 52) = v4 + 432;
        *((_QWORD *)v4 + 13) = 0;
        v4[112] = 0;
        *((_QWORD *)v4 + 17) = 0;
        v4[144] = 0;
        *((_QWORD *)v4 + 21) = 0;
        v4[176] = 0;
        *((_QWORD *)v4 + 25) = 0;
        v4[208] = 0;
        *((_QWORD *)v4 + 29) = 0;
        v4[240] = 0;
        *((_QWORD *)v4 + 33) = 0;
        v4[272] = 0;
        *((_QWORD *)v4 + 37) = 0;
        v4[304] = 0;
        *((_QWORD *)v4 + 41) = 0;
        v4[336] = 0;
        *((_QWORD *)v4 + 45) = 0;
        v4[368] = 0;
        *((_QWORD *)v4 + 49) = 0;
        v4[400] = 0;
        *((_QWORD *)v4 + 53) = 0x800000000LL;
        *((_QWORD *)v4 + 66) = v4 + 544;
        *((_QWORD *)v4 + 67) = 0x600000000LL;
      }
      *a1 = v4;
    }
    v4[*v4 + 1] = 1;
    v8 = *a1;
    v9 = **a1;
    *v8 = v9 + 1;
    *(_QWORD *)&v8[8 * v9 + 16] = "a prior #pragma section";
    return a1;
  }
}

