__int64 __fastcall sub_B495A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v5; // r12
  unsigned int **v6; // r15
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  unsigned int *v12; // r15
  unsigned int *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int *v17; // r13
  bool v18; // zf
  __int64 v19; // r13
  _DWORD *v20; // rax
  _DWORD *v21; // r14
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned int v26; // r13d
  __int64 v27; // rdi
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  _QWORD *v31; // r14
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // r13
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 result; // rax
  int v38; // [rsp+0h] [rbp-E0h]
  int v39; // [rsp+0h] [rbp-E0h]
  int v40; // [rsp+8h] [rbp-D8h]
  int v41; // [rsp+8h] [rbp-D8h]
  __int64 v42; // [rsp+8h] [rbp-D8h]
  int v43; // [rsp+10h] [rbp-D0h]
  int v44; // [rsp+10h] [rbp-D0h]
  int v45; // [rsp+18h] [rbp-C8h]
  __int64 v46; // [rsp+18h] [rbp-C8h]
  __int64 v47; // [rsp+18h] [rbp-C8h]
  int v48; // [rsp+20h] [rbp-C0h]
  int v49[2]; // [rsp+20h] [rbp-C0h]
  char v50; // [rsp+28h] [rbp-B8h]
  unsigned int *v51; // [rsp+28h] [rbp-B8h]
  __int64 v52; // [rsp+28h] [rbp-B8h]
  int v53; // [rsp+30h] [rbp-B0h]
  _QWORD *v54; // [rsp+30h] [rbp-B0h]
  __int64 v55; // [rsp+38h] [rbp-A8h]
  __int64 v56; // [rsp+40h] [rbp-A0h]
  _DWORD *v57; // [rsp+40h] [rbp-A0h]
  void *v58; // [rsp+48h] [rbp-98h]
  unsigned int *v59; // [rsp+48h] [rbp-98h]
  __int64 v60; // [rsp+50h] [rbp-90h]
  __int64 v61; // [rsp+50h] [rbp-90h]
  unsigned int v62; // [rsp+58h] [rbp-88h]
  __int64 v63; // [rsp+58h] [rbp-88h]
  __int64 v64; // [rsp+60h] [rbp-80h]
  unsigned int v65; // [rsp+60h] [rbp-80h]
  _DWORD **v66; // [rsp+68h] [rbp-78h]
  int v67; // [rsp+68h] [rbp-78h]
  unsigned int *v68; // [rsp+68h] [rbp-78h]
  int v69; // [rsp+68h] [rbp-78h]
  _DWORD *v70; // [rsp+78h] [rbp-68h] BYREF
  int v71[2]; // [rsp+80h] [rbp-60h] BYREF
  unsigned int v72; // [rsp+88h] [rbp-58h] BYREF
  unsigned int v73; // [rsp+8Ch] [rbp-54h]
  int v74[2]; // [rsp+90h] [rbp-50h] BYREF
  __int64 v75; // [rsp+98h] [rbp-48h]
  __m128i v76; // [rsp+A0h] [rbp-40h]

  v2 = *a2;
  ++*(_DWORD *)(a1 + 376);
  v64 = v2;
  v56 = *(_QWORD *)(v2 + 32);
  v3 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 24LL) + 8LL);
  if ( *((_BYTE *)v3 + 8) != 1 )
    sub_DBF6E(0);
  v60 = *v3;
  v5 = sub_15FCC40(a1 + 56, *v3);
  v43 = sub_15F0A30(a1 + 56, v5);
  v6 = (unsigned int **)sub_15FB1F0(a1 + 56, v5);
  v40 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v74 = v56;
  v9 = sub_15DC610(v40, v43, 1, (int)v74, v7, v8, v38, v40, v43, v45, (int)v74, v50, v53, (int)a2, v56, v58);
  v51 = (unsigned int *)v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v46 = *(_QWORD *)(a1 + 24);
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v12 = *v6;
  v62 = 2 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8832LL) + 4LL * *v51);
  if ( v12 )
  {
    v59 = &v12[2 * *(v12 - 1)];
    if ( v59 == v12 )
    {
      v12 = nullptr;
    }
    else
    {
      v13 = v12;
      v12 = nullptr;
      v54 = &v70;
      do
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)v13;
          if ( v60 == *(_QWORD *)v13 )
          {
            v66 = *(_DWORD ***)(v55 + 120);
          }
          else
          {
            v14 = *(_QWORD *)(a1 + 24);
            v15 = *(_QWORD *)v13;
            v70 = v57;
            v16 = sub_15DC610(
                    v14,
                    v15,
                    1,
                    (int)v54,
                    v10,
                    v11,
                    v39,
                    v41,
                    v44,
                    v46,
                    v48,
                    (char)v51,
                    (int)v54,
                    v55,
                    (int)v57,
                    v59);
            v17 = (unsigned int *)v16;
            if ( v16 )
              ++*(_DWORD *)(v16 + 8);
            if ( v12 )
            {
              v18 = v12[2]-- == 1;
              if ( v18 )
                sub_15D7BC0(v46, v12);
            }
            sub_B6F780(*(_QWORD *)(a1 + 16));
            v12 = v17;
            v66 = *(_DWORD ***)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v17);
          }
          v19 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)v71 = v64;
          v20 = (_DWORD *)sub_15DC610(
                            v19,
                            v22,
                            1,
                            (int)v71,
                            v10,
                            v11,
                            v39,
                            v41,
                            v44,
                            v46,
                            v48,
                            (char)v51,
                            (int)v54,
                            v55,
                            (int)v57,
                            v59);
          v21 = v20;
          if ( v20 )
            break;
          sub_B48640(a1, v66, nullptr, v62);
          v13 += 2;
          if ( v59 == v13 )
            goto LABEL_20;
        }
        ++v20[2];
        sub_B48640(a1, v66, v20, v62);
        v67 = v21[2];
        v21[2] = v67 - 1;
        if ( v67 == 1 )
          sub_15D7BC0(v19, v21);
        v13 += 2;
      }
      while ( v59 != v13 );
    }
  }
