unsigned __int64 __fastcall sub_3A63C0(_QWORD *a1, char *a2)
{
  _QWORD *v2; // r13
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 *v10; // r12
  int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int *v14; // rax
  __int64 i; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  char v19; // al
  char *v20; // r12
  __int64 v21; // rax
  char *v22; // r13
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdi
  _QWORD *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // r14
  __int64 v31; // [rsp-8h] [rbp-2A8h]
  int v32; // [rsp+0h] [rbp-2A0h]
  __int64 v33; // [rsp+0h] [rbp-2A0h]
  void *v34; // [rsp+0h] [rbp-2A0h]
  __int64 v35; // [rsp+8h] [rbp-298h]
  __int64 v36; // [rsp+8h] [rbp-298h]
  unsigned int *v37; // [rsp+10h] [rbp-290h]
  __int64 v38; // [rsp+18h] [rbp-288h]
  int v39; // [rsp+18h] [rbp-288h]
  int v40; // [rsp+20h] [rbp-280h]
  char v41; // [rsp+27h] [rbp-279h]
  __int64 v42; // [rsp+28h] [rbp-278h] BYREF
  char *v43; // [rsp+30h] [rbp-270h] BYREF
  __int64 v44; // [rsp+38h] [rbp-268h] BYREF
  int v45; // [rsp+40h] [rbp-260h]
  void *ptr; // [rsp+48h] [rbp-258h] BYREF
  int v47[4]; // [rsp+50h] [rbp-250h]
  int v48; // [rsp+60h] [rbp-240h]
  int v49[2]; // [rsp+68h] [rbp-238h] BYREF
  int v50[2]; // [rsp+70h] [rbp-230h]
  int v51[2]; // [rsp+78h] [rbp-228h]
  int v52[2]; // [rsp+80h] [rbp-220h]
  int v53[2]; // [rsp+88h] [rbp-218h]
  int v54; // [rsp+90h] [rbp-210h]
  int v55[4]; // [rsp+98h] [rbp-208h]
  int v56[2]; // [rsp+A8h] [rbp-1F8h]
  int v57[2]; // [rsp+B0h] [rbp-1F0h]
  int v58; // [rsp+B8h] [rbp-1E8h]
  int v59[2]; // [rsp+C0h] [rbp-1E0h]
  int v60; // [rsp+C8h] [rbp-1D8h]
  int v61[2]; // [rsp+D0h] [rbp-1D0h]
  int v62; // [rsp+D8h] [rbp-1C8h]
  int v63[2]; // [rsp+E0h] [rbp-1C0h]
  int v64; // [rsp+E8h] [rbp-1B8h]
  int v65[2]; // [rsp+F0h] [rbp-1B0h]
  int v66[4]; // [rsp+F8h] [rbp-1A8h] BYREF
  int v67[2]; // [rsp+108h] [rbp-198h]
  int v68[2]; // [rsp+110h] [rbp-190h]
  int v69[2]; // [rsp+118h] [rbp-188h]
  int v70; // [rsp+120h] [rbp-180h] BYREF
  int v71; // [rsp+128h] [rbp-178h]
  int v72; // [rsp+130h] [rbp-170h]
  int v73; // [rsp+138h] [rbp-168h]
  int v74; // [rsp+140h] [rbp-160h]
  int v75; // [rsp+148h] [rbp-158h]
  int v76; // [rsp+150h] [rbp-150h]
  int v77; // [rsp+158h] [rbp-148h]
  int v78; // [rsp+160h] [rbp-140h]
  int v79; // [rsp+168h] [rbp-138h]
  int v80; // [rsp+170h] [rbp-130h]
  int v81; // [rsp+178h] [rbp-128h]
  int v82; // [rsp+180h] [rbp-120h]
  int v83; // [rsp+188h] [rbp-118h]
  int v84; // [rsp+190h] [rbp-110h]
  int v85; // [rsp+198h] [rbp-108h]
  int v86; // [rsp+1A0h] [rbp-100h]
  __int64 v87; // [rsp+1A8h] [rbp-F8h]
  int v88; // [rsp+1B0h] [rbp-F0h]
  int v89; // [rsp+1B8h] [rbp-E8h]
  int v90; // [rsp+1C0h] [rbp-E0h]
  int v91; // [rsp+1C8h] [rbp-D8h]
  int v92; // [rsp+1D0h] [rbp-D0h]
  int v93; // [rsp+1D8h] [rbp-C8h]
  int v94; // [rsp+1E0h] [rbp-C0h]
  int v95; // [rsp+1E8h] [rbp-B8h]
  int v96; // [rsp+1F0h] [rbp-B0h]
  __int64 v97; // [rsp+1F8h] [rbp-A8h]
  _QWORD v98[8]; // [rsp+260h] [rbp-40h] BYREF

  v2 = a1 + 213;
  v4 = *a1;
  v98[0] = __readfsqword(0x28u);
  *(_OWORD *)v47 = 0;
  ptr = nullptr;
  v37 = *(unsigned int **)(v4 + 1536);
  v6 = sub_505D70(a1 + 213, a2);
  v7 = ea2node(a2);
  if ( netnode_supval(v7, 1, v49, 8, 65) <= 0 || (v8 = *(_QWORD *)v49 - 1LL, !*(_QWORD *)v49) )
    v8 = sub_5CC7C0(*a1, a2);
  if ( !(unsigned __int8)sub_40E8C0(a1, a2) && a2 != (char *)sub_5B4200(a1, a2) && v8 != -1 )
  {
LABEL_6:
    sub_3A4190((__int64)a1, a2, a2 + 1, 0x1Eu);
    if ( !v6 )
    {
LABEL_10:
      v9 = sub_5CAA10(a1);
      v10 = (__int64 *)v9;
      if ( !v9 || (int)sub_5C9B30(a1, v9, a2) < 0 )
      {
        *(_QWORD *)v67 = -1;
        v11 = &v70;
        *(_QWORD *)v68 = 0;
        *(_QWORD *)v69 = 0;
        *(_OWORD *)v66 = -1;
        do
        {
          *(_WORD *)v11 = 0;
          v11 += 10;
          *((_WORD *)v11 - 19) = 0;
          *((_WORD *)v11 - 18) = 0;
          *(v11 - 2) = 0;
          *((_WORD *)v11 - 17) = 0;
          *((_OWORD *)v11 - 2) = 0;
          *((_QWORD *)v11 - 2) = 0;
        }
        while ( v98 != (_QWORD *)v11 );
        if ( (~((unsigned __int16)sub_3BE900(a1, a2, 4) >> 8) & 6) == 0
          || (int)sub_577F80(
                    (int)a1,
                    (int)a2,
                    v31,
                    v32,
                    v35,
                    (int)v37,
                    v38,
                    v40,
                    v42,
                    (int)v43,
                    v44,
                    v45,
                    (int)ptr,
                    v47[0],
                    v47[2],
                    v48,
                    v49[0],
                    v50[0],
                    v51[0],
                    v52[0],
                    v53[0],
                    v54,
                    v55[0],
                    v55[2],
                    v56[0],
                    v57[0],
                    v58,
                    v59[0],
                    v60,
                    v61[0],
                    v62,
                    v63[0],
                    v64,
                    v65[0],
                    v66[0],
                    v66[2],
                    v67[0],
                    v68[0],
                    v69[0],
                    v70,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75,
                    v76,
                    v77,
                    v78,
                    v79,
                    v80,
                    v81,
                    v82,
                    v83,
                    v84,
                    v85,
                    v86,
                    v87,
                    v88,
                    v89,
                    v90,
                    v91,
                    v92,
                    v93,
                    v94,
                    v95,
                    v96,
                    v97) > 0 )
        {
          v12 = -1;
          if ( v10 )
            v12 = *v10;
          sub_3A4AF0(a1, (unsigned __int64)a2, v12);
          set_abits(a2, 0x20000000);
        }
      }
      goto LABEL_19;
    }
LABEL_7:
    if ( *(char *)(v6 + 17) >= 0 && *(char **)v6 == a2 )
      sub_5D4180((int)a1, v31, v32, v35, v37, v38, v40, v42, (int)v43, v44);
    goto LABEL_10;
  }
  if ( (get_aflags(a2) & 0x20000000) != 0 )
  {
    if ( a2 != (char *)-1LL )
      goto LABEL_6;
    if ( !v6 )
      goto LABEL_23;
  }
  else if ( !v6 )
  {
LABEL_23:
    v33 = -1;
    v41 = 0;
    v36 = -1;
    goto LABEL_24;
  }
  v19 = sub_69F350(*a1, a2, 31);
  if ( a2 != (char *)-1LL && v19 )
  {
    sub_3A4190((__int64)a1, a2, a2 + 1, 0x1Eu);
    goto LABEL_7;
  }
  if ( *(char *)(v6 + 17) >= 0 )
    goto LABEL_23;
  if ( *(char **)v6 == a2 )
  {
    v24 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)v49 = 0;
    v36 = v24;
    func_parent_iterator_set(v49, v6);
    v25 = *(_QWORD *)v49;
    v50[0] = 0;
    if ( *(_QWORD *)v49 )
    {
      if ( *(char *)(*(_QWORD *)v49 + 17LL) >= 0 )
        goto LABEL_73;
      if ( *(int *)(*(_QWORD *)v49 + 32LL) > 0 )
      {
        while ( 1 )
        {
          v26 = ptr;
          v27 = *(_QWORD *)(*(_QWORD *)(v25 + 40) + 8LL * v50[0]);
          v28 = *(_QWORD *)v47;
          v44 = v27;
          if ( *(_QWORD *)&v47[2] < (unsigned __int64)(*(_QWORD *)v47 + 1LL) )
          {
            v34 = (void *)v27;
            ptr = (void *)qvector_reserve(&ptr, ptr, *(_QWORD *)v47 + 1LL, 8);
            v26 = ptr;
            v27 = (__int64)v34;
            v28 = *(_QWORD *)v47;
          }
          v26[v28] = v27;
          v25 = *(_QWORD *)v49;
          ++*(_QWORD *)v47;
          if ( v50[0] + 1 >= *(_DWORD *)(*(_QWORD *)v49 + 32LL) )
            break;
          ++v50[0];
        }
      }
      if ( v25 )
LABEL_73:
        lock_func_range(v25, 0);
    }
    v29 = *(_QWORD *)(v6 + 8);
    v30 = (char *)ptr;
    v33 = v29;
    if ( 8LL * *(_QWORD *)v47 )
    {
      do
      {
        sub_5CAA10(a1);
        sub_5CE7C0((int)a1);
        v30 += 8;
      }
      while ( v30 != (char *)ptr + 8 * *(_QWORD *)v47 );
    }
    v41 = 0;
  }
  else
  {
    if ( (unsigned __int8)is_problem_present(13, a2) )
    {
LABEL_19:
      if ( ptr )
      {
        *(_QWORD *)v47 = 0;
        qfree(ptr);
      }
      return v98[0] - __readfsqword(0x28u);
    }
    remember_problem(13, a2, 0);
    sub_5CDC30((int)a1, v31, v32, v35, (int)v37, v38, v40, v42);
    v33 = -1;
    v41 = 1;
    v36 = -1;
  }
