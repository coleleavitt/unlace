void __fastcall sub_6BDD20(__int64 a1, unsigned __int8 (__fastcall ***a2)(_QWORD), __int64 *a3, __int64 *a4)
{
  __int64 v6; // r14
  _DWORD *v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // r12
  int v13; // eax
  char *v14; // rcx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  char *v18; // rcx
  __int64 v19; // r13
  int *v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // r11
  __int64 v23; // r13
  char *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r11
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // r12
  unsigned int v32; // eax
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  bool v41; // zf
  __int64 v42; // rsi
  __int64 v43; // r11
  unsigned __int64 v44; // rsi
  __int64 v45; // r11
  __int64 v46; // rax
  __int64 v47; // r12
  int v48; // r8d
  int v49; // r9d
  unsigned int v50; // edx
  int v51; // ecx
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rbp
  int v55[2]; // [rsp+0h] [rbp-198h]
  int v56; // [rsp+0h] [rbp-198h]
  int v57; // [rsp+0h] [rbp-198h]
  int v59[2]; // [rsp+8h] [rbp-190h]
  int v60[2]; // [rsp+8h] [rbp-190h]
  __int64 v61; // [rsp+10h] [rbp-188h]
  int v62; // [rsp+10h] [rbp-188h]
  int v63; // [rsp+10h] [rbp-188h]
  int *v64; // [rsp+18h] [rbp-180h]
  int v65; // [rsp+18h] [rbp-180h]
  int v66; // [rsp+18h] [rbp-180h]
  _BYTE *v67; // [rsp+20h] [rbp-178h]
  int v68; // [rsp+20h] [rbp-178h]
  int v69; // [rsp+20h] [rbp-178h]
  __int64 v70; // [rsp+28h] [rbp-170h]
  char v71; // [rsp+28h] [rbp-170h]
  char v72; // [rsp+28h] [rbp-170h]
  __int64 v73[2]; // [rsp+30h] [rbp-168h] BYREF
  void *ptr; // [rsp+40h] [rbp-158h]
  void *v75; // [rsp+48h] [rbp-150h]
  int v76[30]; // [rsp+50h] [rbp-148h] BYREF
  void *v77; // [rsp+C8h] [rbp-D0h]
  void *v78; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-C0h]
  _BYTE v80[184]; // [rsp+E0h] [rbp-B8h] BYREF

  v6 = *a3;
  if ( !*(_WORD *)(*a3 + 4) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( v7 )
    {
      if ( !*v7 )
      {
        v9 = v7[1];
        if ( v9 == 5 || v9 == 6 )
        {
          v11 = *(unsigned int *)(v6 + 24);
          v64 = v76;
          ptr = v76;
          v67 = v80;
          v75 = (void *)0x1000000000LL;
          v78 = v80;
          v79 = 0x1000000000LL;
          if ( (_DWORD)v11 )
          {
            v12 = v6;
            v61 = v6 + 8 * v11;
            do
            {
              *(_QWORD *)v55 = *(_QWORD *)(v12 + 32);
              if ( (**a2)(a2) )
              {
                v13 = (int)v75;
                if ( (unsigned int)v75 >= HIDWORD(v75) )
                {
                  v19 = (unsigned int)(2 * HIDWORD(v75));
                  v14 = (char *)sub_186B270(8 * v19);
                  v13 = (int)v75;
                  v20 = (int *)ptr;
                  if ( (_DWORD)v75 )
                  {
                    if ( (unsigned int)((_DWORD)v75 - 1) <= 2 || v14 == (char *)ptr + 8 )
                    {
                      v44 = 0;
                      v45 = 8LL * (unsigned int)v75;
                      do
                      {
                        *(_QWORD *)&v14[v44] = *(_QWORD *)&v20[v44 / 4];
                        v44 += 8LL;
                      }
                      while ( v44 != v45 );
                    }
                    else
                    {
                      v21 = 0;
                      v22 = 16LL * ((unsigned int)v75 >> 1);
                      do
                      {
                        *(__m128i *)&v14[v21] = _mm_loadu_si128((const __m128i *)&v20[v21 / 4]);
                        v21 += 16LL;
                      }
                      while ( v22 != v21 );
                      if ( (v13 & 1) != 0 )
                        *(_QWORD *)&v14[8 * (v13 & 0xFFFFFFFE)] = *(_QWORD *)&v20[2 * (v13 & 0xFFFFFFFE)];
                    }
                  }
                  if ( v20 && v20 != v76 )
                  {
                    v70 = (__int64)v14;
                    sub_186B220(v20);
                    v13 = (int)v75;
                    v14 = (char *)v70;
                  }
                  ptr = v14;
                  HIDWORD(v75) = v19;
                }
                else
                {
                  v14 = (char *)ptr;
                }
                *(_QWORD *)&v14[8 * v13] = *(_QWORD *)v55;
                LODWORD(v75) = v13 + 1;
              }
              else
              {
                v17 = v79;
                if ( (unsigned int)v79 >= HIDWORD(v79) )
                {
                  v23 = (unsigned int)(2 * HIDWORD(v79));
                  v18 = (char *)sub_186B270(8 * v23);
                  v17 = v79;
                  v24 = (char *)v78;
                  if ( (_DWORD)v79 )
                  {
                    if ( (unsigned int)(v79 - 1) <= 2 || v18 == (char *)v78 + 8 )
                    {
                      v42 = 0;
                      v43 = 8LL * (unsigned int)v79;
                      do
                      {
                        *(_QWORD *)&v18[v42] = *(_QWORD *)&v24[v42];
                        v42 += 8;
                      }
                      while ( v43 != v42 );
                    }
                    else
                    {
                      v25 = 0;
                      v26 = 16LL * ((unsigned int)v79 >> 1);
                      do
                      {
                        *(__m128i *)&v18[v25] = _mm_loadu_si128((const __m128i *)&v24[v25]);
                        v25 += 16;
                      }
                      while ( v26 != v25 );
                      if ( (v17 & 1) != 0 )
                        *(_QWORD *)&v18[8 * (v17 & 0xFFFFFFFE)] = *(_QWORD *)&v24[8 * (v17 & 0xFFFFFFFE)];
                    }
                  }
                  if ( v24 && v24 != v80 )
                  {
                    v70 = (__int64)v18;
                    sub_186B220(v24);
                    v17 = v79;
                    v18 = (char *)v70;
                  }
                  v78 = v18;
                  HIDWORD(v79) = v23;
                }
                else
                {
                  v18 = (char *)v78;
                }
                *(_QWORD *)&v18[8 * v17] = *(_QWORD *)v55;
                LODWORD(v79) = v17 + 1;
              }
              v12 += 8;
            }
            while ( v61 != v12 );
            if ( (_DWORD)v75 && (_DWORD)v79 )
            {
              v27 = *(_QWORD *)(a1 + 48);
              if ( (_DWORD)v75 == 1 )
              {
                v28 = *(_QWORD *)ptr;
                *(__m128i *)v73 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)ptr, (__m128i)v27);
                if ( v28 )
                  ++*(_DWORD *)(v28 + 8);
                sub_6BDD20(
                  a1,
                  (int)a2,
                  (int)v73,
                  (int)a4,
                  v15,
                  v16,
                  v55[0],
                  a1,
                  v61,
                  (__int64)v76,
                  (int)v80,
                  v70,
                  v73[0],
                  (void *)v73[1],
                  (int)ptr,
                  (int)v75,
                  v76[0],
                  v76[2],
                  v76[4],
                  v76[6],
                  v76[8],
                  v76[10],
                  v76[12],
                  v76[14],
                  v76[16],
                  v76[18],
                  v76[20],
                  v76[22],
                  v76[24],
                  v76[26],
                  v76[28],
                  v77);
                v31 = v73[0];
                v32 = v79;
                if ( (unsigned int)v79 >= HIDWORD(v79) )
                {
                  sub_6BDC40((__int64)&v78);
                  v32 = v79;
                }
                v33 = (int)v78;
                v34 = *(_QWORD *)(v6 + 16);
                *((_QWORD *)v78 + v32) = v31;
                LODWORD(v79) = v32 + 1;
                v35 = sub_15DC610(
                        *(_QWORD *)(*(_QWORD *)v59 + 48LL),
                        v34,
                        v32 + 1,
                        v33,
                        v29,
                        v30,
                        v56,
                        v59[0],
                        v62,
                        v65,
                        v68,
                        v71,
                        v73[0],
                        v73[1],
                        (int)ptr,
                        v75);
                v36 = v35;
                if ( v35 )
                  ++*(_DWORD *)(v35 + 8);
                sub_6A99C0(*a3, a3[1]);
                v37 = v73[1];
                v38 = v73[0];
                *a3 = v36;
                sub_6A99C0(v38, v37);
              }
              else
              {
                v46 = sub_15DC610(
                        v27,
                        *(_QWORD *)(v6 + 16),
                        (int)v75,
                        (int)ptr,
                        v15,
                        v16,
                        v55[0],
                        a1,
                        v61,
                        (int)v76,
                        (int)v80,
                        v70,
                        v73[0],
                        v73[1],
                        (int)ptr,
                        v75);
                v47 = v46;
                if ( v46 )
                  ++*(_DWORD *)(v46 + 8);
                sub_6A99C0(*a4, a4[1]);
                *a4 = v47;
                v50 = v79;
                if ( (unsigned int)v79 >= HIDWORD(v79) )
                {
                  sub_6BDC40((__int64)&v78);
                  v50 = v79;
                }
                v51 = (int)v78;
                v52 = *(_QWORD *)(v6 + 16);
                *((_QWORD *)v78 + v50) = v47;
                LODWORD(v79) = v50 + 1;
                v53 = sub_15DC610(
                        *(_QWORD *)(*(_QWORD *)v60 + 48LL),
                        v52,
                        v50 + 1,
                        v51,
                        v48,
                        v49,
                        v57,
                        v60[0],
                        v63,
                        v66,
                        v69,
                        v72,
                        v73[0],
                        v73[1],
                        (int)ptr,
                        v75);
                v54 = v53;
                if ( v53 )
                  ++*(_DWORD *)(v53 + 8);
                sub_6A99C0(*a3, a3[1]);
                *a3 = v54;
              }
              goto LABEL_52;
            }
            v6 = *a3;
            v39 = *a4;
            if ( *a4 == *a3 )
              goto LABEL_52;
            if ( !v39 || (v40 = a4[1], v41 = *(_DWORD *)(v39 + 8) == 1, --*(_DWORD *)(v39 + 8), !v41) )
            {
LABEL_61:
              *a4 = v6;
              if ( v6 )
LABEL_62:
                ++*(_DWORD *)(v6 + 8);
LABEL_52:
              if ( v78 != v67 && v78 )
                sub_186B220(v78);
              goto LABEL_55;
            }
          }
          else
          {
            v39 = *a4;
            if ( v6 == *a4 )
            {
LABEL_55:
              if ( ptr != v64 && ptr )
                sub_186B220(ptr);
              return;
            }
            if ( !v39 || (v40 = a4[1], v41 = *(_DWORD *)(v39 + 8) == 1, --*(_DWORD *)(v39 + 8), !v41) )
            {
              *a4 = v6;
              goto LABEL_62;
            }
          }
          sub_15D7BC0(v40, v39);
          v6 = *a3;
          goto LABEL_61;
        }
      }
    }
  }
  if ( v6 != *a4 )
  {
    sub_6A99C0(*a4, a4[1]);
    v8 = *a3;
    *a4 = *a3;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
  }
}

