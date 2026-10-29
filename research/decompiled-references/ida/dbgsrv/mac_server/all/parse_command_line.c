/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_command_line
// Address: 0x0000000100071CD0

//----- (0000000100071CD0) ----------------------------------------------------
__int64 __fastcall parse_command_line(_QWORD *a1, __int64 a2, char *a3, unsigned __int8 a4)
{
  char *v4; // rax
  int v5; // ebx
  int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm0
  char *v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // rdi
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  _BYTE *v16; // rax
  _QWORD *v17; // rdi
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int64 v23; // r15
  _BYTE *v24; // rax
  unsigned __int64 v25; // rbx
  char v26; // al
  _BOOL8 v27; // rdi
  int v28; // r15d
  char *v29; // rdi
  char *v30; // rax
  unsigned __int8 *v31; // r14
  int v32; // ecx
  int v33; // r15d
  unsigned __int8 *v34; // rbx
  __int64 v35; // r12
  _BYTE *v36; // rax
  __int64 v37; // r12
  __int64 v38; // rdi
  char *v39; // r15
  signed __int64 v40; // rbx
  void *v41; // rax
  char *v42; // r15
  char *v43; // rbx
  __int64 v44; // r14
  __int64 v45; // rax
  __int128 v46; // xmm0
  char *v47; // rbx
  __int128 v48; // kr00_16
  __int64 v49; // r14
  void *v50; // rdi
  _QWORD *v51; // rbx
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v58; // [rsp+8h] [rbp-C8h]
  int v59; // [rsp+10h] [rbp-C0h]
  int v60; // [rsp+18h] [rbp-B8h]
  char v61; // [rsp+2Ch] [rbp-A4h]
  char v64; // [rsp+38h] [rbp-98h]
  int v65; // [rsp+3Ch] [rbp-94h]
  _OWORD v66[2]; // [rsp+40h] [rbp-90h] BYREF
  __int128 v67; // [rsp+60h] [rbp-70h] BYREF
  __int64 v68; // [rsp+70h] [rbp-60h]
  _OWORD v69[2]; // [rsp+80h] [rbp-50h] BYREF

  if ( !a3 )
    return 0;
  memset(v66, 0, 24);
  v58 = (int)a3;
  v4 = skip_spaces(a3);
  LOBYTE(v5) = *v4;
  if ( *v4 )
  {
    v64 = a4 >> 2;
    LOBYTE(v6) = 0;
    while ( 1 )
    {
      v10 = v4 + 1;
      if ( (_BYTE)v5 == 39 || (unsigned __int8)v5 == 34 )
        break;
      if ( (_BYTE)v6 )
        goto LABEL_19;
      if ( (v5 & 0x80u) != 0 )
        goto LABEL_33;
      if ( (_DefaultRuneLocale.__runetype[(unsigned __int8)v5] & 0x4000) == 0 )
      {
LABEL_19:
        if ( (_BYTE)v5 == 92 && (_BYTE)v6 != 39 )
        {
          v5 = (unsigned __int8)v4[1];
          v10 = v4 + 2;
          if ( v5 != 34 && v5 != 92 )
          {
            v15 = 0;
            if ( *((_QWORD *)&v66[0] + 1) )
              v15 = *((_QWORD *)&v66[0] + 1) - 1LL;
            v16 = *(_BYTE **)&v66[0];
            if ( *(_QWORD *)&v66[1] < (unsigned __int64)(v15 + 2) )
            {
              v16 = qvector_reserve((__int64)v66, *(void **)&v66[0], v15 + 2, 1u);
              *(_QWORD *)&v66[0] = v16;
            }
            *((_QWORD *)&v66[0] + 1) = v15 + 2;
            v16[v15] = 92;
            *(_BYTE *)(*(_QWORD *)&v66[0] + v15 + 1) = 0;
            if ( !(_BYTE)v5 )
              goto LABEL_91;
          }
        }
        goto LABEL_33;
      }
      v17 = a1;
      v18 = (char *)*a1;
      v19 = a1[1];
      if ( a1[2] < (unsigned __int64)(v19 + 1) )
      {
        v18 = (char *)qvector_reserve((__int64)a1, v18, v19 + 1, 0x18u);
        v17 = a1;
        *a1 = v18;
        v19 = a1[1];
      }
      v20 = 3 * v19;
      *(_OWORD *)&v18[8 * v20] = 0;
      *(_QWORD *)&v18[8 * v20 + 16] = 0;
      ++v17[1];
      v21 = *(_QWORD *)&v18[8 * v20];
      *(_QWORD *)&v18[8 * v20] = *(_QWORD *)&v66[0];
      v22 = *(_OWORD *)&v18[8 * v20 + 8];
      *(_QWORD *)&v18[8 * v20 + 8] = *((_QWORD *)&v66[0] + 1);
      *(_QWORD *)&v18[8 * v20 + 16] = *(_QWORD *)&v66[1];
      *(_QWORD *)&v66[0] = v21;
      *(_OWORD *)((char *)v66 + 8) = v22;
      v10 = skip_spaces(v10);
      LOBYTE(v6) = 0;
      v64 = 0;
LABEL_7:
      LOBYTE(v5) = *v10;
      v4 = v10;
      if ( !*v10 )
        goto LABEL_91;
    }
    if ( (_BYTE)v6 == (_BYTE)v5 )
    {
      v11 = *v10;
      if ( v11 >= 0 && (!(_BYTE)v11 || (_DefaultRuneLocale.__runetype[v11] & 0x4000) != 0) )
      {
        v12 = a1;
        v13 = (char *)*a1;
        v14 = a1[1];
        if ( a1[2] < (unsigned __int64)(v14 + 1) )
        {
          v13 = (char *)qvector_reserve((__int64)a1, v13, v14 + 1, 0x18u);
          v12 = a1;
          *a1 = v13;
          v14 = a1[1];
        }
        v7 = 3 * v14;
        *(_OWORD *)&v13[8 * v7] = 0;
        *(_QWORD *)&v13[8 * v7 + 16] = 0;
        ++v12[1];
        v8 = *(_QWORD *)&v13[8 * v7];
        *(_QWORD *)&v13[8 * v7] = *(_QWORD *)&v66[0];
        v9 = *(_OWORD *)&v13[8 * v7 + 8];
        *(_QWORD *)&v13[8 * v7 + 8] = *((_QWORD *)&v66[0] + 1);
        *(_QWORD *)&v13[8 * v7 + 16] = *(_QWORD *)&v66[1];
        *(_QWORD *)&v66[0] = v8;
        *(_OWORD *)((char *)v66 + 8) = v9;
        v64 = 0;
      }
      v10 = skip_spaces(v10);
      goto LABEL_6;
    }
    if ( !(_BYTE)v6 )
    {
      LOBYTE(v6) = v5;
      goto LABEL_7;
    }
LABEL_33:
    v23 = 0;
    if ( *((_QWORD *)&v66[0] + 1) )
      v23 = *((_QWORD *)&v66[0] + 1) - 1LL;
    v24 = *(_BYTE **)&v66[0];
    if ( *(_QWORD *)&v66[1] < (unsigned __int64)(v23 + 2) )
    {
      v24 = qvector_reserve((__int64)v66, *(void **)&v66[0], v23 + 2, 1u);
      *(_QWORD *)&v66[0] = v24;
    }
    *((_QWORD *)&v66[0] + 1) = v23 + 2;
    v24[v23] = v5;
    *(_BYTE *)(*(_QWORD *)&v66[0] + v23 + 1) = 0;
    if ( (v5 & 0xFD) == 0x3C && !(_BYTE)v6 )
    {
      if ( (v64 & 1) != 0 )
        goto LABEL_6;
      LOBYTE(v6) = 0;
      v25 = 0;
      if ( *((_QWORD *)&v66[0] + 1) )
        v25 = *((_QWORD *)&v66[0] + 1) - 1LL;
      if ( a2 != 0 && v25 < 3 )
      {
        if ( *((_QWORD *)&v66[0] + 1) < 2u )
          goto LABEL_6;
        v26 = *(_BYTE *)(*(_QWORD *)&v66[0] + *((_QWORD *)&v66[0] + 1) - 2LL);
        if ( v26 == 62 )
        {
          if ( (_DWORD)v25 == 2 )
          {
            v37 = (char)**(_BYTE **)&v66[0];
            if ( v37 < 0 )
              goto LABEL_6;
            if ( (_DefaultRuneLocale.__runetype[v37] & 0x400) == 0 )
              goto LABEL_6;
            v6 = v37 - 48;
            v38 = 0;
            if ( v6 == -1 )
              goto LABEL_6;
            LOBYTE(v38) = *v10 == 62;
            v28 = 4 * v38 + 2;
            v29 = &v10[v38];
          }
          else
          {
            if ( (_DWORD)v25 != 1 )
              goto LABEL_6;
            v27 = *v10 == 62;
            v28 = 4 * v27 + 2;
            v29 = &v10[v27];
            v6 = 1;
          }
        }
        else
        {
          v28 = 1;
          v6 = 0;
          v29 = v10;
          if ( v26 != 60 || v25 != 1 )
            goto LABEL_7;
        }
        v59 = v6;
        memset(v69, 0, 24);
        v30 = skip_spaces(v29);
        v31 = (unsigned __int8 *)v30;
        v32 = (unsigned __int8)*v30;
        v60 = v25;
        v65 = v28;
        if ( !*v30 )
          goto LABEL_78;
        if ( v32 != 34 && v32 != 39 )
        {
          v39 = v30;
          do
          {
            if ( (v32 & 0x80u) == 0
              && ((v32 & 0x7D) == 0x3C || (_DefaultRuneLocale.__runetype[(unsigned __int8)v32] & 0x4000) != 0) )
            {
              break;
            }
            LOBYTE(v32) = *++v39;
          }
          while ( (_BYTE)v32 );
          v40 = v39 - v30;
          if ( v39 > v30 )
          {
            v67 = 0;
            v68 = 0;
            if ( v40 == -1 )
            {
              v41 = nullptr;
            }
            else
            {
              v41 = qvector_reserve((__int64)&v67, nullptr, v40 + 1, 1u);
              *(_QWORD *)&v67 = v41;
            }
            *((_QWORD *)&v67 + 1) = v40 + 1;
            memmove(v41, v31, v39 - (char *)v31);
            *(_BYTE *)(v67 + v40) = 0;
            v48 = v67;
            v67 = 0;
            v49 = v68;
            v68 = 0;
            if ( *(_QWORD *)&v69[0] )
            {
              *((_QWORD *)&v69[0] + 1) = 0;
              qfree(*(void **)&v69[0]);
              v69[0] = v48;
              *(_QWORD *)&v69[1] = v49;
              if ( (_QWORD)v67 )
              {
                *((_QWORD *)&v67 + 1) = 0;
                qfree((void *)v67);
              }
            }
            else
            {
              v69[0] = v48;
              *(_QWORD *)&v69[1] = v49;
            }
          }
          goto LABEL_79;
        }
        v61 = *v30;
        while ( 1 )
        {
          v33 = v31[1];
          if ( v33 == 92 )
          {
            LOBYTE(v33) = v31[2];
            v31 += 2;
            v34 = v31;
            if ( !(_BYTE)v33 )
              goto LABEL_76;
          }
          else
          {
            v34 = v31 + 1;
            if ( !v31[1] )
            {
              ++v31;
LABEL_76:
              *((_QWORD *)&v69[0] + 1) = 0;
LABEL_77:
              v65 |= 8u;
LABEL_78:
              v39 = (char *)v31;
LABEL_79:
              if ( *((_QWORD *)&v69[0] + 1) >= 2u )
              {
                sub_100072B70((char **)a2, *(_QWORD *)(a2 + 8) + 1LL);
                v43 = *(char **)a2;
                v44 = 48LL * *(_QWORD *)(a2 + 8);
                *(_OWORD *)&v43[v44 + 8] = 0;
                *(_QWORD *)&v43[v44 + 24] = 0;
                ++*(_QWORD *)(a2 + 8);
                v45 = *(_QWORD *)&v43[v44 + 8];
                *(_QWORD *)&v43[v44 + 8] = *(_QWORD *)&v69[0];
                v46 = *(_OWORD *)&v43[v44 + 16];
                *(_QWORD *)&v43[v44 + 16] = *((_QWORD *)&v69[0] + 1);
                *(_QWORD *)&v43[v44 + 24] = *(_QWORD *)&v69[1];
                *(_QWORD *)&v69[0] = v45;
                *(_OWORD *)((char *)v69 + 8) = v46;
                *(_DWORD *)&v43[v44 + 32] = v65;
                *(_DWORD *)&v43[v44] = v59;
                v42 = skip_spaces(v39);
                v47 = &v43[v44];
                *((_DWORD *)v47 + 9) = (_DWORD)v10 - v60 - v58;
                *((_DWORD *)v47 + 10) = (_DWORD)v42 - ((_DWORD)v10 - v60);
              }
              else
              {
                v42 = nullptr;
              }
              if ( *(_QWORD *)&v69[0] )
              {
                *((_QWORD *)&v69[0] + 1) = 0;
                qfree(*(void **)&v69[0]);
              }
              if ( v42 )
              {
                *((_QWORD *)&v66[0] + 1) = 0;
                LOBYTE(v6) = 0;
                v10 = v42;
                goto LABEL_7;
              }
LABEL_6:
              LOBYTE(v6) = 0;
              goto LABEL_7;
            }
            if ( (_BYTE)v33 == v61 )
            {
              v31 += 2;
              goto LABEL_77;
            }
          }
          v35 = 0;
          if ( *((_QWORD *)&v69[0] + 1) )
            v35 = *((_QWORD *)&v69[0] + 1) - 1LL;
          v36 = *(_BYTE **)&v69[0];
          if ( *(_QWORD *)&v69[1] < (unsigned __int64)(v35 + 2) )
          {
            v36 = qvector_reserve((__int64)v69, *(void **)&v69[0], v35 + 2, 1u);
            *(_QWORD *)&v69[0] = v36;
          }
          *((_QWORD *)&v69[0] + 1) = v35 + 2;
          v36[v35] = v33;
          *(_BYTE *)(*(_QWORD *)&v69[0] + v35 + 1) = 0;
          v31 = v34;
        }
      }
    }
    goto LABEL_7;
  }
LABEL_91:
  if ( *((_QWORD *)&v66[0] + 1) >= 2u )
  {
    v51 = a1;
    v53 = (char *)*a1;
    v54 = a1[1];
    if ( a1[2] < (unsigned __int64)(v54 + 1) )
    {
      v53 = (char *)qvector_reserve((__int64)a1, v53, v54 + 1, 0x18u);
      *a1 = v53;
      v54 = a1[1];
    }
    v55 = 3 * v54;
    *(_OWORD *)&v53[8 * v55] = 0;
    *(_QWORD *)&v53[8 * v55 + 16] = 0;
    ++a1[1];
    v50 = *(void **)&v53[8 * v55];
    v56 = *(_QWORD *)&v53[8 * v55 + 16];
    *(_OWORD *)&v53[8 * v55] = v66[0];
    *(_QWORD *)&v53[8 * v55 + 16] = *(_QWORD *)&v66[1];
    *(_QWORD *)&v66[0] = v50;
    *(_QWORD *)&v66[1] = v56;
  }
  else
  {
    v50 = *(void **)&v66[0];
    v51 = a1;
  }
  v52 = v51[1];
  if ( v50 )
  {
    *((_QWORD *)&v66[0] + 1) = 0;
    qfree(v50);
  }
  return v52;
}
// 100072293: conditional instruction was optimized away because %var_A4.1 is in (==22|==27)
