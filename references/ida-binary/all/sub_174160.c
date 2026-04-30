unsigned __int64 __fastcall sub_174160(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  char *v3; // rax
  __int64 v4; // rdx
  const char *v5; // r9
  unsigned __int64 v6; // rax
  const char *v7; // r15
  unsigned __int64 v8; // rdx
  const char *v9; // rbp
  const char *v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rax
  signed __int64 v13; // r14
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // rsi
  unsigned int utf8_char; // eax
  unsigned __int8 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  int v25; // ebp
  __int64 v26; // rsi
  int v28; // eax
  __m128d v29; // xmm0
  __int64 v30; // rdx
  char v31; // cl
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // r10
  __int64 v35; // r11
  __int64 v36; // rsi
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rax
  const char *v40; // r8
  _BOOL4 v41; // r10d
  const char *v42; // r13
  int v43; // r15d
  int v44; // ebp
  int v45; // ecx
  unsigned __int64 v46; // rdx
  __int64 v47; // rsi
  int v48; // r14d
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  char v53; // al
  __int64 (__fastcall *v54)(__int64, _QWORD); // r14
  unsigned __int8 v55; // al
  int v56; // eax
  const char *v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // [rsp+0h] [rbp-1A8h]
  const char *v66; // [rsp+0h] [rbp-1A8h]
  const char *v67; // [rsp+0h] [rbp-1A8h]
  const char *v68; // [rsp+0h] [rbp-1A8h]
  const char *v69; // [rsp+10h] [rbp-198h]
  char v70; // [rsp+1Fh] [rbp-189h]
  __int64 v71; // [rsp+20h] [rbp-188h]
  int v72; // [rsp+28h] [rbp-180h]
  const char *v73; // [rsp+28h] [rbp-180h]
  __int64 v74; // [rsp+28h] [rbp-180h]
  __int64 v75; // [rsp+30h] [rbp-178h]
  unsigned __int64 v76; // [rsp+38h] [rbp-170h]
  __int64 v77; // [rsp+40h] [rbp-168h]
  __int64 v78; // [rsp+48h] [rbp-160h]
  const char *v79; // [rsp+58h] [rbp-150h] BYREF
  _DWORD v80[32]; // [rsp+60h] [rbp-148h] BYREF
  _DWORD v81[32]; // [rsp+E0h] [rbp-C8h] BYREF
  char v82[8]; // [rsp+160h] [rbp-48h] BYREF
  unsigned __int64 v83; // [rsp+168h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v2 = v80;
  v3 = (char *)v81;
  do
  {
    *v2 = -1;
    v2 += 2;
    *((_BYTE *)v2 - 4) = 0;
  }
  while ( v81 != v2 );
  do
  {
    *(_DWORD *)v3 = -1;
    v3 += 8;
    *(v3 - 4) = 0;
  }
  while ( v82 != v3 );
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
  {
    v71 = a1 + 104;
    v7 = &s1;
    v5 = &s1;
    goto LABEL_91;
  }
  v5 = *(const char **)a2;
  v6 = v4 - 1;
  v7 = (const char *)(*(_QWORD *)a2 + v4 - 1);
  v71 = a1 + 104;
  if ( *(_QWORD *)(a1 + 24) >= (unsigned __int64)(v4 - 1) )
    goto LABEL_6;
  v67 = *(const char **)a2;
  v62 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v4 - 1, 1);
  v5 = v67;
  *(_QWORD *)(a1 + 8) = v62;
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
  {
LABEL_91:
    v75 = a1 + 128;
    goto LABEL_8;
  }
  v6 = v4 - 1;
LABEL_6:
  v75 = a1 + 128;
  if ( *(_QWORD *)(a1 + 120) >= v6 )
  {
    v8 = v4 - 1;
    if ( *(_QWORD *)(a1 + 144) >= v8 )
      goto LABEL_8;
    goto LABEL_98;
  }
  v68 = v5;
  v63 = qvector_reserve(v71, *(_QWORD *)(a1 + 104), v6, 4);
  v5 = v68;
  *(_QWORD *)(a1 + 104) = v63;
  v64 = *(_QWORD *)(a2 + 8);
  if ( v64 )
  {
    v8 = v64 - 1;
    if ( *(_QWORD *)(a1 + 144) < v8 )
    {
LABEL_98:
      v66 = v5;
      v61 = qvector_reserve(v75, *(_QWORD *)(a1 + 128), v8, 4);
      v5 = v66;
      *(_QWORD *)(a1 + 128) = v61;
    }
  }
