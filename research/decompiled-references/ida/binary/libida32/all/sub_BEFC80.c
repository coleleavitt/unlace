__int64 __fastcall sub_BEFC80(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbp
  unsigned __int8 *v3; // rbx
  __int64 v4; // r13
  _BYTE *v5; // rdx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r12
  void *v12; // rdi

  result = sub_E0FF50(a1, *(_QWORD *)(*(_QWORD *)(a1 + 872) + 96LL), 2441, 0);
  if ( result )
  {
    v2 = (_QWORD *)result;
    v3 = *(unsigned __int8 **)result;
    v4 = (unsigned int)*(_QWORD *)(a1 + 888) - 1;
    if ( !*(_QWORD *)result )
    {
      v6 = *(_QWORD *)(result + 8);
      v7 = *(_DWORD *)(v6 + 14976);
      if ( v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        *(_DWORD *)(v6 + 14976) = v8;
        v3 = *(unsigned __int8 **)(v6 + 8 * v8 + 14848);
        v9 = *((unsigned int *)v3 + 134);
        *v3 = 0;
        v10 = *((_QWORD *)v3 + 66);
        *((_DWORD *)v3 + 106) = 0;
        v11 = v10 + (v9 << 6);
        while ( v10 != v11 )
        {
          while ( 1 )
          {
            v11 -= 64;
            v12 = *(void **)(v11 + 24);
            if ( v12 == (void *)(v11 + 40) )
              break;
            operator delete(v12);
            if ( v10 == v11 )
              goto LABEL_10;
          }
        }
LABEL_10:
        *((_DWORD *)v3 + 134) = 0;
      }
      else
      {
        v3 = (unsigned __int8 *)operator new(0x3A0u);
        *v3 = 0;
        *((_QWORD *)v3 + 12) = v3 + 112;
        *((_QWORD *)v3 + 16) = v3 + 144;
        *((_QWORD *)v3 + 20) = v3 + 176;
        *((_QWORD *)v3 + 24) = v3 + 208;
        *((_QWORD *)v3 + 28) = v3 + 240;
        *((_QWORD *)v3 + 32) = v3 + 272;
        *((_QWORD *)v3 + 36) = v3 + 304;
        *((_QWORD *)v3 + 40) = v3 + 336;
        *((_QWORD *)v3 + 44) = v3 + 368;
        *((_QWORD *)v3 + 48) = v3 + 400;
        *((_QWORD *)v3 + 52) = v3 + 432;
        *((_QWORD *)v3 + 13) = 0;
        v3[112] = 0;
        *((_QWORD *)v3 + 17) = 0;
        v3[144] = 0;
        *((_QWORD *)v3 + 21) = 0;
        v3[176] = 0;
        *((_QWORD *)v3 + 25) = 0;
        v3[208] = 0;
        *((_QWORD *)v3 + 29) = 0;
        v3[240] = 0;
        *((_QWORD *)v3 + 33) = 0;
        v3[272] = 0;
        *((_QWORD *)v3 + 37) = 0;
        v3[304] = 0;
        *((_QWORD *)v3 + 41) = 0;
        v3[336] = 0;
        *((_QWORD *)v3 + 45) = 0;
        v3[368] = 0;
        *((_QWORD *)v3 + 49) = 0;
        v3[400] = 0;
        *((_QWORD *)v3 + 53) = 0x800000000LL;
        *((_QWORD *)v3 + 66) = v3 + 544;
        *((_QWORD *)v3 + 67) = 0x600000000LL;
      }
      *v2 = v3;
    }
    v3[*v3 + 1] = 3;
    v5 = (_BYTE *)*v2;
    result = *(unsigned __int8 *)*v2;
    *v5 = result + 1;
    *(_QWORD *)&v5[8 * result + 16] = v4;
  }
  return result;
}

