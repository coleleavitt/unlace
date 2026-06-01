/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410F70
// Address: 0x0000000000410F70

//----- (0000000000410F70) ----------------------------------------------------
double __fastcall sub_410F70(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __pid_t v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  unsigned int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  int *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  int *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __m128 v63; // xmm4
  __m128 v64; // xmm5
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __m128 v76; // xmm4
  __m128 v77; // xmm5
  int *v78; // rbx
  double v79; // xmm4_8
  double v80; // xmm5_8
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __m128 v86; // xmm4
  __m128 v87; // xmm5
  __pid_t v88; // eax
  char v90; // [rsp+0h] [rbp-38h]
  unsigned int v91; // [rsp+8h] [rbp-30h] BYREF
  int v92; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v93[5]; // [rsp+10h] [rbp-28h] BYREF

  v93[1] = __readfsqword(0x28u);
  dword_4C56C8 = 0;
  v15 = fork();
  if ( !v15 )
  {
    v78 = __errno_location();
    *v78 = 0;
    if ( ptrace(
           PTRACE_TRACEME,
           0,
           0,
           0,
           *(double *)a1.m128_u64,
           *(double *)a2.m128_u64,
           *(double *)a3.m128_u64,
           *(double *)a4.m128_u64,
           v79,
           v80,
           *(double *)a7.m128_u64,
           *(double *)a8.m128_u64) )
    {
      v81 = sub_481FB0(*v78);
      sub_410EA0(
        (int)"PTRACE_O_TRACEFORK test: Cannot trace created process: %s\n",
        v81,
        v82,
        v83,
        v84,
        v85,
        a1,
        a2,
        a3,
        a4,
        v86,
        v87,
        a7,
        a8,
        v90);
      _exit(127);
    }
    v88 = getpid();
    kill(v88, 19);
    fork();
    _exit(0);
  }
  v16 = v15;
  if ( v15 == -1 )
  {
    v43 = __errno_location();
    v44 = sub_481FB0(*v43);
    *(double *)a1.m128_u64 = sub_410EA0(
                               (int)"clone: %s\n",
                               v44,
                               v45,
                               v46,
                               v47,
                               v48,
                               a1,
                               a2,
                               a3,
                               a4,
                               v49,
                               v50,
                               a7,
                               a8,
                               a15);
  }
  else
  {
    v17 = sub_4835F0((int *)&v91, v15, 0, -1);
    v24 = v17;
    if ( v17 == -1 )
    {
      v57 = __errno_location();
      v58 = sub_481FB0(*v57);
      *(double *)a1.m128_u64 = sub_410EA0(
                                 (int)"waitpid: %s\n",
                                 v58,
                                 v59,
                                 v60,
                                 v61,
                                 v62,
                                 a1,
                                 a2,
                                 a3,
                                 a4,
                                 v63,
                                 v64,
                                 a7,
                                 a8,
                                 v90);
    }
    else if ( v16 == v17 )
    {
      if ( (_BYTE)v91 == 127 )
      {
        if ( (unsigned int)ptrace(
                             PTRACE_SETOPTIONS,
                             v16,
                             0,
                             2,
                             *(double *)a1.m128_u64,
                             *(double *)a2.m128_u64,
                             *(double *)a3.m128_u64,
                             *(double *)a4.m128_u64,
                             *(double *)v22.m128_u64,
                             *(double *)v23.m128_u64,
                             *(double *)a7.m128_u64,
                             *(double *)a8.m128_u64) )
        {
          if ( (unsigned int)ptrace(PTRACE_KILL, v16, 0, 0) )
          {
            *(double *)a1.m128_u64 = sub_410EA0(
                                       (int)"linux_test_for_tracefork: failed to kill child",
                                       v16,
                                       v51,
                                       v52,
                                       v53,
                                       v54,
                                       a1,
                                       a2,
                                       a3,
                                       a4,
                                       v55,
                                       v56,
                                       a7,
                                       a8,
                                       v90);
          }
          else if ( v16 == (unsigned int)sub_4835F0((int *)&v91, v16, 0, -1) )
          {
            if ( __OFSUB__((v91 & 0x7F) + 1, 1) || (v91 & 0x7F) == 0 )
              *(double *)a1.m128_u64 = sub_410EA0(
                                         (int)"linux_test_for_tracefork: unexpected wait status 0x%x from killed child",
                                         v91,
                                         v65,
                                         v66,
                                         v67,
                                         v68,
                                         a1,
                                         a2,
                                         a3,
                                         a4,
                                         v69,
                                         v70,
                                         a7,
                                         a8,
                                         v90);
          }
          else
          {
            *(double *)a1.m128_u64 = sub_410EA0(
                                       (int)"linux_test_for_tracefork: failed to wait for killed child",
                                       v16,
                                       v65,
                                       v66,
                                       v67,
                                       v68,
                                       a1,
                                       a2,
                                       a3,
                                       a4,
                                       v69,
                                       v70,
                                       a7,
                                       a8,
                                       v90);
          }
        }
        else
        {
          if ( (unsigned int)ptrace(PTRACE_CONT, v24, 0, 0) )
            *(double *)a1.m128_u64 = sub_410EA0(
                                       (int)"linux_test_for_tracefork: failed to resume child",
                                       v24,
                                       v25,
                                       v26,
                                       v27,
                                       v28,
                                       a1,
                                       a2,
                                       a3,
                                       a4,
                                       v29,
                                       v30,
                                       a7,
                                       a8,
                                       v90);
          v31 = sub_4835F0((int *)&v91, v24, 0, -1);
          if ( v24 == v31 && (_BYTE)v91 == 127 && (int)v91 >> 16 == 1 )
          {
            v93[0] = 0;
            if ( !(unsigned int)ptrace(PTRACE_GETEVENTMSG, v24, 0, v93) && v93[0] )
            {
              dword_4C56C8 = 1;
              sub_4835F0(&v92, v93[0], 0, -1);
              v71 = LODWORD(v93[0]);
              if ( (unsigned int)ptrace(PTRACE_KILL, LODWORD(v93[0]), 0, 0) )
                *(double *)a1.m128_u64 = sub_410EA0(
                                           (int)"linux_test_for_tracefork: failed to kill second child",
                                           v71,
                                           v72,
                                           v73,
                                           v74,
                                           v75,
                                           a1,
                                           a2,
                                           a3,
                                           a4,
                                           v76,
                                           v77,
                                           a7,
                                           a8,
                                           v90);
              sub_4835F0((int *)&v91, v93[0], 0, -1);
            }
          }
          else
          {
            *(double *)a1.m128_u64 = sub_410EA0(
                                       (int)"linux_test_for_tracefork: unexpected result from waitpid (%d, status 0x%x)",
                                       v31,
                                       v91,
                                       v32,
                                       v33,
                                       v34,
                                       a1,
                                       a2,
                                       a3,
                                       a4,
                                       v35,
                                       v36,
                                       a7,
                                       a8,
                                       v90);
          }
          do
          {
            if ( (unsigned int)ptrace(PTRACE_KILL, v24, 0, 0, *(double *)a1.m128_u64) )
              *(double *)a1.m128_u64 = sub_410EA0(
                                         (int)"linux_test_for_tracefork: failed to kill child",
                                         v24,
                                         v37,
                                         v38,
                                         v39,
                                         v40,
                                         a1,
                                         a2,
                                         a3,
                                         a4,
                                         v41,
                                         v42,
                                         a7,
                                         a8,
                                         v90);
            sub_4835F0((int *)&v91, v24, 0, -1);
          }
          while ( (_BYTE)v91 == 127 );
        }
      }
      else
      {
        *(double *)a1.m128_u64 = sub_410EA0(
                                   (int)"linux_test_for_tracefork: waitpid: unexpected status %d\b",
                                   v91,
                                   v18,
                                   v19,
                                   v20,
                                   v21,
                                   a1,
                                   a2,
                                   a3,
                                   a4,
                                   v22,
                                   v23,
                                   a7,
                                   a8,
                                   v90);
      }
    }
    else
    {
      *(double *)a1.m128_u64 = sub_410EA0(
                                 (int)"linux_test_for_tracefork: waitpid: unexpected result %d\n",
                                 v17,
                                 v18,
                                 v19,
                                 v20,
                                 v21,
                                 a1,
                                 a2,
                                 a3,
                                 a4,
                                 v22,
                                 v23,
                                 a7,
                                 a8,
                                 v90);
    }
  }
  return *(double *)a1.m128_u64;
}
// 410FE2: variable 'v18' is possibly undefined
// 410FE2: variable 'v19' is possibly undefined
// 410FE2: variable 'v20' is possibly undefined
// 410FE2: variable 'v21' is possibly undefined
// 410FE2: variable 'v22' is possibly undefined
// 410FE2: variable 'v23' is possibly undefined
// 410FE2: variable 'v90' is possibly undefined
// 411269: variable 'v25' is possibly undefined
// 411269: variable 'v26' is possibly undefined
// 411269: variable 'v27' is possibly undefined
// 411269: variable 'v28' is possibly undefined
// 411269: variable 'v29' is possibly undefined
// 411269: variable 'v30' is possibly undefined
// 411084: variable 'v32' is possibly undefined
// 411084: variable 'v33' is possibly undefined
// 411084: variable 'v34' is possibly undefined
// 411084: variable 'v35' is possibly undefined
// 411084: variable 'v36' is possibly undefined
// 4110CF: variable 'v37' is possibly undefined
// 4110CF: variable 'v38' is possibly undefined
// 4110CF: variable 'v39' is possibly undefined
// 4110CF: variable 'v40' is possibly undefined
// 4110CF: variable 'v41' is possibly undefined
// 4110CF: variable 'v42' is possibly undefined
// 411114: variable 'v45' is possibly undefined
// 411114: variable 'v46' is possibly undefined
// 411114: variable 'v47' is possibly undefined
// 411114: variable 'v48' is possibly undefined
// 411114: variable 'v49' is possibly undefined
// 411114: variable 'v50' is possibly undefined
// 41113B: variable 'v51' is possibly undefined
// 41113B: variable 'v52' is possibly undefined
// 41113B: variable 'v53' is possibly undefined
// 41113B: variable 'v54' is possibly undefined
// 41113B: variable 'v55' is possibly undefined
// 41113B: variable 'v56' is possibly undefined
// 411160: variable 'v59' is possibly undefined
// 411160: variable 'v60' is possibly undefined
// 411160: variable 'v61' is possibly undefined
// 411160: variable 'v62' is possibly undefined
// 411160: variable 'v63' is possibly undefined
// 411160: variable 'v64' is possibly undefined
// 4111A2: variable 'v65' is possibly undefined
// 4111A2: variable 'v66' is possibly undefined
// 4111A2: variable 'v67' is possibly undefined
// 4111A2: variable 'v68' is possibly undefined
// 4111A2: variable 'v69' is possibly undefined
// 4111A2: variable 'v70' is possibly undefined
// 4112D3: variable 'v72' is possibly undefined
// 4112D3: variable 'v73' is possibly undefined
// 4112D3: variable 'v74' is possibly undefined
// 4112D3: variable 'v75' is possibly undefined
// 4112D3: variable 'v76' is possibly undefined
// 4112D3: variable 'v77' is possibly undefined
// 41128E: variable 'v79' is possibly undefined
// 41128E: variable 'v80' is possibly undefined
// 4112AB: variable 'v82' is possibly undefined
// 4112AB: variable 'v83' is possibly undefined
// 4112AB: variable 'v84' is possibly undefined
// 4112AB: variable 'v85' is possibly undefined
// 4112AB: variable 'v86' is possibly undefined
// 4112AB: variable 'v87' is possibly undefined
// 4C56C8: using guessed type int dword_4C56C8;
