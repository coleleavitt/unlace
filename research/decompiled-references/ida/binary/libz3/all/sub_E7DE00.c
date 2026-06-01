__int64 __fastcall sub_E7DE00(__int64 *a1, _QWORD *a2, char a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  char *v9; // rbx
  char *v10; // r12
  char *v11; // r13
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v14; // r13
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rsi
  __int64 *v20; // rcx
  void *v21; // rdx
  char *v22; // rdi
  char *v23; // rcx
  char *v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  int v32; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // [rsp+0h] [rbp-198h]
  __int64 *v38; // [rsp+8h] [rbp-190h]
  __int64 *v39; // [rsp+8h] [rbp-190h]
  __int64 v40; // [rsp+10h] [rbp-188h]
  _QWORD *v41; // [rsp+18h] [rbp-180h]
  __int64 v42; // [rsp+20h] [rbp-178h]
  char *v43; // [rsp+28h] [rbp-170h]
  void *v44; // [rsp+30h] [rbp-168h]
  void *v45; // [rsp+38h] [rbp-160h]
  void **v46; // [rsp+40h] [rbp-158h]
  __int64 *v47; // [rsp+48h] [rbp-150h]
  int v48; // [rsp+50h] [rbp-148h]
  int v49[2]; // [rsp+58h] [rbp-140h] BYREF
  __int64 v50; // [rsp+60h] [rbp-138h] BYREF
  int v51[2]; // [rsp+68h] [rbp-130h]
  __int64 v52; // [rsp+70h] [rbp-128h] BYREF
  void *v53; // [rsp+78h] [rbp-120h] BYREF
  int v54[2]; // [rsp+80h] [rbp-118h] BYREF
  int v55; // [rsp+88h] [rbp-110h]
  __int16 v56; // [rsp+8Ch] [rbp-10Ch]
  int v57; // [rsp+90h] [rbp-108h]
  int v58; // [rsp+98h] [rbp-100h]
  int v59; // [rsp+9Ch] [rbp-FCh]
  int v60; // [rsp+A0h] [rbp-F8h]
  int v61[4]; // [rsp+A8h] [rbp-F0h]
  char v62[16]; // [rsp+B8h] [rbp-E0h]
  void *ptr; // [rsp+C8h] [rbp-D0h]
  int v64[2]; // [rsp+D0h] [rbp-C8h]
  char v65[4]; // [rsp+D8h] [rbp-C0h] BYREF
  int v66; // [rsp+E0h] [rbp-B8h]
  int v67; // [rsp+E8h] [rbp-B0h]
  int v68; // [rsp+F0h] [rbp-A8h]
  int v69; // [rsp+F8h] [rbp-A0h]
  int v70; // [rsp+100h] [rbp-98h]
  int v71; // [rsp+108h] [rbp-90h]
  int v72; // [rsp+110h] [rbp-88h]
  int v73; // [rsp+118h] [rbp-80h]
  int v74; // [rsp+120h] [rbp-78h]
  int v75; // [rsp+128h] [rbp-70h]
  int v76; // [rsp+130h] [rbp-68h]
  int v77; // [rsp+138h] [rbp-60h]
  int v78; // [rsp+140h] [rbp-58h]
  int v79; // [rsp+148h] [rbp-50h]
  int v80; // [rsp+150h] [rbp-48h]
  char v81; // [rsp+158h] [rbp-40h]

  v6 = *a1;
  v7 = *a4;
  v41 = a2;
  v50 = v6;
  v52 = v6;
  HIBYTE(v42) = a3;
  *(_QWORD *)v51 = 0;
  v53 = nullptr;
  v47 = &v50;
  sub_15EE230(v7);
  if ( *(_QWORD *)v51 )
  {
    v8 = *(unsigned int *)(*(_QWORD *)v51 - 4LL);
    if ( (_DWORD)v8 )
    {
      v9 = nullptr;
      v43 = (char *)(8 * v8);
      v38 = &v52;
      v46 = &v53;
      while ( 1 )
      {
        v10 = (char *)v53;
        if ( !v53 )
          break;
        v11 = (char *)v53 + 8 * *((unsigned int *)v53 - 1);
        if ( v53 < v11 )
        {
          do
          {
            while ( 1 )
            {
              v12 = *(_QWORD *)v10;
              if ( *(_QWORD *)v10 )
              {
                v13 = (*(_DWORD *)(v12 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              v10 += 8;
              if ( v10 >= v11 )
                goto LABEL_11;
            }
            sub_15D7BC0(v52, v12);
            v10 += 8;
          }
          while ( v10 < v11 );
LABEL_11:
          v10 = (char *)v53;
          if ( !v53 )
            break;
        }
        *((_DWORD *)v10 - 1) = 0;
        v14 = *(_QWORD *)&v9[*(_QWORD *)v51];
        v15 = 0;
        if ( v14 )
        {
          ++*(_DWORD *)(v14 + 8);
          v15 = *((_DWORD *)v10 - 1);
        }
        if ( *((_DWORD *)v10 - 2) == v15 )
          goto LABEL_43;
LABEL_15:
        v16 = *((_DWORD *)v10 - 1);
        *(_QWORD *)&v10[8 * v16] = v14;
        *((_DWORD *)v10 - 1) = v16 + 1;
        sub_E7D0A0((__int64)a1, v41, HIBYTE(v42), (__int64)v38);
        v17 = *a1;
        *(_QWORD *)v49 = 0;
        *(_QWORD *)v54 = v17;
        v59 = 0;
        LODWORD(v42) = 256;
        v55 = 256;
        v56 = 0;
        ptr = v65;
        v40 = 0x1000000000LL;
        *(_QWORD *)v64 = 0x1000000000LL;
        *(_OWORD *)v61 = 0;
        *(_OWORD *)v62 = 0;
        sub_14DC230(v54, v49);
        if ( v53 )
        {
          v19 = *((unsigned int *)v53 - 1);
          v20 = a4;
          v21 = v53;
          if ( HIBYTE(v55) )
            goto LABEL_49;
        }
        else
        {
          v19 = 0;
          v20 = a4;
          v21 = nullptr;
          if ( HIBYTE(v55) )
          {
LABEL_49:
            sub_14E1930((int)v54, v37, (int)v38, 0, (__int64)v41, v42, (__int64)v43, v44, (int)v45);
            goto LABEL_19;
          }
        }
        v45 = v53;
        LODWORD(v44) = v19;
        if ( (_BYTE)v55 )
        {
          if ( (unsigned int)sub_14DD000(v54, v19, v21, v20) == 5 )
            goto LABEL_45;
        }
        else if ( (unsigned int)sub_14DC740(
                                  (int)v54,
                                  v19,
                                  (int)v21,
                                  (int)v20,
                                  (int)v53,
                                  v18,
                                  v37,
                                  (int)v38,
                                  0,
                                  (int)v41,
                                  256,
                                  v43,
                                  v19,
                                  (int)v53,
                                  (int)v46,
                                  (int)v47,
                                  v48,
                                  v49[0],
                                  v50,
                                  v51[0],
                                  v52,
                                  (int)v53,
                                  v54[0],
                                  v55,
                                  v57,
                                  v58,
                                  v60,
                                  v61[0],
                                  v61[2],
                                  v62[0],
                                  *(int *)&v62[8],
                                  (int)ptr,
                                  v64[0],
                                  *(int *)v65,
                                  v66,
                                  v67,
                                  v68,
                                  v69,
                                  v70,
                                  v71,
                                  v72,
                                  v73,
                                  v74,
                                  v75,
                                  v76,
                                  v77,
                                  v78,
                                  v79) == 5 )
        {
LABEL_45:
          v34 = sub_15E1AF0(v54[0]);
          if ( v34 )
            ++*(_DWORD *)(v34 + 8);
          v44 = (void *)v34;
          sub_E65BC0(*a4, a4[1]);
          *a4 = (__int64)v44;
        }
LABEL_19:
        v22 = (char *)ptr;
        v23 = (char *)ptr + 8 * (unsigned int)v64[0];
        v24 = (char *)ptr;
        if ( ptr != v23 )
        {
          do
          {
            v25 = *(_QWORD *)v24;
            v24 += 8;
            *(_BYTE *)(v25 + 6) &= ~1u;
          }
          while ( v24 != v23 );
        }
        v64[0] = 0;
        if ( v22 != v65 && v22 )
          sub_186B220(v22);
        if ( *(_QWORD *)&v62[8] )
          sub_186B220((void *)(*(_QWORD *)&v62[8] - 8LL));
        if ( *(_QWORD *)v62 )
          sub_186B220((void *)(*(_QWORD *)v62 - 8LL));
        if ( *(_QWORD *)&v61[2] )
          sub_186B220((void *)(*(_QWORD *)&v61[2] - 8LL));
        if ( *(_QWORD *)v61 )
          sub_186B220((void *)(*(_QWORD *)v61 - 8LL));
        sub_18572D0(v49);
        v26 = (__int64 *)&v9[*(_QWORD *)v51];
        v27 = *(_QWORD *)&v9[*(_QWORD *)v51];
        if ( v27 )
        {
          v13 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v13 )
          {
            v44 = v26;
            sub_15D7BC0(v50, v27);
            v26 = (__int64 *)v44;
          }
        }
        v28 = *a4;
        v9 += 8;
        *a4 = 0;
        *v26 = v28;
        if ( v43 == v9 )
          goto LABEL_36;
      }
      v14 = *(_QWORD *)&v9[*(_QWORD *)v51];
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
LABEL_43:
      sub_23A6F0((unsigned int **)v46);
      v10 = (char *)v53;
      goto LABEL_15;
    }
  }
  LODWORD(v42) = 256;
  v40 = 0x1000000000LL;
  v38 = &v52;
LABEL_36:
  v29 = *a1;
  *(_QWORD *)v49 = 0;
  *(_QWORD *)v54 = v29;
  v56 = 0;
  v55 = v42;
  v59 = 0;
  ptr = v65;
  *(_QWORD *)v64 = v40;
  *(_OWORD *)v61 = 0;
  *(_OWORD *)v62 = 0;
  sub_14DC230(v54, v49);
  if ( *(_QWORD *)v51 )
    v32 = *(_DWORD *)(*(_QWORD *)v51 - 4LL);
  else
    v32 = 0;
  if ( (_BYTE)v55 )
  {
    if ( (unsigned int)sub_14E0E20((int)v54, v32, v51[0], (int)a4, v30, v31, v37, (int)v38, v40, (int)v41, v42, v43) != 5 )
      goto LABEL_40;
  }
  else if ( (unsigned int)sub_14E03D0(
                            (int)v54,
                            v37,
                            (__int64)v38,
                            v40,
                            (int)v41,
                            v42,
                            (int)v43,
                            (int)v44,
                            v45,
                            (int)v46,
                            (int)v47,
                            v48,
                            v49[0],
                            v50,
                            v51[0],
                            v52,
                            (int)v53,
                            v54[0],
                            v55,
                            v57,
                            v58,
                            v60,
                            v61[0],
                            v61[2],
                            *(int *)v62,
                            *(int *)&v62[8],
                            (char)ptr,
                            v64[0],
                            *(int *)v65,
                            v66,
                            v67,
                            v68,
                            v69,
                            v70,
                            v71,
                            v72,
                            v73,
                            v74,
                            v75,
                            v76,
                            v77,
                            v78,
                            v79,
                            v80,
                            v81) != 5 )
  {
    goto LABEL_40;
  }
  v35 = sub_15E1AF0(v54[0]);
  v36 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  sub_E65BC0(*a4, a4[1]);
  *a4 = v36;
LABEL_40:
  sub_39A7A0((__int64)v54);
  sub_18572D0(v49);
  sub_2334C0(v39);
  return sub_2334C0(v47);
}

