unsigned __int64 __fastcall sub_59EB20(__int64 a1, __int64 **a2, char a3, char a4)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  int v7; // eax
  __m128i v8; // xmm0
  int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdx
  int v19; // eax
  char v20; // dl
  char *v21; // rax
  char *v23; // [rsp+20h] [rbp-4D8h] BYREF
  char *v24; // [rsp+28h] [rbp-4D0h]
  void *v25; // [rsp+30h] [rbp-4C8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-4C0h]
  __m128i v27; // [rsp+48h] [rbp-4B0h]
  __int64 v28; // [rsp+58h] [rbp-4A0h]
  __int64 v29; // [rsp+60h] [rbp-498h]
  __int64 v30; // [rsp+68h] [rbp-490h]
  __int64 v31; // [rsp+70h] [rbp-488h]
  __int64 v32; // [rsp+78h] [rbp-480h]
  __int64 v33; // [rsp+80h] [rbp-478h]
  __int64 v34; // [rsp+88h] [rbp-470h]
  void *ptr; // [rsp+90h] [rbp-468h]
  __int128 v36; // [rsp+98h] [rbp-460h]
  unsigned __int16 v37; // [rsp+B0h] [rbp-448h] BYREF
  __int16 v38; // [rsp+B2h] [rbp-446h] BYREF
  __m128i v39; // [rsp+B4h] [rbp-444h] BYREF
  __m128i v40; // [rsp+C4h] [rbp-434h] BYREF
  int v41; // [rsp+D8h] [rbp-420h]
  int v42; // [rsp+DCh] [rbp-41Ch]
  __int64 v43; // [rsp+E0h] [rbp-418h]
  __int64 v44; // [rsp+E8h] [rbp-410h]
  int v45; // [rsp+F0h] [rbp-408h]
  char v46; // [rsp+F4h] [rbp-404h]
  __int64 v47; // [rsp+F5h] [rbp-403h]
  unsigned __int64 v48; // [rsp+4B8h] [rbp-40h]

  v4 = 8LL * (_QWORD)a2[1];
  v48 = __readfsqword(0x28u);
  v5 = *a2;
  if ( v4 )
  {
    do
    {
      v10 = *v5;
      v11 = ea2node(*v5);
      v12 = netnode_supval(v11, 8, &v37, 1024, 83);
      if ( v12 > 2 )
      {
        v25 = &loc_800000;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0xFFFFFFFFLL;
        v32 = 0;
        v33 = 2;
        v34 = -1;
        ptr = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
        v27 = (__m128i)-1LL;
        v36 = 0;
        if ( a3 )
        {
          sub_59D1B0((unsigned int *)&v25, (unsigned __int8 *)&v37, v12);
          goto LABEL_8;
        }
        if ( (HIBYTE(v37) & (unsigned __int8)v37) == -1 )
        {
          if ( (_BYTE)v38 == 1 )
          {
            v23 = (char *)&v38 + 1;
            v24 = (char *)&v37 + v12;
            LODWORD(v25) = (unsigned __int16)unpack_dw(&v23, (char *)&v37 + v12);
            WORD2(v25) = unpack_dw(&v23, v24);
            si128.m128i_i64[0] = unpack_dq(&v23);
            si128.m128i_i64[1] = unpack_dq(&v23);
            v27.m128i_i64[0] = unpack_dq(&v23);
            v27.m128i_i64[1] = unpack_dq(&v23);
            v19 = unpack_dd(&v23);
            LODWORD(v25) = (v19 << 16) | (unsigned int)v25;
            LODWORD(v28) = unpack_dd(&v23);
            v29 = unpack_dq(&v23);
            v30 = unpack_dq(&v23);
            LODWORD(v31) = unpack_dd(&v23);
            v20 = 0;
            v21 = v23;
            if ( v23 < v24 )
            {
              v20 = *v23;
              v21 = v23 + 1;
            }
            v23 = v21;
            BYTE4(v31) = v20;
            v32 = unpack_dq(&v23);
            v7 = (int)v25;
            goto LABEL_6;
          }
          if ( (_BYTE)v38 == 2 )
          {
            sub_59D1B0((unsigned int *)&v25, (unsigned __int8 *)&v38 + 1, v12);
LABEL_7:
            if ( *(_DWORD *)(a1 + 932) == 13 && (BYTE1(v25) & 0x40) != 0 && (~(_DWORD)v25 & 0x80002) == 0 )
              LODWORD(v25) = (unsigned int)v25 & 0xFFF7BFFD;
LABEL_8:
            if ( !a4 )
            {
              v9 = *(_DWORD *)(a1 + 932);
              if ( v9 == 15 )
              {
                v16 = (int)v25;
                if ( (BYTE1(v25) & 0x40) != 0 )
                {
                  BYTE1(v16) = BYTE1(v25) & 0xBF;
                  LODWORD(v25) = v16 | 0x400000;
                }
              }
              else if ( v9 == 13 )
              {
                v17 = (int)v25;
                if ( (BYTE1(v25) & 0x40) != 0 )
                {
                  BYTE1(v17) = BYTE1(v25) & 0xBF;
                  v18 = v17 | 0x400000u;
                  LODWORD(v25) = v18;
                  sub_598E00((__int64)&v25, v10, v18, a1, v13, v14);
                }
              }
            }
            set_switch_info(v10, &v25);
            if ( ptr )
            {
              *(_QWORD *)&v36 = 0;
              qfree(ptr);
            }
          }
        }
        else if ( (unsigned __int64)v12 > 0x4C )
        {
          v7 = v37 | (v41 << 16);
          si128 = _mm_loadu_si128(&v39);
          v8 = _mm_loadu_si128(&v40);
          WORD2(v25) = v38;
          v27 = v8;
          LODWORD(v28) = v42;
          v29 = v43;
          v30 = v44;
          LODWORD(v31) = v45;
          BYTE4(v31) = v46;
          v32 = v47;
LABEL_6:
          LODWORD(v25) = v7 & 0xFFFFFFEF;
          goto LABEL_7;
        }
      }
      ++v5;
    }
    while ( v5 != &(*a2)[(_QWORD)a2[1]] );
  }
  return v48 - __readfsqword(0x28u);
}
