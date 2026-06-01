__m128i *__fastcall sub_1832BE0(__int64 a1, __int64 a2, const __m128i *a3, void *a4, __int64 a5, __int64 a6)
{
  size_t v6; // r15
  __int64 **v10; // rax
  __int64 *v11; // rdx
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __m128i *v17; // rbx
  __int64 v19; // rbx
  unsigned __int8 v20; // r14
  unsigned __int8 v21; // dl
  char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  bool v26; // al
  __int64 *v27; // rcx
  char **v28; // rax
  char *v29; // rcx
  _QWORD *v30; // rbx
  char *v31; // rsi
  __int64 v32; // rax
  char *v33; // rdi
  char *v34; // rax
  char *v35; // r14
  char *v36; // rax
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r15
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r15
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v59; // [rsp+18h] [rbp-100h]
  __int64 v60; // [rsp+28h] [rbp-F0h] BYREF
  void *v61[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v62[16]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v63[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v65[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v66; // [rsp+C8h] [rbp-50h]
  unsigned int v67; // [rsp+D0h] [rbp-48h]
  char v68; // [rsp+D4h] [rbp-44h]

  v6 = a5;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v10 = (__int64 **)sub_B8C3D0(a2, a2, (__int64)a3, (__int64)a4, a5, a6);
  v11 = *v10;
  v12 = (unsigned __int64)&(*v10)[*((unsigned int *)v10 + 2)];
  if ( (unsigned __int64)v11 < v12 )
  {
    v27 = v11;
    while ( *(_WORD *)(*v27 + 36) != 210 )
    {
      if ( (__int64 *)v12 == ++v27 )
        goto LABEL_8;
    }
    if ( (__int64 *)v12 != v27 )
      goto LABEL_14;
LABEL_8:
    v15 = *(_QWORD **)(a1 + 248);
    v16 = v15[294];
    v15[304] += 56LL;
    v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v15[295] >= (unsigned __int64)&v17[3].m128i_u64[1] && v16 )
      v15[294] = (char *)v17 + 56;
    else
      v17 = (__m128i *)sub_986170((__int64)(v15 + 294), 56, 56, 3, a5, a6);
    sub_B2E840(v17, *(_QWORD *)(a1 + 248), a3, a4, v6);
    return v17;
  }
  if ( v11 == (__int64 *)v12 )
    goto LABEL_8;
  if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 210 )
  {
    v13 = (__int64 *)(v12 + 8);
    while ( v11 != v13 )
    {
      v14 = *v13++;
      if ( *(_WORD *)(v14 + 36) == 210 )
        goto LABEL_14;
    }
    goto LABEL_8;
  }
LABEL_14:
  while ( 1 )
  {
    v19 = *v11;
    if ( *(_WORD *)(*v11 + 36) == 210 )
      break;
    ++v11;
  }
  sub_FA73F0(v61, (__int64)a3);
  v20 = *(_BYTE *)(v19 + 34);
  if ( (v20 & 0xF0) != 0xF0 )
  {
    v21 = v20 >> 4;
    if ( !(v20 >> 4) )
    {
      v22 = "error";
      if ( !sub_9B4AA0((__int64)v61, "error") )
      {
LABEL_44:
        if ( *(_DWORD *)(v19 + 40) != v6 || v6 && (v22 = (char *)a4, memcmp(*(const void **)(v19 + 48), a4, v6)) )
        {
          sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1ACBu, 0);
          if ( v66 )
          {
            sub_AE9DF0(v65, v19, 0xEu);
          }
          else if ( v68 )
          {
            v38 = sub_168B9E0(v63);
            v42 = v64;
            if ( v64 )
            {
              v59 = v38;
              v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
              v38 = v59;
            }
            v60 = v42;
            v43 = sub_1587BC0(v38, &v60, v38, v39, v40, v41);
            sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v67 + 8), v19, 0xEu);
          }
          sub_15F7200(v63);
          v22 = (char *)(a1 + 8);
          sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x1889u, 0);
          sub_15F7200(v63);
        }
        if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
          goto LABEL_74;
        v28 = (char **)sub_B8C3D0(a2, (__int64)v22, v23, v24, a5, a6);
        v29 = *v28;
        v30 = v28;
        a5 = 8LL * *((unsigned int *)v28 + 2);
        v31 = &(*v28)[a5];
        v32 = a5 >> 3;
        if ( a5 >> 5 )
        {
          if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 210 )
          {
            v33 = v29;
          }
          else
          {
            v33 = v29 + 8;
            if ( *(_WORD *)(*((_QWORD *)v29 + 1) + 36LL) != 210 )
            {
              v33 = v29 + 16;
              if ( *(_WORD *)(*((_QWORD *)v29 + 2) + 36LL) != 210 )
              {
                v34 = v29;
                if ( *(_WORD *)(*((_QWORD *)v29 + 3) + 36LL) == 210 )
                {
                  v33 = v29 + 24;
                }
                else
                {
                  while ( 1 )
                  {
                    v33 = v34 + 32;
                    if ( &v29[32 * (a5 >> 5)] == v34 + 32 )
                    {
                      v32 = (v31 - v33) >> 3;
                      goto LABEL_61;
                    }
                    a6 = *((_QWORD *)v34 + 4);
                    if ( *(_WORD *)(a6 + 36) == 210 )
                      goto LABEL_65;
                    a6 = *((_QWORD *)v34 + 5);
                    if ( *(_WORD *)(a6 + 36) == 210 )
                    {
                      v33 = v34 + 40;
                      goto LABEL_65;
                    }
                    a6 = *((_QWORD *)v34 + 6);
                    if ( *(_WORD *)(a6 + 36) == 210 )
                    {
                      v33 = v34 + 48;
                      goto LABEL_65;
                    }
                    a6 = *((_QWORD *)v34 + 7);
                    if ( *(_WORD *)(a6 + 36) == 210 )
                      break;
                    v34 += 32;
                  }
                  v33 = v34 + 56;
                }
              }
            }
          }
LABEL_65:
          if ( v31 != v33 )
          {
            v36 = v33 + 8;
            if ( v31 == v33 + 8 )
            {
              v35 = v33;
            }
            else
            {
              do
              {
                if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 210 )
                {
                  *(_QWORD *)v33 = *(_QWORD *)v36;
                  v33 += 8;
                }
                v36 += 8;
              }
              while ( v31 != v36 );
              v29 = (char *)*v30;
              a5 += *v30;
              v35 = &v33[a5 - (_QWORD)v31];
              if ( v31 != (char *)a5 )
              {
                memmove(v33, v31, a5 - (_QWORD)v31);
                v29 = (char *)*v30;
              }
            }
            goto LABEL_72;
          }
          goto LABEL_64;
        }
        v33 = v29;
