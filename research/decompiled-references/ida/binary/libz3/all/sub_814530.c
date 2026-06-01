__int64 __fastcall sub_814530(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // r10d
  unsigned int v9; // r14d
  __int64 *v10; // rbp
  __int64 v11; // r13
  unsigned int v12; // edx
  __int64 *v13; // r12
  __int64 *v14; // r15
  __int64 *v15; // r12
  __int64 v16; // rdx
  __int64 **v17; // rbp
  __int64 **v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // r9
  int v24; // ecx
  char *v25; // rax
  int v26; // ebp
  char *v27; // rax
  int v28; // r10d
  __int64 v29; // rax
  __m128 v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rdx
  int v34; // r10d
  __m128i v35; // xmm0
  __int64 v36; // rsi
  int v37; // edi
  __int64 v38; // r8
  int v39; // r9d
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // r13
  unsigned int v43; // r12d
  __int64 v44; // rsi
  unsigned int v45; // edx
  __int64 v46; // rdi
  unsigned int v47; // r9d
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // r14
  __int64 v52; // rcx
  _DWORD *v53; // rax
  _DWORD *v54; // rdx
  __int64 v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // rbx
  unsigned int v58; // eax
  __int64 v59; // rcx
  __int64 *v60; // rcx
  __int64 **v61; // rdx
  __int64 **v62; // rcx
  __int64 v63; // r15
  __int64 *v64; // r14
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdi
  int v68; // ecx
  char *v69; // rax
  int v70; // r9d
  char *v71; // rax
  int v72; // edx
  __int64 v73; // rax
  __m128 v74; // xmm0
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // edx
  int v78; // r9d
  __m128i v79; // xmm0
  int v80; // edi
  __int64 v81; // r8
  unsigned int v82; // r12d
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rdx
  __m128i v87; // [rsp+0h] [rbp-98h] BYREF
  __int64 v88; // [rsp+10h] [rbp-88h]
  __int64 v89; // [rsp+18h] [rbp-80h]
  __int64 *v90; // [rsp+20h] [rbp-78h]
  int v91; // [rsp+2Ch] [rbp-6Ch]
  __int64 v92[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  v6 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a2 + 4)));
  result = sub_1673B10(a1 + 128, v6);
  v8 = *(_DWORD *)(a2 + 4);
  v9 = v8;
  if ( (_BYTE)result )
  {
    v40 = *(_DWORD *)(a2 + 8);
    v41 = *(_QWORD *)(a1 + 560);
    v42 = a1 + 544;
    v43 = v40;
    do
    {
      v44 = v9;
      v45 = v9;
      v9 = *(_DWORD *)(v41 + 4LL * v9);
    }
    while ( v45 != v9 );
    do
    {
      v46 = v43;
      v47 = v43;
      v43 = *(_DWORD *)(v41 + 4LL * v43);
    }
    while ( v47 != v43 );
    if ( v45 != v43 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 568) + 4 * v46) >= *(_DWORD *)(*(_QWORD *)(a1 + 568) + 4 * v44) )
      {
        v48 = v40;
        v43 = v9;
        v40 = v8;
        v9 = v47;
        v8 = v48;
      }
      sub_814360(*(_QWORD **)(a1 + 544), v9, v43, v8, v40);
      v49 = *(_QWORD *)(a1 + 568);
      *(_DWORD *)(*(_QWORD *)(a1 + 560) + 4LL * v43) = v9;
      v50 = 4LL * v9;
      v51 = *(_QWORD **)(a1 + 552);
      *(_DWORD *)(v49 + v50) += *(_DWORD *)(v49 + 4LL * v43);
      v52 = *(_QWORD *)(a1 + 576);
      v53 = (_DWORD *)(v52 + v50);
      v54 = (_DWORD *)(v52 + 4LL * v43);
      LODWORD(v52) = *v54;
      *v54 = *v53;
      *v53 = v52;
      v55 = sub_180C100(v51 + 2, 24);
      v56 = (_QWORD *)*v51;
      v57 = v55;
      *(_QWORD *)v55 = off_1C54E70;
      *(_QWORD *)(v55 + 8) = v42;
      *(_DWORD *)(v55 + 16) = v43;
      if ( v56 )
      {
        v58 = *((_DWORD *)v56 - 1);
        if ( v58 == *((_DWORD *)v56 - 2) )
        {
          v82 = (3 * v58 + 1) >> 1;
          v83 = 8 * v82 + 8;
          if ( 8 * v58 + 8 >= v83 || v58 >= v82 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v92, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v92);
            sub_233E40((__int64)v92);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v84 = (unsigned int *)sub_186B300(v56 - 1, v83);
          v85 = v84[1];
          v56 = v84 + 2;
          *v51 = v84 + 2;
          *v84 = v82;
          LODWORD(v84) = v85;
          v60 = &v56[v85];
          result = (unsigned int)((_DWORD)v84 + 1);
        }
        else
        {
          v59 = v58;
          result = v58 + 1;
          v60 = &v56[v59];
        }
      }
      else
      {
        v86 = (_QWORD *)sub_186B270(0x18u);
        *v86 = 2;
        result = 1;
        v56 = v86 + 1;
        *v51 = v56;
        v60 = v56;
      }
      *v60 = v57;
      *((_DWORD *)v56 - 1) = result;
    }
    if ( !*(_QWORD *)(a2 + 24) )
    {
      sub_1872CE0("");
      sub_1873130(114, 207);
    }
    return result;
  }
  result = *(_QWORD *)(a1 + 88);
  v10 = *(__int64 **)(a1 + 704);
  v11 = *(_QWORD *)(result + 8LL * *(unsigned int *)(a2 + 4));
  v12 = *(_DWORD *)(v11 + 32);
  if ( !v10 )
  {
    v13 = *(__int64 **)(result + 8LL * *(unsigned int *)(a2 + 4));
    if ( v12 )
      return result;
LABEL_13:
    while ( v10 == (__int64 *)v11 )
    {
      if ( v10 == v13 )
        return result;
      result = *v13;
      if ( !*(_WORD *)(*v13 + 4) )
        goto LABEL_8;
LABEL_12:
      v13 = (__int64 *)v13[7];
    }
    result = *v13;
    if ( !*(_WORD *)(*v13 + 4) )
    {
LABEL_8:
      result = *(_QWORD *)(*(_QWORD *)(result + 16) + 24LL);
      if ( result )
      {
        if ( *(_DWORD *)result == *(_DWORD *)(a1 + 128) && *(_DWORD *)(result + 4) == 66 )
        {
          result = *(_QWORD *)(v11 + 64);
          v61 = *(__int64 ***)(result + 48);
          if ( v61 )
          {
            result = *((unsigned int *)v61 - 1);
            v62 = &v61[result];
            if ( v61 != v62 )
            {
              v63 = v13[22];
              while ( 1 )
              {
                v64 = *v61;
                v65 = **v61;
                if ( !*(_WORD *)(v65 + 4) )
                {
                  result = *(_QWORD *)(*(_QWORD *)(v65 + 16) + 24LL);
                  if ( result )
                  {
                    if ( *(_DWORD *)(a1 + 128) == *(_DWORD *)result && *(_DWORD *)(result + 4) == 65 )
                    {
                      v89 = (__int64)v62;
                      v87.m128i_i64[0] = (__int64)v61;
                      v66 = sub_15D1F10(v65);
                      v67 = *(_QWORD *)v63;
                      v88 = v66;
                      result = sub_15D1F10(v67);
                      v61 = (__int64 **)v87.m128i_i64[0];
                      v62 = (__int64 **)v89;
                      if ( v88 == result )
                      {
                        result = *(_QWORD *)(v63 + 64);
                        if ( v64[8] != result )
                          break;
                      }
                    }
                  }
                }
                if ( v62 == ++v61 )
                  goto LABEL_10;
              }
              v68 = *(_DWORD *)(a1 + 12);
              v69 = (char *)(v64 + 11);
              if ( *((int *)v64 + 22) >> 8 == -1 )
              {
LABEL_86:
                v70 = -1;
              }
              else
              {
                while ( v68 != *v69 )
                {
                  v69 = *((char **)v69 + 1);
                  if ( !v69 )
                    goto LABEL_86;
                }
                v70 = *(int *)v69 >> 8;
              }
              v71 = (char *)(v63 + 88);
              if ( *(int *)(v63 + 88) >> 8 == -1 )
              {
LABEL_85:
                v72 = -1;
              }
              else
              {
                while ( v68 != *v71 )
                {
                  v71 = *((char **)v71 + 1);
                  if ( !v71 )
                    goto LABEL_85;
                }
                v72 = *(int *)v71 >> 8;
              }
              v73 = *(_QWORD *)(a1 + 80);
              LODWORD(v90) = v72;
              v74 = _mm_loadh_ps((const double *)v64 + 22);
              LODWORD(v89) = v70;
              v87 = (__m128i)v74;
              v88 = v73;
              v75 = sub_7E4EC0(a1);
              v76 = sub_180C100(v75, 56);
              v77 = (int)v90;
              v78 = v89;
              v79 = _mm_load_si128(&v87);
              v80 = v88;
              *(_QWORD *)v76 = a1;
              *(_DWORD *)(v76 + 20) = v77;
              *(_DWORD *)(v76 + 16) = v78;
              *(_QWORD *)(v76 + 8) = 0xFFFFFFFF00000004LL;
              *(_QWORD *)(v76 + 48) = v13;
              *(_QWORD *)(v76 + 24) = 0xFFFFFFFEFFFFFFFELL;
              *(__m128i *)(v76 + 32) = v79;
              result = sub_7CA650(v80, (__int64)v64, v63, v76, v81, v78);
            }
          }
        }
      }
    }
LABEL_10:
    if ( !v10 )
      v10 = v13;
    goto LABEL_12;
  }
  result = *((unsigned int *)v10 - 1);
  if ( (unsigned int)result >= v12 )
  {
    v13 = (__int64 *)v11;
    v10 = nullptr;
    goto LABEL_13;
  }
  v14 = &v10[result];
  if ( v10 != v14 )
  {
    v15 = *(__int64 **)(a1 + 704);
    do
    {
      v16 = *v15;
      result = *(_QWORD *)(v11 + 64);
      if ( result == *(_QWORD *)(*v15 + 64) )
      {
        v17 = *(__int64 ***)(result + 48);
        if ( v17 )
        {
          result = *((unsigned int *)v17 - 1);
          v18 = &v17[result];
          if ( v17 != v18 )
          {
            v19 = *(_QWORD *)(v16 + 176);
            while ( 1 )
            {
              v20 = **v17;
              if ( !*(_WORD *)(v20 + 4) )
              {
                result = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 24LL);
                if ( result )
                {
                  if ( *(_DWORD *)(a1 + 128) == *(_DWORD *)result && *(_DWORD *)(result + 4) == 65 )
                  {
                    v90 = *v17;
                    v89 = (__int64)v18;
                    v87.m128i_i64[0] = v16;
                    v21 = sub_15D1F10(v20);
                    v22 = *(_QWORD *)v19;
                    v88 = v21;
                    result = sub_15D1F10(v22);
                    v16 = v87.m128i_i64[0];
                    v18 = (__int64 **)v89;
                    v23 = v90;
                    if ( v88 == result )
                    {
                      result = *(_QWORD *)(v19 + 64);
                      if ( v90[8] != result )
                        break;
                    }
                  }
                }
              }
              if ( v18 == ++v17 )
                goto LABEL_19;
            }
            v24 = *(_DWORD *)(a1 + 12);
            v25 = (char *)(v90 + 11);
            if ( *((int *)v90 + 22) >> 8 == -1 )
            {
LABEL_84:
              v26 = -1;
            }
            else
            {
              while ( v24 != *v25 )
              {
                v25 = *((char **)v25 + 1);
                if ( !v25 )
                  goto LABEL_84;
              }
              v26 = *(int *)v25 >> 8;
            }
            v27 = (char *)(v19 + 88);
            if ( *(int *)(v19 + 88) >> 8 == -1 )
            {
LABEL_83:
              v28 = -1;
            }
            else
            {
              while ( v24 != *v27 )
              {
                v27 = *((char **)v27 + 1);
                if ( !v27 )
                  goto LABEL_83;
              }
              v28 = *(int *)v27 >> 8;
            }
            v29 = *(_QWORD *)(a1 + 80);
            v91 = v28;
            v30 = _mm_loadh_ps((const double *)v90 + 22);
            v90 = (__int64 *)v87.m128i_i64[0];
            v87 = (__m128i)v30;
            v89 = (__int64)v23;
            v88 = v29;
            v31 = sub_7E4EC0(a1);
            v32 = sub_180C100(v31, 56);
            v33 = v90;
            v34 = v91;
            v35 = _mm_load_si128(&v87);
            v36 = v89;
            *(_QWORD *)v32 = a1;
            v37 = v88;
            *(_QWORD *)(v32 + 48) = v33;
            *(_DWORD *)(v32 + 16) = v26;
            *(_QWORD *)(v32 + 8) = 0xFFFFFFFF00000004LL;
            *(_DWORD *)(v32 + 20) = v34;
            *(_QWORD *)(v32 + 24) = 0xFFFFFFFEFFFFFFFELL;
            *(__m128i *)(v32 + 32) = v35;
            result = sub_7CA650(v37, v36, v19, v32, v38, v39);
          }
        }
      }
LABEL_19:
      ++v15;
    }
    while ( v14 != v15 );
  }
  return result;
}

