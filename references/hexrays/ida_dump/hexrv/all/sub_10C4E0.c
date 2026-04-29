unsigned __int64 __fastcall sub_10C4E0(_QWORD *a1, __int64 *a2, __int64 *a3, char a4, unsigned __int64 **a5, int a6)
{
  int v6; // r13d
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 (__fastcall *v12)(__int64); // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 (__fastcall *v32)(__int64); // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r13
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 *v43; // [rsp+0h] [rbp-288h]
  unsigned int v44; // [rsp+0h] [rbp-288h]
  __int64 *v45; // [rsp+8h] [rbp-280h]
  unsigned __int64 **v46; // [rsp+10h] [rbp-278h]
  __int64 (__fastcall **v47)(); // [rsp+20h] [rbp-268h] BYREF
  __int64 v48; // [rsp+28h] [rbp-260h] BYREF
  __int128 v49; // [rsp+30h] [rbp-258h]
  _QWORD v50[2]; // [rsp+40h] [rbp-248h] BYREF
  int v51; // [rsp+50h] [rbp-238h]
  __int64 v52; // [rsp+58h] [rbp-230h]
  __int64 v53; // [rsp+60h] [rbp-228h]
  int v54; // [rsp+68h] [rbp-220h]
  int v55; // [rsp+70h] [rbp-218h]
  _QWORD *v56; // [rsp+78h] [rbp-210h]
  __int64 (__fastcall **v57)(); // [rsp+80h] [rbp-208h] BYREF
  __int64 v58; // [rsp+88h] [rbp-200h] BYREF
  __int128 v59; // [rsp+90h] [rbp-1F8h]
  _QWORD v60[2]; // [rsp+A0h] [rbp-1E8h] BYREF
  int v61; // [rsp+B0h] [rbp-1D8h]
  __int64 v62; // [rsp+B8h] [rbp-1D0h]
  __int64 v63; // [rsp+C0h] [rbp-1C8h]
  int v64; // [rsp+C8h] [rbp-1C0h]
  int v65; // [rsp+D0h] [rbp-1B8h]
  _QWORD *v66; // [rsp+D8h] [rbp-1B0h]
  _QWORD v67[2]; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-198h]
  __int64 v69; // [rsp+100h] [rbp-188h]
  __int64 v70; // [rsp+108h] [rbp-180h]
  __int64 v71; // [rsp+130h] [rbp-158h]
  __int64 v72; // [rsp+138h] [rbp-150h]
  __int64 v73; // [rsp+160h] [rbp-128h]
  __int64 v74; // [rsp+168h] [rbp-120h]
  __int64 v75; // [rsp+170h] [rbp-118h]
  __int64 v76; // [rsp+178h] [rbp-110h]
  __int64 v77; // [rsp+180h] [rbp-108h]
  __int64 v78; // [rsp+188h] [rbp-100h]
  __int64 v79; // [rsp+1E0h] [rbp-A8h]
  __int64 v80; // [rsp+1E8h] [rbp-A0h]
  __int64 v81; // [rsp+1F0h] [rbp-98h]
  __int64 v82; // [rsp+1F8h] [rbp-90h]
  int v83; // [rsp+218h] [rbp-70h]
  unsigned __int64 v84; // [rsp+248h] [rbp-40h]

  v6 = a4 & 0x60;
  v45 = a2;
  v8 = a1[5];
  v43 = a3;
  v46 = a5;
  v84 = __readfsqword(0x28u);
  sub_10A7B0((__int64)v67, v8, a6, v6 | 4);
  v12 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
  if ( v12 == sub_FD5E0 )
    v13 = *(int *)(a1[5] + 64LL);
  else
    v13 = ((int (__fastcall *)(_QWORD *, __int64, __int64, __int64 (__fastcall *)(__int64), __int64, __int64, __int64 *, __int64 *, unsigned __int64 **))v12)(
            a1,
            v8,
            v9,
            sub_FD5E0,
            v10,
            v11,
            v43,
            v45,
            v46);
  v48 = 0;
  v50[0] = 0;
  v50[1] = 0;
  v51 = v74;
  v52 = 0;
  v53 = 0;
  v54 = v74;
  v55 = 1;
  v49 = 0;
  sub_100F10(&v48, v13, (unsigned __int64)v50);
  v56 = v67;
  v47 = &off_4AFD18;
  sub_30C660(a1, &v47);
  sub_10B230((__int64)v67, &v48, v43, v46);
  v18 = 0;
  v44 = v6 | 5;
  v19 = v68;
  if ( v68 )
  {
    do
    {
      v20 = 3 * v18++;
      qfree(*(_QWORD *)(v67[1] + 8 * v20));
    }
    while ( v19 != v18 );
  }
  v21 = v70;
  v22 = 0;
  v68 = 0;
  if ( v70 )
  {
    do
    {
      v23 = 3 * v22++;
      qfree(*(_QWORD *)(v69 + 8 * v23));
    }
    while ( v21 != v22 );
  }
  v24 = v72;
  v25 = 0;
  v70 = 0;
  if ( v72 )
  {
    do
    {
      v14 = v71;
      v26 = (__int64 *)(v71 + 24 * v25);
      v27 = *v26;
      if ( *v26 )
      {
        v26[1] = 0;
        qfree(v27);
      }
      ++v25;
    }
    while ( v24 != v25 );
  }
  v72 = 0;
  if ( v73 )
  {
    v74 = 0;
    qfree(v73);
    v73 = 0;
    v75 = 0;
  }
  v28 = v76;
  if ( v76 )
  {
    v29 = v77;
    if ( v77 )
    {
      v30 = 0;
      do
      {
        v31 = v30++;
        qfree(*(_QWORD *)(v28 + 16 * v31));
        v28 = v76;
      }
      while ( v29 != v30 );
    }
    v77 = 0;
    qfree(v28);
    v76 = 0;
    v78 = 0;
  }
  v79 = 0;
  if ( v80 )
  {
    v81 = 0;
    qfree(v80);
    v80 = 0;
    v82 = 0;
  }
  v83 = -1;
  sub_10A410((__int64)v67, v44, v14, v15, v16, v17);
  v32 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
  if ( v32 == sub_FD5E0 )
    v33 = *(int *)(a1[5] + 64LL);
  else
    v33 = (int)v32((__int64)a1);
  v57 = (__int64 (__fastcall **)())&unk_4BDCE0;
  v58 = 0;
  v60[0] = 0;
  v60[1] = 0;
  v61 = v74;
  v62 = 0;
  v63 = 0;
  v64 = v74;
  v65 = 1;
  v59 = 0;
  sub_100F10(&v58, v33, (unsigned __int64)v60);
  v57 = &off_4AFD18;
  v66 = v67;
  sub_30CA20(a1, &v57);
  sub_10B230((__int64)v67, &v58, v45, nullptr);
  v57 = (__int64 (__fastcall **)())&unk_4BDCE0;
  qfree(v62);
  qfree(v60[0]);
  v34 = v58;
  if ( v58 )
  {
    v35 = v59;
    if ( (_QWORD)v59 )
    {
      v36 = 0;
      do
      {
        v37 = 3 * v36++;
        qfree(*(_QWORD *)(v34 + 8 * v37));
        v34 = v58;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v59 = 0;
    qfree(v34);
  }
  v47 = (__int64 (__fastcall **)())&unk_4BDCE0;
  qfree(v52);
  qfree(v50[0]);
  v38 = v48;
  if ( v48 )
  {
    v39 = v49;
    if ( (_QWORD)v49 )
    {
      v40 = 0;
      do
      {
        v41 = 3 * v40++;
        qfree(*(_QWORD *)(v38 + 8 * v41));
        v38 = v48;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v49 = 0;
    qfree(v38);
  }
  sub_FED30(v67);
  return v84 - __readfsqword(0x28u);
}
