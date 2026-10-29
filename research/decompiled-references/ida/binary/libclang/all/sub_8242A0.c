__int64 __fastcall sub_8242A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 result; // rax
  unsigned __int8 *v6; // rbp
  _QWORD *v7; // rbx
  _BYTE *v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r13
  void *v15; // rdi

  v4 = sub_AC6DA0(a2);
  result = sub_A2E1A0(a1, v4, 2189, 0);
  if ( result )
  {
    v6 = *(unsigned __int8 **)result;
    v7 = (_QWORD *)result;
    if ( !*(_QWORD *)result )
    {
      v9 = *(_QWORD *)(result + 8);
      v10 = *(_DWORD *)(v9 + 14976);
      if ( v10 )
      {
        v11 = (unsigned int)(v10 - 1);
        *(_DWORD *)(v9 + 14976) = v11;
        v6 = *(unsigned __int8 **)(v9 + 8 * v11 + 14848);
        v12 = *((unsigned int *)v6 + 134);
        *v6 = 0;
        v13 = *((_QWORD *)v6 + 66);
        *((_DWORD *)v6 + 106) = 0;
        v14 = v13 + (v12 << 6);
        while ( v13 != v14 )
        {
          while ( 1 )
          {
            v14 -= 64;
            v15 = *(void **)(v14 + 24);
            if ( v15 == (void *)(v14 + 40) )
              break;
            operator delete(v15, *(_QWORD *)(v14 + 40) + 1LL);
            if ( v13 == v14 )
              goto LABEL_10;
          }
        }
LABEL_10:
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
    v6[*v6 + 1] = 8;
    v8 = (_BYTE *)*v7;
    result = *(unsigned __int8 *)*v7;
    *v8 = result + 1;
    *(_QWORD *)&v8[8 * result + 16] = a3;
  }
  return result;
}

