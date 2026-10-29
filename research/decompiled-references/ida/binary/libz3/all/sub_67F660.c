__int64 __fastcall sub_67F660(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v24; // rdi
  int v25; // r9d
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // r10d
  __int64 v30; // r8
  unsigned int v31; // r9d
  _QWORD *v32; // rax
  int v33; // esi
  __int64 v34; // r9
  _QWORD *v35; // rdi
  _QWORD *v36; // rdx
  _QWORD *v37; // r8
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  int v43; // r10d
  char *v44; // rcx
  char *v45; // r11
  _QWORD *v46; // rdi
  __int64 v47; // rdx
  _QWORD *v48; // rsi
  _QWORD *v49; // rdx
  int v50; // [rsp-8h] [rbp-2E8h]
  int v51; // [rsp+0h] [rbp-2E0h]
  int v52; // [rsp+0h] [rbp-2E0h]
  __int64 v53; // [rsp+8h] [rbp-2D8h]
  int v54; // [rsp+8h] [rbp-2D8h]
  int v55; // [rsp+10h] [rbp-2D0h]
  int v56; // [rsp+10h] [rbp-2D0h]
  int v57; // [rsp+18h] [rbp-2C8h]
  int v58; // [rsp+18h] [rbp-2C8h]
  int v59; // [rsp+18h] [rbp-2C8h]
  int v60; // [rsp+20h] [rbp-2C0h]
  int v61; // [rsp+20h] [rbp-2C0h]
  int v62; // [rsp+20h] [rbp-2C0h]
  _QWORD *v63; // [rsp+20h] [rbp-2C0h]
  __int64 *v64; // [rsp+28h] [rbp-2B8h]
  char v65; // [rsp+28h] [rbp-2B8h]
  __int64 *v66; // [rsp+28h] [rbp-2B8h]
  __int64 v67; // [rsp+30h] [rbp-2B0h]
  int v68; // [rsp+30h] [rbp-2B0h]
  void *v69; // [rsp+38h] [rbp-2A8h]
  int v70; // [rsp+38h] [rbp-2A8h]
  __int64 v71; // [rsp+38h] [rbp-2A8h]
  __int64 v72; // [rsp+38h] [rbp-2A8h]
  int v73; // [rsp+40h] [rbp-2A0h]
  int v74; // [rsp+40h] [rbp-2A0h]
  size_t v75; // [rsp+40h] [rbp-2A0h]
  unsigned int v76; // [rsp+40h] [rbp-2A0h]
  __int64 v77; // [rsp+48h] [rbp-298h]
  void *v78; // [rsp+48h] [rbp-298h]
  __int64 v79; // [rsp+48h] [rbp-298h]
  _QWORD *v80; // [rsp+48h] [rbp-298h]
  int v81; // [rsp+50h] [rbp-290h]
  __int64 v82; // [rsp+58h] [rbp-288h] BYREF
  __int64 v83; // [rsp+60h] [rbp-280h] BYREF
  int v84[2]; // [rsp+68h] [rbp-278h]
  int v85[2]; // [rsp+70h] [rbp-270h] BYREF
  __int64 v86; // [rsp+78h] [rbp-268h]
  int v87[2]; // [rsp+80h] [rbp-260h] BYREF
  int v88; // [rsp+88h] [rbp-258h]
  int v89; // [rsp+90h] [rbp-250h]
  int v90; // [rsp+98h] [rbp-248h]
  int v91; // [rsp+A0h] [rbp-240h]
  void *v92; // [rsp+A8h] [rbp-238h]
  int v93; // [rsp+B0h] [rbp-230h]
  __int64 v94; // [rsp+B8h] [rbp-228h]
  _BYTE v95[72]; // [rsp+298h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a1 + 24);
  v5 = *(__int64 **)(a1 + 16);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 8;
  v8 = (char *)v5 + v4;
  v9 = 8LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 != v4 )
  {
    for ( result = (__int64)&v5[(unsigned __int64)v9 / 8]; v8 != (char *)result; result += 8 )
    {
      v12 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && v12 == a2 )
          return result;
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v10 != v5; ++v5 )
  {
    result = *v5;
    if ( (unsigned __int64)*v5 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v6 && result == a2 )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  v13 = *(_DWORD *)(a2 + 20);
  v14 = *(_QWORD *)a1;
  *(_QWORD *)v84 = 0;
  v64 = &v83;
  v83 = v14;
  sub_676040(&v83, v13);
  v15 = *(_QWORD *)v84;
  v67 = v83;
  if ( v13 )
  {
    v16 = 0;
    LODWORD(v77) = v13;
    v73 = a2 + 80;
    do
    {
      v17 = *(_QWORD *)a1;
      v18 = sub_15E3D10(
              *(_QWORD *)a1,
              v73 + 8 * ((int)v16 + *(_DWORD *)(a2 + 20)),
              (int)&qword_18D6CD0,
              0,
              0,
              *(_QWORD *)(a2 + 8 * v16 + 80),
              1,
              v50,
              v51,
              v53,
              v55,
              v57,
              v60,
              (int)v64,
              v67,
              (int)v69,
              v73,
              v77,
              v81,
              v82,
              v83,
              v84[0],
              v85[0],
              v86,
              v87[0],
              v88,
              v89,
              v90,
              v91,
              v92,
              v93,
              v94);
      v21 = sub_15DC610(v17, v18, 0, 0, v19, v20, v52, v54, v56, v58, v61, v65, v68, v70, v74, v78);
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v22 = *(_QWORD *)(v15 + 8 * v16);
      if ( v22 )
      {
        if ( (*(_DWORD *)(v22 + 8))-- == 1 )
        {
          v69 = (void *)v21;
          sub_15D7BC0(v67, v22);
          v21 = (__int64)v69;
        }
      }
      *(_QWORD *)(v15 + 8 * v16++) = v21;
    }
    while ( v16 != v77 );
  }
  sub_633760((__int64)v87, *(_QWORD *)a1, 0, (__int64)v95);
  v95[8] = 1;
  *(_QWORD *)v87 = &off_1C4CA80;
  if ( v15 )
    v26 = *(_DWORD *)(v15 - 4);
  else
    v26 = 0;
  sub_157BE40((int)v85, (int)v87, *(_QWORD *)(a2 + 24), v26, v15, v25, v51, v53, v55, v57, v60, (int)v64, v67, v69);
  v27 = sub_15E1B70(*(_QWORD *)a1);
  v79 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  sub_675460(*(__int64 *)v85, v86);
  v28 = *(unsigned int *)(a1 + 24);
  *(_QWORD *)v85 = v79;
  v29 = 2 * v28;
  if ( 3 * (int)v28 < (unsigned int)(4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32))) )
  {
    v62 = 2 * v28;
    v71 = v29;
    v75 = 8LL * v29;
    v42 = (_QWORD *)sub_186B270(v75);
    v43 = v62;
    v80 = v42;
    v30 = v75;
    if ( v62 )
    {
      memset(v42, 0, 8 * v71);
      v30 = v75;
      v43 = v62;
    }
    v44 = *(char **)(a1 + 16);
    v31 = v43 - 1;
    v45 = &v44[8 * *(unsigned int *)(a1 + 24)];
    v32 = (_QWORD *)((char *)v80 + v30);
    if ( v44 != v45 )
    {
      do
      {
        if ( *(_QWORD *)v44 > 1u )
        {
          v46 = v80;
          v47 = 8LL * (*(_DWORD *)(*(_QWORD *)v44 + 12LL) & v31);
          v48 = &v80[(unsigned __int64)v47 / 8];
          if ( v30 == v47 )
          {
LABEL_63:
            v46 = v80;
            if ( v80 == v48 )
            {
LABEL_75:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v49 = v80;
            while ( *v49 )
            {
              if ( v48 == ++v49 )
                goto LABEL_75;
            }
          }
          else
          {
            v49 = &v80[(unsigned __int64)v47 / 8];
            while ( *v49 )
            {
              if ( v32 == ++v49 )
                goto LABEL_63;
            }
          }
          v80 = v46;
          *v49 = *(_QWORD *)v44;
        }
        v44 += 8;
      }
      while ( v45 != v44 );
      v45 = *(char **)(a1 + 16);
    }
    if ( v45 )
    {
      v59 = v43;
      v63 = v32;
      v72 = v30;
      v76 = v43 - 1;
      sub_186B220(v45);
      v43 = v59;
      v32 = v63;
      v30 = v72;
      v31 = v76;
    }
    *(_DWORD *)(a1 + 24) = v43;
    *(_DWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 16) = v80;
  }
  else
  {
    v30 = 8 * v28;
    v31 = v28 - 1;
    v80 = *(_QWORD **)(a1 + 16);
    v32 = &v80[v28];
  }
  v33 = *(_DWORD *)(a2 + 12);
  v34 = 8LL * (v33 & v31);
  v35 = &v80[(unsigned __int64)v34 / 8];
  if ( v34 == v30 )
  {
    v37 = nullptr;
    v39 = v80;
    goto LABEL_44;
  }
  v36 = &v80[(unsigned __int64)v34 / 8];
  v37 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v38 = *v36;
      if ( *v36 <= 1u )
        break;
      if ( *(_DWORD *)(v38 + 12) == v33 && v38 == a2 )
      {
        *v36 = a2;
        goto LABEL_17;
      }
      if ( ++v36 == v32 )
        goto LABEL_43;
    }
    if ( !v38 )
      break;
    v37 = v36++;
    if ( v36 == v32 )
    {
LABEL_43:
      v39 = v80;
LABEL_44:
      if ( v35 == v39 )
      {
LABEL_16:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v40 = v39;
      while ( 1 )
      {
        v41 = *v40;
        if ( *v40 > 1u )
        {
          if ( *(_DWORD *)(v41 + 12) == v33 && v41 == a2 )
          {
            *v40 = a2;
            goto LABEL_17;
          }
        }
        else
        {
          if ( !v41 )
          {
            if ( v37 )
              goto LABEL_73;
            v37 = v40;
            goto LABEL_74;
          }
          v37 = v40;
        }
        if ( v35 == ++v40 )
          goto LABEL_16;
      }
    }
  }
  if ( v37 )
LABEL_73:
    --*(_DWORD *)(a1 + 32);
  else
    v37 = v36;
LABEL_74:
  *v37 = a2;
  ++*(_DWORD *)(a1 + 28);
LABEL_17:
  v24 = *(_QWORD *)(a1 + 8);
  v82 = *(_QWORD *)v85;
  if ( *(_QWORD *)v85 )
    ++*(_DWORD *)(*(_QWORD *)v85 + 8LL);
  sub_6761A0((unsigned int **)(v24 + 24), &v82);
  sub_675460(*(__int64 *)v85, v86);
  *(_QWORD *)v87 = &off_1C4CA80;
  sub_267D20(v87);
  return sub_2334C0(v66);
}

