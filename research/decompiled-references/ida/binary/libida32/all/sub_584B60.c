unsigned __int64 __fastcall sub_584B60(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rax
  unsigned int *v5; // rbx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebp
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // edx
  int v16; // edx
  __int64 v17; // rdx
  int v18; // eax
  char v19; // dl
  char *v20; // rax
  char *v22; // [rsp+20h] [rbp-4A8h] BYREF
  char *v23; // [rsp+28h] [rbp-4A0h]
  __int64 v24; // [rsp+30h] [rbp-498h] BYREF
  __m128i si128; // [rsp+38h] [rbp-490h]
  __int64 v26; // [rsp+48h] [rbp-480h]
  unsigned __int64 v27; // [rsp+50h] [rbp-478h]
  __int64 v28; // [rsp+58h] [rbp-470h]
  unsigned __int64 v29; // [rsp+60h] [rbp-468h]
  void *ptr; // [rsp+68h] [rbp-460h]
  __int128 v31; // [rsp+70h] [rbp-458h]
  unsigned __int16 v32; // [rsp+80h] [rbp-448h] BYREF
  __int16 v33; // [rsp+82h] [rbp-446h] BYREF
  __m128i v34; // [rsp+84h] [rbp-444h] BYREF
  int v35; // [rsp+98h] [rbp-430h]
  __int64 v36; // [rsp+9Ch] [rbp-42Ch]
  unsigned __int64 v37; // [rsp+A4h] [rbp-424h]
  char v38; // [rsp+ACh] [rbp-41Ch]
  int v39; // [rsp+ADh] [rbp-41Bh]
  unsigned __int64 v40; // [rsp+488h] [rbp-40h]

  v4 = 4LL * *(_QWORD *)(a2 + 8);
  v40 = __readfsqword(0x28u);
  v5 = *(unsigned int **)a2;
  if ( v4 )
  {
    do
    {
      v9 = *v5;
      v10 = ea2node(*v5);
      v11 = netnode_supval(v10, 8, &v32, 1024, 83);
      if ( v11 > 2 )
      {
        v24 = 0x800000;
        v26 = 0;
        v27 = 0xFFFFFFFF00000000LL;
        v28 = 0;
        v29 = 0xFFFFFFFF00000002LL;
        ptr = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
        v31 = 0;
        if ( a3 )
        {
          sub_5834E0((unsigned int *)&v24, &v32, v11);
          goto LABEL_8;
        }
        if ( (HIBYTE(v32) & (unsigned __int8)v32) == -1 )
        {
          if ( (_BYTE)v33 == 1 )
          {
            v22 = (char *)&v33 + 1;
            v23 = (char *)&v32 + v11;
            LODWORD(v24) = (unsigned __int16)unpack_dw(&v22, (char *)&v32 + v11);
            WORD2(v24) = unpack_dw(&v22, v23);
            si128.m128i_i32[0] = unpack_dd(&v22);
            si128.m128i_i32[1] = unpack_dd(&v22);
            si128.m128i_i32[2] = unpack_dd(&v22);
            si128.m128i_i32[3] = unpack_dd(&v22);
            v18 = unpack_dd(&v22);
            LODWORD(v24) = (v18 << 16) | v24;
            LODWORD(v26) = unpack_dd(&v22);
            HIDWORD(v26) = unpack_dd(&v22);
            LODWORD(v27) = unpack_dd(&v22);
            HIDWORD(v27) = unpack_dd(&v22);
            v19 = 0;
            v20 = v22;
            if ( v22 < v23 )
            {
              v19 = *v22;
              v20 = v22 + 1;
            }
            v22 = v20;
            LOBYTE(v28) = v19;
            HIDWORD(v28) = unpack_dd(&v22);
            v7 = v24;
            goto LABEL_6;
          }
          if ( (_BYTE)v33 == 2 )
          {
            sub_5834E0((unsigned int *)&v24, (_BYTE *)&v33 + 1, v11);
LABEL_7:
            if ( *(_DWORD *)(a1 + 764) == 13 && (v24 & 0x4000) != 0 && (~(_DWORD)v24 & 0x80002) == 0 )
              LODWORD(v24) = v24 & 0xFFF7BFFD;
LABEL_8:
            if ( !a4 )
            {
              v8 = *(_DWORD *)(a1 + 764);
              if ( v8 == 15 )
              {
                v15 = v24;
                if ( (v24 & 0x4000) != 0 )
                {
                  BYTE1(v15) = BYTE1(v24) & 0xBF;
                  LODWORD(v24) = v15 | 0x400000;
                }
              }
              else if ( v8 == 13 )
              {
                v16 = v24;
                if ( (v24 & 0x4000) != 0 )
                {
                  BYTE1(v16) = BYTE1(v24) & 0xBF;
                  v17 = v16 | 0x400000u;
                  LODWORD(v24) = v17;
                  sub_57F3C0(&v24, v9, v17, a1, v12, v13);
                }
              }
            }
            set_switch_info(v9, &v24);
            if ( ptr )
            {
              *(_QWORD *)&v31 = 0;
              qfree(ptr);
            }
          }
        }
        else if ( (unsigned __int64)v11 > 0x30 )
        {
          v7 = v32 | (v35 << 16);
          si128 = _mm_loadu_si128(&v34);
          WORD2(v24) = v33;
          v26 = v36;
          v27 = v37;
          LOBYTE(v28) = v38;
          HIDWORD(v28) = v39;
LABEL_6:
          LODWORD(v24) = v7 & 0xFFFFFFEF;
          goto LABEL_7;
        }
      }
      ++v5;
    }
    while ( v5 != (unsigned int *)(*(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8)) );
  }
  return v40 - __readfsqword(0x28u);
}