LABEL_20:
  v23 = *(_QWORD *)(a1 + 24);
  v61 = v23;
  sub_15E1B70(v23);
  sub_15E1A70(*(_QWORD *)(a1 + 24));
  v24 = sub_15E1B70(v23);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v26 = v62 ^ 1;
  sub_B48640(a1, (_DWORD **)v55, v57, v62 ^ 1);
  v27 = *(_QWORD *)(a1 + 24);
  v63 = v27;
  *(_QWORD *)v74 = v64;
  v30 = sub_15DC610(v27, v44, 1, v48, v28, v29, v39, v41, v44, v46, v48, (char)v51, (int)v54, v55, (int)v57, v59);
  v68 = (unsigned int *)v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v31 = *(_QWORD **)(a1 + 16);
  v72 = v26;
  v32 = v31[936];
  v73 = 2 * *(_DWORD *)(v31[1104] + 4LL * *v68);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 48LL))(v32, *(_QWORD *)(v31[1105] + 8LL * (v26 >> 1)));
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31[936] + 64LL))(v31[936]);
  v33 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v33 + 7488) + 48LL))(
    *(_QWORD *)(v33 + 7488),
    *(_QWORD *)(*(_QWORD *)(v33 + 8840) + 8LL * (v73 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 7488) + 64LL))(*(_QWORD *)(v33 + 7488));
  v34 = *(_QWORD *)(a1 + 24);
  v75 = 0;
  *(_QWORD *)v74 = &v72;
  v76 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C57408), (__m128i)(unsigned __int64)sub_B46050);
  if ( *(_QWORD *)(v34 + 912) )
  {
    *(_QWORD *)v71 = 0;
    v35 = sub_186B270(0x10u);
    *(_QWORD *)v71 = v35 + 8;
    *(_DWORD *)(v35 + 8) = v72;
    *(_QWORD *)v35 = 0x100000002LL;
    v36 = v73;
    ++*(_DWORD *)(v35 + 4);
    *(_DWORD *)(v35 + 12) = v36;
    sub_966E60(a1, (unsigned int **)v71);
    if ( *(_QWORD *)v71 )
      sub_186B220((void *)(*(_QWORD *)v71 - 8LL));
  }
  sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 2, (unsigned int)&v72, 0, 0, 1);
  if ( *(_QWORD *)(v34 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  if ( v76.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD, _QWORD, __int64))v76.m128i_i64[0])(*(_QWORD *)v49, *(_QWORD *)v49, 3);
  v65 = v68[2];
  v68[2] = v65 - 1;
  if ( v65 == 1 )
    sub_15D7BC0(v63, v68);
  if ( v25 )
  {
    v18 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v61, v25);
  }
  if ( v12 )
  {
    v18 = v12[2]-- == 1;
    if ( v18 )
      sub_15D7BC0(v47, v12);
  }
  v69 = *(_DWORD *)(v52 + 8);
  result = (unsigned int)(v69 - 1);
  *(_DWORD *)(v52 + 8) = result;
  if ( v69 == 1 )
    return sub_15D7BC0(v42, v52);
  return result;
}

