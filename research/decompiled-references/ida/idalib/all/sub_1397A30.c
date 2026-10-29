__int64 __fastcall sub_1397A30(unsigned int a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r15
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // al
  __int64 v11; // r13
  int v12; // ecx
  int v13; // r14d
  unsigned int v14; // r15d
  unsigned int v15; // ecx
  int v16; // r14d
  unsigned int v17; // ecx
  unsigned int v18; // r13d
  unsigned int i; // r15d
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 result; // rax
  unsigned int v27; // r14d
  __int64 v28; // r13
  unsigned __int64 v29; // r15
  int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // edx
  _QWORD *v34; // rbp
  __int64 v35; // rcx
  int v36; // edx
  _QWORD *v37; // r15
  __int64 v38; // rcx
  int v39; // edx
  int v40; // esi
  unsigned int v41; // ebp
  int v42; // edx
  _QWORD *v43; // r15
  __int64 v44; // rcx
  int v45; // edx
  _QWORD *v46; // r15
  __int64 v47; // rcx
  int v48; // edx
  unsigned int v49; // ecx
  _QWORD *v50; // r13
  __int64 v51; // rax
  _QWORD *v52; // r14
  __int64 v53; // rax
  int v54; // eax
  _QWORD *v55; // r13
  __int64 v56; // rax
  int v57; // eax
  _QWORD *v58; // [rsp+0h] [rbp-48h]
  int v59; // [rsp+0h] [rbp-48h]
  int v60; // [rsp+0h] [rbp-48h]
  int v61; // [rsp+0h] [rbp-48h]
  __int64 v62; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v7 = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(a4 + 8) = 0;
  if ( v7 )
  {
    v8 = 0;
  }
  else
  {
    sub_2237220(a4, a4 + 16, 1, 8);
    v8 = 8LL * *(unsigned int *)(a4 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a4 + v8) = a1;
  v9 = (unsigned int)(*(_DWORD *)(a4 + 8) + 1);
  *(_DWORD *)(a4 + 8) = v9;
  v10 = *a2;
  if ( *a2 )
  {
    do
    {
      v11 = v10;
      ++v4;
      if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
      {
        sub_2237220(a4, a4 + 16, v9 + 1, 8);
        *(_QWORD *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)) = v11;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)a4 + 8 * v9) = v10;
      }
      v9 = (unsigned int)(*(_DWORD *)(a4 + 8) + 1);
      *(_DWORD *)(a4 + 8) = v9;
      v10 = *v4;
    }
    while ( *v4 );
  }
  v12 = *(_DWORD *)(a3 + 48);
  v13 = *(_DWORD *)(a3 + 56);
  v14 = (3 << v12) | *(_DWORD *)(a3 + 52);
  v15 = v13 + v12;
  *(_DWORD *)(a3 + 52) = v14;
  if ( v15 > 0x1F )
  {
    v55 = *(_QWORD **)(a3 + 24);
    v56 = v55[1];
    if ( (unsigned __int64)(v56 + 4) > v55[2] )
    {
      sub_2236E10(*(_QWORD *)(a3 + 24), v55 + 3, v56 + 4, 1);
      v56 = v55[1];
    }
    *(_DWORD *)(*v55 + v56) = v14;
    v57 = *(_DWORD *)(a3 + 48);
    v14 = 0;
    v55[1] += 4LL;
    if ( v57 )
      v14 = 3u >> (32 - v57);
    v15 = ((_BYTE)v13 + (_BYTE)v57) & 0x1F;
  }
  *(_DWORD *)(a3 + 48) = v15;
  v16 = 3 << v15;
  v17 = v15 + 6;
  v18 = v14 | v16;
  *(_DWORD *)(a3 + 52) = v14 | v16;
  if ( v17 > 0x1F )
  {
    v52 = *(_QWORD **)(a3 + 24);
    v53 = v52[1];
    if ( (unsigned __int64)(v53 + 4) > v52[2] )
    {
      sub_2236E10(*(_QWORD *)(a3 + 24), v52 + 3, v53 + 4, 1);
      v53 = v52[1];
    }
    *(_DWORD *)(*v52 + v53) = v18;
    v54 = *(_DWORD *)(a3 + 48);
    v18 = 0;
    v52[1] += 4LL;
    if ( v54 )
      v18 = 3u >> (32 - v54);
    *(_DWORD *)(a3 + 52) = v18;
    v17 = ((_BYTE)v54 + 6) & 0x1F;
  }
  *(_DWORD *)(a3 + 48) = v17;
  for ( i = v9; i > 0x1F; *(_DWORD *)(a3 + 48) = v17 )
  {
    v21 = (i & 0x1F | 0x20) << v17;
    v17 += 6;
    v18 |= v21;
    *(_DWORD *)(a3 + 52) = v18;
    if ( v17 > 0x1F )
    {
      v22 = *(_QWORD **)(a3 + 24);
      v23 = v22[1];
      if ( (unsigned __int64)(v23 + 4) > v22[2] )
      {
        v58 = *(_QWORD **)(a3 + 24);
        sub_2236E10(v58, v22 + 3, v23 + 4, 1);
        v22 = v58;
        v23 = v58[1];
      }
      *(_DWORD *)(*v22 + v23) = v18;
      v18 = 0;
      v22[1] += 4LL;
      v20 = *(_DWORD *)(a3 + 48);
      if ( v20 )
        v18 = (i & 0x1F | 0x20) >> (32 - v20);
      v17 = ((_BYTE)v20 + 6) & 0x1F;
      *(_DWORD *)(a3 + 52) = v18;
    }
    i >>= 5;
  }
  v24 = i << v17;
  v25 = v17 + 6;
  result = v18 | v24;
  v27 = result;
  *(_DWORD *)(a3 + 52) = result;
  if ( v25 > 0x1F )
  {
    v50 = *(_QWORD **)(a3 + 24);
    v51 = v50[1];
    if ( (unsigned __int64)(v51 + 4) > v50[2] )
    {
      sub_2236E10(*(_QWORD *)(a3 + 24), v50 + 3, v51 + 4, 1);
      v51 = v50[1];
    }
    *(_DWORD *)(*v50 + v51) = v27;
    result = *(unsigned int *)(a3 + 48);
    v27 = 0;
    v50[1] += 4LL;
    if ( (_DWORD)result )
      v27 = i >> (32 - result);
    *(_DWORD *)(a3 + 52) = v27;
    v25 = ((_BYTE)result + 6) & 0x1F;
  }
  *(_DWORD *)(a3 + 48) = v25;
  if ( (_DWORD)v9 )
  {
    v28 = 0;
    v62 = 8LL * (unsigned int)(v9 - 1) + 8;
    do
    {
      v29 = *(_QWORD *)(*(_QWORD *)a4 + v28);
      result = (unsigned int)v29;
      if ( v29 == (unsigned int)v29 )
      {
        if ( (unsigned int)v29 > 0x1F )
        {
          do
          {
            v41 = result & 0x1F | 0x20;
            v42 = v41 << v25;
            v25 += 6;
            v27 |= v42;
            *(_DWORD *)(a3 + 52) = v27;
            if ( v25 > 0x1F )
            {
              v43 = *(_QWORD **)(a3 + 24);
              v44 = v43[1];
              if ( (unsigned __int64)(v44 + 4) > v43[2] )
              {
                v60 = result;
                sub_2236E10(*(_QWORD *)(a3 + 24), v43 + 3, v44 + 4, 1);
                v44 = v43[1];
                LODWORD(result) = v60;
              }
              *(_DWORD *)(*v43 + v44) = v27;
              v40 = *(_DWORD *)(a3 + 48);
              v43[1] += 4LL;
              v27 = 0;
              if ( v40 )
                v27 = v41 >> (32 - v40);
              v25 = ((_BYTE)v40 + 6) & 0x1F;
              *(_DWORD *)(a3 + 52) = v27;
            }
            result = (unsigned int)result >> 5;
            *(_DWORD *)(a3 + 48) = v25;
          }
          while ( (unsigned int)result > 0x1F );
        }
        v45 = (_DWORD)result << v25;
        v25 += 6;
        v27 |= v45;
        *(_DWORD *)(a3 + 52) = v27;
        if ( v25 > 0x1F )
        {
          v46 = *(_QWORD **)(a3 + 24);
          v47 = v46[1];
          if ( (unsigned __int64)(v47 + 4) > v46[2] )
          {
            v61 = result;
            sub_2236E10(*(_QWORD *)(a3 + 24), v46 + 3, v47 + 4, 1);
            v47 = v46[1];
            LODWORD(result) = v61;
          }
          *(_DWORD *)(*v46 + v47) = v27;
          v48 = *(_DWORD *)(a3 + 48);
          v46[1] += 4LL;
          result = (unsigned int)result >> (32 - v48);
          v49 = 0;
          if ( v48 )
            v49 = result;
          v27 = v49;
          *(_DWORD *)(a3 + 52) = v49;
          v25 = ((_BYTE)v48 + 6) & 0x1F;
          *(_DWORD *)(a3 + 48) = v25;
          goto LABEL_39;
        }
      }
      else
      {
        if ( v29 > 0x1F )
        {
          do
          {
            v32 = v29 & 0x1F | 0x20;
            v33 = v32 << v25;
            v25 += 6;
            v27 |= v33;
            *(_DWORD *)(a3 + 52) = v27;
            if ( v25 > 0x1F )
            {
              v34 = *(_QWORD **)(a3 + 24);
              v35 = v34[1];
              if ( (unsigned __int64)(v35 + 4) > v34[2] )
              {
                sub_2236E10(*(_QWORD *)(a3 + 24), v34 + 3, v35 + 4, 1);
                v35 = v34[1];
                v32 = v29 & 0x1F | 0x20;
              }
              *(_DWORD *)(*v34 + v35) = v27;
              v30 = *(_DWORD *)(a3 + 48);
              v27 = 0;
              v34[1] += 4LL;
              v31 = v32 >> (32 - v30);
              if ( v30 )
                v27 = v31;
              v25 = ((_BYTE)v30 + 6) & 0x1F;
              *(_DWORD *)(a3 + 52) = v27;
            }
            v29 >>= 5;
            *(_DWORD *)(a3 + 48) = v25;
          }
          while ( v29 > 0x1F );
          result = (unsigned int)v29;
        }
        v36 = (_DWORD)result << v25;
        v25 += 6;
        v27 |= v36;
        *(_DWORD *)(a3 + 52) = v27;
        if ( v25 > 0x1F )
        {
          v37 = *(_QWORD **)(a3 + 24);
          v38 = v37[1];
          if ( (unsigned __int64)(v38 + 4) > v37[2] )
          {
            v59 = result;
            sub_2236E10(*(_QWORD *)(a3 + 24), v37 + 3, v38 + 4, 1);
            v38 = v37[1];
            LODWORD(result) = v59;
          }
          *(_DWORD *)(*v37 + v38) = v27;
          v39 = *(_DWORD *)(a3 + 48);
          v27 = 0;
          v37[1] += 4LL;
          result = (unsigned int)result >> (32 - v39);
          if ( v39 )
            v27 = result;
          v25 = ((_BYTE)v39 + 6) & 0x1F;
          *(_DWORD *)(a3 + 52) = v27;
        }
      }
      *(_DWORD *)(a3 + 48) = v25;
LABEL_39:
      v28 += 8;
    }
    while ( v62 != v28 );
  }
  return result;
}
