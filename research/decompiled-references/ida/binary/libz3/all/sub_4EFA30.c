__int64 __fastcall sub_4EFA30(unsigned int *a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  char **exception; // r14
  char **v6; // r14
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  bool v16; // zf
  int v17; // edx
  _DWORD *v18; // rax
  __int64 v19; // r13
  unsigned int v20; // r14d
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ebx
  __m128i v26; // xmm1
  __m128i si128; // xmm0
  unsigned int v28; // edx
  unsigned int v29; // ebx
  int v30; // eax
  _DWORD *v31; // rax
  unsigned int *v32; // rsi
  _QWORD *v33; // r12
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __m128i **v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int v43; // r12d
  unsigned int *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r14
  unsigned int v51; // r8d
  size_t v52; // rsi
  _DWORD *v53; // rax
  __int64 v54; // rcx
  int v55; // r8d
  unsigned int v56; // r12d
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  void *v59; // [rsp+0h] [rbp-1A0h]
  int v60; // [rsp+Ch] [rbp-194h]
  int v61; // [rsp+10h] [rbp-190h]
  int v62; // [rsp+14h] [rbp-18Ch]
  __int64 v63; // [rsp+18h] [rbp-188h]
  unsigned int v64; // [rsp+20h] [rbp-180h]
  unsigned int v65; // [rsp+24h] [rbp-17Ch]
  int v66[4]; // [rsp+30h] [rbp-170h] BYREF
  __m128i v67; // [rsp+40h] [rbp-160h] BYREF
  __int64 v68; // [rsp+50h] [rbp-150h]
  __int64 v69; // [rsp+58h] [rbp-148h]
  __int64 v70; // [rsp+60h] [rbp-140h]
  unsigned int *v71; // [rsp+68h] [rbp-138h]
  int *v72; // [rsp+70h] [rbp-130h]
  unsigned int *v73; // [rsp+78h] [rbp-128h]
  int v74; // [rsp+88h] [rbp-118h] BYREF
  int v75; // [rsp+8Ch] [rbp-114h] BYREF
  int v76; // [rsp+90h] [rbp-110h] BYREF
  int v77; // [rsp+94h] [rbp-10Ch] BYREF
  int v78; // [rsp+98h] [rbp-108h] BYREF
  int v79; // [rsp+9Ch] [rbp-104h] BYREF
  unsigned int v80; // [rsp+A0h] [rbp-100h] BYREF
  unsigned int v81; // [rsp+A4h] [rbp-FCh] BYREF
  unsigned int v82; // [rsp+A8h] [rbp-F8h] BYREF
  int v83; // [rsp+ACh] [rbp-F4h] BYREF
  int v84[4]; // [rsp+B0h] [rbp-F0h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-E0h] BYREF
  __int64 v86; // [rsp+C8h] [rbp-D8h]
  __int64 v87[4]; // [rsp+D0h] [rbp-D0h] BYREF
  __int128 v88; // [rsp+F0h] [rbp-B0h] BYREF
  char v89[48]; // [rsp+100h] [rbp-A0h] BYREF
  int v90[4]; // [rsp+130h] [rbp-70h] BYREF
  __int128 v91; // [rsp+140h] [rbp-60h] BYREF
  __int64 v92; // [rsp+150h] [rbp-50h] BYREF
  __m128i v93; // [rsp+158h] [rbp-48h] BYREF

  v8 = a2;
  v9 = *((_QWORD *)a1 + 1);
  v73 = a1;
  v71 = a4;
  v10 = *(_QWORD *)(v9 + 24);
  v69 = a5;
  v11 = sub_4D6490(v10);
  *(_QWORD *)v90 = 0;
  v12 = v11;
  v72 = v84;
  sub_14B7810((int)v84, v11, (int)v90, v13, v14, v15, v59);
  sub_18572D0(v90);
  v16 = *(_WORD *)(a3 + 4) == 0;
  v17 = *(_DWORD *)(v9 + 48);
  v70 = *((_QWORD *)v73 + 4);
  if ( v16 && (v18 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) != nullptr && v17 == *v18 && v18[1] == 37 )
  {
    v8 = a3;
    a3 = a2;
  }
  else
  {
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v18 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v18 || v17 != *v18 )
    {
LABEL_17:
      if ( (*(_BYTE *)(v8 + 30) & 1) != 0 )
      {
        v22 = v8;
        v8 = a3;
        a3 = v22;
      }
LABEL_5:
      if ( (unsigned __int8)sub_4ED250((__int64)v73, v8, &v74, &v75, &v80) )
      {
        v19 = 0;
        if ( !*(_WORD *)(a3 + 4) && (*(_BYTE *)(a3 + 30) & 1) != 0 )
        {
          v86 = 0;
          v85 = v70;
          v20 = sub_4ED810(v73, &v85, v80, v74, v75, a3);
          v19 = v86;
          v70 = v85;
          if ( (_BYTE)v20 )
          {
            sub_4F5940(v69, *((_QWORD *)v73 + 4), v86);
LABEL_9:
            if ( v19 )
              sub_553300(v70, v19);
            goto LABEL_11;
          }
        }
      }
      else
      {
        v19 = 0;
      }
      if ( (unsigned __int8)sub_4ED250((__int64)v73, v8, &v78, &v76, &v81)
        && (v20 = sub_4ED250((__int64)v73, a3, &v79, &v77, &v82), (_BYTE)v20) )
      {
        v23 = *((_QWORD *)v73 + 15);
        *(__m128i *)v66 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_1C4F498, (__m128i)(unsigned __int64)v90);
        v24 = *(_DWORD *)(v23 + 4LL * v82) + v77;
        v67 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v88, (__m128i)(unsigned __int64)&v88);
        v25 = *(_DWORD *)(v23 + 4LL * v81);
        v62 = v24;
        v88 = 0;
        v61 = v25;
        v65 = v76 + v25;
        v60 = v78 + 1;
        v64 = v78 + 1 - v76;
        v63 = *((_QWORD *)v73 + 4);
        sub_180C0A0(v89);
        v26 = _mm_load_si128(&v67);
        v92 = 0;
        si128 = _mm_load_si128((const __m128i *)v66);
        v28 = *v71;
        *(__m128i *)v90 = v26;
        v91 = 0;
        v93 = si128;
        if ( v28 )
        {
          v29 = 0;
          v30 = 0;
          v67.m128i_i64[0] = (__int64)&v91;
          v73 = (unsigned int *)&v83;
          *(_QWORD *)v66 = &v92;
          while ( 1 )
          {
            v83 = v30;
            sub_4EE3A0(v67.m128i_i64[0], v73);
            v39 = *((_QWORD **)&v91 + 1);
            if ( *((_QWORD *)&v91 + 1) )
            {
              v40 = *(unsigned int *)(*((_QWORD *)&v91 + 1) - 4LL);
              if ( (_DWORD)v40 == *(_DWORD *)(*((_QWORD *)&v91 + 1) - 8LL) )
              {
                v41 = (unsigned int)(3 * v40 + 1) >> 1;
                v42 = 4 * v41 + 8;
                v43 = v41;
                if ( 4 * (int)v40 + 8 >= (unsigned int)v42 || (unsigned int)v40 >= v41 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v87, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v87);
                  sub_233E40((__int64)v87);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v44 = (unsigned int *)sub_186B300((void *)(*((_QWORD *)&v91 + 1) - 8LL), v42);
                v39 = v44 + 2;
                *v44 = v43;
                v45 = v44[1];
                *((_QWORD *)&v91 + 1) = v39;
                v31 = (_DWORD *)v39 + v45;
              }
              else
              {
                v31 = (_DWORD *)(*((_QWORD *)&v91 + 1) + 4 * v40);
              }
            }
            else
            {
              v58 = (_QWORD *)sub_186B270(0x10u);
              v39 = v58 + 1;
              *v58 = 2;
              *((_QWORD *)&v91 + 1) = v58 + 1;
              v31 = v58 + 1;
            }
            *v31 = 1;
            v32 = v73;
            ++*((_DWORD *)v39 - 1);
            sub_4EE3A0(*(_QWORD **)v66, v32);
            v33 = *(_QWORD **)&v90[2];
            v34 = **(_QWORD ***)&v90[2];
            if ( **(_QWORD **)&v90[2] )
            {
              v35 = *((_DWORD *)v34 - 1);
              if ( v35 == *((_DWORD *)v34 - 2) )
              {
                v51 = (3 * v35 + 1) >> 1;
                v52 = 8 * v51 + 8;
                if ( 8 * v35 + 8 >= (unsigned int)v52 || v35 >= v51 )
                {
                  v6 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v87, "Overflow encountered when expanding vector");
                  *v6 = (char *)off_1C63128;
                  sub_2333C0(v6 + 1, v87);
                  sub_233E40((__int64)v87);
                  __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                LODWORD(v68) = (3 * v35 + 1) >> 1;
                v53 = (_DWORD *)sub_186B300(v34 - 1, v52);
                v54 = (unsigned int)v53[1];
                v55 = v68;
                v34 = v53 + 2;
                *v33 = v53 + 2;
                *v53 = v55;
                LODWORD(v53) = v54;
                v38 = (__m128i **)&v34[v54];
                v37 = (_DWORD)v53 + 1;
              }
              else
              {
                v36 = v35;
                v37 = v35 + 1;
                v38 = (__m128i **)&v34[v36];
              }
            }
            else
            {
              v57 = (_QWORD *)sub_186B270(0x18u);
              v34 = v57 + 1;
              *v57 = 2;
              v37 = 1;
              *v33 = v34;
              v38 = (__m128i **)v34;
            }
            ++v29;
            *v38 = &v93;
            *((_DWORD *)v34 - 1) = v37;
            if ( v29 >= *v71 )
              break;
            if ( (_QWORD)v91 )
              v30 = *(_DWORD *)(v91 - 4);
            else
              v30 = 0;
          }
        }
        v56 = v65;
        LODWORD(v73) = v62 - v65;
        if ( v64 )
        {
          do
          {
            sub_4F9300(v90, v56, (unsigned int)v73 + v56);
            ++v56;
          }
          while ( v60 + v61 != v56 );
        }
        sub_4F5740(v69, v63, v65, v64, v90, v71);
        sub_4F50D0(v90);
        sub_4F5000(&v88);
      }
      else
      {
        v20 = 0;
      }
      goto LABEL_9;
    }
  }
  if ( v18[1] != 37 )
    goto LABEL_17;
  *((_QWORD *)&v88 + 1) = v12;
  *(_QWORD *)&v88 = 0;
  v46 = sub_15D1F10(v8);
  v74 = sub_4ED1A0(v9, v46) - 1;
  v47 = *(unsigned int *)(v8 + 24);
  if ( (_DWORD)v47 )
  {
    v68 = v8 + 8 * v47;
    *(_QWORD *)v66 = v87;
    while ( 1 )
    {
      v70 = *(_QWORD *)(v8 + 32);
      v48 = sub_15D1F10(v70);
      v67.m128i_i32[0] = sub_4ED1A0(v9, v48);
      LOBYTE(v90[2]) = 0;
      BYTE8(v91) = 0;
      v90[0] = v74;
      v49 = *(_QWORD *)(v9 + 56);
      v87[0] = a3;
      LODWORD(v91) = v74 + 1 - v67.m128i_i32[0];
      v50 = sub_15DCAD0(v49, v66[0], 0);
      sub_15D0DF0(&v91);
      sub_15D0DF0(v90);
      if ( v50 )
        ++*(_DWORD *)(v50 + 8);
      sub_4EBFD0(v88, *((__int64 *)&v88 + 1));
      *(_QWORD *)&v88 = v50;
      sub_14B9B80(v72, &v88);
      v20 = sub_4EFA30(v73, v70, v88, v71, v69);
      if ( !(_BYTE)v20 )
        break;
      v8 += 8;
      v74 -= v67.m128i_i32[0];
      if ( v68 == v8 )
        goto LABEL_44;
    }
  }
  else
  {
LABEL_44:
    v20 = 1;
  }
  sub_4EBFD0(v88, *((__int64 *)&v88 + 1));
LABEL_11:
  sub_14B63F0(v72);
  return v20;
}

