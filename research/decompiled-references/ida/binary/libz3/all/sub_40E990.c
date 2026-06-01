__int64 __fastcall sub_40E990(_QWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char **exception; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // r14
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r12
  unsigned int v31; // r15d
  __int64 v32; // rdx
  int v33; // eax
  _QWORD *v34; // rdx
  bool v35; // zf
  __int64 v36; // rbx
  unsigned int v37; // eax
  unsigned int v38; // edx
  unsigned int v39; // ecx
  unsigned int *v40; // rax
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __m128 v45; // xmm5
  __m128 v46; // xmm1
  unsigned __int64 v47; // r12
  __int64 *v48; // rbx
  unsigned int v49; // eax
  _QWORD *v50; // r14
  _QWORD *v51; // rbx
  __int64 v52; // rdx
  unsigned int v53; // r12d
  __int64 v54; // r15
  __int64 v55; // r10
  __int64 v56; // rax
  int v57; // edi
  _QWORD *v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // edx
  _QWORD *v61; // rsi
  __int64 v62; // rdx
  _QWORD *v63; // r9
  _QWORD *j; // rdx
  _QWORD *v65; // rax
  __int64 v66; // r12
  _QWORD *v67; // rax
  __int64 v69; // r13
  unsigned int v70; // eax
  __int64 *v71; // r12
  __int64 *i; // r12
  unsigned int v73; // r12d
  __int64 *v74; // r13
  __int64 *v75; // r15
  __m128i v76; // xmm3
  _QWORD *v77; // rax
  __int64 v78; // [rsp+0h] [rbp-F8h]
  unsigned int v79; // [rsp+8h] [rbp-F0h]
  __int64 v80; // [rsp+8h] [rbp-F0h]
  __m128i v81; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v82; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+30h] [rbp-C8h]
  __int64 *v84; // [rsp+38h] [rbp-C0h]
  __int64 v85; // [rsp+40h] [rbp-B8h]
  __int64 v86; // [rsp+48h] [rbp-B0h]
  __int64 *v87; // [rsp+50h] [rbp-A8h]
  unsigned int v88; // [rsp+5Ch] [rbp-9Ch]
  __int64 v89; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v90[2]; // [rsp+70h] [rbp-88h] BYREF
  __m128i v91; // [rsp+80h] [rbp-78h] BYREF
  int v92[2]; // [rsp+90h] [rbp-68h] BYREF
  int v93[2]; // [rsp+98h] [rbp-60h]
  int v94[2]; // [rsp+A0h] [rbp-58h] BYREF
  int v95[2]; // [rsp+A8h] [rbp-50h]

  sub_428900(a2, a1[31], a3, a4, a5, a6, (_DWORD)a1);
  v8 = a1[33];
  sub_429BB0(a2, v8, 0);
  v13 = a1[35];
  v85 = a1[1];
  v83 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v14 = *(_QWORD *)(v78 + 216);
  if ( v14 )
  {
    v15 = v14 + 8LL * *(unsigned int *)(v14 - 4);
    for ( v81.m128i_i64[0] = v85; v15 != v14; v14 += 8 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)v14 + 64LL) )
      {
        v16 = sub_15E1BF0(v81.m128i_i32[0]);
        sub_428900(a2, v16, v17, v18, v19, v20, v78);
        v21 = sub_15E1A70(*(_QWORD *)(v78 + 8));
        v22 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        v8 = v85;
        sub_3FCDF0(v83, v85);
        v83 = v22;
        v81.m128i_i64[0] = *(_QWORD *)(v78 + 8);
      }
    }
  }
  else
  {
    v81.m128i_i64[0] = v85;
  }
  v90[1] = 0;
  v90[0] = v81.m128i_i64[0];
  v23 = *(_QWORD *)(v78 + 192);
  if ( v23 )
  {
    v86 = v23 + 8LL * *(unsigned int *)(v23 - 4);
    if ( v23 != v86 )
    {
      v81.m128i_i64[1] = v23;
      v23 = 0;
      v87 = v90;
      while ( 1 )
      {
        v24 = *(_QWORD *)v81.m128i_i64[1];
        sub_407990(*(_QWORD **)v81.m128i_i64[1], v8, v9, v10, v11, v12);
        v28 = *(_QWORD *)(v24 + 16);
        if ( *(_WORD *)(v28 + 4) == 2 )
        {
          v29 = *(_QWORD *)(v24 + 72);
          if ( v29 )
          {
            v79 = *(_DWORD *)(v29 - 4);
            if ( v79 )
            {
              v30 = *(_QWORD *)(v24 + 8);
              v31 = 0;
              v82.m128i_i32[0] = *(_DWORD *)(v28 + 20);
              v84 = (__int64 *)v92;
              while ( 1 )
              {
                *(_QWORD *)v93 = v30;
                *(_QWORD *)v92 = 0;
                sub_407EA0((_QWORD *)v24, v29 + 8LL * v31, v84, 0, v26, v27);
                v36 = *(_QWORD *)v92;
                v30 = *(_QWORD *)v93;
                if ( *(_QWORD *)v92 )
                  ++*(_DWORD *)(*(_QWORD *)v92 + 8LL);
                if ( v23 )
                {
                  v37 = *(_DWORD *)(v23 - 4);
                  if ( v37 == *(_DWORD *)(v23 - 8) )
                  {
                    v38 = (3 * v37 + 1) >> 1;
                    v39 = 8 * v38 + 8;
                    if ( 8 * v37 + 8 >= v39 || v37 >= v38 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_3FCFD0((__int64 *)v94, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v94);
                      sub_233E40((__int64)v94);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v88 = (3 * v37 + 1) >> 1;
                    v40 = (unsigned int *)sub_186B300((void *)(v23 - 8), v39);
                    v23 = (__int64)(v40 + 2);
                    *v40 = v88;
                    LODWORD(v40) = v40[1];
                    v34 = (_QWORD *)(v23 + 8LL * (unsigned int)v40);
                    v33 = (_DWORD)v40 + 1;
                  }
                  else
                  {
                    v32 = v37;
                    v33 = v37 + 1;
                    v34 = (_QWORD *)(v23 + 8 * v32);
                  }
                }
                else
                {
                  v77 = (_QWORD *)sub_186B270(0x18u);
                  v23 = (__int64)(v77 + 1);
                  v34 = v77 + 1;
                  *v77 = 2;
                  v33 = 1;
                }
                *v34 = v36;
                *(_DWORD *)(v23 - 4) = v33;
                if ( v36 )
                {
                  v35 = (*(_DWORD *)(v36 + 8))-- == 1;
                  if ( v35 )
                    sub_15D7BC0(v30, v36);
                }
                v31 += v82.m128i_i32[0];
                if ( v31 >= v79 )
                  break;
                v29 = *(_QWORD *)(v24 + 72);
              }
              v8 = v30;
              sub_3FCDF0(0, v30);
            }
          }
        }
        sub_407990((_QWORD *)v24, v8, v28, v25, v26, v27);
        if ( *(_WORD *)(*(_QWORD *)(v24 + 16) + 4LL) == 2 )
        {
          *(_QWORD *)v94 = 0;
          *(_QWORD *)v95 = *(_QWORD *)(v78 + 8);
          sub_407990((_QWORD *)v24, v8, v41, v42, v43, v44);
          sub_3D5800(*(std::ios_base **)(v24 + 16), v94, v87);
          v89 = *(_QWORD *)v94;
          if ( *(_QWORD *)v94 )
            ++*(_DWORD *)(*(_QWORD *)v94 + 8LL);
          v91.m128i_i64[1] = v23;
          v91.m128i_i64[0] = v81.m128i_i64[0];
          sub_407600((unsigned int **)&v91.m128i_i64[1], &v89);
          v8 = *(_QWORD *)v95;
          v76 = _mm_load_si128(&v91);
          v81.m128i_i64[0] = v91.m128i_i64[0];
          v82 = v76;
          sub_3FCDF0(*(__int64 *)v94, *(__int64 *)v95);
        }
        else
        {
          v82 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v81), (__m128i)(unsigned __int64)v23);
        }
        v46 = (__m128)_mm_load_si128(&v82);
        v80 = v46.m128_u64[0];
        v47 = _mm_movehl_ps(v45, v46).m128_u64[0];
        v48 = (__int64 *)v47;
        sub_407990((_QWORD *)v24, v8, v41, v42, v43, v44);
        if ( *(_WORD *)(*(_QWORD *)(v24 + 16) + 4LL) != 2 || *(_BYTE *)(*(_QWORD *)(v78 + 16) + 642LL) )
        {
          *(_BYTE *)(v78 + 448) = 1;
          sub_407990((_QWORD *)v24, v8, v9, v10, v11, v12);
          v69 = *(_QWORD *)(v24 + 16);
          if ( v69 )
            ++*(_DWORD *)(v69 + 8);
          if ( !v47 || (v70 = *(_DWORD *)(v47 - 4), v70 == *(_DWORD *)(v47 - 8)) )
          {
            v91 = _mm_load_si128(&v82);
            sub_23A6F0((unsigned int **)&v91.m128i_i64[1]);
            v48 = (__int64 *)v91.m128i_i64[1];
            v80 = v91.m128i_i64[0];
            v70 = *(_DWORD *)(v91.m128i_i64[1] - 4);
          }
          v9 = v70;
          v48[v70] = v69;
          *((_DWORD *)v48 - 1) = v70 + 1;
          v49 = *(_DWORD *)(v24 + 96);
          if ( v49 <= 0xFFFE )
          {
LABEL_87:
            v73 = 0;
            if ( v48 )
            {
              do
              {
                v9 = *((unsigned int *)v48 - 1);
                v74 = &v48[v9];
                while ( v74 == v48 )
                {
                  if ( v49 < ++v73 )
                    goto LABEL_80;
                }
                v75 = v48;
                do
                {
                  v8 = *v75;
                  sub_429BB0(a2, *v75++, v73);
                }
                while ( v74 != v75 );
                v49 = *(_DWORD *)(v24 + 96);
                ++v73;
              }
              while ( v49 >= v73 );
              goto LABEL_80;
            }
            do
              ++v73;
            while ( v49 >= v73 );
LABEL_37:
            v23 = 0;
            v81.m128i_i64[0] = v80;
            goto LABEL_38;
          }
        }
        else
        {
          v49 = *(_DWORD *)(v24 + 96);
          if ( v49 <= 0xFFFE )
            goto LABEL_87;
          if ( !v47 )
            goto LABEL_37;
        }
        v23 = (__int64)&v48[*((unsigned int *)v48 - 1)];
        if ( (__int64 *)v23 != v48 )
        {
          v71 = v48;
          do
          {
            v8 = *v71;
            sub_428900(a2, *v71++, v9, v10, v11, v12, v78);
          }
          while ( (__int64 *)v23 != v71 );
LABEL_80:
          v23 = (__int64)v48;
          v81.m128i_i64[0] = v80;
          for ( i = &v48[*((unsigned int *)v48 - 1)]; v48 < i; ++v48 )
          {
            while ( 1 )
            {
              v8 = *v48;
              if ( *v48 )
              {
                v35 = (*(_DWORD *)(v8 + 8))-- == 1;
                if ( v35 )
                  break;
              }
              if ( ++v48 >= i )
                goto LABEL_86;
            }
            sub_15D7BC0(v80, v8);
          }
LABEL_86:
          *(_DWORD *)(v23 - 4) = 0;
          goto LABEL_38;
        }
        *(_DWORD *)(v23 - 4) = 0;
        v81.m128i_i64[0] = v80;
LABEL_38:
        v81.m128i_i64[1] += 8;
        if ( v86 == v81.m128i_i64[1] )
          goto LABEL_39;
      }
    }
    v23 = 0;
  }
  v87 = v90;
