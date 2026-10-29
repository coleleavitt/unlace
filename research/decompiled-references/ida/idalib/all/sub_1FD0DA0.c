__int64 __fastcall sub_1FD0DA0(unsigned int a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r15
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r12
  char v10; // al
  __int64 v11; // r13
  int v12; // ecx
  int v13; // r14d
  unsigned int v14; // ecx
  unsigned int v15; // r13d
  unsigned int i; // r15d
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 result; // rax
  unsigned int v24; // r14d
  __int64 v25; // r13
  unsigned __int64 v26; // r15
  int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // edx
  _QWORD *v31; // r12
  __int64 v32; // rcx
  int v33; // edx
  _QWORD *v34; // r15
  __int64 v35; // rcx
  int v36; // edx
  int v37; // esi
  unsigned int v38; // r12d
  int v39; // edx
  _QWORD *v40; // r15
  __int64 v41; // rcx
  int v42; // edx
  _QWORD *v43; // r15
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // ecx
  _QWORD *v47; // r13
  __int64 v48; // rax
  _QWORD *v49; // r14
  __int64 v50; // rax
  int v51; // eax
  _QWORD *v52; // [rsp+0h] [rbp-48h]
  int v53; // [rsp+0h] [rbp-48h]
  int v54; // [rsp+0h] [rbp-48h]
  int v55; // [rsp+0h] [rbp-48h]
  __int64 v56; // [rsp+8h] [rbp-40h]

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
  sub_A1FEC0(a3, 3u, *(_DWORD *)(a3 + 56));
  v12 = *(_DWORD *)(a3 + 48);
  v13 = 3 << v12;
  v14 = v12 + 6;
  v15 = *(_DWORD *)(a3 + 52) | v13;
  *(_DWORD *)(a3 + 52) = v15;
  if ( v14 > 0x1F )
  {
    v49 = *(_QWORD **)(a3 + 24);
    v50 = v49[1];
    if ( (unsigned __int64)(v50 + 4) > v49[2] )
    {
      sub_2236E10(*(_QWORD *)(a3 + 24), v49 + 3, v50 + 4, 1);
      v50 = v49[1];
    }
    *(_DWORD *)(*v49 + v50) = v15;
    v51 = *(_DWORD *)(a3 + 48);
    v15 = 0;
    v49[1] += 4LL;
    if ( v51 )
      v15 = 3u >> (32 - v51);
    *(_DWORD *)(a3 + 52) = v15;
    v14 = ((_BYTE)v51 + 6) & 0x1F;
  }
  *(_DWORD *)(a3 + 48) = v14;
  for ( i = v9; i > 0x1F; *(_DWORD *)(a3 + 48) = v14 )
  {
    v18 = (i & 0x1F | 0x20) << v14;
    v14 += 6;
    v15 |= v18;
    *(_DWORD *)(a3 + 52) = v15;
    if ( v14 > 0x1F )
    {
      v19 = *(_QWORD **)(a3 + 24);
      v20 = v19[1];
      if ( (unsigned __int64)(v20 + 4) > v19[2] )
      {
        v52 = *(_QWORD **)(a3 + 24);
        sub_2236E10(v52, v19 + 3, v20 + 4, 1);
        v19 = v52;
        v20 = v52[1];
      }
      *(_DWORD *)(*v19 + v20) = v15;
      v15 = 0;
      v19[1] += 4LL;
      v17 = *(_DWORD *)(a3 + 48);
      if ( v17 )
        v15 = (i & 0x1F | 0x20) >> (32 - v17);
      v14 = ((_BYTE)v17 + 6) & 0x1F;
      *(_DWORD *)(a3 + 52) = v15;
    }
    i >>= 5;
  }
  v21 = i << v14;
  v22 = v14 + 6;
  result = v15 | v21;
  v24 = result;
  *(_DWORD *)(a3 + 52) = result;
  if ( v22 > 0x1F )
  {
    v47 = *(_QWORD **)(a3 + 24);
    v48 = v47[1];
    if ( (unsigned __int64)(v48 + 4) > v47[2] )
    {
      sub_2236E10(*(_QWORD *)(a3 + 24), v47 + 3, v48 + 4, 1);
      v48 = v47[1];
    }
    *(_DWORD *)(*v47 + v48) = v24;
    result = *(unsigned int *)(a3 + 48);
    v24 = 0;
    v47[1] += 4LL;
    if ( (_DWORD)result )
      v24 = i >> (32 - result);
    *(_DWORD *)(a3 + 52) = v24;
    v22 = ((_BYTE)result + 6) & 0x1F;
  }
  *(_DWORD *)(a3 + 48) = v22;
  if ( (_DWORD)v9 )
  {
    v25 = 0;
    v56 = 8LL * (unsigned int)(v9 - 1) + 8;
    do
    {
      v26 = *(_QWORD *)(*(_QWORD *)a4 + v25);
      result = (unsigned int)v26;
      if ( v26 == (unsigned int)v26 )
      {
        if ( (unsigned int)v26 > 0x1F )
        {
          do
          {
            v38 = result & 0x1F | 0x20;
            v39 = v38 << v22;
            v22 += 6;
            v24 |= v39;
            *(_DWORD *)(a3 + 52) = v24;
            if ( v22 > 0x1F )
            {
              v40 = *(_QWORD **)(a3 + 24);
              v41 = v40[1];
              if ( (unsigned __int64)(v41 + 4) > v40[2] )
              {
                v54 = result;
                sub_2236E10(*(_QWORD *)(a3 + 24), v40 + 3, v41 + 4, 1);
                v41 = v40[1];
                LODWORD(result) = v54;
              }
              *(_DWORD *)(*v40 + v41) = v24;
              v37 = *(_DWORD *)(a3 + 48);
              v40[1] += 4LL;
              v24 = 0;
              if ( v37 )
                v24 = v38 >> (32 - v37);
              v22 = ((_BYTE)v37 + 6) & 0x1F;
              *(_DWORD *)(a3 + 52) = v24;
            }
            result = (unsigned int)result >> 5;
            *(_DWORD *)(a3 + 48) = v22;
          }
          while ( (unsigned int)result > 0x1F );
        }
        v42 = (_DWORD)result << v22;
        v22 += 6;
        v24 |= v42;
        *(_DWORD *)(a3 + 52) = v24;
        if ( v22 > 0x1F )
        {
          v43 = *(_QWORD **)(a3 + 24);
          v44 = v43[1];
          if ( (unsigned __int64)(v44 + 4) > v43[2] )
          {
            v55 = result;
            sub_2236E10(*(_QWORD *)(a3 + 24), v43 + 3, v44 + 4, 1);
            v44 = v43[1];
            LODWORD(result) = v55;
          }
          *(_DWORD *)(*v43 + v44) = v24;
          v45 = *(_DWORD *)(a3 + 48);
          v43[1] += 4LL;
          result = (unsigned int)result >> (32 - v45);
          v46 = 0;
          if ( v45 )
            v46 = result;
          v24 = v46;
          *(_DWORD *)(a3 + 52) = v46;
          v22 = ((_BYTE)v45 + 6) & 0x1F;
          *(_DWORD *)(a3 + 48) = v22;
          goto LABEL_38;
        }
      }
      else
      {
        if ( v26 > 0x1F )
        {
          do
          {
            v29 = v26 & 0x1F | 0x20;
            v30 = v29 << v22;
            v22 += 6;
            v24 |= v30;
            *(_DWORD *)(a3 + 52) = v24;
            if ( v22 > 0x1F )
            {
              v31 = *(_QWORD **)(a3 + 24);
              v32 = v31[1];
              if ( (unsigned __int64)(v32 + 4) > v31[2] )
              {
                sub_2236E10(*(_QWORD *)(a3 + 24), v31 + 3, v32 + 4, 1);
                v32 = v31[1];
                v29 = v26 & 0x1F | 0x20;
              }
              *(_DWORD *)(*v31 + v32) = v24;
              v27 = *(_DWORD *)(a3 + 48);
              v24 = 0;
              v31[1] += 4LL;
              v28 = v29 >> (32 - v27);
              if ( v27 )
                v24 = v28;
              v22 = ((_BYTE)v27 + 6) & 0x1F;
              *(_DWORD *)(a3 + 52) = v24;
            }
            v26 >>= 5;
            *(_DWORD *)(a3 + 48) = v22;
          }
          while ( v26 > 0x1F );
          result = (unsigned int)v26;
        }
        v33 = (_DWORD)result << v22;
        v22 += 6;
        v24 |= v33;
        *(_DWORD *)(a3 + 52) = v24;
        if ( v22 > 0x1F )
        {
          v34 = *(_QWORD **)(a3 + 24);
          v35 = v34[1];
          if ( (unsigned __int64)(v35 + 4) > v34[2] )
          {
            v53 = result;
            sub_2236E10(*(_QWORD *)(a3 + 24), v34 + 3, v35 + 4, 1);
            v35 = v34[1];
            LODWORD(result) = v53;
          }
          *(_DWORD *)(*v34 + v35) = v24;
          v36 = *(_DWORD *)(a3 + 48);
          v24 = 0;
          v34[1] += 4LL;
          result = (unsigned int)result >> (32 - v36);
          if ( v36 )
            v24 = result;
          v22 = ((_BYTE)v36 + 6) & 0x1F;
          *(_DWORD *)(a3 + 52) = v24;
        }
      }
      *(_DWORD *)(a3 + 48) = v22;
LABEL_38:
      v25 += 8;
    }
    while ( v56 != v25 );
  }
  return result;
}
