__int64 __fastcall sub_325F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v9; // rdi
  const char *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+Ch] [rbp-11Ch] BYREF
  _BYTE v34[4]; // [rsp+10h] [rbp-118h] BYREF
  unsigned int v35; // [rsp+14h] [rbp-114h]
  unsigned int v36; // [rsp+18h] [rbp-110h]
  unsigned int v37; // [rsp+1Ch] [rbp-10Ch]
  __int64 v38; // [rsp+20h] [rbp-108h]
  __m128i v39; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v40[4]; // [rsp+40h] [rbp-E8h] BYREF
  int v41; // [rsp+60h] [rbp-C8h]
  __int64 v42; // [rsp+68h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+70h] [rbp-B8h]
  int v44; // [rsp+80h] [rbp-A8h]
  __int64 v45; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+90h] [rbp-98h]
  __int64 v47; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-80h]
  __int64 v49; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-68h]
  unsigned int v51; // [rsp+D0h] [rbp-58h]
  __m128i v52; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+E8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v5 = a3;
  LOBYTE(a3) = a2 == 0;
  v6 = a3;
  LOBYTE(v6) = v5 == 0 || a2 == 0;
  if ( !(_BYTE)v6
    && (v9 = *(_QWORD *)(a1 + 8), v33 = 0, qlseek(v9, a2, 0) == a2)
    && qlread(*(_QWORD *)(a1 + 8), &v33, 4) == 4
    && qlseek(*(_QWORD *)(a1 + 8), a2, 0) == a2 )
  {
    v40[0] = a4;
    v42 = 0;
    v44 = 0;
    v45 = 0;
    v47 = 0;
    v49 = 0;
    v51 = 0;
    v40[1] = a5 + a4;
    v41 = v33;
    v40[2] = a2;
    v40[3] = v5;
    v43 = 0;
    v46 = 0;
    v48 = 0;
    v50 = 0;
    v52 = 0;
    switch ( v33 )
    {
      case 1:
        v13 = v34;
        if ( qlread(*(_QWORD *)(a1 + 8), v34, 24) == 24 )
        {
          v25 = v36;
          v26 = v43;
          if ( (unsigned __int64)v43 < v36 )
          {
            if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)v36 )
            {
              v42 = qvector_reserve(&v42, v42, v36, 2);
              v26 = v43;
            }
            memset((void *)(v42 + 2 * v26), 0, 2 * (v25 - v26));
            *(_QWORD *)&v43 = v25;
          }
          else if ( v36 != (_QWORD)v43 )
          {
            *(_QWORD *)&v43 = v36;
          }
          v13 = (const char *)(a2 + v35);
          v27 = qlseek(*(_QWORD *)(a1 + 8), v13, 0);
          if ( v27 == a2 + v35 )
          {
            sub_32180(*(_QWORD *)(a1 + 8), v36, 2, "Slide info TOC entries count", -1, -1);
            v13 = (const char *)v42;
            v28 = qlread(*(_QWORD *)(a1 + 8), v42, 2LL * v36);
            if ( v28 == 2LL * v36 )
            {
              v29 = v46;
              v44 = HIDWORD(v38);
              v30 = (unsigned int)(v38 * HIDWORD(v38));
              if ( (unsigned __int64)v46 < v30 )
              {
                if ( *((_QWORD *)&v46 + 1) < v30 )
                {
                  v45 = qvector_reserve(&v45, v45, (unsigned int)(v38 * HIDWORD(v38)), 1);
                  v29 = v46;
                }
                memset((void *)(v45 + v29), 0, v30 - v29);
                *(_QWORD *)&v46 = v30;
              }
              else if ( v30 != (_QWORD)v46 )
              {
                *(_QWORD *)&v46 = (unsigned int)(v38 * HIDWORD(v38));
              }
              v13 = (const char *)(a2 + v37);
              v31 = qlseek(*(_QWORD *)(a1 + 8), v13, 0);
              if ( v31 == a2 + v37 )
              {
                v13 = (const char *)v45;
                v32 = qlread(*(_QWORD *)(a1 + 8), v45, v46);
                if ( v32 == (_QWORD)v46 )
                  goto LABEL_14;
              }
            }
          }
        }
        break;
      case 2:
      case 4:
        v13 = v34;
        if ( qlread(*(_QWORD *)(a1 + 8), v34, 40) == 40 && v35 )
        {
          v51 = v35;
          v17 = v37;
          v18 = v48;
          v52 = _mm_loadu_si128(&v39);
          if ( (unsigned __int64)v48 < v37 )
          {
            if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)v37 )
            {
              v47 = qvector_reserve(&v47, v47, v37, 2);
              v18 = v48;
            }
            memset((void *)(v47 + 2 * v18), 0, 2 * (v17 - v18));
            *(_QWORD *)&v48 = v17;
          }
          else if ( v37 != (_QWORD)v48 )
          {
            *(_QWORD *)&v48 = v37;
          }
          v13 = (const char *)(a2 + v36);
          v19 = qlseek(*(_QWORD *)(a1 + 8), v13, 0);
          if ( v19 == a2 + v36 )
          {
            sub_32180(*(_QWORD *)(a1 + 8), v37, 2, "Slide info page starts count", -1, -1);
            v13 = (const char *)v47;
            v20 = qlread(*(_QWORD *)(a1 + 8), v47, 2LL * v37);
            if ( v20 == 2LL * v37 )
            {
              v21 = HIDWORD(v38);
              v22 = v50;
              if ( (unsigned __int64)v50 < HIDWORD(v38) )
              {
                if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)HIDWORD(v38) )
                {
                  v49 = qvector_reserve(&v49, v49, HIDWORD(v38), 2);
                  v22 = v50;
                }
                memset((void *)(v49 + 2 * v22), 0, 2 * (v21 - v22));
                *(_QWORD *)&v50 = v21;
              }
              else if ( HIDWORD(v38) != (_QWORD)v50 )
              {
                *(_QWORD *)&v50 = HIDWORD(v38);
              }
              v13 = (const char *)(a2 + (unsigned int)v38);
              v23 = qlseek(*(_QWORD *)(a1 + 8), v13, 0);
              if ( v23 == a2 + (unsigned int)v38 )
              {
                sub_32180(*(_QWORD *)(a1 + 8), HIDWORD(v38), 2, "Slide info page extras count", -1, -1);
                v13 = (const char *)v49;
                v24 = qlread(*(_QWORD *)(a1 + 8), v49, 2LL * HIDWORD(v38));
                if ( v24 == 2LL * HIDWORD(v38) )
                  goto LABEL_14;
              }
            }
          }
        }
        break;
      case 3:
      case 5:
        v13 = v34;
        if ( qlread(*(_QWORD *)(a1 + 8), v34, 24) == 24 && v35 )
        {
          v51 = v35;
          v14 = v36;
          v52.m128i_i64[0] = 0x3FF8000000000000LL;
          v52.m128i_i64[1] = v38;
          v15 = v48;
          if ( (unsigned __int64)v48 < v36 )
          {
            if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)v36 )
            {
              v47 = qvector_reserve(&v47, v47, v36, 2);
              v15 = v48;
            }
            memset((void *)(v47 + 2 * v15), 0, 2 * (v14 - v15));
            *(_QWORD *)&v48 = v14;
          }
          else if ( v36 != (_QWORD)v48 )
          {
            *(_QWORD *)&v48 = v36;
          }
          sub_32180(*(_QWORD *)(a1 + 8), v36, 2, "Slide info page starts count", -1, -1);
          v13 = (const char *)v47;
          v16 = qlread(*(_QWORD *)(a1 + 8), v47, 2LL * v36);
          if ( v16 == 2LL * v36 )
            goto LABEL_14;
        }
        break;
      default:
LABEL_14:
        v13 = (const char *)v40;
        sub_32240(a1 + 648, v40);
        v6 = 1;
        break;
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49, v13);
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47, v13);
    }
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45, v13);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42, v13);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
