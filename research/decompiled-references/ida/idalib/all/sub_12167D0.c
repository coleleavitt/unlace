void __fastcall sub_12167D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int8 *v4; // rbx
  __int64 v5; // r13
  unsigned __int8 *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rbp
  void *v14; // rdi
  unsigned __int8 *v15; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+8h] [rbp-70h]

  switch ( *(_DWORD *)(a2 + 12) )
  {
    case '&':
      sub_10DC5D0(a3, (__int64)"-S");
      break;
    case '+':
    case ',':
    case '-':
    case '.':
    case ':':
      sub_10DC5D0(a3, (__int64)"-c");
      break;
    case 'C':
      sub_10DC5D0(a3, (__int64)"-fsyntax-only");
      break;
    default:
      sub_FC70B0((__int64)&v15, **(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL), 0, 381);
      v3 = sub_12CC8C0(*(unsigned int *)(a2 + 12));
      v4 = v15;
      v5 = v3;
      if ( !v15 )
      {
        v8 = v16;
        v9 = *(_DWORD *)(v16 + 14976);
        if ( v9 )
        {
          v10 = (unsigned int)(v9 - 1);
          *(_DWORD *)(v16 + 14976) = v10;
          v4 = *(unsigned __int8 **)(v8 + 8 * v10 + 14848);
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
              operator delete(v14);
              if ( v12 == v13 )
                goto LABEL_14;
            }
          }
LABEL_14:
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
        v15 = v4;
      }
      v4[*v4 + 1] = 1;
      v6 = v15;
      v7 = *v15;
      *v15 = v7 + 1;
      *(_QWORD *)&v6[8 * v7 + 16] = v5;
      sub_AEA040((__int64)&v15);
      break;
  }
}