LABEL_24:
  *(_QWORD *)v49 = a2;
  *(_QWORD *)v50 = 0;
  *(_QWORD *)v51 = 512;
  *(_QWORD *)v52 = -1;
  *(_QWORD *)v53 = 0;
  LOWORD(v54) = 0;
  *(_QWORD *)v56 = 0xFFFFFFFFLL;
  *(_QWORD *)v57 = 0;
  v58 = 0;
  *(_QWORD *)v59 = 0;
  v60 = 0;
  *(_QWORD *)v61 = 0;
  v62 = 0;
  *(_QWORD *)v63 = 0;
  v64 = 0;
  *(_QWORD *)v65 = 0;
  *(_OWORD *)v55 = 0;
  v39 = sub_5C8680((int)a1, (int)v49, 0);
  if ( v39 == 1 )
  {
    if ( (unsigned __int8)sub_5D5340(
                            (int)a1,
                            (int)v49,
                            v31,
                            (void *)v33,
                            v36,
                            (int)v37,
                            1,
                            v40,
                            v42,
                            (int)v43,
                            v44,
                            v45,
                            (int)ptr,
                            v47[0],
                            v47[2],
                            v48,
                            v49[0],
                            v50[0],
                            v51[0],
                            v52[0],
                            v53[0],
                            v54,
                            v55[0],
                            v55[2],
                            v56[0],
                            v57[0],
                            v58,
                            v59[0],
                            v60,
                            v61[0],
                            v62,
                            v63[0],
                            v64,
                            v65[0],
                            v66[0],
                            v66[2],
                            v67[0],
                            v68[0],
                            v69[0],
                            v70,
                            v71,
                            v72,
                            v73,
                            v74,
                            v75,
                            v76,
                            v77,
                            v78,
                            v79,
                            v80,
                            v81,
                            v82,
                            v83,
                            v84,
                            v85,
                            v86,
                            v87) )
    {
      v22 = (char *)ptr;
      if ( 8LL * *(_QWORD *)v47 )
      {
        do
        {
          v23 = sub_5CAA10(a1);
          if ( v23 )
          {
            while ( *(_DWORD *)(v23 + 128) )
            {
              if ( !*(_QWORD *)(v23 + 136) )
              {
                sub_5C7820(a1, v23, 1);
                if ( !*(_QWORD *)(v23 + 136) )
                {
                  if ( !under_debugger )
                    interr(548);
                  BUG();
                }
              }
              sub_5CE7C0((int)a1);
            }
            sub_5CC740(a1, v23, 0, -1, 0);
          }
          v22 += 8;
        }
        while ( v22 != (char *)ptr + 8 * *(_QWORD *)v47 );
      }
      sub_3A6250(*(_QWORD **)(*a1 + 1536LL), (__int64)a2, -1, 1);
    }
  }
  else
  {
    if ( !v39 )
    {
      v13 = *(_QWORD *)v50;
      if ( *(_QWORD *)v50 != -1 )
      {
        *(_QWORD *)v67 = -1;
        v14 = &v70;
        *(_QWORD *)v68 = 0;
        *(_QWORD *)v69 = 0;
        *(_OWORD *)v66 = -1;
        do
        {
          *(_WORD *)v14 = 0;
          v14 += 10;
          *((_WORD *)v14 - 19) = 0;
          *((_WORD *)v14 - 18) = 0;
          *(v14 - 2) = 0;
          *((_WORD *)v14 - 17) = 0;
          *((_OWORD *)v14 - 2) = 0;
          *((_QWORD *)v14 - 2) = 0;
        }
        while ( v14 != (int *)v98 );
        for ( i = decode_prev_insn(v66, v13, v98, 0.0); ; i = decode_prev_insn(v66, v17, v16, 0.0) )
        {
          v17 = i;
          if ( i == -1 )
            break;
          if ( !(unsigned int)is_align_insn(i) )
          {
            LOBYTE(v45) = 0;
            v44 = -1;
            if ( !(unsigned __int8)sub_3E1CA0(a1, &v44, v17) )
              break;
            v42 = v17;
            v43 = a2 + 1;
            sub_3A42A0((_QWORD *)v37 + 204, &v42, (__int64 *)&v43, v37[424]);
            if ( v36 == -1 )
              goto LABEL_52;
            goto LABEL_49;
          }
        }
      }
    }
    if ( v36 != -1 )
    {
      v41 = 0;
LABEL_49:
      sub_4F3480(a1, a2, 8);
      v20 = (char *)ptr;
      if ( 8LL * *(_QWORD *)v47 )
      {
        do
        {
          sub_5CAA10(a1);
          sub_5CF110(
            (int)a1,
            v31,
            v33,
            v36,
            (int)v37,
            v39,
            v40,
            v42,
            (int)v43,
            v44,
            v45,
            (int)ptr,
            v47[0],
            v47[2],
            v48,
            v49[0],
            v50[0],
            v51[0],
            v52[0],
            v53[0],
            v54,
            *(__int64 *)v55);
          v20 += 8;
        }
        while ( v20 != (char *)ptr + 8 * *(_QWORD *)v47 );
      }
      v21 = sub_505D70(v2, a2);
      sub_5CB470(a1, v21, v36);
LABEL_52:
      if ( v39 != 2 && v41 )
        set_abits(a2, 0x20000000);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)v47 = 0;
    qfree(ptr);
  }
  return v98[0] - __readfsqword(0x28u);
}
