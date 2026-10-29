__int64 __fastcall sub_DD450(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rax
  int v7; // esi
  int v8; // r14d
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rsi
  __int64 (*v12)(); // rax
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v16; // rdi
  unsigned __int64 v17; // r14
  unsigned int v18; // r11d
  __int64 v19; // rax
  __int64 v20; // r10
  char v21; // al
  char v22; // dl
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  bool v26; // r14
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // r15
  __int64 v31; // rsi
  _QWORD *v32; // rdi
  __int64 v33; // r8
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 i; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // r14
  int v47; // r8d
  _BYTE *v48; // rcx
  int v49; // edx
  __int64 v50; // r14
  int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // [rsp+0h] [rbp-D0h]
  unsigned int v54; // [rsp+0h] [rbp-D0h]
  __int64 v55; // [rsp+8h] [rbp-C8h]
  unsigned int v57; // [rsp+18h] [rbp-B8h]
  __int64 v58; // [rsp+18h] [rbp-B8h]
  int v59; // [rsp+18h] [rbp-B8h]
  __m128i v60; // [rsp+20h] [rbp-B0h] BYREF
  char v61; // [rsp+3Eh] [rbp-92h]
  char v62; // [rsp+3Fh] [rbp-91h]
  unsigned __int64 v63; // [rsp+40h] [rbp-90h] BYREF
  int v64; // [rsp+48h] [rbp-88h]
  __int64 v65; // [rsp+50h] [rbp-80h]
  __m128i v66; // [rsp+58h] [rbp-78h]
  __int64 v67; // [rsp+70h] [rbp-60h] BYREF
  __int64 v68; // [rsp+78h] [rbp-58h]
  __int64 v69; // [rsp+80h] [rbp-50h]
  __m128i v70; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v71; // [rsp+98h] [rbp-38h]

  v60.m128i_i64[0] = a2;
  v71 = __readfsqword(0x28u);
  v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL);
  v6 = *(_QWORD *)(a2 + 480);
  v7 = *(_DWORD *)(a1 + 132);
  v8 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 80LL);
  v67 = 0;
  v68 = 0;
  sub_63580(&v67, v7, v8);
  v69 = 0;
  v70 = 0;
  v9 = sub_126C30(v60.m128i_i32[0], (unsigned int)&v67, a3, 0, 0, 0, 257);
  if ( v69 )
  {
    v70.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( !v9 )
  {
    if ( *(_QWORD *)(a1 + 32) == v60.m128i_i64[0] )
    {
      if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        v16 = *(_QWORD *)(v60.m128i_i64[0] + 56);
        if ( v16 )
        {
          if ( sub_11DF40(v16, 0) )
            return 5;
        }
      }
      v17 = *(_QWORD *)(v60.m128i_i64[0] + 32);
      if ( a4 < v17 || *(_QWORD *)(v60.m128i_i64[0] + 40) < a4 )
        return v9 != 0;
      goto LABEL_30;
    }
    if ( !under_debugger )
      sub_37EA20(50078);
    goto LABEL_136;
  }
  if ( *(_DWORD *)v9 == 61 )
    return 2;
  sub_125510(&v63, v60.m128i_i64[0], v9, 256);
  if ( !(unsigned __int8)sub_64160(&v63, *(_DWORD *)(a1 + 132), v8) )
  {
    sub_125510(&v67, v60.m128i_i64[0], v9, 257);
    sub_63FD0((__int64 *)&v63, &v67);
    v28 = v69;
    v69 = 0;
    v29 = _mm_loadu_si128(&v70);
    v70 = 0;
    v30 = v28;
    if ( v65 )
    {
      v60 = v29;
      v66.m128i_i64[0] = 0;
      qfree();
      v65 = v30;
      v66 = _mm_load_si128(&v60);
      if ( v69 )
      {
        v70.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      v65 = v28;
      v66 = v29;
    }
    qfree();
    if ( (unsigned __int8)sub_64160(&v63, *(_DWORD *)(a1 + 132), v8) )
      goto LABEL_58;
    if ( !under_debugger )
      sub_37EA20(50079);
LABEL_136:
    BUG();
  }
  v10 = *(_DWORD *)(v9 + 4);
  if ( (v10 & 0x80u) != 0 )
  {
LABEL_71:
    v14 = 3;
    goto LABEL_18;
  }
  if ( (v10 & 8) != 0 )
    goto LABEL_58;
  v11 = *(_QWORD *)(v9 + 24);
  v12 = *(__int64 (**)())(*(_QWORD *)v55 + 280LL);
  if ( v12 == sub_CE2A0 )
    goto LABEL_9;
  if ( ((unsigned int (__fastcall *)(__int64, __int64))v12)(v55, v11) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
LABEL_58:
    v14 = 2;
    goto LABEL_18;
  }
  v11 = *(_QWORD *)(v9 + 24);
LABEL_9:
  v67 = v11;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v60.m128i_i64[0] + 480) + 8LL) + 10LL) < 0 )
  {
    v61 = 1;
    v62 = 1;
    if ( sub_D3E80() == 1 && *(_QWORD *)(v9 + 24) == v67 )
    {
      v31 = *(unsigned int *)(a1 + 132);
      v32 = (_QWORD *)(v60.m128i_i64[0] + 280);
      if ( sub_64030((_QWORD *)(v60.m128i_i64[0] + 280), v31) )
      {
        v34 = *(_DWORD **)(v9 + 8);
        if ( v34 )
        {
          if ( (unsigned int)(*v34 - 42) <= 0xB )
          {
            v35 = *(_QWORD *)(v60.m128i_i64[0] + 376);
            for ( i = 0; (int)i < (int)v35; ++i )
            {
              v37 = *(unsigned int *)(*(_QWORD *)(v60.m128i_i64[0] + 368) + 4 * i);
              if ( (_DWORD)v37 != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL) )
              {
                v38 = *(_QWORD *)(v60.m128i_i64[0] + 64);
                if ( (unsigned int)v37 >= *(_DWORD *)(v38 + 64) )
                  sub_CE6C0(v32, v31, v38, v60.m128i_i64[0], v33);
                v31 = *(unsigned int *)(a1 + 132);
                v32 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 528) + 8 * v37) + 120LL);
                if ( sub_64030(v32, v31) )
                  goto LABEL_71;
                v35 = *(_QWORD *)(v60.m128i_i64[0] + 376);
              }
            }
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 120) & 4) == 0 )
  {
LABEL_47:
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
    {
      v40 = *(_QWORD *)(v60.m128i_i64[0] + 56);
      if ( v9 != v40 )
      {
        if ( sub_11DF40(v40, 0) )
          return 5;
      }
    }
    if ( !*(_QWORD *)(v9 + 8) )
      return v9 != 0;
    v27 = *(_QWORD *)(v60.m128i_i64[0] + 32);
    if ( a4 < v27 || *(_QWORD *)(v60.m128i_i64[0] + 40) < a4 )
      return v9 != 0;
    v39 = *(_QWORD *)(v9 + 24);
    if ( v39 >= v27 )
    {
      if ( !sub_11DF40(v9, 1) )
      {
        v17 = *(_QWORD *)(v60.m128i_i64[0] + 32);
        goto LABEL_30;
      }
      v39 = *(_QWORD *)(v9 + 24);
    }
    v17 = v39 - 1;
LABEL_30:
    v18 = *(_DWORD *)(a1 + 128);
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
    v20 = *(_QWORD *)(v19 + 112);
    v63 = a4;
    if ( *(char *)(*(_QWORD *)(v19 + 8) + 10LL) < 0
      && (LOBYTE(v67) = 1, v53 = v20, v57 = v18, v62 = 1, v43 = sub_D3E80(), v18 = v57, v20 = v53, v43 == 1) )
    {
      if ( v63 != -1 )
      {
        v44 = v57;
        v45 = v53;
        v54 = v57;
        v58 = v20;
        v21 = sub_32B3E0(&v67, v45, v44, v63, v63 + 1, 1);
        v20 = v58;
        v18 = v54;
        if ( v21 )
        {
LABEL_33:
          v22 = v21 & 1;
          if ( (v21 & 2) == 0 )
          {
            *(_QWORD *)(a1 + 112) = -1;
            if ( !v22 )
              return v9 != 0;
            goto LABEL_35;
          }
          v41 = v67;
          *(_QWORD *)(a1 + 112) = v67;
          if ( v22 )
          {
LABEL_35:
            if ( a3 )
            {
              v23 = *(_DWORD *)(a1 + 128);
              *(_QWORD *)(a1 + 104) = 0;
              v63 = (unsigned __int64)&off_4DC4A0;
              v64 = v23;
              if ( a3 != v9 )
              {
                while ( 1 )
                {
                  if ( !v9 )
                  {
                    sub_125510(&v67, v60.m128i_i64[0], a3, 1);
                    v26 = sub_64030(&v67, *(_DWORD *)(a1 + 132));
                    if ( v69 )
                    {
                      v70.m128i_i64[0] = 0;
                      qfree();
                    }
                    qfree();
                    if ( v26 )
                      break;
                  }
                  v24 = sub_11DF40(a3, 1);
                  v25 = *(_QWORD *)(a1 + 104);
                  if ( v24 )
                  {
                    if ( *(_BYTE *)(v24 + 64) == 8 )
                    {
                      v46 = *(_QWORD *)(v24 + 72);
                      v47 = 0;
                      if ( *(_QWORD *)(v46 + 32) )
                      {
                        do
                        {
                          v59 = v47;
                          if ( v25 )
                            break;
                          if ( (unsigned int)for_all_arglocs() )
                          {
                            *(_QWORD *)(a1 + 104) = a3;
                            v25 = a3;
                          }
                          else
                          {
                            v25 = *(_QWORD *)(a1 + 104);
                          }
                          v47 = v59 + 1;
                        }
                        while ( (unsigned __int64)(v59 + 1) < *(_QWORD *)(v46 + 32) );
                      }
                    }
                  }
                  a3 = *(_QWORD *)(a3 + 16);
                  if ( v9 == a3 )
                  {
                    if ( !v25 )
                      return 1;
                    return 5;
                  }
                  if ( v25 )
                    return 5;
                }
              }
            }
            return 1;
          }
          if ( v21 != 2 )
            return v9 != 0;
          if ( !*(_BYTE *)(a1 + 141) )
          {
            v42 = *(_DWORD *)(a1 + 120);
            if ( (v42 & 4) == 0 )
            {
              if ( v9 )
              {
                if ( *(_DWORD *)(v60.m128i_i64[0] + 72) != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL)
                  || *(_DWORD *)v9 != 4 && (*(_DWORD *)v9 != 67 || *(_DWORD *)(v9 + 36) != *(_DWORD *)(v9 + 68)) )
                {
                  goto LABEL_84;
                }
                if ( *(_BYTE *)(v9 + 64) != 1 )
                  goto LABEL_84;
                if ( *(_DWORD *)(a1 + 132) != *(_DWORD *)(v9 + 72) )
                  goto LABEL_84;
                if ( *(_BYTE *)(v9 + 32) != 10 )
                  goto LABEL_84;
                v48 = *(_BYTE **)(v9 + 40);
                if ( *v48 != 5 )
                  goto LABEL_84;
                v49 = *(_DWORD *)(a1 + 124);
                if ( v49 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * (v49 - 1)) != -1 )
                    goto LABEL_84;
                }
                if ( (v42 & 2) != 0 )
                  goto LABEL_84;
                v67 = 0;
                v68 = 0;
                v69 = 0;
                v70 = 0;
                sub_121540(&v63, v48);
                HIDWORD(v63) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v60.m128i_i64[0] + 64) + 1504LL) + 84LL);
                sub_1219A0(v60.m128i_i64[0], &v67, &v63, 0, 4294901760LL);
                v50 = sub_126C30(v60.m128i_i32[0], (unsigned int)&v67, a3, v9, 0, 0, 257);
                if ( v50 )
                {
                  v51 = *(_DWORD *)v50;
                  if ( *(_DWORD *)v50 == 4 )
                  {
LABEL_125:
                    if ( (unsigned __int8)sub_11D940(v50 + 32, 0, 1) )
                    {
                      v52 = *(unsigned int *)(a1 + 128);
                      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v55 + 240LL))(
                             v55,
                             v52,
                             *(_QWORD *)(v50 + 24)) == 2 )
                      {
                        sub_1B3250(v50, v52);
                        sub_1B3250(v9, v52);
                        sub_11A960(&v63);
                        sub_92DA0((__int64)&v67);
                        return 1;
                      }
                    }
                    goto LABEL_127;
                  }
                  if ( v51 == 67 )
                  {
                    if ( *(_DWORD *)(v50 + 36) == *(_DWORD *)(v50 + 68) )
                      goto LABEL_125;
                  }
                  else if ( (unsigned int)(v51 - 8) <= 1 )
                  {
                    goto LABEL_125;
                  }
                }
