_QWORD *__fastcall sub_1D7280(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r12d
  int v7; // ebp
  int v8; // r15d
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  int v11; // edx
  int v12; // r14d
  int v13; // r11d
  int v14; // r13d
  __int64 v15; // r9
  _DWORD *v16; // r10
  __int64 v17; // rdx
  char v18; // cl
  int v19; // esi
  int v20; // eax
  char v21; // dl
  _BYTE *v22; // rax
  __int64 v23; // r9
  _BYTE *v24; // r14
  int v25; // edx
  _BYTE *v26; // rax
  unsigned int v27; // edx
  int v28; // r15d
  unsigned __int64 v29; // xmm0_8
  __int64 v30; // rdi
  _BYTE *v31; // rax
  int v32; // edx
  char *v33; // r15
  int v34; // edx
  int v35; // esi
  int v36; // r14d
  int v37; // ebp
  char *v38; // rax
  char *v39; // rdi
  char v40; // cl
  int v41; // edx
  int v42; // r14d
  int v43; // edx
  __int64 v44; // r15
  __int64 v45; // r8
  __int64 v46; // rdi
  char v47; // r13
  _BYTE *v48; // rax
  int v49; // r14d
  int v50; // r15d
  char *v51; // r12
  char *v52; // rax
  char v53; // si
  int v54; // edx
  _BYTE *v56; // rdx
  int v57; // r12d
  int v58; // r13d
  char *v59; // r15
  char *v60; // rax
  char v61; // cl
  int v62; // edx
  _BYTE *v63; // r9
  __int64 v64; // rax
  _BYTE *v65; // rax
  int v66; // edx
  _BYTE *v67; // r9
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rdi
  _BYTE *v71; // r8
  __int64 v72; // rax
  void *desta; // [rsp+0h] [rbp-A8h]
  int v76; // [rsp+10h] [rbp-98h]
  __int64 v77; // [rsp+10h] [rbp-98h]
  _BYTE *v78; // [rsp+10h] [rbp-98h]
  unsigned int v79; // [rsp+20h] [rbp-88h]
  int v80; // [rsp+20h] [rbp-88h]
  int v81; // [rsp+20h] [rbp-88h]
  _BYTE *v82; // [rsp+20h] [rbp-88h]
  int v83; // [rsp+20h] [rbp-88h]
  _BYTE *v84; // [rsp+20h] [rbp-88h]
  int v86; // [rsp+34h] [rbp-74h]
  int v87; // [rsp+34h] [rbp-74h]
  _BYTE *v88; // [rsp+38h] [rbp-70h]
  void *v89; // [rsp+40h] [rbp-68h] BYREF
  __int64 v90; // [rsp+48h] [rbp-60h]
  void *v91; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v92; // [rsp+58h] [rbp-50h]
  unsigned __int64 v93; // [rsp+68h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  v3 = *(int *)(a3 + 12);
  if ( (int)v3 <= 0 )
  {
LABEL_81:
    *a1 = 0;
    a1[1] = 0;
    sub_1CAEC0((__int64)a1, a3);
  }
  else
  {
    v4 = *(_QWORD *)a3;
    v5 = 0;
    while ( *(_BYTE *)(v4 + v5) != 38 )
    {
      if ( v3 == ++v5 )
        goto LABEL_81;
    }
    v6 = v5;
    v7 = 1;
    v8 = 0;
    v9 = (_BYTE *)operator new[](1u);
    v76 = 1;
    *v9 = 0;
    v10 = v9;
    v11 = *(_DWORD *)(a3 + 12);
    do
    {
      if ( v6 >= v11 - 3 )
        break;
      v12 = v6 + 1;
      v13 = *(_DWORD *)(a2 + 100);
      if ( v13 > 0 )
      {
        v14 = 0;
        v15 = *(_QWORD *)a3 + v12;
        v16 = *(_DWORD **)(a2 + 88);
        do
        {
          v17 = 0;
          v18 = *(_BYTE *)(*(_QWORD *)v16 + 1LL);
          v19 = v16[3] - 2;
          v20 = 0;
          if ( v18 )
          {
            do
            {
              v21 = *(_BYTE *)(v15 + v17);
              if ( !v21 || v19 <= v20 )
              {
                if ( v19 != v20 )
                  goto LABEL_49;
                goto LABEL_16;
              }
              if ( v18 != v21 )
                goto LABEL_49;
              v17 = ++v20;
              v18 = *(_BYTE *)(*(_QWORD *)v16 + v20 + 1LL);
            }
            while ( v18 );
            if ( v19 == v20 )
              goto LABEL_16;
            v56 = (_BYTE *)(v15 + v20);
          }
          else
          {
            if ( v16[3] == 2 )
            {
LABEL_16:
              if ( v6 - v8 <= 0 )
              {
                v89 = nullptr;
                v90 = 0;
                sub_1CADA0((__int64)&v89, (__int64)&unk_5C2F25);
                v34 = HIDWORD(v90);
                v36 = v7 - 1;
                v33 = (char *)v89;
                v35 = HIDWORD(v90) - 1;
                v37 = HIDWORD(v90) - 1 + v7;
                if ( v76 >= v37 )
                  goto LABEL_26;
              }
              else
              {
                HIDWORD(v92) = 1;
                v22 = (_BYTE *)operator new[](1u);
                v23 = v6 - v8;
                *v22 = 0;
                v24 = v22;
                v25 = v6 - v8 + 1;
                if ( v25 <= 0 )
                {
                  v27 = 1;
                }
                else
                {
                  v79 = v23 + 1;
                  v26 = (_BYTE *)operator new[](v25);
                  v27 = v79;
                  v23 = v6 - v8;
                  *v26 = *v24;
                  if ( v24 )
                  {
                    v88 = v26;
                    operator delete[](v24);
                    v23 = v6 - v8;
                    v27 = v79;
                    v26 = v88;
                  }
                  v24 = v26;
                }
                v28 = v8 - (_DWORD)v24;
                v29 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v27), 224).m128i_u64[0];
                v30 = *(_QWORD *)a3;
                v31 = v24;
                do
                {
                  v32 = v28 + (_DWORD)v31++;
                  *(v31 - 1) = *(_BYTE *)(v30 + v32);
                }
                while ( &v24[v23] != v31 );
                v24[v23] = 0;
                v89 = nullptr;
                v90 = 0;
                v91 = v24;
                v92 = v29;
                sub_1CAEC0((__int64)&v89, (__int64)&v91);
                v33 = (char *)v89;
                v34 = HIDWORD(v90);
                if ( v24 )
                {
                  v80 = HIDWORD(v90);
                  operator delete[](v24);
                  v34 = v80;
                }
                v35 = v34 - 1;
                v36 = v7 - 1;
                v37 = v34 - 1 + v7;
                if ( v76 >= v37 )
                {
LABEL_26:
                  v38 = v33;
                  v39 = &v33[v34];
                  if ( v34 > 0 )
                  {
                    do
                    {
                      v40 = *v38;
                      v41 = v36 - (_DWORD)v33 + (_DWORD)v38++;
                      v10[v41] = v40;
                    }
                    while ( v39 != v38 );
                  }
                  v42 = v35 + v36;
                  v43 = v42 + 1;
                  if ( v33 )
                  {
                    operator delete[](v33);
                    v43 = v42 + 1;
                  }
                  v7 = v42 + 2;
                  v44 = v43;
                  v45 = 16LL * v14;
                  v46 = v45 + *(_QWORD *)(a2 + 88);
                  v47 = **(_BYTE **)v46;
                  if ( v76 < v42 + 2 )
                  {
                    v83 = v43;
                    v77 = v45;
                    v65 = (_BYTE *)operator new[](v7);
                    v66 = v83;
                    v67 = v65;
                    v68 = v77;
                    if ( v83 > v7 )
                      v66 = v42 + 2;
                    v69 = 0;
                    v44 = v66;
                    if ( v66 > 0 )
                    {
                      do
                      {
                        v67[v69] = v10[v69];
                        ++v69;
                      }
                      while ( v66 != v69 );
                    }
                    v42 = v66 - 1;
                    if ( v10 )
                    {
                      v87 = v66 + 1;
                      v84 = v67;
                      operator delete[](v10);
                      v70 = v77;
                      v76 = v7;
                      v10 = v84;
                      v7 = v87;
                      v46 = *(_QWORD *)(a2 + 88) + v70;
                    }
                    else
                    {
                      v76 = v7;
                      v7 = v66 + 1;
                      v10 = v67;
                      v46 = v68 + *(_QWORD *)(a2 + 88);
                    }
                  }
                  v10[v42] = v47;
                  v10[v44] = 0;
                  v8 = v6 + *(_DWORD *)(v46 + 12) - 1;
                  goto LABEL_32;
                }
              }
              v81 = v34;
              v63 = (_BYTE *)operator new[](v37);
              v34 = v81;
              if ( v36 > v37 )
                v36 = v37;
              v64 = 0;
              if ( v36 > 0 )
              {
                do
                {
                  v63[v64] = v10[v64];
                  ++v64;
                }
                while ( v36 != v64 );
              }
              if ( v10 )
              {
                v86 = v81;
                v82 = v63;
                operator delete[](v10);
                v63 = v82;
                v34 = v86;
              }
              v76 = v37;
              v10 = v63;
              goto LABEL_26;
            }
            v56 = (_BYTE *)(*(_QWORD *)a3 + v12);
          }
          if ( !*v56 )
            goto LABEL_16;
LABEL_49:
          ++v14;
          v16 += 4;
        }
        while ( v14 != v13 );
      }
      sub_1D70E0(&v91, (__int64 *)a3, v8, v12 - v8);
      v57 = HIDWORD(v92);
      v58 = v7 - 1;
      v59 = (char *)v91;
      v7 = v7 - 1 + HIDWORD(v92);
      if ( v76 < v7 )
      {
        v71 = (_BYTE *)operator new[](v7);
        if ( v58 > v7 )
          v58 = v7;
        v72 = 0;
        if ( v58 > 0 )
        {
          do
          {
            v71[v72] = v10[v72];
            ++v72;
          }
          while ( v58 != v72 );
        }
        if ( v10 )
        {
          v78 = v71;
          operator delete[](v10);
          v71 = v78;
        }
        v76 = v7;
        v10 = v71;
        v7 = v57 + v58;
      }
      v60 = v59;
      if ( v57 > 0 )
      {
        do
        {
          v61 = *v60;
          v62 = v58 - (_DWORD)v59 + (_DWORD)v60++;
          v10[v62] = v61;
        }
        while ( &v59[v57] != v60 );
      }
      if ( v59 )
        operator delete[](v59);
      v8 = v12;
LABEL_32:
      v11 = *(_DWORD *)(a3 + 12);
      if ( v8 >= v11 )
        break;
      v6 = v8;
      v48 = (_BYTE *)(*(_QWORD *)a3 + v8);
      while ( *v48 != 38 )
      {
        ++v6;
        ++v48;
        if ( v6 >= v11 )
          goto LABEL_37;
      }
    }
    while ( v6 != -1 );
