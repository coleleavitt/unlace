__int64 __fastcall CoinMpsCardReader::cleanCard(CoinMpsCardReader *this)
{
  char *v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  unsigned __int8 v5; // al
  char *v6; // rdi
  bool v7; // cl
  bool v8; // si
  char *v9; // rdx
  int v11; // ebp
  _BYTE *v12; // rax
  _BYTE *v13; // r12
  __int64 v14; // rax
  int v15; // ebp
  char *v16; // r14
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r13d
  int v20; // edx
  __m128i si128; // [rsp+0h] [rbp-48h]
  int v22; // [rsp+10h] [rbp-38h]

  v2 = (char *)this + 8;
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 154) + 24LL))(
         *((_QWORD *)this + 154),
         (char *)this + 8,
         880);
  v4 = 1;
  if ( !v3 )
    return v4;
  v5 = *((_BYTE *)this + 8);
  ++*((_DWORD *)this + 311);
  v6 = (char *)this + 7;
  if ( v5 )
  {
    v7 = v5 != 9;
    v8 = v5 != 9 && v5 <= 0x1Fu;
    if ( !v8 )
    {
      v9 = v2;
      do
      {
        if ( v5 == 32 || !v7 )
        {
          if ( v5 == 9 )
            v8 = 1;
        }
        else
        {
          v6 = v9;
        }
        v5 = *++v9;
        if ( !*v9 )
          break;
        v7 = v5 != 9;
      }
      while ( v5 > 0x1Fu || v5 == 9 );
      v4 = 0;
      v6[1] = 0;
      if ( v8 && *((_DWORD *)this + 310) == 6 && !*((_BYTE *)this + 1248) && *((_BYTE *)this + 1256) )
      {
        v11 = (_DWORD)v6 + 1 - (_DWORD)v2;
        v12 = memcpy((char *)this + 90, v2, v11);
        v22 = 1000;
        si128 = _mm_load_si128((const __m128i *)&xmmword_298280);
        if ( v11 > 0 )
        {
          v13 = v12;
          v14 = (unsigned int)(v11 - 1);
          v15 = 0;
          v16 = (char *)this + v14 + 91;
          v17 = 0;
          while ( 1 )
          {
            if ( *v13 == 9 )
            {
              if ( v15 != 5 )
              {
                v19 = si128.m128i_i32[v15];
                if ( v19 > v17 )
                  goto LABEL_39;
                v20 = v15 + 1;
                if ( v15 != 4 )
                {
                  v19 = si128.m128i_i32[v20];
                  if ( v19 > v17 )
                    goto LABEL_40;
                  v20 = v15 + 2;
                  if ( v15 != 3 )
                  {
                    v19 = si128.m128i_i32[v20];
                    if ( v19 > v17 )
                      goto LABEL_40;
                    v20 = v15 + 3;
                    if ( v15 != 2 )
                    {
                      v19 = si128.m128i_i32[v20];
                      if ( v19 > v17 )
                      {
LABEL_40:
                        v15 = v20;
                        goto LABEL_39;
                      }
                      if ( v15 != 1 && v17 <= 999 )
                      {
                        v19 = 1000;
                        v15 = 4;
LABEL_39:
                        memset((char *)this + v17 + 8, 32, (unsigned int)(v19 + ~v17) + 1LL);
                        v17 = v19;
                        goto LABEL_22;
                      }
                    }
                  }
                }
                v15 = 5;
              }
            }
            else
            {
              v18 = v17++;
              *((_BYTE *)this + v18 + 8) = *v13;
            }
LABEL_22:
            if ( ++v13 == v16 )
              goto LABEL_37;
          }
        }
        v17 = 0;
LABEL_37:
        v4 = 0;
        *((_BYTE *)this + v17 + 8) = 0;
      }
      return v4;
    }
  }
  *((_BYTE *)this + 8) = 0;
  return 0;
}

