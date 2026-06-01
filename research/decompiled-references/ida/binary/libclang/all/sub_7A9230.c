unsigned __int8 **__fastcall sub_7A9230(unsigned __int8 **a1, int a2)
{
  char *v2; // r14
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rdx
  __int64 v6; // rax
  unsigned __int8 *v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r12
  void *v14; // rdi

  v2 = "protected";
  if ( a2 != 1 )
  {
    v2 = "private";
    if ( a2 != 2 )
      v2 = "public";
  }
  v4 = *a1;
  if ( !*a1 )
  {
    v8 = a1[1];
    v9 = *((_DWORD *)v8 + 3744);
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      *((_DWORD *)v8 + 3744) = v10;
      v4 = *(unsigned __int8 **)&v8[8 * v10 + 14848];
      v11 = *((unsigned int *)v4 + 134);
      *v4 = 0;
      v12 = *((_QWORD *)v4 + 66);
      *((_DWORD *)v4 + 106) = 0;
      v13 = v12 + (v11 << 6);
      while ( v12 != v13 )
      {
        while ( 1 )
        {
          v13 -= 64;
          v14 = *(void **)(v13 + 24);
          if ( v14 == (void *)(v13 + 40) )
            break;
          operator delete(v14, *(_QWORD *)(v13 + 40) + 1LL);
          if ( v12 == v13 )
            goto LABEL_11;
        }
      }
LABEL_11:
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
      *((_QWORD *)v4 + 52) = v4 + 432;
      *((_QWORD *)v4 + 53) = 0x800000000LL;
      *((_QWORD *)v4 + 66) = v4 + 544;
      *((_QWORD *)v4 + 67) = 0x600000000LL;
    }
    *a1 = v4;
  }
  v4[*v4 + 1] = 1;
  v5 = *a1;
  v6 = **a1;
  *v5 = v6 + 1;
  *(_QWORD *)&v5[8 * v6 + 16] = v2;
  return a1;
}