LABEL_39:
  v50 = *(_QWORD **)(v78 + 64);
  v51 = &v50[2 * *(unsigned int *)(v78 + 72)];
  if ( v50 != v51 )
  {
    while ( *v50 <= 1u )
    {
      v50 += 2;
      if ( v51 == v50 )
        goto LABEL_71;
    }
    if ( v51 != v50 )
    {
      v82.m128i_i64[0] = v78 + 320;
      do
      {
        sub_403090(*(_QWORD *)v50[1], v82.m128i_i64[0]);
        v52 = *(_QWORD *)(v78 + 320);
        if ( v52 )
        {
          v53 = *(_DWORD *)(v52 - 4);
          if ( v53 )
          {
            v54 = 0;
            v81.m128i_i64[1] = v53;
            while ( 1 )
            {
              v55 = *(_QWORD *)(v52 + 8 * v54);
              v56 = *(_QWORD *)(v78 + 16);
              v57 = *(_DWORD *)(v55 + 12);
              v58 = *(_QWORD **)(v56 + 264);
              v59 = *(unsigned int *)(v56 + 272);
              v60 = v59 - 1;
              v59 *= 16;
              v61 = (_QWORD *)((char *)v58 + v59);
              v62 = 16LL * (v57 & v60);
              v63 = &v58[(unsigned __int64)v62 / 8];
              if ( v62 != v59 )
              {
                for ( j = &v58[(unsigned __int64)v62 / 8]; v61 != j; j += 2 )
                {
                  v65 = (_QWORD *)*j;
                  if ( *j > 1u )
                  {
                    if ( *((_DWORD *)v65 + 3) == v57 && (_QWORD *)v55 == v65 )
                    {
                      v65 = j;
                      goto LABEL_55;
                    }
                  }
                  else if ( !v65 )
                  {
                    goto LABEL_55;
                  }
                }
              }
              if ( v58 == v63 )
              {
LABEL_65:
                v65 = nullptr;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v65 = (_QWORD *)*v58;
                    if ( *v58 > 1u )
                      break;
                    if ( !v65 )
                      goto LABEL_55;
                    v58 += 2;
                    if ( v63 == v58 )
                      goto LABEL_65;
                  }
                  if ( *((_DWORD *)v65 + 3) == v57 && (_QWORD *)v55 == v65 )
                    break;
                  v58 += 2;
                  if ( v63 == v58 )
                    goto LABEL_65;
                }
                v65 = v58;
              }
LABEL_55:
              v66 = v65[1];
              sub_40E340((__int64 *)v78, a2, v66, *(_QWORD *)(v50[1] + 48LL), v54, (int)v63);
              sub_3FF360((_QWORD *)v78, a2, v66, *(_QWORD *)(v50[1] + 48LL), v54++);
              if ( v54 == v81.m128i_i64[1] )
                break;
              v52 = *(_QWORD *)(v78 + 320);
            }
          }
        }
        v67 = v50 + 2;
        if ( v51 == v50 + 2 )
          break;
        while ( 1 )
        {
          v50 = v67;
          if ( *v67 > 1u )
            break;
          v67 += 2;
          if ( v51 == v67 )
            goto LABEL_71;
        }
      }
      while ( v51 != v67 );
    }
  }
LABEL_71:
  v91.m128i_i64[1] = v23;
  v91.m128i_i64[0] = v81.m128i_i64[0];
  sub_2334C0(v91.m128i_i64);
  sub_2B4F40(v87);
  return sub_3FCDF0(v83, v85);
}

