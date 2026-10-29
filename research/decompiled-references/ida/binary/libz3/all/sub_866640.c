__int64 __fastcall sub_866640(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // edx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edi
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  int v15; // edi
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r10
  int v19; // ecx
  __int64 result; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // r11
  int *v27; // rcx
  int v28; // ebp
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // r12
  unsigned int v32; // r11d
  unsigned int v33; // r9d
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // r11
  int *v37; // rcx
  int v38; // ebp
  unsigned int v39; // r8d
  int v40; // edi
  unsigned int v41; // edx
  unsigned int v42; // eax
  int v43; // edi
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // r8d
  unsigned int v47; // eax
  unsigned int ***v48; // rdi
  __int64 v49; // r8
  unsigned int v50; // r9d
  int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // eax
  int v57; // r9d
  __int64 v58; // r12
  unsigned int v59; // r11d
  unsigned int v60; // r9d
  int v61; // eax
  unsigned int v62; // ebp
  _QWORD *v63; // rax
  _QWORD *v64; // r12
  _QWORD *v65; // rdx
  _DWORD *v66; // rdi
  _DWORD *v67; // rbp
  unsigned int v68; // r14d
  __int64 v69; // r13
  _DWORD *v70; // r15
  char *v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 24LL * *(unsigned int *)(a1 + 16);
  v3 = v2 + *(_QWORD *)(*(_QWORD *)v1 + 440LL);
  v4 = *(_DWORD *)v3;
  v5 = *(_QWORD *)(v3 + 16);
  v6 = ***(_DWORD ***)(v3 + 8);
  if ( *(_DWORD *)v3 == 1 )
  {
    v39 = ***(_DWORD ***)(v5 + 184);
    v40 = (v6 - 1 - v39) ^ (v39 >> 13);
    v41 = (1 - v39 - v40) ^ (v40 << 8);
    v42 = (v39 - v40 - v41) ^ (v41 >> 13);
    v43 = (v40 - v41 - v42) ^ (v42 >> 12);
    v44 = (v41 - v42 - v43) ^ (v43 << 16);
    v45 = (v42 - v43 - v44) ^ (v44 >> 5);
    v46 = (v43 - v44 - v45) ^ (v45 >> 3);
    v16 = (v45 - v46 - ((v46 << 10) ^ (v44 - v45 - v46))) ^ (((v46 << 10) ^ (v44 - v45 - v46)) >> 15);
    v47 = *(_DWORD *)(v5 + 152);
    if ( v47 > 2 )
    {
      v48 = (unsigned int ***)(v5 + 192);
      v49 = v5 + 8LL * (v47 - 3) + 200;
      do
      {
        v50 = ***v48;
        v51 = -v50 ^ (v50 >> 13);
        v52 = (v51 << 8) ^ (v16 - (v50 + v51));
        v53 = (v50 - v51 - v52) ^ (v52 >> 13);
        v54 = (v51 - v52 - v53) ^ (v53 >> 12);
        v55 = (v52 - v53 - v54) ^ (v54 << 16);
        v56 = (v53 - v54 - v55) ^ (v55 >> 5);
        v57 = (v54 - v55 - v56) ^ (v56 >> 3);
        ++v48;
        v16 = (v56 - v57 - ((v57 << 10) ^ (v55 - v56 - v57))) ^ (((v57 << 10) ^ (v55 - v56 - v57)) >> 15);
      }
      while ( v48 != (unsigned int ***)v49 );
    }
  }
  else
  {
    if ( v5 )
    {
      v7 = **(_DWORD **)v5;
      v8 = v7 >> 13;
    }
    else
    {
      v8 = 0;
      v7 = 1;
    }
    v9 = v8 ^ (v6 - v4 - v7);
    v10 = (v4 - v7 - v9) ^ (v9 << 8);
    v11 = (v7 - v9 - v10) ^ (v10 >> 13);
    v12 = (v9 - v10 - v11) ^ (v11 >> 12);
    v13 = (v10 - v11 - v12) ^ (v12 << 16);
    v14 = (v11 - v12 - v13) ^ (v13 >> 5);
    v15 = (v12 - v13 - v14) ^ (v14 >> 3);
    v16 = (v14 - v15 - ((v15 << 10) ^ (v13 - v14 - v15))) ^ (((v15 << 10) ^ (v13 - v14 - v15)) >> 15);
  }
  v17 = *(unsigned int *)(v1 + 24);
  v18 = *(_QWORD *)(v1 + 16);
  v19 = v17 - 1;
  result = 12 * v17;
  v21 = v18 + result;
  v22 = 12LL * (v16 & v19);
  v23 = v18 + v22;
  if ( v22 != result )
  {
    result = v18 + v22;
    do
    {
      v24 = *(_DWORD *)(result + 4);
      if ( v24 == 2 )
      {
        if ( *(_DWORD *)result == v16 )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 440LL);
          v26 = v25 + 24LL * *(unsigned int *)(result + 8);
          v27 = (int *)(v2 + v25);
          v28 = *v27;
          if ( *(_DWORD *)v26 == 1 )
          {
            if ( v28 == 1 && *(_QWORD *)(v26 + 8) == *((_QWORD *)v27 + 1) )
            {
              v31 = *(_QWORD *)(v26 + 16);
              v32 = *(_DWORD *)(v31 + 152);
              do
              {
                v33 = v32--;
                if ( v33 <= 1 )
                  goto LABEL_15;
              }
              while ( *(_QWORD *)(v31 + 8LL * v32 + 176) == *(_QWORD *)(*((_QWORD *)v27 + 2) + 8LL * v32 + 176) );
            }
          }
          else if ( *(_DWORD *)v26 == v28
                 && *(_QWORD *)(v26 + 8) == *((_QWORD *)v27 + 1)
                 && *(_QWORD *)(v26 + 16) == *((_QWORD *)v27 + 2) )
          {
            goto LABEL_15;
          }
        }
      }
      else if ( !v24 )
      {
        return result;
      }
      result += 12;
    }
    while ( v21 != result );
  }
  if ( v18 == v23 )
    return result;
  result = *(_QWORD *)(v1 + 16);
  while ( 1 )
  {
    v34 = *(_DWORD *)(result + 4);
    if ( v34 != 2 )
    {
      if ( !v34 )
        return result;
      goto LABEL_29;
    }
    if ( *(_DWORD *)result == v16 )
      break;
LABEL_29:
    result += 12;
    if ( v23 == result )
      return result;
  }
  v35 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 440LL);
  v36 = v35 + 24LL * *(unsigned int *)(result + 8);
  v37 = (int *)(v2 + v35);
  v38 = *v37;
  if ( *(_DWORD *)v36 != 1 )
  {
    if ( *(_DWORD *)v36 == v38
      && *(_QWORD *)(v36 + 8) == *((_QWORD *)v37 + 1)
      && *(_QWORD *)(v36 + 16) == *((_QWORD *)v37 + 2) )
    {
      goto LABEL_15;
    }
    goto LABEL_29;
  }
  if ( v38 != 1 || *(_QWORD *)(v36 + 8) != *((_QWORD *)v37 + 1) )
    goto LABEL_29;
  v58 = *(_QWORD *)(v36 + 16);
  v59 = *(_DWORD *)(v58 + 152);
  while ( 1 )
  {
    v60 = v59--;
    if ( v60 <= 1 )
      break;
    if ( *(_QWORD *)(v58 + 8LL * v59 + 176) != *(_QWORD *)(*((_QWORD *)v37 + 2) + 8LL * v59 + 176) )
      goto LABEL_29;
  }
