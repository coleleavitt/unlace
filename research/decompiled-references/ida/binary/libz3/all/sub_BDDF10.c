__int64 __fastcall sub_BDDF10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  char *v5; // rdi
  int v6; // ecx
  __int64 v7; // rsi
  char *v8; // rax
  char *v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD **v16; // rbx
  _QWORD **v17; // r13
  _QWORD *v18; // rbp
  __int64 v19; // r14
  __int64 v20; // r15
  _DWORD *v21; // rax
  __int64 v22; // rax
  __m128i *v23; // r15
  __m128i *v24; // r9
  unsigned int v25; // esi
  __int32 v26; // esi
  __int64 v27; // rax
  __m128i *v28; // rdx
  __m128i *v29; // rax
  __m128i *v30; // rdi
  _BYTE *v31; // r8
  _QWORD **v32; // rbx
  _QWORD **v33; // rbp
  _QWORD *v34; // r13
  __int64 v35; // r14
  __int64 v36; // r15
  _DWORD *v37; // rax
  __int64 v38; // r14
  unsigned int v39; // esi
  int v40; // r9d
  __int64 v41; // r11
  unsigned int v42; // eax
  __int64 v43; // r14
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r10
  __int64 v47; // rax
  _BYTE *v48; // rdx
  __int64 result; // rax
  unsigned int v50; // esi
  _BYTE *v51; // rcx
  unsigned int v52; // ecx
  __int64 v53; // r14
  __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rdi
  __int64 v57; // rax
  unsigned int v58; // ecx
  __int64 v59; // r14
  __int64 v60; // rcx
  __int64 v61; // rax
  __m128i *v62; // r8
  __m128i *v63; // rdi
  const __m128i *v64; // rcx
  const __m128i *v65; // r14
  __int64 v66; // rax
  __m128i *v67; // rsi
  __m128i *v68; // rdx
  __m128i *v69; // rax
  unsigned int v70; // eax
  __int64 v71; // r10
  __int64 v72; // rax
  __int64 v73; // [rsp+0h] [rbp-78h]
  __int64 v74; // [rsp+8h] [rbp-70h]
  __int64 v75; // [rsp+8h] [rbp-70h]
  unsigned int v76; // [rsp+10h] [rbp-68h]
  __m128i *v77; // [rsp+10h] [rbp-68h]
  unsigned int v78; // [rsp+1Ch] [rbp-5Ch]
  size_t v79; // [rsp+20h] [rbp-58h]
  __m128i *v80; // [rsp+28h] [rbp-50h]

  v4 = *(_QWORD *)(a3 + 8);
  v73 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)(v4 + 32) >= *(_DWORD *)(v73 + 32) )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v73 = *(_QWORD *)(a3 + 8);
  }
  if ( !*(_DWORD *)(a1 + 156) && !*(_DWORD *)(a1 + 160) )
    goto LABEL_19;
  v5 = *(char **)(a1 + 144);
  v6 = 0;
  v7 = *(unsigned int *)(a1 + 152);
  v8 = v5;
  v9 = &v5[16 * v7];
  if ( v5 != v9 )
  {
    do
    {
      while ( *((_QWORD *)v8 + 1) )
      {
        *((_QWORD *)v8 + 1) = 0;
        v8 += 16;
        if ( v9 == v8 )
          goto LABEL_10;
      }
      v8 += 16;
      ++v6;
    }
    while ( v9 != v8 );
LABEL_10:
    if ( (unsigned int)v7 > 0x10 && 3 * (int)v7 < (unsigned int)(4 * v6) )
    {
      v74 = v4;
      if ( v5 )
      {
        sub_186B220(v5);
        v10 = *(_DWORD *)(a1 + 152);
        *(_QWORD *)(a1 + 144) = 0;
        v10 >>= 1;
        *(_DWORD *)(a1 + 152) = v10;
        v11 = v10;
        v12 = sub_186B270(16LL * v10);
        v4 = v74;
        if ( !v10 )
        {
LABEL_17:
          *(_QWORD *)(a1 + 144) = v12;
          goto LABEL_18;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 144) = 0;
        v50 = (unsigned int)v7 >> 1;
        v11 = v50;
        *(_DWORD *)(a1 + 152) = v50;
        v12 = sub_186B270(16LL * v50);
        v4 = v74;
      }
      v13 = 16 * v11;
      v14 = v12;
      v15 = v12 + v13;
      if ( (v13 & 0x10) == 0 || (v14 = v12 + 16, *(_QWORD *)(v12 + 8) = 0, v12 + 16 != v15) )
      {
        do
        {
          *(_QWORD *)(v14 + 8) = 0;
          v14 += 32;
          *(_QWORD *)(v14 - 8) = 0;
        }
        while ( v14 != v15 );
      }
      goto LABEL_17;
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 156) = 0;
LABEL_19:
  v16 = *(_QWORD ***)(v4 + 56);
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 != v17 )
    {
      v75 = v4;
      while ( 1 )
      {
        v18 = *v16;
        if ( v18 != (_QWORD *)v18[3] )
          goto LABEL_22;
        v19 = *(_QWORD *)(a1 + 16);
        v20 = *v18;
        if ( (unsigned int)sub_8E7030(v19) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 7488) + 56LL))(
                  *(_QWORD *)(v19 + 7488),
                  v20) )
            goto LABEL_22;
        }
        v21 = *(_DWORD **)(*(_QWORD *)(*v18 + 16LL) + 24LL);
        if ( !v21 || *(_DWORD *)(a1 + 8) != *v21 || v21[1] != 1 || *(_QWORD *)(v18[14] + 8LL) != v75 )
          goto LABEL_22;
        v22 = *(unsigned int *)(a1 + 152);
        v76 = 2 * v22;
        if ( 3 * (int)v22 < (unsigned int)(4 * (*(_DWORD *)(a1 + 156) + *(_DWORD *)(a1 + 160))) )
        {
          v79 = 16LL * v76;
          v61 = sub_186B270(v79);
          v23 = (__m128i *)v61;
          v62 = (__m128i *)(v61 + v79);
          if ( v76 )
          {
            if ( (v79 & 0x10) == 0 || (*(_QWORD *)(v61 + 8) = 0, v61 += 16, (__m128i *)v61 != v62) )
            {
              do
              {
                *(_QWORD *)(v61 + 8) = 0;
                v61 += 32;
                *(_QWORD *)(v61 - 8) = 0;
              }
              while ( (__m128i *)v61 != v62 );
            }
          }
          v63 = *(__m128i **)(a1 + 144);
          v24 = v62;
          v64 = &v63[*(unsigned int *)(a1 + 152)];
          v78 = v76 - 1;
          if ( v63 != v64 )
          {
            v65 = *(const __m128i **)(a1 + 144);
            do
            {
              if ( v65->m128i_i64[1] > 1uLL )
              {
                v66 = 16LL * (v65->m128i_i32[0] & v78);
                v67 = &v23[(unsigned __int64)v66 / 0x10];
                if ( v79 == v66 )
                {
LABEL_112:
                  if ( v23 == v67 )
                  {
LABEL_133:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v69 = v23;
                  while ( v69->m128i_i64[1] )
                  {
                    if ( v67 == ++v69 )
                      goto LABEL_133;
                  }
                  *v69 = _mm_loadu_si128(v65);
                }
                else
                {
                  v68 = &v23[(unsigned __int64)v66 / 0x10];
                  while ( v68->m128i_i64[1] )
                  {
                    if ( v62 == ++v68 )
                      goto LABEL_112;
                  }
                  *v68 = _mm_loadu_si128(v65);
                }
              }
              ++v65;
            }
            while ( v64 != v65 );
            v63 = *(__m128i **)(a1 + 144);
          }
          if ( v63 )
          {
            v80 = v62;
            sub_186B220(v63);
            v24 = v80;
          }
          *(_QWORD *)(a1 + 144) = v23;
          *(_DWORD *)(a1 + 160) = 0;
          *(_DWORD *)(a1 + 152) = v76;
        }
        else
        {
          v23 = *(__m128i **)(a1 + 144);
          v78 = v22 - 1;
          v79 = 16 * v22;
          v24 = &v23[v22];
        }
        v25 = -1;
        if ( (*((_BYTE *)v18 + 44) & 8) == 0 )
          v25 = *(_DWORD *)(*v18 + 24LL) - 1;
        v77 = v24;
        v26 = sub_BDCEF0(v18, v25);
        v27 = 16LL * (v26 & v78);
        v28 = &v23[(unsigned __int64)v27 / 0x10];
        if ( v27 == v79 )
        {
          v30 = nullptr;
          while ( 1 )
          {
LABEL_65:
            if ( v28 == v23 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v51 = (_BYTE *)v23->m128i_i64[1];
            if ( (unsigned __int64)v51 > 1 )
            {
              if ( v23->m128i_i32[0] == v26 )
              {
                if ( (v51[44] & 8) != 0 || (v70 = *(_DWORD *)(*(_QWORD *)v51 + 24LL), v70 <= 1) )
                {
LABEL_93:
                  v23->m128i_i64[1] = (__int64)v18;
                  goto LABEL_22;
                }
                v71 = v70 - 1;
                v72 = 0;
                while ( *(_QWORD *)(*(_QWORD *)&v51[8 * v72 + 120] + 8LL) == *(_QWORD *)(v18[v72 + 15] + 8LL) )
                {
                  if ( ++v72 == v71 )
                    goto LABEL_93;
                }
              }
            }
            else
            {
              if ( !v51 )
              {
                if ( v30 )
                {
                  --*(_DWORD *)(a1 + 160);
                  v23 = v30;
                }
                v23->m128i_i64[1] = (__int64)v18;
                v23->m128i_i32[0] = v26;
                ++*(_DWORD *)(a1 + 156);
                goto LABEL_22;
              }
              v30 = v23;
            }
            ++v23;
          }
        }
        v29 = &v23[(unsigned __int64)v27 / 0x10];
        v30 = nullptr;
        while ( 1 )
        {
          v31 = (_BYTE *)v29->m128i_i64[1];
          if ( (unsigned __int64)v31 <= 1 )
            break;
          if ( v29->m128i_i32[0] == v26 )
          {
            if ( (v31[44] & 8) != 0 || (v58 = *(_DWORD *)(*(_QWORD *)v31 + 24LL), v58 <= 1) )
            {
LABEL_91:
              v29->m128i_i64[1] = (__int64)v18;
              goto LABEL_22;
            }
            v59 = v58 - 1;
            v60 = 0;
            while ( *(_QWORD *)(*(_QWORD *)&v31[8 * v60 + 120] + 8LL) == *(_QWORD *)(v18[v60 + 15] + 8LL) )
            {
              if ( v59 == ++v60 )
                goto LABEL_91;
            }
          }
LABEL_37:
          if ( ++v29 == v77 )
            goto LABEL_65;
        }
        if ( v31 )
          break;
        if ( v30 )
        {
          --*(_DWORD *)(a1 + 160);
          v29 = v30;
        }
        v29->m128i_i64[1] = (__int64)v18;
        v29->m128i_i32[0] = v26;
        ++*(_DWORD *)(a1 + 156);
LABEL_22:
        if ( v17 == ++v16 )
          goto LABEL_41;
      }
      v30 = v29;
      goto LABEL_37;
    }
  }
