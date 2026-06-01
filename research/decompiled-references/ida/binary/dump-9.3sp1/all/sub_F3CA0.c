__int64 __fastcall sub_F3CA0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // r14
  _DWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // r15
  unsigned __int64 v34; // r14
  __int64 v35; // r12
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  char v39; // al
  __int64 v40; // rdi
  __int64 *v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r12
  __int64 *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // r15
  __int64 *v48; // rax
  __int64 v49; // rax
  __int64 i; // r14
  __int64 v51; // r12
  char v52; // al
  __int64 v53; // rax
  int v54; // [rsp+4h] [rbp-1C4h]
  int v55; // [rsp+8h] [rbp-1C0h]
  __int64 v56; // [rsp+8h] [rbp-1C0h]
  _QWORD *v57; // [rsp+10h] [rbp-1B8h]
  __int64 v58; // [rsp+10h] [rbp-1B8h]
  unsigned __int8 v59; // [rsp+23h] [rbp-1A5h]
  int v60; // [rsp+24h] [rbp-1A4h]
  __int64 v61; // [rsp+30h] [rbp-198h]
  _QWORD v62[3]; // [rsp+50h] [rbp-178h] BYREF
  __int128 v63; // [rsp+68h] [rbp-160h]
  __int64 v64; // [rsp+78h] [rbp-150h]
  __int64 v65; // [rsp+80h] [rbp-148h]
  __int64 v66; // [rsp+88h] [rbp-140h]
  __int64 v67; // [rsp+90h] [rbp-138h]
  __int64 v68; // [rsp+A0h] [rbp-128h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-120h]
  __int64 v70; // [rsp+B8h] [rbp-110h]
  __int64 v71; // [rsp+D0h] [rbp-F8h]
  int v72; // [rsp+D8h] [rbp-F0h]
  char v73; // [rsp+DCh] [rbp-ECh]
  __int64 v74; // [rsp+E0h] [rbp-E8h]
  __int64 (__fastcall **v75)(); // [rsp+F0h] [rbp-D8h] BYREF
  int v76; // [rsp+F8h] [rbp-D0h]
  __int64 v77; // [rsp+100h] [rbp-C8h]
  __int128 v78; // [rsp+108h] [rbp-C0h]
  __int64 v79; // [rsp+118h] [rbp-B0h]
  __int128 v80; // [rsp+120h] [rbp-A8h]
  _QWORD *v81; // [rsp+130h] [rbp-98h]
  __int64 v82; // [rsp+138h] [rbp-90h]
  __int64 v83; // [rsp+140h] [rbp-88h]
  _QWORD *v84; // [rsp+148h] [rbp-80h]
  __int64 v85; // [rsp+150h] [rbp-78h] BYREF
  __int128 v86; // [rsp+158h] [rbp-70h]
  int v87; // [rsp+168h] [rbp-60h]
  _BYTE v88[24]; // [rsp+170h] [rbp-58h] BYREF
  unsigned __int64 v89; // [rsp+188h] [rbp-40h]

  v2 = a1[1];
  v89 = __readfsqword(0x28u);
  v3 = a1;
  v60 = sub_19F880(*(_QWORD *)(v2 + 936));
  v4 = *(_QWORD *)(a1[1] + 936LL);
  v59 = sub_19F810(v4);
  if ( !v59 )
    return v59;
  if ( v60 == -1 || !*(_QWORD *)(v4 + 32) )
    return 0;
  v10 = 0;
  sub_32AD90(a1[27], a2, v5, v6, v7, v8);
  v11 = 0;
  if ( *(_QWORD *)(v4 + 32) )
  {
    do
    {
      v12 = *(int *)(*(_QWORD *)(v4 + 24) + 4 * v11);
      v13 = *(_QWORD *)(v3[1] + 432LL) + 104 * v12;
      v14 = *(_DWORD *)(v13 + 24);
      if ( (v14 & 0x20) != 0 )
      {
        if ( (v14 & 0x100) != 0 )
          goto LABEL_14;
      }
      else
      {
        qsnprintf();
        if ( !v10 )
          v88[2] = 0;
        sub_213D50(v3[1], v13, v88, 4);
        v14 = *(_DWORD *)(v13 + 24);
        if ( (v14 & 0x100) != 0 )
        {
LABEL_14:
          BYTE1(v14) &= 0x7Eu;
          *(_DWORD *)(v13 + 24) = v14 | 0x100000;
          v15 = v3[6];
          v16 = *(_DWORD **)v15;
          v17 = *(_QWORD *)v15 + 4LL * *(_QWORD *)(v15 + 8);
          if ( *(_QWORD *)v15 != v17 )
          {
            while ( (_DWORD)v12 != *v16 )
            {
              if ( (_DWORD *)v17 == ++v16 )
                goto LABEL_9;
            }
            if ( (_DWORD *)v17 != v16 )
            {
              memmove(v16, v16 + 1, v17 - (_QWORD)v16 - 4);
              --*(_QWORD *)(v15 + 8);
            }
          }
        }
      }
LABEL_9:
      ++v10;
      sub_1EF8F0(v13, *(_QWORD *)(v3[27] + 112LL), v3[27] + 248LL, 0);
      v11 = v10;
    }
    while ( (unsigned __int64)v10 < *(_QWORD *)(v4 + 32) );
  }
  v18 = v3[27];
  v79 = 0;
  v81 = v3;
  v82 = v18;
  v83 = v18 + 248;
  v84 = (_QWORD *)(v4 + 24);
  v85 = 0;
  v87 = 0;
  v78 = 0;
  v80 = 0;
  v86 = 0;
  v19 = *(_QWORD *)(v4 + 32);
  v76 = 6;
  v77 = 0;
  v75 = off_4DCE80;
  if ( !v19 )
  {
    if ( !under_debugger )
      sub_383060(51463);
LABEL_69:
    BUG();
  }
  v85 = qvector_reserve((__int64)&v85, 0, v19, 8);
  memset((void *)(v85 + 8 * v86), 0, 8 * (v19 - v86));
  v20 = v84;
  *(_QWORD *)&v86 = v19;
  if ( v84[1] )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(v81[1] + 432LL) + 104LL * *(int *)(*v20 + 4 * v21);
        if ( *(_DWORD *)v23 == 1 )
          break;
        if ( (*(_BYTE *)(v23 + 25) & 2) == 0 )
        {
          if ( !under_debugger )
            sub_383060(51009);
          goto LABEL_69;
        }
