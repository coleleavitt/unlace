__int64 __fastcall sub_432BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edx
  __int64 v6; // r12
  int v7; // r15d
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ebp
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // edx
  _BYTE *v31; // rcx
  bool v32; // zf
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // ebp
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  int v39; // edx
  int v40; // eax
  int v41; // ebp
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  int v44; // edx
  int v45; // eax
  _BYTE *v46; // rcx
  _BYTE *v47; // rcx
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  _BYTE *v54; // rcx
  _BYTE *v55; // rcx
  int v56; // r14d
  _BYTE *v57; // rcx
  _BYTE *v58; // rcx
  int v59; // edx
  int v60; // eax
  _BYTE *v61; // rcx
  _BYTE *v62; // rcx
  _BYTE *v63; // rcx
  _BYTE *v64; // rcx
  _BYTE *v65; // rcx
  int v66; // [rsp+Ch] [rbp-3Ch]

  v5 = 1;
  v6 = *(_QWORD *)(a4 + 3264);
  v7 = *(_DWORD *)(v6 + 28) - 1;
  if ( *(_QWORD *)(a4 + 24) )
  {
    v8 = *(_DWORD *)(a2 + 28);
    v5 = 1;
    if ( (v8 & 1) != 0 && v8 > 4 )
    {
      v9 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v9 + 24LL * *(int *)(v9 + 20) + 40) == 5
        && !memcmp(*(const void **)(v9 + 24LL * *(int *)(v9 + 20) + 32), "upvar", 5u) )
      {
        v10 = v9 + 24LL * *(int *)(v9 + 20) + 24;
        v12 = v10 + 24LL * *(int *)(v10 + 20);
        if ( *(_DWORD *)(v12 + 24) != 2 )
        {
          v13 = *(_QWORD *)(v6 + 16);
          v14 = 24LL * v7;
          v15 = *(_QWORD *)(v14 + v13 + 8);
          v16 = *(_QWORD *)(*(_QWORD *)(v14 + v13 + 16) + 16LL);
          *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v15 + 8);
          v17 = *(unsigned int *)(v12 + 44);
          *(_QWORD *)(a4 + 3288) = v16;
          sub_4399D0(a1, v12 + 48, v17, a4);
          goto LABEL_9;
        }
        v56 = sub_471010(a4, *(_QWORD *)(v12 + 56), *(unsigned int *)(v12 + 64), 0);
        if ( v56 > 255 )
        {
          v61 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v61 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v61 = *(_BYTE **)(a4 + 120);
          }
          *v61 = 2;
          v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v62;
          *v62 = HIBYTE(v56);
          v63 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v63;
          *v63 = BYTE2(v56);
          v64 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v64;
          *v64 = BYTE1(v56);
          v65 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v65;
          *v65 = v56;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v59 = dword_65444C;
        }
        else
        {
          v57 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v57 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v57 = *(_BYTE **)(a4 + 120);
          }
          *v57 = 1;
          v58 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v58;
          *v58 = v56;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v59 = dword_65442C;
        }
        if ( v59 )
        {
          if ( v59 == 0x80000000 )
            v59 = 1 - v56;
          if ( v59 >= 0 )
          {
            v60 = *(_DWORD *)(a4 + 48);
LABEL_71:
            *(_DWORD *)(a4 + 48) = v59 + v60;
            goto LABEL_9;
          }
          v60 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) >= v60 )
            goto LABEL_71;
          *(_DWORD *)(a4 + 44) = v60;
          *(_DWORD *)(a4 + 48) = v59 + v60;
        }
