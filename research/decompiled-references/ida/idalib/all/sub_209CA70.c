__int64 *__fastcall sub_209CA70(__int64 a1, __int64 *a2, double a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *result; // rax
  __int64 v26; // r12
  __int64 v27; // rbp
  int v28; // r12d
  int v29; // r12d
  void (__fastcall *v30)(__int64, __int64, _QWORD); // rbx
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 (__fastcall *v33)(__int64, __int64, void **); // r12
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 (__fastcall *v47)(__int64, __int64, _QWORD); // rbx
  unsigned int v48; // eax
  int v49; // eax
  __int64 v50; // rsi
  int v51; // ecx
  unsigned int v52; // edx
  __int64 **v53; // rax
  __int64 *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 (__fastcall *v57)(__int64, __int64, void **); // r12
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rbp
  void (__fastcall *v71)(__int64, __int64, _QWORD); // rbx
  unsigned int v72; // eax
  __int64 v73; // rax
  const void *v74; // rax
  size_t v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 *v82; // rax
  __int64 v83; // rsi
  __int64 v84; // r15
  __int64 *v85; // rbx
  __int64 v86; // r12
  const void *v87; // rax
  size_t v88; // rdx
  __int64 v89; // rdi
  __int64 v90; // r14
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 (__fastcall *v99)(__int64, __int64, _QWORD); // rbx
  unsigned int v100; // eax
  int v101; // eax
  int v102; // r8d
  __int64 *v103; // rdi
  char v104; // [rsp+7h] [rbp-1E1h]
  __int64 v105; // [rsp+8h] [rbp-1E0h]
  __int64 v106; // [rsp+10h] [rbp-1D8h]
  __int64 v107; // [rsp+18h] [rbp-1D0h]
  __int64 v108; // [rsp+20h] [rbp-1C8h]
  __int64 v109; // [rsp+20h] [rbp-1C8h]
  __int64 *v110; // [rsp+30h] [rbp-1B8h]
  __int64 v111; // [rsp+38h] [rbp-1B0h]
  void *v112[2]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v113[16]; // [rsp+50h] [rbp-198h] BYREF
  __m128i v114; // [rsp+60h] [rbp-188h] BYREF
  __int64 v115; // [rsp+70h] [rbp-178h]
  __int64 v116; // [rsp+78h] [rbp-170h]
  __int16 v117; // [rsp+80h] [rbp-168h]
  __m128i v118[2]; // [rsp+90h] [rbp-158h] BYREF
  __int16 v119; // [rsp+B0h] [rbp-138h]
  __m128i v120[3]; // [rsp+C0h] [rbp-128h] BYREF
  __m128i v121[2]; // [rsp+F0h] [rbp-F8h] BYREF
  __int16 v122; // [rsp+110h] [rbp-D8h]
  __m128i v123[3]; // [rsp+120h] [rbp-C8h] BYREF
  __m128i v124[2]; // [rsp+150h] [rbp-98h] BYREF
  __int16 v125; // [rsp+170h] [rbp-78h]
  __m128i v126[6]; // [rsp+180h] [rbp-68h] BYREF

  v107 = a1 + 8;
  (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 64))(a2, a1 + 8);
  v9 = sub_2099960(a1, a2[2], v5, v6, v7, v8);
  v106 = v9;
  if ( v9 && *(_BYTE *)(v9 + 41) && sub_2097D10(a1, a2[2]) )
  {
    v49 = *(_DWORD *)(a1 + 648);
    v50 = *(_QWORD *)(a1 + 632);
    if ( v49 )
    {
      v51 = v49 - 1;
      v52 = (v49 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v53 = (__int64 **)(v50 + 16LL * v52);
      v54 = *v53;
      if ( *v53 != a2 )
      {
        v101 = 1;
        if ( v54 == (__int64 *)-4096LL )
          return (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 8))(a2, v50);
        while ( 1 )
        {
          v102 = v101 + 1;
          v52 = v51 & (v101 + v52);
          v53 = (__int64 **)(v50 + 16LL * v52);
          v103 = *v53;
          if ( *v53 == a2 )
            break;
          v101 = v102;
          if ( v103 == (__int64 *)-4096LL )
            return (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 8))(a2, v50);
        }
      }
      *v53 = (__int64 *)-8192LL;
      --*(_DWORD *)(a1 + 640);
      ++*(_DWORD *)(a1 + 644);
    }
    return (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 8))(a2, v50);
  }
  v10 = (__int64)a2;
  v105 = sub_209A570(a1, (__int64)a2);
  do
  {
    v11 = *(__int64 **)v105;
    v12 = *(_QWORD *)v105 + 8LL * *(unsigned int *)(v105 + 8);
    if ( v12 == *(_QWORD *)v105 )
      break;
    v104 = 0;
    do
    {
      v13 = *v11;
      if ( !sub_2097D10(a1, *v11) )
      {
        v26 = sub_2099960(a1, v13, v14, v15, v16, v17);
        if ( !v26 )
        {
          v73 = sub_221A480(a3);
          v108 = sub_995540(v73, "Pass '");
          v74 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v76 = sub_9954E0(v108, v74, v75);
          v77 = sub_995540(v76, "' is not initialized.");
          sub_995540(v77, "\n");
          v78 = sub_221A480(a3);
          v79 = sub_995540(v78, "Verify if there is a pass dependency cycle.");
          sub_995540(v79, "\n");
          v80 = sub_221A480(a3);
          v81 = sub_995540(v80, "Required Passes:");
          sub_995540(v81, "\n");
          v82 = *(__int64 **)v105;
          if ( *(_QWORD *)v105 != *(_QWORD *)v105 + 8LL * *(unsigned int *)(v105 + 8) )
          {
            v83 = *v82;
            if ( *v82 != v13 )
            {
              v109 = v12;
              v84 = *(_QWORD *)v105 + 8LL * *(unsigned int *)(v105 + 8);
              v110 = v11;
              v85 = v82 + 1;
              v111 = v10;
              do
              {
                v90 = sub_2097D10(a1, v83);
                v91 = sub_221A480(a3);
                if ( v90 )
                {
                  v86 = sub_995540(v91, "\t");
                  v87 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
                  v89 = sub_9954E0(v86, v87, v88);
                }
                else
                {
                  v92 = sub_995540(v91, "\t");
                  v93 = sub_995540(v92, "Error: Required pass not found! Possible causes:");
                  sub_995540(v93, "\n");
                  v94 = sub_221A480(a3);
                  v95 = sub_995540(v94, "\t\t");
                  v96 = sub_995540(v95, "- Pass misconfiguration (e.g.: missing macros)");
                  sub_995540(v96, "\n");
                  v97 = sub_221A480(a3);
                  v98 = sub_995540(v97, "\t\t");
                  v89 = sub_995540(v98, "- Corruption of the global PassRegistry");
                }
                sub_995540(v89, "\n");
                if ( (__int64 *)v84 == v85 )
                  break;
                v83 = *v85++;
              }
              while ( v13 != v83 );
              v12 = v109;
              v26 = 0;
              v11 = v110;
              v10 = v111;
            }
          }
        }
        v27 = (*(__int64 (**)(void))(v26 + 48))();
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
        if ( v28 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v27 + 72LL))(v27) )
        {
          sub_209CA70(a1, v27);
        }
        else
        {
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
          if ( v29 > (*(int (__fastcall **)(__int64))(*(_QWORD *)v27 + 72LL))(v27) )
          {
            sub_209CA70(a1, v27);
            v104 = 1;
          }
          else
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
          }
        }
      }
      ++v11;
    }
    while ( (__int64 *)v12 != v11 );
  }
  while ( v104 );
  v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 96LL))(v10);
  if ( v18 )
  {
    v19 = (**(__int64 (__fastcall ***)(__int64))a1)(a1);
    v20 = operator new(0x20u);
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 24) = v19;
    *(_OWORD *)v20 = 0;
    sub_20BFA60(v10, v20);
    sub_209AA40(v19, v10);
    sub_209C8F0(a1, v18);
    v126[0].m128i_i64[0] = v18[2];
    result = sub_209A420(v19 + 208, v126[0].m128i_i64, v21, v22, v23, v24);
    *result = (__int64)v18;
  }
  else if ( v106 )
  {
    if ( !*(_BYTE *)(v106 + 41) && (unsigned __int8)sub_20C28B0(*(_QWORD *)(v106 + 16), *(_QWORD *)(v106 + 24)) )
    {
      v55 = *(_QWORD *)v10;
      v56 = *(_QWORD *)(v106 + 24);
      v57 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v10 + 48LL);
      v124[0].m128i_i64[0] = (__int64)") ***";
      v125 = 259;
      v58 = *(_QWORD *)(v106 + 16);
      v122 = 261;
      v121[0].m128i_i64[0] = v58;
      v119 = 259;
      v118[0].m128i_i64[0] = (__int64)" (";
      v121[0].m128i_i64[1] = v56;
      v59 = (*(__int64 (__fastcall **)(__int64))(v55 + 16))(v10);
      v117 = 1283;
      v116 = v60;
      v114.m128i_i64[0] = (__int64)"*** IR Dump Before ";
      v115 = v59;
      sub_A41580(v120, &v114, v118, (__int64)"*** IR Dump Before ", v61, v62);
      sub_A41580(v123, v120, v121, v63, v64, v65);
      sub_A41580(v126, v123, v124, v66, v67, v68);
      sub_2253560(v112, v126);
      v69 = sub_221A480(a3);
      v70 = v57(v10, v69, v112);
      if ( v112[0] != v113 )
        operator delete(v112[0]);
      v71 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v70 + 56LL);
      v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v71(v70, v107, v72);
    }
    v30 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 56LL);
    v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v30(v10, v107, v31);
    result = (__int64 *)v106;
    if ( !*(_BYTE *)(v106 + 41) )
    {
      result = (__int64 *)sub_20C2900(*(_QWORD *)(v106 + 16), *(_QWORD *)(v106 + 24));
      if ( (_BYTE)result )
      {
        v32 = *(_QWORD *)v10;
        v33 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v10 + 48LL);
        v124[0].m128i_i64[0] = (__int64)") ***";
        v34 = *(_QWORD *)(v106 + 16);
        v125 = 259;
        v35 = *(_QWORD *)(v106 + 24);
        v122 = 261;
        v121[0].m128i_i64[0] = v34;
        v118[0].m128i_i64[0] = (__int64)" (";
        v119 = 259;
        v121[0].m128i_i64[1] = v35;
        v36 = (*(__int64 (__fastcall **)(__int64))(v32 + 16))(v10);
        v116 = v37;
        v117 = 1283;
        v114.m128i_i64[0] = (__int64)"*** IR Dump After ";
        v115 = v36;
        sub_A41580(v120, &v114, v118, (__int64)"*** IR Dump After ", 1283, v38);
        sub_A41580(v123, v120, v121, v39, v40, v41);
        sub_A41580(v126, v123, v124, v42, v43, v44);
        sub_2253560(v112, v126);
        v45 = sub_221A480(a3);
        v46 = v33(v10, v45, v112);
        if ( v112[0] != v113 )
          operator delete(v112[0]);
        v47 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v46 + 56LL);
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        return (__int64 *)v47(v46, v107, v48);
      }
    }
  }
  else
  {
    v99 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 56LL);
    v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return (__int64 *)v99(v10, v107, v100);
  }
  return result;
}