LABEL_127:
                sub_11A960(&v63);
                sub_92DA0((__int64)&v67);
                v41 = *(_QWORD *)(a1 + 112);
LABEL_84:
                sub_DC140(a1, v60.m128i_i64[0], v41, a4);
                return 5;
              }
              if ( (unsigned __int8)sub_DC140(a1, v60.m128i_i64[0], v41, a4) != 1 )
              {
                if ( a3 )
                {
                  if ( (unsigned __int8)sub_DD020(a1, v60.m128i_i64[0], a3, 0, 0) )
                  {
                    v14 = 2;
                    if ( (unsigned __int8)sub_DC3A0(a1, v60.m128i_i64[0]) )
                      return v14;
                  }
                }
              }
            }
          }
          return 5;
        }
      }
    }
    else
    {
      v63 = -1;
    }
    v21 = sub_32B3E0(&v67, v20, v18, v17, a4, 1);
    goto LABEL_33;
  }
  v13 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 == 4 )
  {
LABEL_14:
    v14 = 5;
    if ( *(_BYTE *)(v9 + 64) != 1
      || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v9 + 72)
      || *(_DWORD *)(v9 + 68) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL) + 84LL)
      || *(_BYTE *)(v9 + 32) != 10 )
    {
      goto LABEL_18;
    }
    goto LABEL_47;
  }
  if ( v13 == 67 )
  {
    if ( *(_DWORD *)(v9 + 36) == *(_DWORD *)(v9 + 68) )
      goto LABEL_14;
  }
  else if ( (unsigned int)(v13 - 12) <= 1 )
  {
    goto LABEL_14;
  }
  v14 = 5;
LABEL_18:
  if ( v65 )
  {
    v66.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v14;
}