LABEL_9:
        v66 = 3;
        v18 = v12 + 24;
        if ( v8 > 3 )
        {
          v19 = 24LL * v7;
          while ( 1 )
          {
            v20 = v18 + 24LL * *(int *)(v18 + 20);
            v18 = v20 + 24 + 24LL * *(int *)(v20 + 44) + 24;
            if ( *(_DWORD *)(v20 + 24) == 2 )
            {
              v41 = sub_471010(a4, *(_QWORD *)(v20 + 56), *(unsigned int *)(v20 + 64), 0);
              if ( v41 > 255 )
              {
                v46 = *(_BYTE **)(a4 + 120);
                if ( (unsigned __int64)(v46 + 5) > *(_QWORD *)(a4 + 128) )
                {
                  sub_439150(a4);
                  v46 = *(_BYTE **)(a4 + 120);
                }
                *v46 = 2;
                v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v47;
                *v47 = HIBYTE(v41);
                v48 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v48;
                *v48 = BYTE2(v41);
                v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v49;
                *v49 = BYTE1(v41);
                v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v50;
                *v50 = v41;
                ++*(_QWORD *)(a4 + 120);
                *(_DWORD *)(a4 + 3276) = 0;
                v44 = dword_65444C;
              }
              else
              {
                v42 = *(_BYTE **)(a4 + 120);
                if ( (unsigned __int64)(v42 + 2) > *(_QWORD *)(a4 + 128) )
                {
                  sub_439150(a4);
                  v42 = *(_BYTE **)(a4 + 120);
                }
                *v42 = 1;
                v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                *(_QWORD *)(a4 + 120) = v43;
                *v43 = v41;
                ++*(_QWORD *)(a4 + 120);
                *(_DWORD *)(a4 + 3276) = 0;
                v44 = dword_65442C;
              }
              if ( !v44 )
                goto LABEL_13;
              if ( v44 == 0x80000000 )
                v44 = 1 - v41;
              if ( v44 < 0 )
              {
                v45 = *(_DWORD *)(a4 + 48);
                if ( *(_DWORD *)(a4 + 44) < v45 )
                {
                  *(_DWORD *)(a4 + 44) = v45;
                  *(_DWORD *)(a4 + 48) = v44 + v45;
                  goto LABEL_13;
                }
              }
              else
              {
                v45 = *(_DWORD *)(a4 + 48);
              }
              *(_DWORD *)(a4 + 48) = v44 + v45;
            }
            else
            {
              v21 = *(_QWORD *)(v6 + 16);
              *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v19 + v21 + 8) + 4LL * v66);
              v22 = *(_QWORD *)(v19 + v21 + 16);
              v23 = *(unsigned int *)(v20 + 44);
              *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v22 + 8LL * v66);
              sub_4399D0(a1, v20 + 48, v23, a4);
            }
LABEL_13:
            v24 = sub_41FD20(v18, a4);
            if ( v24 < 0 )
              return 1;
            v25 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v25 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v25 = *(_BYTE **)(a4 + 120);
            }
            *v25 = 123;
            v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v26;
            *v26 = HIBYTE(v24);
            v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v27;
            *v27 = BYTE2(v24);
            v28 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v28;
            *v28 = BYTE1(v24);
            v29 = *(_QWORD *)(a4 + 120);
            *(_QWORD *)(a4 + 120) = v29 + 1;
            *(_BYTE *)(v29 + 1) = v24;
            *(_DWORD *)(a4 + 3276) = 0;
            v30 = dword_65536C;
            v31 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v32 = dword_65536C == 0;
            *(_QWORD *)(a4 + 120) = v31;
            if ( !v32 )
            {
              if ( v30 == 0x80000000 )
                v30 = 1 - v24;
              if ( v30 < 0 )
              {
                v33 = *(_DWORD *)(a4 + 48);
                if ( *(_DWORD *)(a4 + 44) < v33 )
                  *(_DWORD *)(a4 + 44) = v33;
              }
              else
              {
                v33 = *(_DWORD *)(a4 + 48);
              }
              *(_DWORD *)(a4 + 48) = v30 + v33;
            }
            v66 += 2;
            if ( v66 >= v8 )
              goto LABEL_23;
          }
        }
        v31 = *(_BYTE **)(a4 + 120);
LABEL_23:
        if ( v31 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v31 = *(_BYTE **)(a4 + 120);
        }
        *v31 = 3;
        *(_DWORD *)(a4 + 3276) = 0;
        v34 = dword_65446C;
        ++*(_QWORD *)(a4 + 120);
        if ( v34 )
        {
          if ( v34 == 0x80000000 )
          {
            v35 = *(_DWORD *)(a4 + 48);
            v34 = 1;
          }
          else if ( v34 < 0 )
          {
            v35 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v35 )
              *(_DWORD *)(a4 + 44) = v35;
          }
          else
          {
            v35 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v34 + v35;
        }
        v36 = sub_471010(a4, "", 0, 0);
        if ( v36 > 255 )
        {
          v51 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v51 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v51 = *(_BYTE **)(a4 + 120);
          }
          *v51 = 2;
          v52 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v52;
          *v52 = HIBYTE(v36);
          v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v53;
          *v53 = BYTE2(v36);
          v54 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v54;
          *v54 = BYTE1(v36);
          v55 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v55;
          *v55 = v36;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v39 = dword_65444C;
        }
        else
        {
          v37 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v37 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v37 = *(_BYTE **)(a4 + 120);
          }
          *v37 = 1;
          v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v38;
          *v38 = v36;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v39 = dword_65442C;
        }
        if ( !v39 )
          return 0;
        if ( v39 == 0x80000000 )
          v39 = 1 - v36;
        if ( v39 < 0 )
        {
          v40 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v40 )
          {
            *(_DWORD *)(a4 + 44) = v40;
            *(_DWORD *)(a4 + 48) = v39 + v40;
            return 0;
          }
        }
        else
        {
          v40 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v39 + v40;
        return 0;
      }
      return 1;
    }
  }
  return v5;
}