LABEL_8:
  if ( v7 >= v5 )
  {
    v70 = 0;
    v9 = v5;
    v10 = v7;
    v76 = 0;
    v65 = 0;
    v69 = v5;
    do
    {
      while ( 1 )
      {
        if ( !*v9 )
          goto LABEL_38;
        v79 = v9;
        utf8_char = get_utf8_char(&v79);
        v9 = v79;
        v11 = utf8_char;
        if ( utf8_char == -1 )
        {
          v9 = v79 + 1;
          v11 = 65533;
          goto LABEL_17;
        }
        if ( utf8_char == 4 )
        {
          sub_173FA0(a1);
          if ( !*(_BYTE *)(a1 + 164) )
          {
            v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1);
            *(_BYTE *)(a1 + 164) = 1;
            *(_DWORD *)(a1 + 160) = v28;
          }
          v29 = (__m128d)_mm_loadu_si128((const __m128i *)(a1 + 152));
          *(__m128d *)(a1 + 152) = _mm_shuffle_pd(v29, v29, 1);
          goto LABEL_23;
        }
        if ( utf8_char == 1 )
          break;
        if ( utf8_char == 2 )
        {
          v30 = *(_QWORD *)(a1 + 40);
          v31 = *v79;
          if ( v30 )
          {
            v32 = *(_QWORD *)(a1 + 32) + 20 * v30 - 20;
            while ( 1 )
            {
              --v30;
              if ( *(int *)(v32 + 4) < 0 && v31 == *(_BYTE *)(v32 + 16) )
                break;
              v32 -= 20;
              if ( !v30 )
                goto LABEL_53;
            }
            if ( v32 )
            {
              v33 = 0;
              if ( v69 < v79 )
                v33 = (_DWORD)v79 - 1 - (_DWORD)v69;
              *(_DWORD *)(v32 + 4) = *(_DWORD *)(a1 + 188) - *(_DWORD *)v32;
              *(_DWORD *)(v32 + 12) = v33;
              v31 = *v9;
            }
          }
LABEL_53:
          if ( v31 == 51 )
          {
            v70 = 0;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 156) && (*(_DWORD *)(a1 + 152) & 0xFFFFFF) == 0x10101 )
            {
              if ( v76 )
              {
                v58 = v81[2 * --v76];
                *(_DWORD *)(a1 + 160) = v58;
                *(_BYTE *)(a1 + 164) = v81[2 * v76 + 1];
              }
              sub_173FA0(a1);
              v31 = *v9;
            }
            else if ( v65 )
            {
              --v65;
              *(_DWORD *)(a1 + 152) = v80[2 * v65];
              *(_BYTE *)(a1 + 156) = v80[2 * v65 + 1];
              v31 = *v9;
            }
            if ( !v31 )
              goto LABEL_38;
          }
          ++v9;
        }
        else
        {
          if ( utf8_char != 3 )
            goto LABEL_14;
          if ( v79[1] )
          {
            ++v79;
            v38 = get_utf8_char(&v79);
            v9 = v79;
            v11 = v38;
            if ( v38 == -1 )
            {
              v9 = v79 + 1;
              v11 = 65533;
            }
            else
            {
LABEL_14:
              if ( v11 == 32 && v70 )
                v11 = 183;
            }
LABEL_17:
            v12 = put_utf8_char(v82, v11);
            v13 = v12;
            if ( v12 > 0 )
            {
              v34 = *(_QWORD *)(a1 + 16);
              v35 = v12;
              if ( v34 )
              {
                --v34;
                v35 = v12 + v34;
              }
              v36 = *(_QWORD *)(a1 + 8);
              v37 = v35 + 1;
              if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v35 + 1) )
              {
                v78 = v35;
                v77 = v34;
                v74 = v35 + 1;
                v59 = qvector_reserve(a1 + 8, v36, v37, 1);
                v35 = v78;
                v34 = v77;
                *(_QWORD *)(a1 + 8) = v59;
                v37 = v74;
                v36 = v59;
              }
              *(_QWORD *)(a1 + 16) = v37;
              *(_BYTE *)(v36 + v35) = 0;
              memmove((void *)(v34 + *(_QWORD *)(a1 + 8)), v82, v13);
              if ( *(_BYTE *)(a1 + 172) == *(_BYTE *)(a1 + 156) )
                goto LABEL_65;
            }
            else
            {
              if ( *(_BYTE *)(a1 + 172) != *(_BYTE *)(a1 + 156) )
                goto LABEL_19;
LABEL_65:
              if ( *(_DWORD *)(a1 + 168) == *(_DWORD *)(a1 + 152)
                && *(_BYTE *)(a1 + 180) == *(_BYTE *)(a1 + 164)
                && *(_DWORD *)(a1 + 176) == *(_DWORD *)(a1 + 160) )
              {
LABEL_20:
                v14 = *(_QWORD *)(a1 + 112);
                ++*(_DWORD *)(a1 + 188);
                v15 = *(_DWORD *)(a1 + 192);
                v16 = *(_QWORD *)(a1 + 104);
                if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v14 + 1) )
                {
                  v72 = *(_DWORD *)(a1 + 192);
                  v49 = qvector_reserve(v71, v16, v14 + 1, 4);
                  v15 = v72;
                  *(_QWORD *)(a1 + 104) = v49;
                  v16 = v49;
                  v14 = *(_QWORD *)(a1 + 112);
                }
                *(_DWORD *)(v16 + 4 * v14) = v15;
                ++*(_QWORD *)(a1 + 112);
                if ( v13 > 0 )
                {
                  v39 = *(_QWORD *)(a1 + 136);
                  v40 = v10;
                  v41 = v11 > 0xFFFF;
                  v42 = v9;
                  v43 = 0;
                  v44 = v41 + 1;
                  do
                  {
                    v45 = *(_DWORD *)(a1 + 188);
                    v46 = *(_QWORD *)(a1 + 144);
                    ++*(_DWORD *)(a1 + 192);
                    v47 = *(_QWORD *)(a1 + 128);
                    v48 = v45 - 1;
                    LODWORD(v79) = v45 - 1;
                    if ( v46 < v39 + 1 )
                    {
                      v73 = v40;
                      v51 = qvector_reserve(v75, v47, v39 + 1, 4);
                      v40 = v73;
                      *(_QWORD *)(a1 + 128) = v51;
                      v47 = v51;
                      v39 = *(_QWORD *)(a1 + 136);
                    }
                    *(_DWORD *)(v47 + 4 * v39) = v48;
                    ++v43;
                    v39 = *(_QWORD *)(a1 + 136) + 1LL;
                    *(_QWORD *)(a1 + 136) = v39;
                  }
                  while ( v44 != v43 );
                  v9 = v42;
                  v10 = v40;
                }
                goto LABEL_23;
              }
            }
