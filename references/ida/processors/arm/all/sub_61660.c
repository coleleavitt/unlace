__int64 *__fastcall sub_61660(__int64 a1, __int64 *a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rsi
  __m128i si128; // xmm0
  __int64 v24; // r13
  __int64 v25; // r10
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r12
  __int64 v45; // r13
  unsigned __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // rsi
  _DWORD *v49; // r13
  __int64 v50; // r13
  __int64 v51; // r15
  unsigned __int64 v52; // r14
  __int64 v53; // rsi
  __int64 v54; // r13
  __int64 v55; // r14
  __int64 v56; // r13
  __int64 v57; // rsi
  unsigned __int64 v58; // r14
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v74; // [rsp+8h] [rbp-D0h]
  __int64 v75; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v76; // [rsp+28h] [rbp-B0h]
  unsigned int v77; // [rsp+38h] [rbp-A0h]
  __int64 v78; // [rsp+40h] [rbp-98h]
  __int64 v79; // [rsp+48h] [rbp-90h]
  __int128 v80; // [rsp+50h] [rbp-88h]
  __int64 v81; // [rsp+60h] [rbp-78h]
  int v82; // [rsp+68h] [rbp-70h]
  __int128 v83; // [rsp+70h] [rbp-68h]
  __int128 v84; // [rsp+80h] [rbp-58h]
  unsigned __int64 v85; // [rsp+98h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 'L':
      netnode_charval();
      v33 = a2[1];
      v34 = *a2;
      if ( a2[2] < (unsigned __int64)(v33 + 1) )
      {
        v37 = qvector_reserve((__int64)a2, v34, v33 + 1, 24);
        v33 = a2[1];
        *a2 = v37;
        v34 = v37;
      }
      v12 = v34 + 24 * v33;
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      ++a2[1];
      return sub_1CD20((__int64 *)v12);
    case 's':
      v14 = node2ea();
      v76 = 0;
      v75 = 0;
      v77 = 8;
      v78 = 0;
      v79 = 0;
      v81 = 0;
      v82 = 112;
      v80 = 0;
      v83 = 0;
      v84 = 0;
      if ( !(unsigned __int8)sub_5A510((__int64)&v75, a5, v14) )
      {
        if ( v79 )
        {
          *(_QWORD *)&v80 = 0;
          qfree(v79);
        }
        if ( v75 )
        {
          *(_QWORD *)&v76 = 0;
          qfree(v75);
        }
        return (__int64 *)(v85 - __readfsqword(0x28u));
      }
      v15 = v77;
      v73 = 0;
      v74 = 0;
      if ( ((unsigned int)qword_AA480 & v77) != 0 )
      {
        sub_55D90(&v73);
        if ( (qword_AA490 & v15) == 0 )
        {
LABEL_70:
          v16 = a2[1];
          v61 = v16;
          if ( (unsigned __int64)v74 <= 1 )
          {
LABEL_14:
            if ( !(_QWORD)v80 )
            {
LABEL_15:
              if ( (_QWORD)v76 )
              {
                v17 = *a2;
                if ( a2[2] < (unsigned __int64)(v16 + 1) )
                {
                  v68 = qvector_reserve((__int64)a2, v17, v16 + 1, 24);
                  *a2 = v68;
                  v17 = v68;
                  v16 = a2[1];
                }
                v18 = v17 + 24 * v16;
                *(_OWORD *)(v18 + 8) = 0;
                *(_QWORD *)v18 = 0;
                ++a2[1];
                v19 = *(_QWORD *)(v18 + 8);
                if ( v19 )
                {
                  v21 = v19 + 25;
                  v20 = v19 + 26;
                  --v19;
                }
                else
                {
                  v20 = 27;
                  v21 = 26;
                }
                v22 = *(_QWORD *)v18;
                if ( *(_QWORD *)(v18 + 16) < v20 )
                {
                  v67 = qvector_reserve(v18, v22, v20, 1);
                  *(_QWORD *)v18 = v67;
                  v22 = v67;
                }
                si128 = _mm_load_si128((const __m128i *)&xmmword_89720);
                *(_QWORD *)(v18 + 8) = v20;
                *(_BYTE *)(v22 + v21) = 0;
                v24 = *(_QWORD *)v18 + v19;
                *(__m128i *)v24 = si128;
                v25 = v75;
                *(__m128i *)(v24 + 10) = _mm_load_si128((const __m128i *)&xmmword_89730);
                v26 = v25;
                v27 = v25 + 32 * v76;
                if ( v25 != v27 )
                {
                  do
                  {
                    sub_55D90((__int64 *)v18);
                    v26 += 32;
                  }
                  while ( v27 != v26 );
                }
                v16 = a2[1];
              }
              v28 = *a2;
              if ( a2[2] < (unsigned __int64)(v16 + 1) )
              {
                v42 = qvector_reserve((__int64)a2, v28, v16 + 1, 24);
                *a2 = v42;
                v28 = v42;
                v16 = a2[1];
              }
              v29 = v28 + 24 * v16;
              *(_QWORD *)v29 = 0;
              *(_OWORD *)(v29 + 8) = 0;
              ++a2[1];
              sub_1CD20((__int64 *)v29);
              v30 = a2[1];
              v31 = *a2;
              if ( a2[2] < (unsigned __int64)(v30 + 1) )
              {
                v41 = qvector_reserve((__int64)a2, v31, v30 + 1, 24);
                *a2 = v41;
                v30 = a2[1];
                v31 = v41;
              }
              v32 = v31 + 24 * v30;
              *(_QWORD *)v32 = 0;
              *(_OWORD *)(v32 + 8) = 0;
              ++a2[1];
              sub_1CD20((__int64 *)v32);
              if ( (v77 & 1) != 0 )
              {
                v38 = a2[1];
                v39 = *a2;
                if ( a2[2] < (unsigned __int64)(v38 + 1) )
                {
                  v66 = qvector_reserve((__int64)a2, v39, v38 + 1, 24);
                  *a2 = v66;
                  v38 = a2[1];
                  v39 = v66;
                }
                v40 = v39 + 24 * v38;
                *(_QWORD *)v40 = 0;
                *(_OWORD *)(v40 + 8) = 0;
                ++a2[1];
                sub_1CD20((__int64 *)v40);
              }
              if ( v73 )
              {
                *(_QWORD *)&v74 = 0;
                qfree(v73);
              }
              if ( v79 )
              {
                *(_QWORD *)&v80 = 0;
                qfree(v79);
              }
              if ( v75 )
              {
                *(_QWORD *)&v76 = 0;
                qfree(v75);
              }
              return (__int64 *)(v85 - __readfsqword(0x28u));
            }
            v43 = *a2;
            if ( a2[2] < (unsigned __int64)(v16 + 1) )
            {
              v65 = qvector_reserve((__int64)a2, v43, v16 + 1, 24);
              *a2 = v65;
              v43 = v65;
              v16 = a2[1];
            }
            v44 = v43 + 24 * v16;
            *(_OWORD *)(v44 + 8) = 0;
            *(_QWORD *)v44 = 0;
            ++a2[1];
            v45 = *(_QWORD *)(v44 + 8);
            if ( v45 )
            {
              v47 = v45 + 6;
              v46 = v45 + 7;
              --v45;
            }
            else
            {
              v46 = 8;
              v47 = 7;
            }
            v48 = *(_QWORD *)v44;
            if ( *(_QWORD *)(v44 + 16) < v46 )
            {
              v69 = qvector_reserve(v44, v48, v46, 1);
              *(_QWORD *)v44 = v69;
              v48 = v69;
            }
            *(_QWORD *)(v44 + 8) = v46;
            *(_BYTE *)(v48 + v47) = 0;
            v49 = (_DWORD *)(*(_QWORD *)v44 + v45);
            *v49 = 1819243120;
            *(_DWORD *)((char *)v49 + 3) = 979857260;
            v50 = *(_QWORD *)(v44 + 8);
            if ( v50 )
            {
              v51 = v50 + 1;
              v52 = v50 + 2;
              --v50;
            }
            else
            {
              v52 = 3;
              v51 = 2;
            }
            v53 = *(_QWORD *)v44;
            if ( *(_QWORD *)(v44 + 16) < v52 )
            {
              v71 = qvector_reserve(v44, v53, v52, 1);
              *(_QWORD *)v44 = v71;
              v53 = v71;
            }
            *(_QWORD *)(v44 + 8) = v52;
            *(_BYTE *)(v53 + v51) = 0;
            *(_WORD *)(*(_QWORD *)v44 + v50) = 23328;
            if ( (_QWORD)v80 )
            {
              v54 = v79;
              v55 = v79 + 8 * v80;
              if ( v79 != v55 )
              {
                do
                {
                  sub_55D90((__int64 *)v44);
                  v54 += 8;
                }
                while ( v55 != v54 );
              }
              v56 = *(_QWORD *)(v44 + 8);
              v57 = *(_QWORD *)v44;
              v58 = v56 - 1;
              if ( v56 - 1 <= 1 )
              {
                if ( v57 )
                {
                  *(_QWORD *)(v44 + 8) = 0;
                  qfree(v57);
                  v56 = *(_QWORD *)(v44 + 8);
                  *(_QWORD *)v44 = 0;
                  v57 = 0;
                  v60 = 2;
                  *(_QWORD *)(v44 + 16) = 0;
                  if ( !v56 )
                    goto LABEL_78;
                  v59 = 0;
LABEL_66:
                  v60 = v56-- + 1;
LABEL_67:
                  if ( v59 >= v60 )
                  {
LABEL_68:
                    *(_QWORD *)(v44 + 8) = v60;
                    *(_BYTE *)(v57 + v56) = 93;
                    *(_BYTE *)(*(_QWORD *)v44 + v56 + 1) = 0;
                    v16 = a2[1];
                    goto LABEL_15;
                  }
LABEL_78:
                  v70 = qvector_reserve(v44, v57, v60, 1);
                  *(_QWORD *)v44 = v70;
                  v57 = v70;
                  goto LABEL_68;
                }
LABEL_65:
                v59 = *(_QWORD *)(v44 + 16);
                v60 = 2;
                if ( !v56 )
                  goto LABEL_67;
                goto LABEL_66;
              }
              if ( *(_QWORD *)(v44 + 16) < v58 )
              {
                v72 = qvector_reserve(v44, v57, v56 - 1, 1);
                *(_QWORD *)v44 = v72;
                v57 = v72;
              }
              *(_QWORD *)(v44 + 8) = v58;
              *(_BYTE *)(v57 + v56 - 2) = 0;
            }
            v56 = *(_QWORD *)(v44 + 8);
            v57 = *(_QWORD *)v44;
            goto LABEL_65;
          }
          v62 = *a2;
          if ( a2[2] < (unsigned __int64)(v16 + 1) )
          {
            v64 = qvector_reserve((__int64)a2, v62, v16 + 1, 24);
            *a2 = v64;
            v61 = a2[1];
            v62 = v64;
          }
          v63 = v62 + 24 * v61;
          *(_QWORD *)v63 = 0;
          *(_OWORD *)(v63 + 8) = 0;
          ++a2[1];
          sub_1CD20((__int64 *)v63);
LABEL_13:
          v16 = a2[1];
          goto LABEL_14;
        }
      }
      else if ( ((unsigned int)qword_AA490 & v77) == 0 )
      {
        goto LABEL_13;
      }
      sub_55D90(&v73);
      goto LABEL_70;
    case 'I':
      netnode_altval();
      v7 = a2[1];
      v8 = *a2;
      if ( a2[2] < (unsigned __int64)(v7 + 1) )
      {
        v35 = qvector_reserve((__int64)a2, v8, v7 + 1, 24);
        v7 = a2[1];
        *a2 = v35;
        v8 = v35;
      }
      v9 = v8 + 24 * v7;
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      ++a2[1];
      sub_1CD20((__int64 *)v9);
      v10 = a2[1];
      v11 = *a2;
      if ( a2[2] < (unsigned __int64)(v10 + 1) )
      {
        v36 = qvector_reserve((__int64)a2, v11, v10 + 1, 24);
        v10 = a2[1];
        *a2 = v36;
        v11 = v36;
      }
      v12 = v11 + 24 * v10;
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      ++a2[1];
      return sub_1CD20((__int64 *)v12);
  }
  return (__int64 *)(v85 - __readfsqword(0x28u));
}
