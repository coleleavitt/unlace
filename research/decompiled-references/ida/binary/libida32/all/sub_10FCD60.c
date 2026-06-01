unsigned __int64 __fastcall sub_10FCD60(__int64 *a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r15
  double v7; // r14
  __int64 v8; // r13
  const char *v9; // rbp
  size_t v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int8 *v14; // rax
  unsigned __int8 **v15; // rdi
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rbx
  void *v25; // rdi
  double v26[3]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int8 **v27; // [rsp+18h] [rbp-B0h]
  __int64 *v28; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v29; // [rsp+28h] [rbp-A0h]
  __int64 v30; // [rsp+30h] [rbp-98h]
  __int64 v31; // [rsp+38h] [rbp-90h]
  unsigned __int8 *v32; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h]

  v3 = *(_DWORD *)(a2 + 56);
  LOBYTE(v26[0]) = a3;
  if ( v3 )
  {
    v4 = a2;
    v28 = a1;
    v5 = 0;
    v6 = 8LL * (unsigned int)(v3 - 1) + 8;
    v7 = 0.0;
    v8 = 0;
    v27 = &v32;
    while ( 1 )
    {
      v9 = *(const char **)(*(_QWORD *)(v4 + 48) + v5);
      if ( (unsigned __int8)sub_2195AD0(v4, 1781) )
      {
        if ( !strcmp("all", v9) )
        {
          if ( LOBYTE(v26[0]) )
            goto LABEL_14;
          goto LABEL_5;
        }
      }
      else
      {
        v10 = 0;
        if ( !v9 )
          goto LABEL_8;
      }
      v10 = strlen(v9);
LABEL_8:
      v11 = sub_FDD6F0((__int64)v9, v10, 1);
      if ( v11 || v12 )
      {
        v5 += 8;
        v8 |= v11;
        *(_QWORD *)&v7 |= v12;
        if ( v6 == v5 )
          goto LABEL_10;
      }
      else
      {
        if ( LOBYTE(v26[0]) )
        {
LABEL_14:
          sub_FA3370((__int64)v27, *v28, 0, 497);
          sub_AC84E0(v27, *(_BYTE **)(v4 + 24), *(_QWORD *)(v4 + 32));
          v14 = v32;
          if ( !v32 )
          {
            v18 = v33;
            v19 = *(_DWORD *)(v33 + 14976);
            if ( v19 )
            {
              v20 = (unsigned int)(v19 - 1);
              *(_DWORD *)(v33 + 14976) = v20;
              v14 = *(unsigned __int8 **)(v18 + 8 * v20 + 14848);
              v21 = *((unsigned int *)v14 + 134);
              *v14 = 0;
              v22 = *((_QWORD *)v14 + 66);
              *((_DWORD *)v14 + 106) = 0;
              v23 = v22 + (v21 << 6);
              if ( v22 != v23 )
              {
                v30 = v5;
                v24 = v23;
                v31 = v4;
                do
                {
                  while ( 1 )
                  {
                    v24 -= 64;
                    v25 = *(void **)(v24 + 24);
                    if ( v25 == (void *)(v24 + 40) )
                      break;
                    v29 = v14;
                    operator delete(v25);
                    v14 = v29;
                    if ( v22 == v24 )
                      goto LABEL_24;
                  }
                }
                while ( v22 != v24 );
LABEL_24:
                v5 = v30;
                v4 = v31;
              }
              *((_DWORD *)v14 + 134) = 0;
            }
            else
            {
              v14 = (unsigned __int8 *)operator new(0x3A0u);
              *v14 = 0;
              *((_QWORD *)v14 + 12) = v14 + 112;
              *((_QWORD *)v14 + 16) = v14 + 144;
              *((_QWORD *)v14 + 20) = v14 + 176;
              *((_QWORD *)v14 + 24) = v14 + 208;
              *((_QWORD *)v14 + 28) = v14 + 240;
              *((_QWORD *)v14 + 32) = v14 + 272;
              *((_QWORD *)v14 + 36) = v14 + 304;
              *((_QWORD *)v14 + 40) = v14 + 336;
              *((_QWORD *)v14 + 44) = v14 + 368;
              *((_QWORD *)v14 + 48) = v14 + 400;
              *((_QWORD *)v14 + 52) = v14 + 432;
              *((_QWORD *)v14 + 13) = 0;
              v14[112] = 0;
              *((_QWORD *)v14 + 17) = 0;
              v14[144] = 0;
              *((_QWORD *)v14 + 21) = 0;
              v14[176] = 0;
              *((_QWORD *)v14 + 25) = 0;
              v14[208] = 0;
              *((_QWORD *)v14 + 29) = 0;
              v14[240] = 0;
              *((_QWORD *)v14 + 33) = 0;
              v14[272] = 0;
              *((_QWORD *)v14 + 37) = 0;
              v14[304] = 0;
              *((_QWORD *)v14 + 41) = 0;
              v14[336] = 0;
              *((_QWORD *)v14 + 45) = 0;
              v14[368] = 0;
              *((_QWORD *)v14 + 49) = 0;
              v14[400] = 0;
              *((_QWORD *)v14 + 53) = 0x800000000LL;
              *((_QWORD *)v14 + 66) = v14 + 544;
              *((_QWORD *)v14 + 67) = 0x600000000LL;
            }
            v32 = v14;
          }
          v15 = v27;
          v14[*v14 + 1] = 1;
          v16 = v32;
          v17 = *v32;
          *v32 = v17 + 1;
          *(_QWORD *)&v16[8 * v17 + 16] = v9;
          sub_AC6300((__int64)v15);
        }
LABEL_5:
        v5 += 8;
        if ( v6 == v5 )
          goto LABEL_10;
      }
    }
  }
  v7 = 0.0;
LABEL_10:
  v26[0] = v7;
  return _mm_loadh_ps(v26).m128_u64[0];
}