LABEL_41:
  v32 = *(_QWORD ***)(v73 + 56);
  if ( !v32 )
    return 0;
  v33 = &v32[*((unsigned int *)v32 - 1)];
  if ( v33 == v32 )
    return 0;
  while ( 1 )
  {
    v34 = *v32;
    if ( v34 == (_QWORD *)v34[3] )
    {
      v35 = *(_QWORD *)(a1 + 16);
      v36 = *v34;
      if ( !(unsigned int)sub_8E7030(v35)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v35 + 7488) + 56LL))(
             *(_QWORD *)(v35 + 7488),
             v36) )
      {
        v37 = *(_DWORD **)(*(_QWORD *)(*v34 + 16LL) + 24LL);
        if ( v37 )
        {
          if ( *(_DWORD *)(a1 + 8) == *v37 && v37[1] == 1 && *(_QWORD *)(v34[14] + 8LL) == v73 )
          {
            v38 = *(unsigned int *)(a1 + 152);
            v39 = -1;
            if ( (*((_BYTE *)v34 + 44) & 8) == 0 )
              v39 = *(_DWORD *)(*v34 + 24LL) - 1;
            v40 = sub_BDCEF0(v34, v39);
            v42 = v38 - 1;
            v43 = 16 * v38;
            v44 = v41 + v43;
            v45 = 16LL * (v40 & v42);
            v46 = v41 + v45;
            if ( v45 == v43 )
            {
LABEL_77:
              if ( v41 != v46 )
              {
                while ( 1 )
                {
                  v48 = *(_BYTE **)(v41 + 8);
                  if ( (unsigned __int64)v48 > 1 )
                  {
                    if ( *(_DWORD *)v41 == v40 )
                    {
                      if ( (v48[44] & 8) != 0 )
                        goto LABEL_70;
                      v55 = *(_DWORD *)(*(_QWORD *)v48 + 24LL);
                      if ( v55 <= 1 )
                        goto LABEL_70;
                      v56 = v55 - 1;
                      v57 = 0;
                      while ( *(_QWORD *)(*(_QWORD *)&v48[8 * v57 + 120] + 8LL) == *(_QWORD *)(v34[v57 + 15] + 8LL) )
                      {
                        if ( v56 == ++v57 )
                        {
                          v47 = v41;
                          goto LABEL_76;
                        }
                      }
                    }
                  }
                  else if ( !v48 )
                  {
                    goto LABEL_44;
                  }
                  v41 += 16;
                  if ( v46 == v41 )
                    goto LABEL_44;
                }
              }
              goto LABEL_44;
            }
            v47 = v41 + v45;
            while ( 1 )
            {
              v48 = *(_BYTE **)(v47 + 8);
              if ( (unsigned __int64)v48 > 1 )
                break;
              if ( !v48 )
                goto LABEL_44;
LABEL_57:
              v47 += 16;
              if ( v44 == v47 )
                goto LABEL_77;
            }
            if ( *(_DWORD *)v47 != v40 )
              goto LABEL_57;
            if ( (v48[44] & 8) == 0 )
            {
              v52 = *(_DWORD *)(*(_QWORD *)v48 + 24LL);
              if ( v52 > 1 )
              {
                v53 = v52 - 1;
                v54 = 0;
                while ( *(_QWORD *)(*(_QWORD *)&v48[8 * v54 + 120] + 8LL) == *(_QWORD *)(v34[v54 + 15] + 8LL) )
                {
                  if ( v53 == ++v54 )
                  {
LABEL_76:
                    v48 = *(_BYTE **)(v47 + 8);
                    goto LABEL_70;
                  }
                }
                goto LABEL_57;
              }
            }
LABEL_70:
            result = sub_8E77E0(*(_QWORD *)(a1 + 16), (__int64)v34, (__int64)v48);
            if ( (_BYTE)result )
              return result;
          }
        }
      }
    }
LABEL_44:
    if ( v33 == ++v32 )
      return 0;
  }
}

