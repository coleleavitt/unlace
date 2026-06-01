__int64 __fastcall sub_BEFEF0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rax
  unsigned __int8 *v6; // rbx
  _QWORD *v7; // rbp
  _BYTE *v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r12
  void *v17; // rdi

  v4 = sub_EC7AA0(a2);
  v5 = sub_E0FF40(a1, v4, 2391, 0);
  if ( v5 )
  {
    v6 = *(unsigned __int8 **)v5;
    v7 = (_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
    {
      v11 = *(_QWORD *)(v5 + 8);
      v12 = *(_DWORD *)(v11 + 14976);
      if ( v12 )
      {
        v13 = (unsigned int)(v12 - 1);
        *(_DWORD *)(v11 + 14976) = v13;
        v6 = *(unsigned __int8 **)(v11 + 8 * v13 + 14848);
        v14 = *((unsigned int *)v6 + 134);
        *v6 = 0;
        v15 = *((_QWORD *)v6 + 66);
        *((_DWORD *)v6 + 106) = 0;
        v16 = v15 + (v14 << 6);
        while ( v15 != v16 )
        {
          while ( 1 )
          {
            v16 -= 64;
            v17 = *(void **)(v16 + 24);
            if ( v17 == (void *)(v16 + 40) )
              break;
            operator delete(v17);
            if ( v15 == v16 )
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
        *((_QWORD *)v6 + 52) = v6 + 432;
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
        *((_QWORD *)v6 + 53) = 0x800000000LL;
        *((_QWORD *)v6 + 66) = v6 + 544;
        *((_QWORD *)v6 + 67) = 0x600000000LL;
      }
      *v7 = v6;
    }
    v6[*v6 + 1] = 8;
    v8 = (_BYTE *)*v7;
    v9 = *(unsigned __int8 *)*v7;
    *v8 = v9 + 1;
    *(_QWORD *)&v8[8 * v9 + 16] = a3;
  }
  return 0;
}

