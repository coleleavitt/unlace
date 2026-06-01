__int64 __fastcall sub_331480(
        const char *a1,
        __int64 (__fastcall *a2)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD),
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  unsigned int v14; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // r12
  unsigned int v25; // eax
  const char *v26; // rsi
  const char *v27; // rdi
  unsigned __int64 v28; // r15
  unsigned __int64 that; // rbp
  unsigned int v30; // ebx
  __int64 v31; // rdx
  double v32; // xmm4_8
  double v33; // xmm5_8
  int v34; // r15d
  __int64 flags; // rax
  __int64 v36; // rcx
  char *v37; // rax
  __int64 v38; // r14
  bool v39; // r12
  int v40; // r13d
  int v41; // eax
  int v42; // eax
  char v43; // [rsp+0h] [rbp-638h]
  __int64 v45; // [rsp+10h] [rbp-628h]
  __int64 v46; // [rsp+10h] [rbp-628h]
  __int64 v47; // [rsp+18h] [rbp-620h]
  unsigned int v49; // [rsp+28h] [rbp-610h]
  unsigned __int8 v50; // [rsp+2Fh] [rbp-609h]
  const char *v51; // [rsp+30h] [rbp-608h]
  __int64 v52; // [rsp+40h] [rbp-5F8h]
  __int64 v53; // [rsp+48h] [rbp-5F0h]
  __int16 v54; // [rsp+5Ch] [rbp-5DCh] BYREF
  unsigned __int16 v55; // [rsp+5Eh] [rbp-5DAh] BYREF
  unsigned __int64 v56; // [rsp+60h] [rbp-5D8h] BYREF
  const char *v57; // [rsp+68h] [rbp-5D0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-5C8h] BYREF
  __int64 v59; // [rsp+78h] [rbp-5C0h] BYREF
  __int128 v60; // [rsp+80h] [rbp-5B8h] BYREF
  __int64 v61; // [rsp+90h] [rbp-5A8h]
  __int64 v62; // [rsp+98h] [rbp-5A0h]
  __int64 v63; // [rsp+A0h] [rbp-598h]
  _BYTE v64[320]; // [rsp+A8h] [rbp-590h] BYREF
  char v65[8]; // [rsp+1E8h] [rbp-450h] BYREF
  _BYTE v66[1032]; // [rsp+1F0h] [rbp-448h] BYREF
  unsigned __int64 v67; // [rsp+5F8h] [rbp-40h]

  v14 = 4 * a5;
  v67 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, (__int64 *)&v56, &v57) )
  {
    v17 = itext(1108, &v56, v16);
    sub_169120((__int64)v66, 1024, v17, a1, a1, a1);
    v18 = getinf(23);
    v19 = getinf(24);
    v58 = v18;
    v52 = v19;
    v59 = v19;
    if ( !a4 )
    {
      v58 = 0;
      v59 = 0;
    }
    v54 = 1;
    v55 = 1;
    LODWORD(v23) = 1;
    if ( (unsigned int)sub_1697D0(
                         (int)v66,
                         (__int64)&v55,
                         (__int64)&v54,
                         (__int64)&v58,
                         (__int64)&v59,
                         v20,
                         a6,
                         a7,
                         a8,
                         a9,
                         v21,
                         v22,
                         a12,
                         a13,
                         v43) )
    {
      v49 = v14 | 3;
      if ( !v54 )
        v49 = v14 | 1;
      LODWORD(v23) = 1;
      setinf(23, v58);
      setinf(24, v59);
      v26 = a1;
      v27 = "Converting operands to \"%s\" type.";
      sub_1C76F0((int)"Converting operands to \"%s\" type.", a1);
      v28 = (unsigned __int64)v57;
      that = v56;
      v30 = v55;
      v51 = v57;
      sub_541E70();
      if ( that < v28 )
      {
        v53 = v18;
        v34 = 0;
        while ( 1 )
        {
          v50 = (v34 == 0) & (sub_541EF0(v27, v26, v31) ^ 1);
          if ( !v50 )
            break;
          show_auto(that, 0);
          flags = get_flags_ex(that, 0);
          a7 = (__m128)-1LL;
          v61 = -1;
          v62 = 0;
          v36 = flags;
          v37 = v64;
          v63 = 0;
          v60 = -1;
          do
          {
            a6.m128_u64[0] = 0;
            *(_WORD *)v37 = 0;
            v37 += 40;
            *((_WORD *)v37 - 19) = 0;
            *((_WORD *)v37 - 18) = 0;
            *((_DWORD *)v37 - 2) = 0;
            *((_WORD *)v37 - 17) = 0;
            *((_OWORD *)v37 - 2) = 0;
            *((_QWORD *)v37 - 2) = 0;
          }
          while ( v37 != v65 );
          v38 = v36 & 0x600;
          if ( v38 == 1536 )
          {
            v46 = v36;
            v42 = decode_insn(&v60, that, v65, v36, 0, 0, 0.0);
            v36 = v46;
            v39 = v42 > 0;
          }
          else
          {
            v39 = 0;
          }
          v45 = v36;
          v40 = 0;
          v47 = v36 & 0x40000000;
          while ( 1 )
          {
            if ( v39 )
            {
              if ( !v64[40 * v40 + 1] )
                goto LABEL_25;
            }
            else if ( v40 > 1 )
            {
LABEL_25:
              v34 = 0;
              goto LABEL_26;
            }
            if ( v38 == 1024 )
            {
              while ( v40 )
              {
                ++v40;
                if ( v39 )
                {
                  if ( !v64[40 * v40 + 1] )
                    goto LABEL_25;
                }
                else if ( v40 > 1 )
                {
                  goto LABEL_25;
                }
              }
            }
            else
            {
              while ( v30 != 1 )
              {
                while ( 1 )
                {
                  if ( v30 == 4 )
                  {
                    while ( (unsigned __int8)is_defarg(v45, (unsigned int)v40) )
                    {
                      ++v40;
                      if ( v39 )
                      {
                        if ( !v64[40 * v40 + 1] )
                          goto LABEL_25;
                      }
                      else if ( v40 > 1 )
                      {
                        goto LABEL_25;
                      }
                    }
                    goto LABEL_21;
                  }
                  if ( v38 == 1536 && v47 && WORD1(v62) && sub_330C00((__int64)&v60 + 40 * v40 + 40, 0) )
                    goto LABEL_21;
                  ++v40;
                  if ( !v39 )
                    break;
                  if ( !v64[40 * v40 + 1] )
                    goto LABEL_25;
                }
                if ( v40 > 1 )
                  goto LABEL_25;
              }
              while ( (unsigned __int8)is_defarg(v45, (unsigned int)v40)
                   || !(unsigned __int8)is_suspop(that, v45, (unsigned int)v40) )
              {
                ++v40;
                if ( v39 )
                {
                  if ( !v64[40 * v40 + 1] )
                    goto LABEL_25;
                }
                else if ( v40 > 1 )
                {
                  goto LABEL_25;
                }
              }
            }
LABEL_21:
            v41 = a2(that, (unsigned int)v40, a3, v30, v49);
            if ( v41 )
              break;
            ++v40;
          }
          v50 = 0;
          v34 = v41;
LABEL_26:
          v27 = (const char *)that;
          v26 = v51;
          that = next_that(that, v51, sub_32E350, 0);
          if ( that >= (unsigned __int64)v51 )
          {
            v18 = v53;
            LODWORD(v23) = v50;
            goto LABEL_28;
          }
        }
        v18 = v53;
        LODWORD(v23) = v34 == 0;
      }
LABEL_28:
      sub_1FDB10(*(double *)a6.m128_u64, a7, a8, a9, v32, v33, a12, a13, (__int64)v27, v26);
      sub_1C78D0();
      setinf(23, v18);
      setinf(24, v52);
    }
  }
  else
  {
    LODWORD(v23) = 0;
    v25 = sub_331180(0, 0, 0);
    if ( v25 != -1 )
      return (unsigned int)a2(xmmword_8CC810, v25, a3, 0, v14) == 0;
  }
  return (unsigned int)v23;
}
