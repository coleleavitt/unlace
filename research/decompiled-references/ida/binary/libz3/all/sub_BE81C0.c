__m128 *__fastcall sub_BE81C0(__m128 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  bool v16; // zf
  _DWORD *v18; // rax
  __int64 v19; // rdi
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  _DWORD *v23; // rdx
  __int64 v24; // rax
  int v25; // esi
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rsi
  double v29; // rdi
  __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // r8d
  int v34; // r9d
  _DWORD *v35; // rcx
  _QWORD *v36; // r10
  _QWORD *v37; // r10
  double v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  void *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 *v46; // r12
  unsigned __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rdi
  _DWORD *v50; // rdx
  __int64 v51; // rdx
  _DWORD *v52; // rdx
  __int64 v53; // rdx
  _DWORD *v54; // rdx
  __int64 v55; // r14
  __int64 v56; // rax
  _DWORD *v57; // rax
  int v58[2]; // [rsp+0h] [rbp-A8h] BYREF
  int v59[2]; // [rsp+8h] [rbp-A0h] BYREF
  int v60[2]; // [rsp+10h] [rbp-98h]
  void *v61; // [rsp+18h] [rbp-90h]
  _DWORD *v62; // [rsp+20h] [rbp-88h]
  _DWORD *v63; // [rsp+28h] [rbp-80h]
  _QWORD *v64; // [rsp+30h] [rbp-78h]
  _QWORD *v65; // [rsp+38h] [rbp-70h]
  __int64 v66; // [rsp+40h] [rbp-68h] BYREF
  int *v67; // [rsp+48h] [rbp-60h]
  int v68[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+58h] [rbp-50h] BYREF
  _DWORD *v70; // [rsp+60h] [rbp-48h] BYREF
  double v71[8]; // [rsp+68h] [rbp-40h] BYREF

  v6 = a2[2];
  v70 = (_DWORD *)a3;
  *(_QWORD *)v58 = v6;
  v7 = sub_15E1AF0(*(_QWORD *)(*a2 + 1760LL));
  v8 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  *(_QWORD *)v59 = a2[2];
  v9 = *a2 + 1752LL;
  v10 = sub_15D1F10(v7);
  v11 = sub_163D390(v9, v10);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  if ( (unsigned __int8)sub_15D26C0(a2[2], a3) )
  {
    *a1 = _mm_loadh_ps((const double *)v58);
    if ( v12 )
    {
      v16 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(*(_QWORD *)v59, v12);
    }
    return a1;
  }
  if ( !*(_WORD *)(a3 + 4) )
  {
    v18 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v18 )
    {
      v19 = *a2;
      if ( *v18 == *(_DWORD *)(*a2 + 1744LL) && v18[1] == 2 )
      {
        v32 = a2[2];
        v69 = 0;
        *(_QWORD *)v68 = v32;
        v67 = v68;
        sub_163F730(v19 + 1728, a3, (int)v68, v13, v14, v15, v58[0], v59[0], v60[0], v61);
        LODWORD(v35) = v69;
        v66 = a2[2];
        v62 = (_DWORD *)v69;
        if ( v69 )
        {
          v65 = (_QWORD *)(v69 + 8LL * *(unsigned int *)(v69 - 4));
          if ( (_QWORD *)v69 != v65 )
          {
            v62 = nullptr;
            v36 = (_QWORD *)v69;
            v63 = nullptr;
            v61 = nullptr;
            while ( 1 )
            {
              sub_BE81C0(
                (unsigned int)&v70,
                (_DWORD)a2,
                *v36,
                (_DWORD)v35,
                v33,
                v34,
                *(__int64 *)v58,
                *(__int64 *)v59,
                *(__int64 *)v60,
                (__int64)v61,
                (__int64)v62,
                (_DWORD)v63,
                (_DWORD)v36,
                (__int64)v65,
                v66,
                (__int64)v67,
                *(__int64 *)v68,
                v69,
                (__int64)v70);
              v35 = v63;
              v37 = v64;
              *(_QWORD *)v60 = v70;
              v70 = v63;
              if ( v63 )
              {
                v38 = v71[0];
                LODWORD(v64) = v63[2];
                v16 = (_DWORD)v64 == 1;
                v63[2] = (_DWORD)v64 - 1;
                if ( v16 )
                {
                  v64 = v37;
                  sub_15D7BC0(*(_QWORD *)&v38, v35);
                  v37 = v64;
                }
              }
              if ( v61 )
              {
                if ( (_DWORD *)v12 != v62 || v12 != *(_QWORD *)v60 )
                {
                  v39 = *a2;
                  v64 = v37;
                  v40 = sub_15E1B70(*(_QWORD *)(v39 + 1760));
                  v63 = (_DWORD *)v40;
                  v37 = v64;
                  if ( v40 )
                    ++*(_DWORD *)(v40 + 8);
                  v41 = v61;
                  LODWORD(v64) = *((_DWORD *)v61 + 2);
                  v16 = (_DWORD)v64 == 1;
                  *((_DWORD *)v61 + 2) = (_DWORD)v64 - 1;
                  if ( v16 )
                  {
                    v64 = v37;
                    sub_15D7BC0(v66, v41);
                    v37 = v64;
                  }
                  v35 = v62;
                  if ( *(_DWORD **)v60 != v62 )
                  {
                    if ( v62 )
                    {
                      LODWORD(v61) = v62[2];
                      v16 = (_DWORD)v61 == 1;
                      v62[2] = (_DWORD)v61 - 1;
                      if ( v16 )
                      {
                        v61 = v37;
                        sub_15D7BC0(v66, v35);
                        v37 = v61;
                      }
                    }
                    if ( *(_QWORD *)v60 )
                      goto LABEL_52;
                    v62 = nullptr;
                  }
                  v61 = v63;
                }
              }
              else if ( *(_QWORD *)v60 )
              {
                v35 = *(_DWORD **)v60;
                v43 = (__int64)v62;
                LODWORD(v61) = *(_DWORD *)(*(_QWORD *)v60 + 8LL);
                v42 = (_DWORD)v61 + 1;
                *(_DWORD *)(*(_QWORD *)v60 + 8LL) = (_DWORD)v61 + 1;
                if ( v35 != (_DWORD *)v43 )
                {
                  if ( v43 )
                  {
                    LODWORD(v61) = *(_DWORD *)(v43 + 8);
                    v16 = (_DWORD)v61 == 1;
                    *(_DWORD *)(v43 + 8) = (_DWORD)v61 - 1;
                    if ( v16 )
                    {
                      v61 = v37;
                      sub_15D7BC0(v66, v43);
                      v37 = v61;
                      v63 = *(_DWORD **)v60;
LABEL_52:
                      v61 = v63;
                      v42 = *(_DWORD *)(*(_QWORD *)v60 + 8LL);
                    }
                    else
                    {
                      v61 = *(void **)v60;
                      v42 = *(_DWORD *)(*(_QWORD *)v60 + 8LL);
                    }
                  }
                  else
                  {
                    v61 = *(void **)v60;
                  }
                  v35 = *(_DWORD **)v60;
                  *(_DWORD *)(*(_QWORD *)v60 + 8LL) = v42 + 1;
                  v62 = v35;
                  goto LABEL_54;
                }
                v61 = v35;
              }
              else
              {
                if ( v62 )
                {
                  v35 = v62;
                  LODWORD(v61) = v62[2];
                  v16 = (_DWORD)v61 == 1;
                  v62[2] = (_DWORD)v61 - 1;
                  if ( v16 )
                  {
                    v61 = v37;
                    sub_15D7BC0(v66, v35);
                    v37 = v61;
                  }
                }
                v62 = nullptr;
                v61 = nullptr;
              }
LABEL_54:
              v36 = v37 + 1;
              if ( v65 == v36 )
              {
                if ( v61 )
                  goto LABEL_64;
                goto LABEL_102;
              }
              v63 = *(_DWORD **)v60;
            }
          }
          *(_QWORD *)v60 = 0;
          v62 = nullptr;
        }
        else
        {
          *(_QWORD *)v60 = 0;
        }
LABEL_102:
        v55 = *a2 + 1752LL;
        v56 = sub_15D1F10(a3);
        v57 = (_DWORD *)sub_163D5F0(v55, v56);
        v61 = v57;
        if ( v57 )
          ++v57[2];
LABEL_64:
        v44 = (__int64)v62;
        *a1 = _mm_loadh_ps((const double *)&v66);
        if ( v44 )
        {
          LODWORD(v61) = *(_DWORD *)(v44 + 8);
          v16 = (_DWORD)v61 == 1;
          *(_DWORD *)(v44 + 8) = (_DWORD)v61 - 1;
          if ( v16 )
            sub_15D7BC0(v66, v44);
        }
        v45 = *(_QWORD *)v60;
        if ( *(_QWORD *)v60 )
        {
          LODWORD(v61) = *(_DWORD *)(*(_QWORD *)v60 + 8LL);
          v16 = (_DWORD)v61 == 1;
          *(_DWORD *)(*(_QWORD *)v60 + 8LL) = (_DWORD)v61 - 1;
          if ( v16 )
            sub_15D7BC0(v66, v45);
        }
        v46 = (__int64 *)v69;
        if ( v69 )
        {
          v47 = v69 + 8LL * *(unsigned int *)(v69 - 4);
          if ( v69 >= v47 )
            goto LABEL_78;
          do
          {
            v48 = *v46;
            if ( *v46 )
            {
              v49 = *(_QWORD *)v68;
              v16 = (*(_DWORD *)(v48 + 8))-- == 1;
              if ( v16 )
                sub_15D7BC0(v49, v48);
            }
            ++v46;
          }
          while ( (unsigned __int64)v46 < v47 );
          v46 = (__int64 *)v69;
          if ( v69 )
LABEL_78:
            sub_186B220(v46 - 1);
        }
        goto LABEL_30;
      }
      if ( !*v18 && v18[1] == 4 )
      {
        sub_BE81C0(
          (unsigned int)v68,
          (_DWORD)a2,
          *(_QWORD *)(a3 + 40),
          v13,
          v14,
          v15,
          *(__int64 *)v58,
          *(__int64 *)v59,
          *(_QWORD *)(a3 + 48),
          (__int64)v61,
          (__int64)v62,
          (_DWORD)v63,
          (_DWORD)v64,
          (__int64)v65,
          v66,
          (__int64)v67,
          *(__int64 *)v68,
          v69,
          (__int64)v70);
        if ( !*(_WORD *)(*(_QWORD *)v68 + 4LL)
          && (v23 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v68 + 16LL) + 24LL)) != nullptr
          && (v20 = *(_DWORD *)(*a2 + 1768LL), v20 == *v23)
          && (v23[1] == 36
           || v23[1] == 25
           && *(_DWORD *)(*(_QWORD *)v68 + 24LL) == 1
           && (v53 = *(_QWORD *)(*(_QWORD *)v68 + 32LL), !*(_WORD *)(v53 + 4))
           && (v54 = *(_DWORD **)(*(_QWORD *)(v53 + 16) + 24LL)) != nullptr
           && v20 == *v54
           && v54[1] == 37) )
        {
          *a1 = _mm_loadh_ps((const double *)&v69);
        }
        else
        {
          sub_BE81C0(
            (unsigned int)&v70,
            (_DWORD)a2,
            v60[0],
            v20,
            v21,
            v22,
            *(__int64 *)v58,
            *(__int64 *)v59,
            *(__int64 *)v60,
            (__int64)v61,
            (__int64)v62,
            (_DWORD)v63,
            (_DWORD)v64,
            (__int64)v65,
            v66,
            (__int64)v67,
            *(__int64 *)v68,
            v69,
            (__int64)v70);
          v24 = *a2;
          v25 = *(_DWORD *)(*a2 + 1768LL);
          if ( !*((_WORD *)v70 + 2)
            && (v50 = *(_DWORD **)(*((_QWORD *)v70 + 2) + 24LL)) != nullptr
            && v25 == *v50
            && (v50[1] == 36
             || v50[1] == 25
             && v70[6] == 1
             && (v51 = *((_QWORD *)v70 + 4), !*(_WORD *)(v51 + 4))
             && (v52 = *(_DWORD **)(*(_QWORD *)(v51 + 16) + 24LL)) != nullptr
             && v25 == *v52
             && v52[1] == 37) )
          {
            *a1 = _mm_loadh_ps(v71);
          }
          else
          {
            v26 = a2[2];
            v27 = sub_15E1B70(*(_QWORD *)(v24 + 1760));
            *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)v26);
            if ( v27 )
              ++*(_DWORD *)(v27 + 8);
            v28 = (__int64)v70;
            v29 = v71[0];
            if ( v70 )
            {
              v16 = v70[2]-- == 1;
              if ( v16 )
                sub_15D7BC0(*(_QWORD *)&v29, v28);
            }
          }
          v30 = *(_QWORD *)v68;
          v31 = v69;
          if ( *(_QWORD *)v68 )
          {
            v16 = (*(_DWORD *)(*(_QWORD *)v68 + 8LL))-- == 1;
            if ( v16 )
              sub_15D7BC0(v31, v30);
          }
        }
LABEL_30:
        if ( v12 )
        {
          v16 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(*(_QWORD *)v59, v12);
        }
        goto LABEL_12;
      }
    }
  }
  *a1 = _mm_loadh_ps((const double *)v59);
LABEL_12:
  v16 = (*(_DWORD *)(v8 + 8))-- == 1;
  if ( v16 )
    sub_15D7BC0(*(_QWORD *)v58, v8);
  return a1;
}