LABEL_61:
        if ( v32 != 2 )
        {
          if ( v32 != 3 )
          {
            if ( v32 != 1 )
            {
LABEL_64:
              v35 = v31;
              goto LABEL_72;
            }
            goto LABEL_110;
          }
          if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 210 )
            goto LABEL_65;
          v33 += 8;
        }
        if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 210 )
          goto LABEL_65;
        v33 += 8;
LABEL_110:
        v35 = v31;
        if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 210 )
        {
LABEL_72:
          v37 = (v35 - v29) >> 3;
          *((_DWORD *)v30 + 2) = v37;
          if ( !(_DWORD)v37 )
            *(_BYTE *)(a2 + 29) &= ~1u;
LABEL_74:
          if ( v61[0] != v62 )
            operator delete(v61[0]);
          goto LABEL_8;
        }
        goto LABEL_65;
      }
      goto LABEL_18;
    }
LABEL_80:
    v25 = v21;
    if ( v21 == 1 )
      goto LABEL_82;
    goto LABEL_81;
  }
  if ( !(unsigned int)sub_FA77D0(v19) )
    goto LABEL_82;
  if ( (*(_BYTE *)(v19 + 34) & 0xF0) != 0xF0 )
  {
    v21 = *(_BYTE *)(v19 + 34) >> 4;
    goto LABEL_80;
  }
  if ( (unsigned int)sub_FA77D0(v19) == 1 )
    goto LABEL_82;
  if ( (*(_BYTE *)(v19 + 34) & 0xF0) != 0xF0 )
  {
    v21 = *(_BYTE *)(v19 + 34) >> 4;
    v25 = v21;
LABEL_81:
    if ( v21 != 2 )
    {
LABEL_19:
      if ( v21 == 3 )
        goto LABEL_43;
LABEL_20:
      if ( v21 == 4 )
        goto LABEL_43;
      goto LABEL_21;
    }
    goto LABEL_82;
  }
  if ( (unsigned int)sub_FA77D0(v19) != 2 )
  {
    v20 = *(_BYTE *)(v19 + 34);
    if ( (v20 & 0xF0) == 0xF0 )
      goto LABEL_40;
LABEL_18:
    v21 = v20 >> 4;
    v25 = v20 >> 4;
    goto LABEL_19;
  }
