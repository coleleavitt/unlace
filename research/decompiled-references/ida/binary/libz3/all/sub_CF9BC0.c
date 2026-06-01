__int64 __fastcall sub_CF9BC0(_QWORD *a1, int a2, int a3, int a4, unsigned int a5, __int64 *a6)
{
  __int64 v6; // rax
  __int64 *v7; // r11
  __int64 v9; // r15
  int v10; // ebp
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // ecx
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v23; // r10
  __int64 *v24; // rdx
  unsigned int v25; // r14d
  __int64 *v26; // rdi
  __int64 v27; // r14
  __int64 *v28; // r8
  __int64 *v29; // rax
  __int64 v30; // r10
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // r8
  _QWORD *v34; // r10
  __int64 *v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r15
  unsigned int v38; // ecx
  _QWORD *v39; // r12
  __int64 v40; // rax
  __int64 v41; // r14
  char *v42; // rax
  char *v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rsi
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rdi
  __int64 v54; // rdi
  unsigned __int64 v55; // rax
  __int64 v56; // rsi
  unsigned int v57; // [rsp+8h] [rbp-100h]
  __int64 v58; // [rsp+8h] [rbp-100h]
  _QWORD *v59; // [rsp+8h] [rbp-100h]
  _QWORD *v60; // [rsp+8h] [rbp-100h]
  _QWORD *v62; // [rsp+10h] [rbp-F8h]
  __int64 *v64; // [rsp+18h] [rbp-F0h]
  __int64 v65; // [rsp+38h] [rbp-D0h] BYREF
  void *v66; // [rsp+40h] [rbp-C8h]
  __int64 v67; // [rsp+48h] [rbp-C0h]
  _BYTE v68[184]; // [rsp+50h] [rbp-B8h] BYREF

  if ( !a5 )
    return 0;
  v6 = a1[1];
  v7 = a6;
  v9 = a1[2];
  v10 = 0;
  v11 = *(__int64 **)v6;
  v12 = *(unsigned int *)(v6 + 8);
  v57 = v12 - 1;
  v13 = &v11[v12];
  v14 = 8 * v12;
LABEL_3:
  while ( 2 )
  {
    v15 = *v7;
    v16 = *(_DWORD *)(*v7 + 12);
    v17 = 8LL * (v16 & v57);
    v18 = &v11[(unsigned __int64)v17 / 8];
    if ( v17 == v14 )
    {
LABEL_39:
      if ( v11 == v18 )
      {
LABEL_10:
        ++v10;
        ++v7;
        if ( a5 == v10 )
          return 0;
        continue;
      }
      v46 = v11;
      while ( 1 )
      {
        v47 = *v46;
        if ( (unsigned __int64)*v46 > 1 )
        {
          if ( *(_DWORD *)(v47 + 12) == v16 && v15 == v47 )
            goto LABEL_13;
        }
        else if ( !v47 )
        {
          ++v10;
          ++v7;
          if ( a5 == v10 )
            return 0;
          goto LABEL_3;
        }
        if ( v18 == ++v46 )
          goto LABEL_10;
      }
    }
    break;
  }
  v19 = &v11[(unsigned __int64)v17 / 8];
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned __int64)*v19 > 1 )
      break;
    if ( !v20 )
      goto LABEL_10;
LABEL_7:
    if ( v13 == ++v19 )
      goto LABEL_39;
  }
  if ( *(_DWORD *)(v20 + 12) != v16 || v15 != v20 )
    goto LABEL_7;
LABEL_13:
  v23 = *(unsigned int *)(v9 + 8);
  v24 = *(__int64 **)v9;
  v25 = v23 - 1;
  v23 *= 8;
  v26 = (__int64 *)(*(_QWORD *)v9 + v23);
  v27 = 8LL * (v16 & v25);
  v28 = (__int64 *)(*(_QWORD *)v9 + v27);
  v29 = v28;
  if ( v27 != v23 )
  {
    do
    {
      v30 = *v29;
      if ( (unsigned __int64)*v29 > 1 )
      {
        if ( *(_DWORD *)(v30 + 12) == v16 && v15 == v30 )
          goto LABEL_10;
      }
      else if ( !v30 )
      {
        goto LABEL_20;
      }
      ++v29;
    }
    while ( v26 != v29 );
  }
  for ( ; v28 != v24; ++v24 )
  {
    v48 = *v24;
    if ( (unsigned __int64)*v24 > 1 )
    {
      if ( *(_DWORD *)(v48 + 12) == v16 && v15 == v48 )
        goto LABEL_10;
    }
    else if ( !v48 )
    {
      break;
    }
  }
LABEL_20:
  v31 = sub_15E1AF0(a1[4]);
  v32 = sub_CF9350(a1, v31, &v65);
  v34 = a1;
  v35 = a6;
  if ( !v32 || !a1[3] )
    return v65;
  v36 = a5;
  v37 = 0;
  v38 = 0;
  v66 = v68;
  v67 = 0x1000000000LL;
  do
  {
    if ( v10 != (_DWORD)v37 )
    {
      if ( v38 < HIDWORD(v67) )
      {
        v39 = v66;
      }
      else
      {
        v64 = v35;
        v41 = (unsigned int)(2 * HIDWORD(v67));
        v62 = v34;
        v58 = v36;
        v42 = (char *)sub_186B270(8 * v41);
        v38 = v67;
        v43 = (char *)v66;
        v39 = v42;
        v36 = v58;
        v34 = v62;
        v35 = v64;
        if ( (_DWORD)v67 )
        {
          if ( (unsigned int)(v67 - 1) <= 2 || v42 == (char *)v66 + 8 )
          {
            v55 = 0;
            v56 = 8LL * (unsigned int)v67;
            do
            {
              v33 = *(_QWORD *)&v43[v55];
              v39[v55 / 8] = v33;
              v55 += 8LL;
            }
            while ( v55 != v56 );
          }
          else
          {
            v44 = 0;
            v45 = 16LL * ((unsigned int)v67 >> 1);
            do
            {
              *(__m128i *)&v39[v44 / 8] = _mm_loadu_si128((const __m128i *)&v43[v44]);
              v44 += 16LL;
            }
            while ( v44 != v45 );
            if ( (v38 & 1) != 0 )
              v39[v38 & 0xFFFFFFFE] = *(_QWORD *)&v43[8 * (v38 & 0xFFFFFFFE)];
          }
        }
        if ( v43 != v68 && v43 )
        {
          sub_186B220(v43);
          v38 = v67;
          v35 = v64;
          v34 = v62;
          v36 = v58;
        }
        v66 = v39;
        HIDWORD(v67) = v41;
      }
      v40 = v38++;
      v39[v40] = v35[v37];
      LODWORD(v67) = v38;
    }
    ++v37;
  }
  while ( v37 != v36 );
  if ( v38 )
  {
    if ( v38 != 1 )
    {
      v60 = v34;
      sub_15E1AF0(v34[4]);
      v34 = v60;
    }
    v21 = v65;
    v59 = v34;
    v49 = sub_15E1B70(v34[4]);
    v53 = v59[3];
    if ( v53 )
      sub_13333D0(v53, *(_QWORD *)(v15 + 16), v49, v50, v51, v52);
  }
  else
  {
    v54 = v34[3];
    v21 = v65;
    if ( v54 )
      sub_13333D0(v54, *(_QWORD *)(v15 + 16), v65, 0, v33, (_DWORD)v35);
  }
  if ( v66 && v66 != v68 )
    sub_186B220(v66);
  return v21;
}

