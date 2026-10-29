/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476670
// Address: 0x0000000000476670

//----- (0000000000476670) ----------------------------------------------------
double __fastcall sub_476670(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  char *v16; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  _BYTE *v24; // r12
  char *v25; // r15
  int v26; // r14d
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rsi
  unsigned int v30; // eax
  char v31; // bp
  unsigned __int8 *v32; // rbp
  __int64 v33; // r13
  unsigned __int8 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  char *v41; // r15
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __int64 v47; // r9
  __int64 v48; // rdx
  char *v49; // rdi
  char *v50; // r13
  char *v51; // rbp
  char *v52; // r12
  char v53; // bl
  char v55; // [rsp+0h] [rbp-478h]
  _BYTE *v57; // [rsp+18h] [rbp-460h]
  _BYTE v58[1024]; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v59[8]; // [rsp+430h] [rbp-48h] BYREF
  unsigned __int64 v60; // [rsp+438h] [rbp-40h]

  v16 = a1;
  v60 = __readfsqword(0x28u);
  *(double *)a7.m128_u64 = off_4C7FB0(
                             23,
                             a3,
                             a4,
                             (unsigned int)&off_4C7FB0,
                             a5,
                             a6,
                             *(double *)a7.m128_u64,
                             *(double *)a8.m128_u64,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12,
                             *(double *)a13.m128_u64,
                             *(double *)a14.m128_u64);
  if ( a1 )
  {
    if ( a2 )
    {
      v24 = v59;
      v25 = v58;
      v26 = 0;
      do
      {
        v27 = v26;
        v28 = v26 & 0xF;
        v29 = v24 - v25;
        v30 = (unsigned int)(v26 >> 31) >> 28;
        v31 = v26++ + v30;
        v32 = (unsigned __int8 *)&v16[(v31 & 0xF) - v30];
        if ( v28 )
        {
          v25 += (int)sub_485490(v25, v29, " %02X", *v32);
          if ( (v26 & 0xF) == 0 )
          {
            v57 = v24;
            v33 = 0;
            *(_WORD *)v25 = 8736;
            do
            {
              v34 = v16[v33];
              if ( strchr(asc_4A2488, v34) )
                v34 = 46;
              v25[v33++ + 2] = v34;
            }
            while ( v33 != 16 );
            v24 = v57;
            v16 += 16;
            *((_WORD *)v25 + 9) = 34;
            v25 = v58;
            *(double *)a7.m128_u64 = sub_410EA0(
                                       (int)"%s\n",
                                       (__int64)v58,
                                       v35,
                                       v36,
                                       v37,
                                       v38,
                                       a7,
                                       a8,
                                       a9,
                                       a10,
                                       v39,
                                       v40,
                                       a13,
                                       a14,
                                       v55);
          }
        }
        else
        {
          v41 = &v25[(int)sub_485490(v25, v29, "%04X:", v27)];
          v25 = &v41[(int)sub_485490(v41, v24 - v41, " %02X", *v32)];
        }
      }
      while ( v26 < a2 );
      if ( (v26 & 0xF) != 0 )
      {
        v42 = sub_485490(v25, v59 - v25, "%*c", -3 * (v26 % 16) + 48, 32);
        v47 = (unsigned int)(v26 % 16);
        v48 = 8736;
        v49 = &v25[v42];
        *(_WORD *)v49 = 8736;
        v50 = v49 + 2;
        if ( v26 % 16 > 0 )
        {
          v51 = v16;
          v52 = &v49[(int)v47 + 2];
          do
          {
            v53 = *v51;
            if ( strchr(asc_4A2488, (unsigned __int8)*v51) )
              v53 = 46;
            ++v50;
            ++v51;
            *(v50 - 1) = v53;
          }
          while ( v52 != v50 );
          v50 = &v49[v26 % 16 + 2];
        }
        *(_WORD *)v50 = 34;
        *(double *)a7.m128_u64 = sub_410EA0(
                                   (int)"%s\n",
                                   (__int64)v58,
                                   v48,
                                   v43,
                                   v44,
                                   v47,
                                   a7,
                                   a8,
                                   a9,
                                   a10,
                                   v45,
                                   v46,
                                   a13,
                                   a14,
                                   v55);
      }
    }
  }
  else
  {
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"vshow_hex(nullptr)\n",
                               a3,
                               v18,
                               v19,
                               v20,
                               v21,
                               a7,
                               a8,
                               a9,
                               a10,
                               v22,
                               v23,
                               a13,
                               a14,
                               a15);
  }
  return *(double *)a7.m128_u64;
}
// 4767C0: variable 'v35' is possibly undefined
// 4767C0: variable 'v36' is possibly undefined
// 4767C0: variable 'v37' is possibly undefined
// 4767C0: variable 'v38' is possibly undefined
// 4767C0: variable 'v39' is possibly undefined
// 4767C0: variable 'v40' is possibly undefined
// 4767C0: variable 'v55' is possibly undefined
// 47692A: variable 'v48' is possibly undefined
// 47692A: variable 'v43' is possibly undefined
// 47692A: variable 'v44' is possibly undefined
// 47692A: variable 'v47' is possibly undefined
// 47692A: variable 'v45' is possibly undefined
// 47692A: variable 'v46' is possibly undefined
// 476961: variable 'v18' is possibly undefined
// 476961: variable 'v19' is possibly undefined
// 476961: variable 'v20' is possibly undefined
// 476961: variable 'v21' is possibly undefined
// 476961: variable 'v22' is possibly undefined
// 476961: variable 'v23' is possibly undefined
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
