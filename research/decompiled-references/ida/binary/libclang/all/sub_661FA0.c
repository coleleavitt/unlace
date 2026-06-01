void __fastcall sub_661FA0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rax
  __m128i v9; // xmm1
  unsigned __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int v16; // eax
  unsigned int *v17; // r12
  __int64 v18; // r12
  __m128i v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // r14
  _QWORD *v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __m128i v28; // xmm0
  void (__fastcall ***v29)(_QWORD); // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-588h]
  __m128i v33; // [rsp+10h] [rbp-578h]
  __m128i v34; // [rsp+38h] [rbp-550h]
  __m128i v35; // [rsp+80h] [rbp-508h] BYREF
  __int64 *v36; // [rsp+90h] [rbp-4F8h]
  _BYTE *v37; // [rsp+98h] [rbp-4F0h]
  unsigned __int64 *v38; // [rsp+A0h] [rbp-4E8h]
  void **v39; // [rsp+A8h] [rbp-4E0h]
  char *v40; // [rsp+B0h] [rbp-4D8h]
  unsigned __int64 v41; // [rsp+B8h] [rbp-4D0h]
  __int64 *v42; // [rsp+C0h] [rbp-4C8h]
  __int64 *v43; // [rsp+C8h] [rbp-4C0h]
  __int64 *v44; // [rsp+D0h] [rbp-4B8h]
  __int64 *v45; // [rsp+D8h] [rbp-4B0h]
  _QWORD *v46; // [rsp+E0h] [rbp-4A8h]
  __int64 v47; // [rsp+E8h] [rbp-4A0h]
  __int64 *v48; // [rsp+F0h] [rbp-498h]
  void **v49; // [rsp+F8h] [rbp-490h]
  char v50; // [rsp+10Fh] [rbp-479h] BYREF
  __m128i v51; // [rsp+110h] [rbp-478h] BYREF
  __int64 v52; // [rsp+120h] [rbp-468h]
  __m128i v53; // [rsp+130h] [rbp-458h] BYREF
  __int64 v54; // [rsp+140h] [rbp-448h]
  __int64 v55[4]; // [rsp+150h] [rbp-438h] BYREF
  _BYTE v56[32]; // [rsp+170h] [rbp-418h] BYREF
  __int64 v57; // [rsp+190h] [rbp-3F8h] BYREF
  char v58; // [rsp+1A0h] [rbp-3E8h]
  _BYTE v59[32]; // [rsp+1B0h] [rbp-3D8h] BYREF
  _BYTE v60[32]; // [rsp+1D0h] [rbp-3B8h] BYREF
  __m128i v61; // [rsp+1F0h] [rbp-398h] BYREF
  __int64 v62; // [rsp+200h] [rbp-388h]
  _BYTE v63[32]; // [rsp+210h] [rbp-378h] BYREF
  _BYTE v64[32]; // [rsp+230h] [rbp-358h] BYREF
  _BYTE *v65[4]; // [rsp+250h] [rbp-338h] BYREF
  __int64 v66[2]; // [rsp+270h] [rbp-318h] BYREF
  char v67; // [rsp+280h] [rbp-308h] BYREF
  char v68; // [rsp+290h] [rbp-2F8h] BYREF
  __m128i v69; // [rsp+2B0h] [rbp-2D8h] BYREF
  __m128i v70; // [rsp+2C0h] [rbp-2C8h] BYREF
  __m128i v71; // [rsp+2D0h] [rbp-2B8h] BYREF
  __int64 v72; // [rsp+2E0h] [rbp-2A8h]
  __m128i v73; // [rsp+2F0h] [rbp-298h] BYREF
  __m128i v74; // [rsp+300h] [rbp-288h] BYREF
  __m128i v75; // [rsp+310h] [rbp-278h] BYREF
  __int64 v76; // [rsp+320h] [rbp-268h]
  void *v77[3]; // [rsp+330h] [rbp-258h] BYREF
  char v78; // [rsp+348h] [rbp-240h] BYREF
  void *v79[2]; // [rsp+3A0h] [rbp-1E8h] BYREF
  __int64 v80; // [rsp+3B0h] [rbp-1D8h]
  char v81; // [rsp+3B8h] [rbp-1D0h] BYREF
  void *v82; // [rsp+410h] [rbp-178h] BYREF
  __m128i si128; // [rsp+418h] [rbp-170h]
  _BYTE v84[136]; // [rsp+428h] [rbp-160h] BYREF
  _BYTE ptr[24]; // [rsp+4B0h] [rbp-D8h] BYREF
  _BYTE v86[192]; // [rsp+4C8h] [rbp-C0h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 && !sub_79AA10(a2, 0) )
  {
    v4 = sub_798D40(a2);
    if ( (unsigned __int64)sub_6BB950(v4, a2) <= 7 || (unsigned int)sub_77D1A0(a2) )
    {
      v5 = *(_QWORD *)(a2 + 40);
      if ( (v5 & 7) != 0 )
      {
        v6 = 0;
        v35.m128i_i64[0] = (__int64)&byte_3B9466E;
      }
      else
      {
        v35.m128i_i64[0] = (__int64)&byte_3B9466E;
        v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v6 )
        {
          v17 = *(unsigned int **)(v6 + 16);
          v6 = *v17;
          v35.m128i_i64[0] = (__int64)(v17 + 4);
        }
      }
      v37 = v84;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      v82 = v84;
      sub_11240B0(a2, &v82);
      sub_CAE550(&v51, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
      v50 = sub_790090(a2);
      v54 = 0;
      v53 = 0;
      v7 = sub_63DC30(a1, a2);
      if ( v7 )
      {
        v8 = sub_6BB140(*a1, a2);
        sub_AA92F0(v79, v7, *(_QWORD *)(*a1 + 2152), v8);
        v9 = _mm_load_si128((const __m128i *)v79);
        memset(ptr, 0, sizeof(ptr));
        v54 = v80;
        v80 = 0;
        v53 = v9;
        *(_OWORD *)v79 = 0;
        sub_646A80((__int64 *)ptr);
        sub_646A80((__int64 *)v79);
      }
      sub_FD13A0(v55, a2);
      v36 = (__int64 *)v56;
      sub_FCD270(v56, a2);
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
      {
        v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v10 = *(_QWORD *)v10;
        if ( ((*(_BYTE *)(v10 + 8) + 72) & 0x7Fu) <= 3 )
        {
          v38 = (unsigned __int64 *)v65;
          sub_643500((__int64 *)v65, a2);
          v18 = a1[1];
          LOBYTE(v39) = sub_63DE20(*a1, *(_DWORD *)(a2 + 24));
          v44 = (__int64 *)v77;
          sub_766420(v77, a2);
          sub_63E5A0((__int64)&v69, (__int64)a1, a2);
          v41 = v6;
          v40 = (char *)v35.m128i_i64[0];
          v19.m128i_i64[0] = sub_FC8E80(v18, v82, si128.m128i_i64[0]);
          *(_QWORD *)&ptr[16] = 0;
          v35 = v19;
          *(__m128i *)ptr = _mm_load_si128(&v35);
          sub_64F120((__int64)&v57, v18 + 160, (__m128i *)ptr, (__int64 *)&ptr[16]);
          v20 = v57;
          if ( *(_QWORD *)&ptr[16] )
            (***(void (__fastcall ****)(_QWORD))&ptr[16])(*(_QWORD *)&ptr[16]);
          if ( v58 )
          {
            v21 = (_QWORD *)sub_63DDF0(v18, 392, 4);
            v43 = v66;
            v66[0] = (__int64)&v67;
            sub_63E170(v66, v65[0], (__int64)&v65[0][(unsigned __int64)v65[1]]);
            v48 = (__int64 *)v59;
            sub_644390((__int64)v59, v36);
            v42 = (__int64 *)v60;
            sub_644390((__int64)v60, v55);
            v49 = v79;
            sub_6435F0((__int64)v79, (__int64)v44);
            v22 = (_QWORD *)sub_FC8E80(v18, v40, v41);
            v23 = _mm_load_si128(&v69);
            v46 = v22;
            v73 = v23;
            v24 = _mm_load_si128(&v70);
            v76 = v72;
            v74 = v24;
            v25 = _mm_load_si128(&v71);
            v62 = v52;
            v75 = v25;
            v26 = _mm_load_si128(&v51);
            v40 = &v68;
            v61 = v26;
            v47 = v27;
            std::string::basic_string();
            v45 = (__int64 *)v64;
            sub_644390((__int64)v64, v48);
            v44 = (__int64 *)v63;
            sub_644390((__int64)v63, v42);
            sub_6435F0((__int64)ptr, (__int64)v49);
            v34 = _mm_load_si128(&v61);
            v32 = _mm_load_si128(&v73);
            v33 = _mm_load_si128(&v74);
            v28 = _mm_load_si128(&v75);
            sub_644950(
              (__int64)v21,
              0x10u,
              v35.m128i_i64[0],
              (_BYTE *)v35.m128i_i64[1],
              v46,
              v47,
              v32.m128i_i64[0],
              v32.m128i_i64[1],
              v33.m128i_i64[0],
              v33.m128i_i64[1],
              v28.m128i_i64[0],
              v28.m128i_i64[1],
              v76,
              v34.m128i_i64[0],
              v34.m128i_i64[1],
              v62,
              (__int64)ptr,
              v53.m128i_i64,
              v44,
              v45,
              (__int64)v40,
              (unsigned __int8)v39);
            if ( *(_BYTE **)ptr != v86 )
              free(*(void **)ptr);
            sub_6441A0(v44);
            sub_6441A0(v45);
            std::string::_M_dispose();
            *v21 = &off_49F4CD8;
            if ( v79[0] != &v81 )
              free(v79[0]);
            sub_6441A0(v42);
            sub_6441A0(v48);
            std::string::_M_dispose();
            v29 = *(void (__fastcall ****)(_QWORD))(v20 + 16);
            *(_QWORD *)(v20 + 16) = v21;
            if ( v29 )
              (**v29)(v29);
            v30 = v21[11];
            if ( v30 && (unsigned int)(*(_DWORD *)(v30 + 356) - 2) <= 0x13 && (v31 = sub_FC8C50(v30, 16)) != 0 )
              sub_FC8D50(v31, v21);
            else
              sub_64B900(v18 + 184, (__int64)v21);
          }
          if ( v77[0] != &v78 )
            free(v77[0]);
          std::string::_M_dispose();
          goto LABEL_24;
        }
      }
      v11 = *(_DWORD *)(a2 + 24);
      v12 = *a1;
      v38 = (unsigned __int64 *)a1[1];
      LOBYTE(v77[0]) = sub_63DE20(v12, v11);
      sub_766420(ptr, a2);
      v39 = v79;
      sub_63E5A0((__int64)v79, (__int64)a1, a2);
      v35.m128i_i64[0] = sub_6514F0(
                           v38,
                           (__int64)v82,
                           si128.m128i_i64[0],
                           v35.m128i_i64[0],
                           v6,
                           (__int64 *)v79,
                           (__int64)&v51,
                           (__int64)ptr,
                           &v50,
                           v53.m128i_i64,
                           v55,
                           v36,
                           (char *)v77);
      if ( *(_BYTE **)ptr != v86 )
        free(*(void **)ptr);
      if ( !v35.m128i_i64[0] )
      {
LABEL_24:
        sub_6441A0(v36);
        sub_6441A0(v55);
        sub_646A80(v53.m128i_i64);
        if ( v82 != v37 )
          free(v82);
        return;
      }
      v13 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
      *(_QWORD *)ptr = v86;
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      sub_11240B0(v13, ptr);
      v14 = sub_FC8D80(a1[1], *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
      v15 = v14;
      if ( v14 )
      {
        v16 = *(_DWORD *)(v14 + 356);
        if ( v16 <= 5 )
        {
          if ( v16 > 2 )
          {
LABEL_20:
            if ( *(_BYTE *)(v15 + 392) )
            {
              sub_FC8C80(v35.m128i_i64[0] + 368, v15 + 368);
              sub_FC9490(a1[1], v15);
            }
          }
        }
        else if ( v16 - 9 <= 3 )
        {
          goto LABEL_20;
        }
      }
      if ( *(_BYTE **)ptr != v86 )
        free(*(void **)ptr);
      goto LABEL_24;
    }
  }
}

