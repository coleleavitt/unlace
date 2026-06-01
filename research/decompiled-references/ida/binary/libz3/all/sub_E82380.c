__m128i *__fastcall sub_E82380(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  __m128i v8; // xmm0
  __int64 v9; // rax
  _DWORD *v10; // rdx
  __int64 v11; // rdi
  char (__fastcall *v12)(__int64, __int64); // rax
  __m128i v13; // kr00_16
  int v14; // eax
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rsi
  bool v24; // zf
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // rsi
  _DWORD *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r15
  char (__fastcall *v36)(__int64, __int64); // r9
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  char (__fastcall *v54)(__int64, __int64); // rax
  int v55; // eax
  __int64 v56; // rdx
  int v57; // esi
  unsigned int v58; // ecx
  __int64 v59; // rsi
  __int64 v60; // r10
  __int64 v61; // r10
  __int64 v62; // r11
  __int16 v63; // dx
  _QWORD *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rdx
  int v70; // eax
  unsigned int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // r15
  char v75; // al
  char v76; // al
  __int64 v77; // rsi
  __int64 v78; // r9
  __m128i v79; // [rsp+0h] [rbp-78h] BYREF
  __m128i v80; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v81[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v82[9]; // [rsp+30h] [rbp-48h] BYREF

  v8 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
  v80 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, v8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  if ( !*(_WORD *)(a3 + 4) )
  {
    v9 = *(_QWORD *)(a3 + 16);
    v10 = *(_DWORD **)(v9 + 24);
    if ( !v10 || *v10 )
    {
LABEL_6:
      v11 = *(_QWORD *)(a2 + 24);
      v12 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL);
      if ( v12 == sub_E67DB0 )
        goto LABEL_7;
      goto LABEL_26;
    }
    if ( v10[1] != 2 || *(_DWORD *)(a3 + 24) != 2 )
    {
LABEL_34:
      if ( v10[1] != 4 )
        goto LABEL_6;
      v26 = *(_QWORD *)(a3 + 48);
      (**(void (__fastcall ***)(_QWORD *, __int64, _QWORD, __int64))a2)(v81, a2, *(_QWORD *)(a3 + 40), 1);
      (**(void (__fastcall ***)(_QWORD *, __int64, __int64, __int64))a2)(v82, a2, v26, 1);
      v27 = v82[0];
      if ( !*(_WORD *)(v81[0] + 4LL) )
      {
        v28 = *(_DWORD **)(*(_QWORD *)(v81[0] + 16LL) + 24LL);
        if ( v28 )
        {
          if ( !*v28 && v28[1] == 2 && *(_DWORD *)(v81[0] + 24LL) == 2 )
          {
            if ( *(_WORD *)(v82[0] + 4LL) )
              goto LABEL_39;
            v64 = *(_QWORD **)(*(_QWORD *)(v82[0] + 16LL) + 24LL);
            if ( !v64
              || *v64 != 0x200000000LL
              || *(_DWORD *)(v82[0] + 24LL) != 2
              || *(_QWORD *)(v81[0] + 32LL) != *(_QWORD *)(v82[0] + 32LL) )
            {
              goto LABEL_39;
            }
            v79.m128i_i64[0] = *(_QWORD *)(a2 + 8);
            sub_15E1BF0(v79.m128i_i32[0]);
            v65 = sub_15E1B70(v79.m128i_i32[0]);
            v66 = v65;
            if ( v65 )
              ++*(_DWORD *)(v65 + 8);
            v67 = v80.m128i_i64[0];
            if ( v80.m128i_i64[0] )
            {
              v68 = v80.m128i_i64[1];
              v24 = (*(_DWORD *)(v80.m128i_i64[0] + 8))-- == 1;
              if ( v24 )
                sub_15D7BC0(v68, v67);
            }
            v80.m128i_i64[0] = v66;
            v27 = v82[0];
          }
        }
      }
      if ( !v27 )
      {
LABEL_41:
        v30 = v81[0];
        if ( v81[0] )
        {
          v31 = v81[1];
          v24 = (*(_DWORD *)(v81[0] + 8LL))-- == 1;
          if ( v24 )
            sub_15D7BC0(v31, v30);
        }
        goto LABEL_11;
      }
LABEL_39:
      v29 = v82[1];
      v24 = (*(_DWORD *)(v27 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v29, v27);
      goto LABEL_41;
    }
    v11 = *(_QWORD *)(a2 + 24);
    v34 = *(_QWORD *)(a3 + 32);
    v35 = *(_QWORD *)(a3 + 40);
    v36 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL);
    if ( !*(_WORD *)(v34 + 4) )
    {
      v37 = *(_QWORD **)(*(_QWORD *)(v34 + 16) + 24LL);
      if ( v37 )
      {
        if ( *v37 == 0x800000000LL && *(_DWORD *)(v34 + 24) == 1 )
        {
          v56 = *(_QWORD *)(v34 + 32);
          if ( v36 == sub_E67DB0 )
          {
            if ( *(_WORD *)(v56 + 4) != 1 )
              goto LABEL_111;
            v57 = *(_DWORD *)(v11 + 20);
            v58 = *(_DWORD *)(v56 + 16);
            if ( v57 == 1 )
            {
              v61 = *(_QWORD *)(v11 + 8);
              v62 = v58 >> 5;
              if ( v61 && (unsigned int)v62 < *(_DWORD *)(v61 - 4) && (*(_DWORD *)(v61 + 4 * v62) & (1 << v58)) != 0 )
                goto LABEL_111;
            }
            else
            {
              if ( v57 != 2 )
              {
                if ( v57 )
                {
                  v79.m128i_i64[0] = *(_QWORD *)(a3 + 32);
                  sub_1872CE0("");
                  sub_1873130(114, 58);
                }
                v59 = *(_QWORD *)(v11 + 8);
                v60 = v58 >> 5;
                if ( v59 && (unsigned int)v60 < *(_DWORD *)(v59 - 4) && (*(_DWORD *)(v59 + 4 * v60) & (1 << v58)) != 0 )
                  goto LABEL_107;
LABEL_111:
                v63 = *(_WORD *)(v35 + 4);
                if ( v63 )
                {
                  if ( v63 != 1 )
                    goto LABEL_78;
LABEL_58:
                  v39 = *(_DWORD *)(v11 + 20);
                  v40 = *(_DWORD *)(v35 + 16);
                  if ( v39 != 1 )
                  {
                    if ( v39 != 2 )
                    {
                      if ( v39 )
                      {
                        sub_1872CE0("");
                        sub_1873130(114, 58);
                      }
                      v41 = *(_QWORD *)(v11 + 8);
                      v42 = v40 >> 5;
                      if ( !v41
                        || (unsigned int)v42 >= *(_DWORD *)(v41 - 4)
                        || (*(_DWORD *)(v41 + 4 * v42) & (1 << v40)) == 0 )
                      {
                        goto LABEL_89;
                      }
                      if ( *(_WORD *)(v34 + 4) == 1 )
                      {
                        v43 = *(_DWORD *)(v34 + 16);
                        goto LABEL_66;
                      }
LABEL_69:
                      v46 = sub_15E1B70(*(_QWORD *)(a2 + 8));
LABEL_70:
                      v47 = v46;
                      if ( v46 )
                        ++*(_DWORD *)(v46 + 8);
                      v48 = v80.m128i_i64[0];
                      if ( v80.m128i_i64[0] )
                      {
                        v49 = v80.m128i_i64[1];
                        v24 = (*(_DWORD *)(v80.m128i_i64[0] + 8))-- == 1;
                        if ( v24 )
                          sub_15D7BC0(v49, v48);
                      }
                      v80.m128i_i64[0] = v47;
LABEL_76:
                      if ( *(_WORD *)(a3 + 4) )
                        goto LABEL_11;
                      goto LABEL_77;
                    }
                    if ( v40 >= *(_DWORD *)(v11 + 16) )
                      goto LABEL_76;
                    if ( *(_WORD *)(v34 + 4) != 1 )
                      goto LABEL_69;
                    v43 = *(_DWORD *)(v34 + 16);
LABEL_140:
                    if ( v43 < *(_DWORD *)(v11 + 16) )
                      goto LABEL_76;
                    goto LABEL_69;
                  }
                  v50 = *(_QWORD *)(v11 + 8);
                  v51 = v40 >> 5;
                  if ( v50 && (unsigned int)v51 < *(_DWORD *)(v50 - 4) && (*(_DWORD *)(v50 + 4 * v51) & (1 << v40)) != 0 )
                    goto LABEL_89;
                  if ( *(_WORD *)(v34 + 4) != 1 )
                    goto LABEL_69;
                  v43 = *(_DWORD *)(v34 + 16);
                  goto LABEL_86;
                }
                v38 = *(_QWORD **)(*(_QWORD *)(v35 + 16) + 24LL);
                if ( !v38 )
                {
LABEL_57:
                  if ( *(_WORD *)(v35 + 4) != 1 )
                    goto LABEL_89;
                  goto LABEL_58;
                }
LABEL_55:
                if ( *v38 == 0x800000000LL && *(_DWORD *)(v35 + 24) == 1 )
                {
                  v69 = *(_QWORD *)(v35 + 32);
                  if ( v36 == sub_E67DB0 )
                  {
                    if ( *(_WORD *)(v69 + 4) != 1 )
                      goto LABEL_89;
                    v70 = *(_DWORD *)(v11 + 20);
                    v71 = *(_DWORD *)(v69 + 16);
                    if ( v70 == 1 )
                    {
                      v77 = *(_QWORD *)(v11 + 8);
                      v78 = v71 >> 5;
                      if ( v77
                        && (unsigned int)v78 < *(_DWORD *)(v77 - 4)
                        && (*(_DWORD *)(v77 + 4 * v78) & (1 << v71)) != 0 )
                      {
                        goto LABEL_89;
                      }
                    }
                    else if ( v70 == 2 )
                    {
                      if ( v71 >= *(_DWORD *)(v11 + 16) )
                        goto LABEL_57;
                    }
                    else
                    {
                      if ( v70 )
                      {
                        v79.m128i_i64[0] = v34;
                        sub_1872CE0("");
                        sub_1873130(114, 58);
                      }
                      v72 = *(_QWORD *)(v11 + 8);
                      v73 = v71 >> 5;
                      if ( !v72
                        || (unsigned int)v73 >= *(_DWORD *)(v72 - 4)
                        || (*(_DWORD *)(v72 + 4 * v73) & (1 << v71)) == 0 )
                      {
                        goto LABEL_89;
                      }
                    }
LABEL_136:
                    v74 = *(_QWORD *)(a2 + 8);
                    v79.m128i_i64[0] = v69;
                    sub_15EC2C0(v74, v34);
                    v46 = sub_15E1B70(v74);
                    goto LABEL_70;
                  }
                  v79.m128i_i64[1] = v34;
                  v79.m128i_i64[0] = v69;
                  v76 = v36(v11, v69);
                  v34 = v79.m128i_i64[1];
                  v69 = v79.m128i_i64[0];
                  if ( v76 )
                    goto LABEL_136;
                  v11 = *(_QWORD *)(a2 + 24);
                  v36 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL);
                }
LABEL_56:
                if ( v36 != sub_E67DB0 )
                {
                  v79.m128i_i64[0] = v34;
                  if ( !v36(v11, v35) )
                    goto LABEL_76;
                  v11 = *(_QWORD *)(a2 + 24);
                  v54 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL);
                  if ( v54 != sub_E67DB0 )
                  {
                    if ( v54(v11, v79.m128i_i64[0]) )
                      goto LABEL_76;
                    goto LABEL_69;
                  }
                  if ( *(_WORD *)(v79.m128i_i64[0] + 4) != 1 )
                    goto LABEL_69;
                  v55 = *(_DWORD *)(v11 + 20);
                  v43 = *(_DWORD *)(v79.m128i_i64[0] + 16);
                  if ( v55 != 1 )
                  {
                    if ( v55 != 2 )
                    {
                      if ( v55 )
                      {
                        sub_1872CE0("");
                        sub_1873130(114, 58);
                      }
LABEL_66:
                      v44 = *(_QWORD *)(v11 + 8);
                      v45 = v43 >> 5;
                      if ( !v44
                        || (unsigned int)v45 >= *(_DWORD *)(v44 - 4)
                        || (*(_DWORD *)(v44 + 4 * v45) & (1 << v43)) == 0 )
                      {
                        goto LABEL_69;
                      }
LABEL_89:
                      if ( *(_WORD *)(a3 + 4) )
                        goto LABEL_12;
LABEL_77:
                      v9 = *(_QWORD *)(a3 + 16);
LABEL_78:
                      v10 = *(_DWORD **)(v9 + 24);
                      if ( !v10 || *v10 )
                        goto LABEL_6;
                      goto LABEL_34;
                    }
                    goto LABEL_140;
                  }
LABEL_86:
                  v52 = *(_QWORD *)(v11 + 8);
                  v53 = v43 >> 5;
                  if ( v52 && (unsigned int)v53 < *(_DWORD *)(v52 - 4) && (*(_DWORD *)(v52 + 4 * v53) & (1 << v43)) != 0 )
                    goto LABEL_69;
                  goto LABEL_89;
                }
                goto LABEL_57;
              }
              if ( v58 >= *(_DWORD *)(v11 + 16) )
              {
                if ( *(_WORD *)(v35 + 4) )
                  goto LABEL_57;
                goto LABEL_54;
              }
            }
LABEL_107:
            v79.m128i_i64[1] = v56;
            v79.m128i_i64[0] = v8.m128i_i64[0];
            sub_15EC2C0(v8.m128i_i64[0], v35);
            v46 = sub_15E1B70(_mm_loadl_epi64(&v79).m128i_i32[0]);
            goto LABEL_70;
          }
          v79.m128i_i64[0] = *(_QWORD *)(a3 + 32);
          v79.m128i_i64[1] = v56;
          v75 = v36(v11, v56);
          v34 = v79.m128i_i64[0];
          if ( v75 )
          {
            v8.m128i_i64[0] = *(_QWORD *)(a2 + 8);
            v56 = v79.m128i_i64[1];
            goto LABEL_107;
          }
          v11 = *(_QWORD *)(a2 + 24);
          v36 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL);
        }
      }
    }
    if ( *(_WORD *)(v35 + 4) )
      goto LABEL_56;
