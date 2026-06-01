__int64 __fastcall sub_13C780(
        __int64 a1,
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
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned int v20; // eax
  __int64 v21; // rsi
  const char *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  unsigned __int64 v29; // r15
  unsigned __int64 that; // rbp
  unsigned int v31; // ebx
  int v32; // r15d
  int flags; // eax
  int v34; // ecx
  char *v35; // rax
  __int64 v36; // r14
  bool v37; // r12
  int v38; // r13d
  int v39; // eax
  int v40; // eax
  char v41; // [rsp+0h] [rbp-638h]
  int v43; // [rsp+10h] [rbp-628h]
  __int64 v44; // [rsp+18h] [rbp-620h]
  unsigned int v46; // [rsp+28h] [rbp-610h]
  unsigned __int8 v47; // [rsp+2Fh] [rbp-609h]
  unsigned __int64 v48; // [rsp+30h] [rbp-608h]
  __int16 v49; // [rsp+5Ch] [rbp-5DCh] BYREF
  unsigned __int16 v50; // [rsp+5Eh] [rbp-5DAh] BYREF
  unsigned __int64 v51; // [rsp+60h] [rbp-5D8h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-5D0h] BYREF
  __int64 v53; // [rsp+70h] [rbp-5C8h] BYREF
  __int64 v54; // [rsp+78h] [rbp-5C0h] BYREF
  __int128 v55; // [rsp+80h] [rbp-5B8h] BYREF
  __int64 v56; // [rsp+90h] [rbp-5A8h]
  __int64 v57; // [rsp+98h] [rbp-5A0h]
  __int64 v58; // [rsp+A0h] [rbp-598h]
  _BYTE v59[320]; // [rsp+A8h] [rbp-590h] BYREF
  char v60; // [rsp+1E8h] [rbp-450h] BYREF
  char v61[1032]; // [rsp+1F0h] [rbp-448h] BYREF
  unsigned __int64 v62; // [rsp+5F8h] [rbp-40h]

  v14 = 4 * a5;
  v62 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161C80(0, &v51, &v52) )
  {
    itext();
    sub_13B7E0();
    v16 = getinf();
    v17 = getinf();
    v53 = v16;
    v54 = v17;
    if ( !a4 )
    {
      v53 = 0;
      v54 = 0;
    }
    v49 = 1;
    v50 = 1;
    LODWORD(v18) = 1;
    if ( (unsigned int)sub_8F810((__int64)v61, &v50, &v49, &v53, &v54) )
    {
      v46 = v14 | 3;
      if ( !v49 )
        v46 = v14 | 1;
      LODWORD(v18) = 1;
      setinf();
      setinf();
      v21 = a1;
      v22 = "Converting operands to \"%s\" type.";
      sub_10E0D0(
        (__int64)"Converting operands to \"%s\" type.",
        a1,
        v23,
        v24,
        v25,
        v26,
        a6,
        a7,
        a8,
        a9,
        v27,
        v28,
        a12,
        a13,
        v41);
      v29 = v52;
      that = v51;
      v31 = v50;
      v48 = v52;
      sub_1A0340();
      if ( that < v29 )
      {
        v32 = 0;
        while ( 1 )
        {
          v47 = (v32 == 0) & (sub_1A0470(v22, v21) ^ 1);
          if ( !v47 )
            break;
          show_auto();
          flags = get_flags_ex();
          v56 = -1;
          v57 = 0;
          v34 = flags;
          v35 = v59;
          v58 = 0;
          v55 = -1;
          do
          {
            *(_WORD *)v35 = 0;
            v35 += 40;
            *((_WORD *)v35 - 19) = 0;
            *((_WORD *)v35 - 18) = 0;
            *((_DWORD *)v35 - 2) = 0;
            *((_WORD *)v35 - 17) = 0;
            *((_OWORD *)v35 - 2) = 0;
            *((_QWORD *)v35 - 2) = 0;
          }
          while ( v35 != &v60 );
          v36 = v34 & 0x600;
          if ( v36 == 1536 )
          {
            v43 = v34;
            v40 = decode_insn();
            v34 = v43;
            v37 = v40 > 0;
          }
          else
          {
            v37 = 0;
          }
          v38 = 0;
          v44 = v34 & 0x40000000;
          while ( 1 )
          {
            if ( v37 )
            {
              if ( !v59[40 * v38 + 1] )
                goto LABEL_25;
            }
            else if ( v38 > 1 )
            {
LABEL_25:
              v32 = 0;
              goto LABEL_26;
            }
            if ( v36 == 1024 )
            {
              while ( v38 )
              {
                ++v38;
                if ( v37 )
                {
                  if ( !v59[40 * v38 + 1] )
                    goto LABEL_25;
                }
                else if ( v38 > 1 )
                {
                  goto LABEL_25;
                }
              }
            }
            else
            {
              while ( v31 != 1 )
              {
                while ( 1 )
                {
                  if ( v31 == 4 )
                  {
                    while ( (unsigned __int8)is_defarg() )
                    {
                      ++v38;
                      if ( v37 )
                      {
                        if ( !v59[40 * v38 + 1] )
                          goto LABEL_25;
                      }
                      else if ( v38 > 1 )
                      {
                        goto LABEL_25;
                      }
                    }
                    goto LABEL_21;
                  }
                  if ( v36 == 1536 && v44 && WORD1(v57) && sub_13C0C0((__int64)&v55 + 40 * v38 + 40, 0) )
                    goto LABEL_21;
                  ++v38;
                  if ( !v37 )
                    break;
                  if ( !v59[40 * v38 + 1] )
                    goto LABEL_25;
                }
                if ( v38 > 1 )
                  goto LABEL_25;
              }
              while ( (unsigned __int8)is_defarg() || !(unsigned __int8)is_suspop() )
              {
                ++v38;
                if ( v37 )
                {
                  if ( !v59[40 * v38 + 1] )
                    goto LABEL_25;
                }
                else if ( v38 > 1 )
                {
                  goto LABEL_25;
                }
              }
            }
LABEL_21:
            v39 = a2(that, (unsigned int)v38, a3, v31, v46);
            if ( v39 )
              break;
            ++v38;
          }
          v47 = 0;
          v32 = v39;
LABEL_26:
          v22 = (const char *)that;
          v21 = v48;
          that = next_that();
          if ( that >= v48 )
          {
            LODWORD(v18) = v47;
            goto LABEL_28;
          }
        }
        LODWORD(v18) = v32 == 0;
      }
LABEL_28:
      sub_15E150(v22, v21);
      sub_10DB30();
      setinf();
      setinf();
    }
  }
  else
  {
    LODWORD(v18) = 0;
    v20 = sub_13C400(0, 0, 0);
    if ( v20 != -1 )
      return (unsigned int)a2(xmmword_2528A0, v20, a3, 0, v14) == 0;
  }
  return (unsigned int)v18;
}