LABEL_82:
  v22 = "error";
  if ( !sub_9B4AA0((__int64)v61, "error") )
    goto LABEL_44;
  v20 = *(_BYTE *)(v19 + 34);
  if ( (v20 & 0xF0) != 0xF0 )
    goto LABEL_18;
LABEL_40:
  if ( (unsigned int)sub_FA77D0(v19) == 3 )
    goto LABEL_43;
  if ( (*(_BYTE *)(v19 + 34) & 0xF0) != 0xF0 )
  {
    v21 = *(_BYTE *)(v19 + 34) >> 4;
    v25 = v21;
    goto LABEL_20;
  }
  if ( (unsigned int)sub_FA77D0(v19) == 4 )
    goto LABEL_43;
  if ( (*(_BYTE *)(v19 + 34) & 0xF0) == 0xF0 )
    v25 = sub_FA77D0(v19);
  else
    v25 = *(_BYTE *)(v19 + 34) >> 4;
LABEL_21:
  if ( v25 != 5 )
    goto LABEL_22;
LABEL_43:
  v22 = "warning";
  if ( !sub_9B4AA0((__int64)v61, "warning") )
    goto LABEL_44;
LABEL_22:
  sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0xCADu, 0);
  if ( v66 )
  {
    sub_AE9DF0(v65, (__int64)a3, 0x10u);
LABEL_89:
    if ( v66 )
    {
      sub_AE9DF0(v65, v19, 0xEu);
    }
    else if ( v68 )
    {
      v55 = sub_168B9E0(v63);
      v56 = v64;
      if ( v64 )
        v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
      v60 = v56;
      v57 = sub_1587BC0(v55, &v60, v51, v52, v53, v54);
      sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * v67 + 8), v19, 0xEu);
    }
    goto LABEL_24;
  }
  if ( v68 )
  {
    v48 = sub_168B9E0(v63);
    v49 = v64;
    if ( v64 )
      v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
    v60 = v49;
    v50 = sub_1587BC0(v48, &v60, v44, v45, v46, v47);
    sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v67 + 8), (__int64)a3, 0x10u);
    goto LABEL_89;
  }
LABEL_24:
  v26 = 1;
  if ( (a3[2].m128i_i8[3] & 2) == 0 )
    v26 = (*(_BYTE *)(v19 + 35) & 2) != 0;
  LOBYTE(v60) = v26;
  sub_1588420((__int64)v63, (unsigned __int8 *)&v60);
  sub_15F7200(v63);
  sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x16CFu, 0);
  sub_15F7200(v63);
  if ( v61[0] != v62 )
    operator delete(v61[0]);
  return nullptr;
}