LABEL_19:
            sub_173FA0(a1);
            goto LABEL_20;
          }
          v9 = v79 + 1;
        }
LABEL_23:
        if ( v10 < v9 )
          goto LABEL_38;
      }
      v18 = *v79;
      if ( *v79 == 40 )
      {
        while ( 1 )
        {
          v57 = v9++;
          if ( v9 == v79 + 16 )
            break;
          if ( !*v9 )
            goto LABEL_34;
        }
        v53 = v57[1];
      }
      else
      {
        if ( v18 == 51 )
        {
          v70 = 1;
LABEL_33:
          ++v9;
          goto LABEL_34;
        }
        if ( v65 <= 0xF )
        {
          v80[2 * v65] = *(_DWORD *)(a1 + 152);
          LOBYTE(v80[2 * v65++ + 1]) = *(_BYTE *)(a1 + 156);
        }
        if ( v18 == 19 )
        {
          v54 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL);
          v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
          v56 = v54(a1, v55);
          *(_BYTE *)(a1 + 156) = 1;
          *(_DWORD *)(a1 + 152) = v56;
          v53 = *v9;
        }
        else
        {
          if ( (unsigned __int8)(v18 - 41) <= 7u )
            goto LABEL_33;
          v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v18);
          *(_BYTE *)(a1 + 156) = 1;
          *(_DWORD *)(a1 + 152) = v52;
          if ( (v52 & 0xFFFFFF) == 0x10101 )
          {
            if ( v76 <= 0xF )
            {
              v81[2 * v76] = *(_DWORD *)(a1 + 160);
              LOBYTE(v81[2 * v76++ + 1]) = *(_BYTE *)(a1 + 164);
            }
            *(_DWORD *)(a1 + 160) = -16776961;
            *(_BYTE *)(a1 + 164) = 1;
            sub_173FA0(a1);
          }
          v53 = *v9;
        }
      }
      if ( v53 )
        goto LABEL_33;
LABEL_34:
      v19 = *(_QWORD *)(a1 + 40);
      v20 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v19 + 1) )
      {
        v50 = qvector_reserve(a1 + 32, v20, v19 + 1, 20);
        *(_QWORD *)(a1 + 32) = v50;
        v20 = v50;
        v19 = *(_QWORD *)(a1 + 40);
      }
      v21 = v20 + 20 * v19;
      *(_OWORD *)v21 = -1;
      v22 = (_DWORD)v9 - (_DWORD)v69;
      *(_BYTE *)(v21 + 16) = 0;
      v23 = *(_DWORD *)(a1 + 188);
      ++*(_QWORD *)(a1 + 40);
      *(_DWORD *)v21 = v23;
      if ( v18 == 40 )
      {
        *(_BYTE *)(v21 + 16) = 40;
        *(_DWORD *)(v21 + 8) = v22;
        *(_DWORD *)(v21 + 4) = 0;
        *(_DWORD *)(v21 + 12) = v22;
        goto LABEL_23;
      }
      *(_BYTE *)(v21 + 16) = v18;
      *(_DWORD *)(v21 + 8) = v22;
    }
    while ( v10 >= v9 );
  }
LABEL_38:
  sub_173FA0(a1);
  v24 = *(_QWORD *)(a1 + 112);
  v25 = *(_DWORD *)(a1 + 192);
  v26 = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v24 + 1) )
  {
    v60 = qvector_reserve(v71, v26, v24 + 1, 4);
    *(_QWORD *)(a1 + 104) = v60;
    v26 = v60;
    v24 = *(_QWORD *)(a1 + 112);
  }
  *(_DWORD *)(v26 + 4 * v24) = v25;
  ++*(_QWORD *)(a1 + 112);
  return v83 - __readfsqword(0x28u);
}
