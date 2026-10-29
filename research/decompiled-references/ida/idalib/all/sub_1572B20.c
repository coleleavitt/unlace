__int64 __fastcall sub_1572B20(
        const __m128i *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  _BYTE *v17; // r15
  _BYTE *v18; // r13
  _BYTE *v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-330h]
  __int64 v26; // [rsp+8h] [rbp-330h]
  __int64 v27; // [rsp+8h] [rbp-330h]
  __int64 v28; // [rsp+8h] [rbp-330h]
  __int64 v29; // [rsp+8h] [rbp-330h]
  __int64 v30; // [rsp+8h] [rbp-330h]
  __int64 v31; // [rsp+8h] [rbp-330h]
  __int64 v32; // [rsp+8h] [rbp-330h]
  __int64 v33; // [rsp+8h] [rbp-330h]
  __int64 v34; // [rsp+8h] [rbp-330h]
  __int64 v35; // [rsp+8h] [rbp-330h]
  __int64 v36; // [rsp+10h] [rbp-328h] BYREF
  void *v37; // [rsp+18h] [rbp-320h]
  __int64 v38; // [rsp+20h] [rbp-318h]
  _BYTE v39[16]; // [rsp+28h] [rbp-310h] BYREF
  __int8 *v40; // [rsp+38h] [rbp-300h] BYREF
  void *v41; // [rsp+40h] [rbp-2F8h]
  __int64 v42; // [rsp+48h] [rbp-2F0h]
  _BYTE v43[16]; // [rsp+50h] [rbp-2E8h] BYREF
  _QWORD v44[5]; // [rsp+60h] [rbp-2D8h] BYREF
  void *v45; // [rsp+88h] [rbp-2B0h]
  __int64 v46; // [rsp+90h] [rbp-2A8h]
  _BYTE v47[16]; // [rsp+98h] [rbp-2A0h] BYREF
  __int8 *v48; // [rsp+A8h] [rbp-290h] BYREF
  void *ptr; // [rsp+B0h] [rbp-288h]
  __int64 v50; // [rsp+B8h] [rbp-280h]
  _QWORD v51[4]; // [rsp+C0h] [rbp-278h] BYREF
  void *v52; // [rsp+E0h] [rbp-258h]
  __int64 v53; // [rsp+E8h] [rbp-250h]
  __int64 v54; // [rsp+F0h] [rbp-248h]
  __int64 v55; // [rsp+F8h] [rbp-240h]
  __int64 v56; // [rsp+100h] [rbp-238h]
  __int64 v57; // [rsp+108h] [rbp-230h]
  __int64 v58; // [rsp+110h] [rbp-228h]
  __int64 v59; // [rsp+118h] [rbp-220h]
  __int64 v60; // [rsp+120h] [rbp-218h]
  __int64 v61; // [rsp+128h] [rbp-210h]
  __int64 v62; // [rsp+130h] [rbp-208h]
  __int64 v63; // [rsp+138h] [rbp-200h]
  __int64 v64; // [rsp+140h] [rbp-1F8h]
  __int64 v65; // [rsp+148h] [rbp-1F0h]
  __int64 v66; // [rsp+150h] [rbp-1E8h]
  __int64 v67; // [rsp+158h] [rbp-1E0h]
  __int64 v68; // [rsp+160h] [rbp-1D8h]
  __int64 v69; // [rsp+168h] [rbp-1D0h]
  __int64 v70; // [rsp+170h] [rbp-1C8h]
  __int16 v71; // [rsp+178h] [rbp-1C0h]
  __int64 v72; // [rsp+180h] [rbp-1B8h]
  __int64 v73; // [rsp+188h] [rbp-1B0h]
  __int64 v74; // [rsp+190h] [rbp-1A8h] BYREF
  _BYTE *v75; // [rsp+198h] [rbp-1A0h]
  __int64 v76; // [rsp+1A0h] [rbp-198h]
  _BYTE v77[320]; // [rsp+1A8h] [rbp-190h] BYREF
  __int64 v78; // [rsp+2E8h] [rbp-50h]
  char v79; // [rsp+2F0h] [rbp-48h]

  v9 = 0;
  if ( !*(_DWORD *)(a6 + 12) )
  {
    v10 = a1[2].m128i_i16[0];
    if ( v10 != 25 && v10 != 1 && (unsigned __int16)(v10 - 456) > 2u && v10 != 460 )
    {
      if ( *a2 == 3 )
      {
        if ( !(_DWORD)a4 )
        {
          v36 = 0;
          v40 = &a1[31].m128i_i8[8];
          v37 = v39;
          v38 = 0x200000000LL;
          v41 = v43;
          v42 = 0x200000000LL;
          if ( (unsigned __int16)(v10 - 406) <= 8u || (v35 = a6, v24 = sub_155CBC0(a1, 0, 0), a6 = v35, v24) )
          {
            v25 = a6;
            sub_14AB020((__int64)a1, a3, a7, a8);
            a6 = v25;
          }
          v26 = a6;
          v44[0] &= 0xFFFFFFC000000000LL;
          v45 = v47;
          v46 = 0x200000000LL;
          v48 = &a1[31].m128i_i8[8];
          ptr = v51;
          v50 = 0x200000000LL;
          memset(&v44[2], 0, 24);
          v51[2] = 0;
          v51[3] = 0;
          v52 = nullptr;
          v53 = 0;
          v54 = 0;
          v55 = 0;
          v56 = 0;
          v57 = 0;
          v58 = 0;
          v59 = 0;
          v60 = 0;
          v61 = 0;
          v62 = 0;
          v63 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v67 = 0;
          v68 = 0;
          v69 = 0;
          v70 = 0;
          v71 &= 0xF000u;
          v13 = a1[6].m128i_i64[0];
          v78 = 0;
          v75 = v77;
          v14 = *(_QWORD *)(v13 + 512);
          *(_QWORD *)(v13 + 512) = &v74;
          v78 = v14;
          v76 = 0x400000000LL;
          v72 = 0;
          v73 = v13;
          v74 = 0;
          v79 = 0;
          v15 = sub_156E800((__int64)a1, (__int64 *)a3, &v36, (__int64)v44, a7, a8, v12, a6);
          v16 = v26;
          v9 = v15;
          if ( !v79 )
          {
            sub_1818070(v73, v78, 0);
            v79 = 1;
            v16 = v26;
          }
          v17 = v75;
          v18 = &v75[80 * (unsigned int)v76];
          if ( v75 != v18 )
          {
            do
            {
              v19 = v17;
              v17 += 80;
              v27 = v16;
              sub_15B6850(v19);
              v16 = v27;
            }
            while ( v18 != v17 );
            v18 = v75;
          }
          if ( v18 != v77 )
          {
            v28 = v16;
            free(v18);
            v16 = v28;
          }
          if ( HIDWORD(v53) )
          {
            v34 = v16;
            free(v52);
            v16 = v34;
          }
          v29 = v16;
          sub_15DCED0(v48, &v48);
          v20 = v29;
          if ( ptr != v51 )
          {
            free(ptr);
            v20 = v29;
          }
          if ( v45 != v47 )
          {
            v30 = v20;
            free(v45);
            v20 = v30;
          }
          v31 = v20;
          sub_15DCED0(v40, &v40);
          a6 = v31;
          if ( v41 != v43 )
          {
            free(v41);
            a6 = v31;
          }
          if ( v37 != v39 )
          {
            v32 = a6;
            free(v37);
            a6 = v32;
          }
        }
      }
      else
      {
        v33 = a6;
        v23 = sub_14B1D90((__int64)a1, a2, (__int64)a3, a4, a5, a7, a8);
        a6 = v33;
        v9 = v23;
      }
    }
  }
  LODWORD(v21) = 0;
  if ( *(_DWORD *)(a6 + 40) )
    v21 = **(_QWORD **)(a6 + 32);
  return sub_1AA7910(
           *(_QWORD *)(a1[6].m128i_i64[0] + 744),
           *(_DWORD *)(a6 + 4),
           *(_DWORD *)(a6 + 8),
           *(_DWORD *)(a6 + 12),
           v21,
           *(_DWORD *)(a6 + 16),
           *(_QWORD *)(a6 + 96),
           *(unsigned int *)(a6 + 104),
           *(_DWORD *)(a6 + 20),
           v9);
}
