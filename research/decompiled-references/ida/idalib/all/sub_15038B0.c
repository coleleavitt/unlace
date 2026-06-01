__int64 __fastcall sub_15038B0(unsigned __int8 **a1)
{
  unsigned __int8 *v2; // rbx
  unsigned __int8 *v3; // rdx
  __int64 result; // rax
  unsigned __int8 *v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rbp
  void *v11; // rdi

  v2 = *a1;
  if ( !*a1 )
  {
    v5 = a1[1];
    v6 = *((_DWORD *)v5 + 3744);
    if ( v6 )
    {
      v7 = (unsigned int)(v6 - 1);
      *((_DWORD *)v5 + 3744) = v7;
      v2 = *(unsigned __int8 **)&v5[8 * v7 + 14848];
      v8 = *((unsigned int *)v2 + 134);
      *v2 = 0;
      v9 = *((_QWORD *)v2 + 66);
      *((_DWORD *)v2 + 106) = 0;
      v10 = v9 + (v8 << 6);
      while ( v9 != v10 )
      {
        while ( 1 )
        {
          v10 -= 64;
          v11 = *(void **)(v10 + 24);
          if ( v11 == (void *)(v10 + 40) )
            break;
          operator delete(v11);
          if ( v9 == v10 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *((_DWORD *)v2 + 134) = 0;
    }
    else
    {
      v2 = (unsigned __int8 *)operator new(0x3A0u);
      *v2 = 0;
      *((_QWORD *)v2 + 12) = v2 + 112;
      *((_QWORD *)v2 + 16) = v2 + 144;
      *((_QWORD *)v2 + 20) = v2 + 176;
      *((_QWORD *)v2 + 24) = v2 + 208;
      *((_QWORD *)v2 + 28) = v2 + 240;
      *((_QWORD *)v2 + 32) = v2 + 272;
      *((_QWORD *)v2 + 36) = v2 + 304;
      *((_QWORD *)v2 + 40) = v2 + 336;
      *((_QWORD *)v2 + 44) = v2 + 368;
      *((_QWORD *)v2 + 48) = v2 + 400;
      *((_QWORD *)v2 + 52) = v2 + 432;
      *((_QWORD *)v2 + 13) = 0;
      v2[112] = 0;
      *((_QWORD *)v2 + 17) = 0;
      v2[144] = 0;
      *((_QWORD *)v2 + 21) = 0;
      v2[176] = 0;
      *((_QWORD *)v2 + 25) = 0;
      v2[208] = 0;
      *((_QWORD *)v2 + 29) = 0;
      v2[240] = 0;
      *((_QWORD *)v2 + 33) = 0;
      v2[272] = 0;
      *((_QWORD *)v2 + 37) = 0;
      v2[304] = 0;
      *((_QWORD *)v2 + 41) = 0;
      v2[336] = 0;
      *((_QWORD *)v2 + 45) = 0;
      v2[368] = 0;
      *((_QWORD *)v2 + 49) = 0;
      v2[400] = 0;
      *((_QWORD *)v2 + 53) = 0x800000000LL;
      *((_QWORD *)v2 + 66) = v2 + 544;
      *((_QWORD *)v2 + 67) = 0x600000000LL;
    }
    *a1 = v2;
  }
  v2[*v2 + 1] = 2;
  v3 = *a1;
  result = **a1;
  *v3 = result + 1;
  *(_QWORD *)&v3[8 * result + 16] = 0;
  return result;
}