LABEL_37:
    if ( v11 - 2 > v8 )
    {
      sub_1D70E0(&v91, (__int64 *)a3, v8, v11 - 1 - v8);
      v49 = HIDWORD(v92);
      v50 = v7 - 1;
      v51 = (char *)v91;
      v7 = v7 - 1 + HIDWORD(v92);
      if ( v76 < v7 )
      {
        desta = (void *)operator new[](v7);
        if ( v50 > v7 )
          v50 = v7;
        if ( v50 > 0 )
          memcpy(desta, v10, (unsigned int)v50);
        if ( v10 )
          operator delete[](v10);
        v76 = v7;
        v10 = desta;
        v7 = v49 + v50;
      }
      v52 = v51;
      if ( v49 > 0 )
      {
        do
        {
          v53 = *v52;
          v54 = v50 - (_DWORD)v51 + (_DWORD)v52++;
          v10[v54] = v53;
        }
        while ( v52 != &v51[v49] );
      }
      if ( v51 )
        operator delete[](v51);
    }
    HIDWORD(v92) = v7;
    v91 = v10;
    *a1 = 0;
    a1[1] = 0;
    LODWORD(v92) = v76;
    sub_1CAEC0((__int64)a1, (__int64)&v91);
    if ( v10 )
      operator delete[](v10);
  }
  return a1;
}
