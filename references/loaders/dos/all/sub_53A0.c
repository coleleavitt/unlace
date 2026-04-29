unsigned __int64 __fastcall sub_53A0(__int64 a1, unsigned int a2, char a3)
{
  unsigned int i; // r13d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r12d
  __int16 word; // bx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v18; // [rsp+28h] [rbp-170h] BYREF
  _DWORD v19[2]; // [rsp+30h] [rbp-168h] BYREF
  unsigned __int16 v20; // [rsp+38h] [rbp-160h]
  unsigned __int16 v21; // [rsp+3Ah] [rbp-15Eh]
  unsigned __int16 v22; // [rsp+3Ch] [rbp-15Ch]
  unsigned __int16 v23; // [rsp+3Eh] [rbp-15Ah]
  __int64 v24; // [rsp+40h] [rbp-158h] BYREF
  __m128i si128; // [rsp+48h] [rbp-150h]
  __int64 v26; // [rsp+58h] [rbp-140h]
  __int64 v27; // [rsp+60h] [rbp-138h]
  _WORD v28[2]; // [rsp+6Ch] [rbp-12Ch] BYREF
  _OWORD v29[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 v30; // [rsp+90h] [rbp-108h]
  __int64 v31; // [rsp+98h] [rbp-100h]
  __int64 v32; // [rsp+A0h] [rbp-F8h]
  __int128 v33; // [rsp+A8h] [rbp-F0h]
  __int128 v34; // [rsp+B8h] [rbp-E0h]
  __int128 v35; // [rsp+C8h] [rbp-D0h]
  __int128 v36; // [rsp+D8h] [rbp-C0h]
  __int128 v37; // [rsp+E8h] [rbp-B0h]
  __int128 v38; // [rsp+F8h] [rbp-A0h]
  __int128 v39; // [rsp+108h] [rbp-90h]
  __int128 v40; // [rsp+118h] [rbp-80h]
  unsigned __int64 v41; // [rsp+128h] [rbp-70h]
  _BYTE v42[40]; // [rsp+130h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+158h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_8C20);
  v24 = 2;
  v26 = 0;
  v27 = 0;
  if ( a2 )
  {
    for ( i = 1; i <= a2; ++i )
    {
      if ( netnode_supval(qword_B480, i, v19, 16, 83) == 16 )
      {
        v41 = 0xFFFFFFFF00000000LL;
        memset(v29, 0, sizeof(v29));
        v33 = -1;
        v34 = -1;
        v35 = -1;
        v36 = -1;
        v37 = -1;
        v38 = -1;
        v39 = -1;
        v40 = -1;
        v30 = 0;
        v32 = 0;
        v31 = 515;
        *(_QWORD *)&v29[0] = (getinf(20, i, v5, v6, v7, v8) + 15) & 0xFFFFFFFFFFFFFFF0LL;
        v32 = setup_selector(*(_QWORD *)&v29[0] >> 4);
        v18 = v32;
        netnode_supset(qword_B480, i, &v18, 8, 65);
        *((_QWORD *)&v29[0] + 1) = *(_QWORD *)&v29[0] + 16 * (unsigned int)v23;
        file2base(a1, v19[0] + 16LL * v21, *(_QWORD *)&v29[0], *(_QWORD *)&v29[0] + v19[1], 1);
        qsnprintf(v42, 32, "ovr%03d", i);
        if ( !(unsigned __int8)add_segm_ex(v29, v42, "OVERLAY", 33) )
          sub_33A0(0);
        qlseek(a1, v19[0] + (unsigned int)v20, 0);
        v9 = v22;
        if ( v22 )
        {
          do
          {
            lread(a1, v28, 4);
            v16 = *(_QWORD *)&v29[0] + v28[0];
            if ( !a3 )
              v16 += 16LL * v28[1];
            if ( v16 >= *((_QWORD *)&v29[0] + 1) )
              sub_3450();
            show_auto(v16, 0);
            word = get_word(v16);
            v15 = (unsigned __int16)(getinf(12, 0, v11, v12, v13, v14) + word);
            put_word(v16, v15);
            si128.m128i_i64[1] = v15;
            set_fixup(v16, &v24);
            sub_34E0(v15, "CODE");
            sub_3490();
            --v9;
          }
          while ( v9 );
        }
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}