LABEL_54:
    v38 = *(_QWORD **)(*(_QWORD *)(v35 + 16) + 24LL);
    if ( !v38 )
      goto LABEL_56;
    goto LABEL_55;
  }
LABEL_11:
  v11 = *(_QWORD *)(a2 + 24);
  v12 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL);
  if ( v12 == sub_E67DB0 )
  {
LABEL_12:
    if ( *(_WORD *)(a3 + 4) != 1 )
      goto LABEL_7;
    v16 = *(_DWORD *)(v11 + 20);
    v17 = *(_DWORD *)(a3 + 16);
    if ( v16 == 1 )
    {
      v32 = *(_QWORD *)(v11 + 8);
      v33 = v17 >> 5;
      if ( v32 && (unsigned int)v33 < *(_DWORD *)(v32 - 4) && (*(_DWORD *)(v32 + 4 * v33) & (1 << v17)) != 0 )
        goto LABEL_7;
    }
    else if ( v16 == 2 )
    {
      if ( v17 >= *(_DWORD *)(v11 + 16) )
        goto LABEL_7;
    }
    else
    {
      if ( v16 )
      {
        sub_1872CE0("");
        sub_1873130(114, 58);
      }
      v18 = *(_QWORD *)(v11 + 8);
      v19 = v17 >> 5;
      if ( !v18 || (unsigned int)v19 >= *(_DWORD *)(v18 - 4) || (*(_DWORD *)(v18 + 4 * v19) & (1 << v17)) == 0 )
        goto LABEL_7;
    }
    goto LABEL_19;
  }
