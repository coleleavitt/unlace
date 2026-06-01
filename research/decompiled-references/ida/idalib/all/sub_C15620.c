__int64 __fastcall sub_C15620(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  _QWORD *v6; // r12
  unsigned __int8 *v7; // rbx
  _BYTE *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r13
  void *v16; // rdi

  if ( (a3 & 1) != 0 || (result = 1, (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
  {
    v5 = sub_E33C10(*a1, *a2, 2442, 0);
    v6 = (_QWORD *)v5;
    if ( v5 )
    {
      v7 = *(unsigned __int8 **)v5;
      if ( !*(_QWORD *)v5 )
      {
        v10 = *(_QWORD *)(v5 + 8);
        v11 = *(_DWORD *)(v10 + 14976);
        if ( v11 )
        {
          v12 = (unsigned int)(v11 - 1);
          *(_DWORD *)(v10 + 14976) = v12;
          v7 = *(unsigned __int8 **)(v10 + 8 * v12 + 14848);
          v13 = *((unsigned int *)v7 + 134);
          *v7 = 0;
          v14 = *((_QWORD *)v7 + 66);
          *((_DWORD *)v7 + 106) = 0;
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
          *((_DWORD *)v7 + 134) = 0;
        }
        else
        {
          v7 = (unsigned __int8 *)operator new(0x3A0u);
          *v7 = 0;
          *((_QWORD *)v7 + 12) = v7 + 112;
          *((_QWORD *)v7 + 16) = v7 + 144;
          *((_QWORD *)v7 + 20) = v7 + 176;
          *((_QWORD *)v7 + 24) = v7 + 208;
          *((_QWORD *)v7 + 28) = v7 + 240;
          *((_QWORD *)v7 + 32) = v7 + 272;
          *((_QWORD *)v7 + 36) = v7 + 304;
          *((_QWORD *)v7 + 40) = v7 + 336;
          *((_QWORD *)v7 + 44) = v7 + 368;
          *((_QWORD *)v7 + 48) = v7 + 400;
          *((_QWORD *)v7 + 52) = v7 + 432;
          *((_QWORD *)v7 + 13) = 0;
          v7[112] = 0;
          *((_QWORD *)v7 + 17) = 0;
          v7[144] = 0;
          *((_QWORD *)v7 + 21) = 0;
          v7[176] = 0;
          *((_QWORD *)v7 + 25) = 0;
          v7[208] = 0;
          *((_QWORD *)v7 + 29) = 0;
          v7[240] = 0;
          *((_QWORD *)v7 + 33) = 0;
          v7[272] = 0;
          *((_QWORD *)v7 + 37) = 0;
          v7[304] = 0;
          *((_QWORD *)v7 + 41) = 0;
          v7[336] = 0;
          *((_QWORD *)v7 + 45) = 0;
          v7[368] = 0;
          *((_QWORD *)v7 + 49) = 0;
          v7[400] = 0;
          *((_QWORD *)v7 + 53) = 0x800000000LL;
          *((_QWORD *)v7 + 66) = v7 + 544;
          *((_QWORD *)v7 + 67) = 0x600000000LL;
        }
        *v6 = v7;
      }
      v7[*v7 + 1] = 8;
      v8 = (_BYTE *)*v6;
      v9 = *(unsigned __int8 *)*v6;
      *v8 = v9 + 1;
      *(_QWORD *)&v8[8 * v9 + 16] = a3;
    }
    return 0;
  }
  return result;
}
