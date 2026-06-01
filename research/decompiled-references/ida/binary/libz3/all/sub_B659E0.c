__int64 __fastcall sub_B659E0(_QWORD *a1, unsigned int *a2, int a3, _QWORD *a4)
{
  __int16 v4; // ax
  char v8; // dl
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int *v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 (*v19)(); // rdx
  __int64 v20; // rdi
  char v21; // r13
  unsigned int v22; // eax
  unsigned int **v23; // r15
  unsigned int **v24; // r12
  unsigned int *v25; // rsi
  __int64 v26; // rdx
  _DWORD *v27; // rax
  int v28; // eax
  _DWORD *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // r12
  _DWORD *v32; // rax
  int v33; // edx
  _QWORD *v34; // rcx
  _BYTE *v35; // rdi
  char *v36; // r13
  unsigned int **v37; // r12
  __int64 v38; // r15
  char *v39; // rax
  char *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  int v43; // edx
  unsigned int v44; // esi
  _QWORD *v45; // r8
  _QWORD *v46; // rcx
  char *v47; // r15
  __int64 v48; // rdx
  __int64 v49; // r12
  _QWORD *v50; // rdi
  unsigned __int64 v51; // rdx
  __int64 v52; // r10
  unsigned __int64 v53; // rdx
  __int64 v54; // r10
  unsigned __int64 v55; // rax
  __int64 v56; // r8
  unsigned __int8 v57; // [rsp+0h] [rbp-1D8h]
  _QWORD *v58; // [rsp+8h] [rbp-1D0h]
  _QWORD *v59; // [rsp+10h] [rbp-1C8h]
  _QWORD *v60; // [rsp+18h] [rbp-1C0h]
  unsigned __int8 v61; // [rsp+3Fh] [rbp-199h] BYREF
  _QWORD v62[3]; // [rsp+40h] [rbp-198h] BYREF
  void *v63; // [rsp+58h] [rbp-180h]
  __int64 v64; // [rsp+68h] [rbp-170h]
  void *v65; // [rsp+70h] [rbp-168h]
  void *v66; // [rsp+80h] [rbp-158h]
  __int64 v67; // [rsp+88h] [rbp-150h]
  _BYTE v68[128]; // [rsp+90h] [rbp-148h] BYREF
  void *v69; // [rsp+110h] [rbp-C8h]
  __int64 v70; // [rsp+118h] [rbp-C0h]
  _QWORD v71[23]; // [rsp+120h] [rbp-B8h] BYREF

  v4 = *((_WORD *)a2 + 2);
  if ( v4 == 2 )
    return 1;
  if ( !v4 )
  {
    if ( (unsigned __int8)sub_15D2CB0(a1[13], a2) )
    {
      v12 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v12 )
      {
        if ( (unsigned int)(*v12 + 1) > 1 )
          return 1;
      }
    }
  }
  v8 = sub_15D2CB0(a1[13], a2);
  v9 = *a2;
  if ( v8 )
  {
    v13 = a1[1104];
    if ( v13 && (unsigned int)v9 < *(_DWORD *)(v13 - 4) && *(_DWORD *)(v13 + 4 * v9) != 0x7FFFFFFF )
      return 1;
  }
  else
  {
    v10 = a1[1082];
    if ( v10 && (unsigned int)v9 < *(_DWORD *)(v10 - 4) && *(_QWORD *)(v10 + 8 * v9) )
      return 1;
  }
  v14 = *((_QWORD *)a2 + 2);
  v61 = 1;
  v15 = *(unsigned int **)(v14 + 24);
  if ( !v15 )
    goto LABEL_36;
  v16 = *v15;
  if ( *v15 == -1 )
    goto LABEL_36;
  v17 = a1[1084];
  if ( !v17
    || v16 >= *(_DWORD *)(v17 - 4)
    || (v18 = *(_QWORD *)(v17 + 8LL * v16)) == 0
    || (v19 = *(__int64 (**)())(*(_QWORD *)v18 + 8LL), v19 == sub_893D90) )
  {
    v20 = a1[13];
    if ( *((_WORD *)a2 + 2) )
      goto LABEL_23;
    goto LABEL_33;
  }
  if ( (unsigned __int8)v19() )
  {
    v20 = a1[13];
    if ( *((_WORD *)a2 + 2) )
      goto LABEL_23;
    v15 = *(unsigned int **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( !v15 )
      goto LABEL_23;
    v16 = *v15;
LABEL_33:
    if ( !v16 && v15[1] == 4 )
    {
      if ( !(unsigned __int8)sub_15D2CB0(v20, a2) )
      {
        sub_B65870((__int64)a1, *((unsigned int **)a2 + 4), 1, a4, &v61);
        sub_B65870((__int64)a1, *((unsigned int **)a2 + 5), 0, a4, &v61);
        sub_B65870((__int64)a1, *((unsigned int **)a2 + 6), 0, a4, &v61);
        return v61;
      }
LABEL_36:
      v20 = a1[13];
    }
LABEL_23:
    v21 = sub_15D2CB0(v20, a2);
    if ( !v21 )
      goto LABEL_24;
    if ( *((_WORD *)a2 + 2) )
      goto LABEL_24;
    v26 = *((_QWORD *)a2 + 2);
    v27 = *(_DWORD **)(v26 + 24);
    if ( !v27 || *v27 )
      goto LABEL_24;
    v28 = v27[1];
    if ( v28 == 2 )
    {
      if ( (unsigned __int8)sub_15D2CB0(a1[13], *((_QWORD *)a2 + 4)) )
      {
LABEL_25:
        v22 = a2[6];
        if ( v22 )
        {
          v23 = (unsigned int **)(a2 + 6);
          v24 = (unsigned int **)&a2[2 * v22 + 6];
          do
          {
            v25 = *v24--;
            sub_B65870((__int64)a1, v25, v21, a4, &v61);
          }
          while ( v24 != v23 );
          return v61;
        }
        return 1;
      }
      if ( *((_WORD *)a2 + 2) )
      {
LABEL_24:
        v21 = 0;
        goto LABEL_25;
      }
      v26 = *((_QWORD *)a2 + 2);
    }
    else if ( (unsigned int)(v28 - 4) <= 2 )
    {
      goto LABEL_25;
    }
    v29 = *(_DWORD **)(v26 + 24);
    if ( v29 && !*v29 )
    {
      v21 = v29[1] == 8;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v71[0] = a2;
  v66 = v68;
  v62[2] = 0;
  v67 = 0x1000000000LL;
  v69 = v71;
  v63 = nullptr;
  v70 = 0x1000000001LL;
  v64 = 0;
  v65 = nullptr;
  v62[0] = &off_1C62200;
  v30 = 1;
LABEL_48:
  if ( v30 )
  {
    do
    {
      v31 = *((_QWORD *)v69 + v30 - 1);
      LODWORD(v70) = v30 - 1;
      if ( !(unsigned __int8)sub_15D37A0(v62, a2) )
      {
        sub_15D0A90(v62, a2, 1);
        if ( !*(_WORD *)(v31 + 4) )
        {
          v32 = *(_DWORD **)(*(_QWORD *)(v31 + 16) + 24LL);
          if ( v32 )
          {
            if ( v16 == *v32 )
            {
              v43 = *(_DWORD *)(v31 + 24);
              v30 = v70;
              if ( v43 )
              {
                v44 = HIDWORD(v70);
                v45 = (_QWORD *)(v31 + 24);
                v46 = (_QWORD *)(v31 + 8LL * (unsigned int)(v43 - 1) + 32);
                do
                {
                  v49 = *v46;
                  if ( v30 < v44 )
                  {
                    v47 = (char *)v69;
                  }
                  else
                  {
                    v60 = v45;
                    v59 = v46;
                    v47 = (char *)sub_186B270(16LL * v44);
                    v30 = v70;
                    v44 *= 2;
                    v50 = v69;
                    v46 = v59;
                    v45 = v60;
                    if ( (_DWORD)v70 )
                    {
                      if ( (unsigned int)(v70 - 1) <= 2 || v47 == (char *)v69 + 8 )
                      {
                        v53 = 0;
                        v54 = 8LL * (unsigned int)v70;
                        do
                        {
                          *(_QWORD *)&v47[v53] = v50[v53 / 8];
                          v53 += 8LL;
                        }
                        while ( v53 != v54 );
                      }
                      else
                      {
                        v51 = 0;
                        v52 = 16LL * ((unsigned int)v70 >> 1);
                        do
                        {
                          *(__m128i *)&v47[v51] = _mm_loadu_si128((const __m128i *)&v50[v51 / 8]);
                          v51 += 16LL;
                        }
                        while ( v52 != v51 );
                        if ( (v30 & 1) != 0 )
                          *(_QWORD *)&v47[8 * (v30 & 0xFFFFFFFE)] = v50[v30 & 0xFFFFFFFE];
                      }
                    }
                    if ( v50 != v71 && v50 )
                    {
                      sub_186B220(v50);
                      v30 = v70;
                      v45 = v60;
                      v46 = v59;
                    }
                    v69 = v47;
                    HIDWORD(v70) = v44;
                  }
                  v48 = v30;
                  --v46;
                  ++v30;
                  *(_QWORD *)&v47[8 * v48] = v49;
                  LODWORD(v70) = v30;
                }
                while ( v46 != v45 );
              }
              goto LABEL_48;
            }
          }
        }
        v33 = v67;
        if ( (unsigned int)v67 >= HIDWORD(v67) )
        {
          v38 = (unsigned int)(2 * HIDWORD(v67));
          v39 = (char *)sub_186B270(8 * v38);
          v33 = v67;
          v40 = (char *)v66;
          v34 = v39;
          if ( (_DWORD)v67 )
          {
            if ( (unsigned int)(v67 - 1) <= 2 || v39 == (char *)v66 + 8 )
            {
              v55 = 0;
              v56 = 8LL * (unsigned int)v67;
              do
              {
                v34[v55 / 8] = *(_QWORD *)&v40[v55];
                v55 += 8LL;
              }
              while ( v55 != v56 );
            }
            else
            {
              v41 = 0;
              v42 = 16LL * ((unsigned int)v67 >> 1);
              do
              {
                *(__m128i *)&v34[v41 / 8] = _mm_loadu_si128((const __m128i *)&v40[v41]);
                v41 += 16LL;
              }
              while ( v42 != v41 );
              if ( (v33 & 1) != 0 )
                v34[v33 & 0xFFFFFFFE] = *(_QWORD *)&v40[8 * (v33 & 0xFFFFFFFE)];
            }
          }
          if ( v40 != v68 && v40 )
          {
            v58 = v34;
            sub_186B220(v40);
            v33 = v67;
            v34 = v58;
          }
          v66 = v34;
          HIDWORD(v67) = v38;
        }
        else
        {
          v34 = v66;
        }
        v34[v33] = v31;
        LODWORD(v67) = v33 + 1;
      }
      v30 = v70;
    }
    while ( (_DWORD)v70 );
  }
  v62[0] = &off_1C62200;
  if ( v65 )
    sub_186B220(v65);
  if ( v63 )
    sub_186B220(v63);
  if ( v69 && v69 != v71 )
    sub_186B220(v69);
  v35 = v66;
  v36 = (char *)v66 + 8 * (unsigned int)v67;
  v37 = (unsigned int **)v66;
  result = 1;
  if ( v36 != v66 )
  {
    do
      sub_B65870((__int64)a1, *v37++, 0, a4, &v61);
    while ( v36 != (char *)v37 );
    result = v61;
    v35 = v66;
  }
  if ( v35 != v68 && v35 )
  {
    v57 = result;
    sub_186B220(v35);
    return v57;
  }
  return result;
}