LABEL_24:
        v21 = ++v22;
        if ( (unsigned __int64)v22 >= v20[1] )
          goto LABEL_30;
      }
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 == -1 )
        goto LABEL_24;
      *(_QWORD *)(v85 + 8 * v21) = v24;
      if ( *(_QWORD *)(v85 + 8LL * v87) < v24 )
        v87 = v22;
      v20 = v84;
      v21 = ++v22;
    }
    while ( (unsigned __int64)v22 < v84[1] );
  }
LABEL_30:
  v25 = v3 + 2;
  sub_255A80(&v75, v3 + 2, 0);
  if ( *(_QWORD *)(v4 + 32) )
  {
    v54 = 0;
    v26 = 0;
    do
    {
      v27 = *(int *)(*(_QWORD *)(v4 + 24) + 4 * v26);
      v28 = v3[1];
      v55 = v27;
      v29 = *(_QWORD *)(v28 + 432) + 104 * v27;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v28 + 936) + 72LL))(*(_QWORD *)(v28 + 936)) )
      {
        *(_DWORD *)(v29 + 92) = 1;
        v32 = qalloc_or_throw(40, (__int64)v25, v30, v31);
        *(_QWORD *)v32 = 0;
        v33 = (__int64 *)v32;
        *(_OWORD *)(v32 + 8) = 0;
        *(_QWORD *)(v32 + 24) = 0;
        *(_DWORD *)(v32 + 32) = 0;
        v62[1] = 0xFFFFFFFF00000000LL;
        v62[2] = 0xFFFFFFFFLL;
        v64 = 0;
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v63 = 0;
        v34 = *(_QWORD *)(v32 + 8);
        v62[0] = -1;
        if ( v34 > 2 )
        {
          v57 = v3;
          v41 = (__int64 *)v32;
          v42 = 2;
          do
          {
            v43 = 9 * v42++;
            v44 = *v41 + 8 * v43;
            clear_tinfo_t();
            sub_255630(v44);
            clear_tinfo_t();
          }
          while ( v34 != v42 );
          v33 = v41;
          v3 = v57;
          v33[1] = 2;
        }
        else if ( v34 != 2 )
        {
          v35 = *(_QWORD *)v32;
          v36 = *(_QWORD *)(v32 + 16);
          if ( (unsigned __int64)v62 < *v33 || (unsigned __int64)v62 >= v35 + 72 * v36 )
          {
            if ( v36 > 1
              || (v53 = qvector_reserve((__int64)v33, v35, 2, 72), v34 = v33[1], *v33 = v53, v35 = v53, v34 <= 1) )
            {
              for ( i = -(int)v34 & 0x48; ; i = 72 )
              {
                v51 = i + v35;
                *(_QWORD *)v51 = -1;
                *(_DWORD *)(v51 + 8) = 0;
                *(_QWORD *)(v51 + 12) = -1;
                *(_QWORD *)(v51 + 48) = 0;
                *(_DWORD *)(v51 + 56) = 0;
                sub_25AFF0(v51, v62);
                v52 = BYTE4(v66);
                *(_QWORD *)(v51 + 64) = 0;
                *(_BYTE *)(v51 + 60) = v52;
                copy_tinfo_t();
                if ( i )
                  break;
                v35 = *v33;
              }
            }
            v33[1] = 2;
          }
          else
          {
            v68 = -1;
            LODWORD(v69) = 0;
            *(_QWORD *)((char *)&v69 + 4) = -1;
            v71 = 0;
            v72 = 0;
            sub_25AFF0(&v68, v62);
            v74 = 0;
            v73 = BYTE4(v66);
            copy_tinfo_t();
            if ( (unsigned __int64)v33[2] <= 1 )
              *v33 = qvector_reserve((__int64)v33, *v33, 2, 72);
            v37 = v33[1];
            v61 = 72 * v37;
            if ( v37 <= 1 )
            {
              while ( 1 )
              {
                v38 = *v33 + v61;
                *(_QWORD *)v38 = -1;
                *(_DWORD *)(v38 + 8) = 0;
                *(_QWORD *)(v38 + 12) = -1;
                *(_QWORD *)(v38 + 48) = 0;
                *(_DWORD *)(v38 + 56) = 0;
                sub_25AFF0(v38, &v68);
                v39 = v73;
                *(_QWORD *)(v38 + 64) = 0;
                *(_BYTE *)(v38 + 60) = v39;
                copy_tinfo_t();
                if ( v61 )
                  break;
                v61 = 72;
              }
            }
            v33[1] = 2;
            clear_tinfo_t();
            sub_255630(&v68);
            clear_tinfo_t();
          }
        }
        clear_tinfo_t();
        sub_255630(v62);
        clear_tinfo_t();
        copy_tinfo_t();
        *(_DWORD *)(*v33 + 8) = 65;
        *(_QWORD *)(*v33 + 24) = v3[1];
        *(_DWORD *)(*v33 + 32) = v55;
        *(_DWORD *)(*v33 + 80) = 65;
        *(_QWORD *)(*v33 + 96) = v3[1];
        *(_DWORD *)(*v33 + 104) = v60;
        copy_tinfo_t();
        copy_tinfo_t();
        v68 = 1;
        v56 = sub_F1640((__int64)&v68, (__int64)v33, (__int64)"va_start");
        clear_tinfo_t();
        v45 = (__int64 *)v3[5];
        *(_QWORD *)&v69 = -4294967226LL;
        v68 = -1;
        *((_QWORD *)&v69 + 1) = 0xFFFFFFFFLL;
        v70 = 0;
        v58 = *v45;
        v25 = &v68;
        v47 = qalloc_or_throw(48, (__int64)v33, v46, *v45);
        *(_QWORD *)(v47 + 16) = -1;
        *(_DWORD *)(v47 + 24) = 70;
        *(_QWORD *)(v47 + 28) = -1;
        sub_25AA70(v47 + 16, &v68);
        *(_QWORD *)v47 = v58;
        v48 = *(__int64 **)(v58 + 8);
        *(_QWORD *)(v47 + 8) = v48;
        *v48 = v47;
        *(_QWORD *)(v58 + 8) = v47;
        ++v45[2];
        sub_255050(&v68);
        v49 = *(_QWORD *)v3[5];
        *(_DWORD *)(v49 + 24) = 72;
        *(_QWORD *)(v49 + 40) = v56;
      }
      else if ( !*(_DWORD *)(v29 + 92) )
      {
        *(_DWORD *)(v29 + 92) = 1;
      }
      v26 = ++v54;
      *(_DWORD *)(v29 + 24) |= 1u;
    }
    while ( (unsigned __int64)v54 < *(_QWORD *)(v4 + 32) );
  }
  sub_3252D0(v3, 1, 0);
  v40 = v85;
  *(_DWORD *)(v3[27] + 1416LL) |= 8u;
  v75 = off_4DCE80;
  if ( v40 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v40);
  }
  v75 = off_4DBCF8;
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  return v59;
}