LABEL_15:
  v29 = result + 12;
  if ( v21 == result + 12 )
    v29 = *(_QWORD *)(v1 + 16);
  v30 = *(_DWORD *)(v1 + 28) - 1;
  if ( !*(_DWORD *)(v29 + 4) )
  {
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(v1 + 28) = v30;
    return result;
  }
  *(_DWORD *)(result + 4) = 1;
  v61 = *(_DWORD *)(v1 + 32);
  *(_DWORD *)(v1 + 28) = v30;
  result = (unsigned int)(v61 + 1);
  if ( v30 < 0x40 )
    v30 = 64;
  *(_DWORD *)(v1 + 32) = result;
  if ( v30 < (unsigned int)result )
  {
    result = sub_186AF10(v21);
    if ( !(_BYTE)result )
    {
      v62 = *(_DWORD *)(v1 + 24);
      v63 = (_QWORD *)sub_186B270(12LL * v62);
      v64 = v63;
      if ( v62 )
      {
        if ( v62 == 1 )
          goto LABEL_58;
        v65 = &v63[3 * (v62 >> 1)];
        do
        {
          *v63 = 0;
          v63 += 3;
          *(_QWORD *)((char *)v63 - 12) = 0;
        }
        while ( v65 != v63 );
        if ( (v62 & 1) != 0 )
        {
          v63 = (_QWORD *)((char *)v64 + 12 * (v62 & 0xFFFFFFFE));
LABEL_58:
          *v63 = 0;
        }
      }
      result = *(unsigned int *)(v1 + 24);
      v66 = *(_DWORD **)(v1 + 16);
      v67 = v66;
      v68 = result - 1;
      v69 = 12 * result;
      v70 = &v66[3 * result];
      v71 = (char *)v64 + 12 * result;
      if ( v66 != v70 )
      {
        do
        {
          if ( v67[1] == 2 )
          {
            v72 = 12LL * (*v67 & v68);
            v73 = (_QWORD *)((char *)v64 + v72);
            if ( v69 == v72 )
            {
LABEL_72:
              if ( v64 == v73 )
              {
LABEL_77:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              result = (__int64)v64;
              while ( *(_DWORD *)(result + 4) )
              {
                result += 12;
                if ( v73 == (_QWORD *)result )
                  goto LABEL_77;
              }
            }
            else
            {
              result = (__int64)v64 + v72;
              while ( *(_DWORD *)(result + 4) )
              {
                result += 12;
                if ( v71 == (char *)result )
                  goto LABEL_72;
              }
            }
            *(_QWORD *)result = *(_QWORD *)v67;
            *(_DWORD *)(result + 8) = v67[2];
          }
          v67 += 3;
        }
        while ( v70 != v67 );
        v66 = *(_DWORD **)(v1 + 16);
      }
      if ( v66 )
        result = sub_186B220(v66);
      *(_QWORD *)(v1 + 16) = v64;
      *(_DWORD *)(v1 + 32) = 0;
    }
  }
  return result;
}