LABEL_26:
  if ( !v12(v11, a3) )
    goto LABEL_7;
LABEL_19:
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a2 + 8), a3) )
  {
    v20 = sub_15E1B70(*(_QWORD *)(a2 + 8));
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v22 = v80.m128i_i64[1];
    v23 = v80.m128i_i64[0];
    if ( v80.m128i_i64[0] )
    {
      v24 = (*(_DWORD *)(v80.m128i_i64[0] + 8))-- == 1;
      if ( v24 )
      {
        sub_15D7BC0(v22, v23);
        v22 = v80.m128i_i64[1];
      }
    }
    a1->m128i_i64[1] = v22;
    a1->m128i_i64[0] = v21;
    return a1;
  }
LABEL_7:
  if ( a4 )
  {
    v13 = v80;
    *a1 = v80;
    if ( !v13.m128i_i64[0] )
      return a1;
    v14 = *(_DWORD *)(v13.m128i_i64[0] + 8);
    *(_DWORD *)(v13.m128i_i64[0] + 8) = v14 + 1;
    *(_DWORD *)(v13.m128i_i64[0] + 8) = v14;
    if ( v14 )
      return a1;
LABEL_30:
    sub_15D7BC0(v13.m128i_i64[1], v13.m128i_i64[0]);
    return a1;
  }
  sub_15EC330(a1, &v80);
  v13 = v80;
  if ( v80.m128i_i64[0] )
  {
    v25 = *(_DWORD *)(v80.m128i_i64[0] + 8) - 1;
    *(_DWORD *)(v80.m128i_i64[0] + 8) = v25;
    if ( !v25 )
      goto LABEL_30;
  }
  return a1;
}

