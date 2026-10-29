__int64 __fastcall sub_AE9DF0(unsigned __int8 **a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rdx
  __int64 result; // rax
  unsigned __int8 *v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rbp
  void *v14; // rdi

  v5 = *a1;
  if ( !*a1 )
  {
    v8 = a1[1];
    v9 = *((_DWORD *)v8 + 3744);
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      *((_DWORD *)v8 + 3744) = v10;
      v5 = *(unsigned __int8 **)&v8[8 * v10 + 14848];
      v11 = *((unsigned int *)v5 + 134);
      *v5 = 0;
      v12 = *((_QWORD *)v5 + 66);
      *((_DWORD *)v5 + 106) = 0;
      v13 = v12 + (v11 << 6);
      while ( v12 != v13 )
      {
        while ( 1 )
        {
          v13 -= 64;
          v14 = *(void **)(v13 + 24);
          if ( v14 == (void *)(v13 + 40) )
            break;
          operator delete(v14);
          if ( v12 == v13 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *((_DWORD *)v5 + 134) = 0;
    }
    else
    {
      v5 = (unsigned __int8 *)operator new(0x3A0u);
      *v5 = 0;
      *((_QWORD *)v5 + 12) = v5 + 112;
      *((_QWORD *)v5 + 16) = v5 + 144;
      *((_QWORD *)v5 + 20) = v5 + 176;
      *((_QWORD *)v5 + 24) = v5 + 208;
      *((_QWORD *)v5 + 28) = v5 + 240;
      *((_QWORD *)v5 + 32) = v5 + 272;
      *((_QWORD *)v5 + 36) = v5 + 304;
      *((_QWORD *)v5 + 40) = v5 + 336;
      *((_QWORD *)v5 + 44) = v5 + 368;
      *((_QWORD *)v5 + 48) = v5 + 400;
      *((_QWORD *)v5 + 52) = v5 + 432;
      *((_QWORD *)v5 + 13) = 0;
      v5[112] = 0;
      *((_QWORD *)v5 + 17) = 0;
      v5[144] = 0;
      *((_QWORD *)v5 + 21) = 0;
      v5[176] = 0;
      *((_QWORD *)v5 + 25) = 0;
      v5[208] = 0;
      *((_QWORD *)v5 + 29) = 0;
      v5[240] = 0;
      *((_QWORD *)v5 + 33) = 0;
      v5[272] = 0;
      *((_QWORD *)v5 + 37) = 0;
      v5[304] = 0;
      *((_QWORD *)v5 + 41) = 0;
      v5[336] = 0;
      *((_QWORD *)v5 + 45) = 0;
      v5[368] = 0;
      *((_QWORD *)v5 + 49) = 0;
      v5[400] = 0;
      *((_QWORD *)v5 + 53) = 0x800000000LL;
      *((_QWORD *)v5 + 66) = v5 + 544;
      *((_QWORD *)v5 + 67) = 0x600000000LL;
    }
    *a1 = v5;
  }
  v5[*v5 + 1] = a3;
  v6 = *a1;
  result = **a1;
  *v6 = result + 1;
  *(_QWORD *)&v6[8 * result + 16] = a2;
  return result;
}
