__int64 __fastcall sub_1398010(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // ecx
  int v5; // r13d
  unsigned int v6; // r12d
  int v7; // r14d
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  int v10; // r13d
  unsigned int v11; // ecx
  unsigned int v12; // r13d
  unsigned int i; // r15d
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 result; // rax
  unsigned int v21; // r14d
  __int64 v22; // r13
  unsigned __int64 v23; // r15
  int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // edx
  _QWORD *v28; // r12
  __int64 v29; // rcx
  int v30; // edx
  _QWORD *v31; // r15
  __int64 v32; // rcx
  int v33; // edx
  int v34; // esi
  unsigned int v35; // r12d
  int v36; // edx
  _QWORD *v37; // r15
  __int64 v38; // rcx
  int v39; // edx
  _QWORD *v40; // r15
  __int64 v41; // rcx
  int v42; // edx
  unsigned int v43; // ecx
  _QWORD *v44; // r13
  __int64 v45; // rax
  _QWORD *v46; // r14
  __int64 v47; // rax
  int v48; // eax
  _QWORD *v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  _QWORD *v52; // [rsp+0h] [rbp-48h]
  int v53; // [rsp+0h] [rbp-48h]
  int v54; // [rsp+0h] [rbp-48h]
  _QWORD *v55; // [rsp+0h] [rbp-48h]
  int v56; // [rsp+0h] [rbp-48h]
  __int64 v57; // [rsp+8h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = 3 << v4;
  v8 = v5 + v4;
  v9 = *(_DWORD *)(a1 + 52) | v7;
  *(_DWORD *)(a1 + 52) = v9;
  if ( v8 > 0x1F )
  {
    v49 = *(_QWORD **)(a1 + 24);
    v50 = v49[1];
    if ( (unsigned __int64)(v50 + 4) > v49[2] )
    {
      v55 = *(_QWORD **)(a1 + 24);
      sub_2236E10(v55, v49 + 3, v50 + 4, 1);
      v49 = v55;
      v50 = v55[1];
    }
    *(_DWORD *)(*v49 + v50) = v9;
    v9 = 0;
    v49[1] += 4LL;
    v51 = *(_DWORD *)(a1 + 48);
    if ( v51 )
      v9 = 3u >> (32 - v51);
    v8 = ((_BYTE)v5 + (_BYTE)v51) & 0x1F;
  }
  *(_DWORD *)(a1 + 48) = v8;
  v10 = a2 << v8;
  v11 = v8 + 6;
  v12 = v9 | v10;
  *(_DWORD *)(a1 + 52) = v12;
  if ( v11 > 0x1F )
  {
    v46 = *(_QWORD **)(a1 + 24);
    v47 = v46[1];
    if ( (unsigned __int64)(v47 + 4) > v46[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v46 + 3, v47 + 4, 1);
      v47 = v46[1];
    }
    *(_DWORD *)(*v46 + v47) = v12;
    v48 = *(_DWORD *)(a1 + 48);
    v12 = 0;
    v46[1] += 4LL;
    if ( v48 )
      v12 = a2 >> (32 - v48);
    *(_DWORD *)(a1 + 52) = v12;
    v11 = ((_BYTE)v48 + 6) & 0x1F;
  }
  *(_DWORD *)(a1 + 48) = v11;
  for ( i = v6; i > 0x1F; *(_DWORD *)(a1 + 48) = v11 )
  {
    v15 = (i & 0x1F | 0x20) << v11;
    v11 += 6;
    v12 |= v15;
    *(_DWORD *)(a1 + 52) = v12;
    if ( v11 > 0x1F )
    {
      v16 = *(_QWORD **)(a1 + 24);
      v17 = v16[1];
      if ( (unsigned __int64)(v17 + 4) > v16[2] )
      {
        v52 = *(_QWORD **)(a1 + 24);
        sub_2236E10(v52, v16 + 3, v17 + 4, 1);
        v16 = v52;
        v17 = v52[1];
      }
      *(_DWORD *)(*v16 + v17) = v12;
      v12 = 0;
      v16[1] += 4LL;
      v14 = *(_DWORD *)(a1 + 48);
      if ( v14 )
        v12 = (i & 0x1F | 0x20) >> (32 - v14);
      v11 = ((_BYTE)v14 + 6) & 0x1F;
      *(_DWORD *)(a1 + 52) = v12;
    }
    i >>= 5;
  }
  v18 = i << v11;
  v19 = v11 + 6;
  result = v12 | v18;
  v21 = result;
  *(_DWORD *)(a1 + 52) = result;
  if ( v19 > 0x1F )
  {
    v44 = *(_QWORD **)(a1 + 24);
    v45 = v44[1];
    if ( (unsigned __int64)(v45 + 4) > v44[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v44 + 3, v45 + 4, 1);
      v45 = v44[1];
    }
    *(_DWORD *)(*v44 + v45) = v21;
    result = *(unsigned int *)(a1 + 48);
    v21 = 0;
    v44[1] += 4LL;
    if ( (_DWORD)result )
      v21 = i >> (32 - result);
    *(_DWORD *)(a1 + 52) = v21;
    v19 = ((_BYTE)result + 6) & 0x1F;
  }
  *(_DWORD *)(a1 + 48) = v19;
  if ( v6 )
  {
    v22 = 0;
    v57 = 8LL * (v6 - 1) + 8;
    do
    {
      v23 = *(_QWORD *)(*(_QWORD *)a3 + v22);
      result = (unsigned int)v23;
      if ( v23 == (unsigned int)v23 )
      {
        if ( (unsigned int)v23 > 0x1F )
        {
          do
          {
            v35 = result & 0x1F | 0x20;
            v36 = v35 << v19;
            v19 += 6;
            v21 |= v36;
            *(_DWORD *)(a1 + 52) = v21;
            if ( v19 > 0x1F )
            {
              v37 = *(_QWORD **)(a1 + 24);
              v38 = v37[1];
              if ( (unsigned __int64)(v38 + 4) > v37[2] )
              {
                v54 = result;
                sub_2236E10(*(_QWORD *)(a1 + 24), v37 + 3, v38 + 4, 1);
                v38 = v37[1];
                LODWORD(result) = v54;
              }
              *(_DWORD *)(*v37 + v38) = v21;
              v34 = *(_DWORD *)(a1 + 48);
              v37[1] += 4LL;
              v21 = 0;
              if ( v34 )
                v21 = v35 >> (32 - v34);
              v19 = ((_BYTE)v34 + 6) & 0x1F;
              *(_DWORD *)(a1 + 52) = v21;
            }
            result = (unsigned int)result >> 5;
            *(_DWORD *)(a1 + 48) = v19;
          }
          while ( (unsigned int)result > 0x1F );
        }
        v39 = (_DWORD)result << v19;
        v19 += 6;
        v21 |= v39;
        *(_DWORD *)(a1 + 52) = v21;
        if ( v19 > 0x1F )
        {
          v40 = *(_QWORD **)(a1 + 24);
          v41 = v40[1];
          if ( (unsigned __int64)(v41 + 4) > v40[2] )
          {
            v56 = result;
            sub_2236E10(*(_QWORD *)(a1 + 24), v40 + 3, v41 + 4, 1);
            v41 = v40[1];
            LODWORD(result) = v56;
          }
          *(_DWORD *)(*v40 + v41) = v21;
          v42 = *(_DWORD *)(a1 + 48);
          v40[1] += 4LL;
          result = (unsigned int)result >> (32 - v42);
          v43 = 0;
          if ( v42 )
            v43 = result;
          v21 = v43;
          *(_DWORD *)(a1 + 52) = v43;
          v19 = ((_BYTE)v42 + 6) & 0x1F;
          *(_DWORD *)(a1 + 48) = v19;
          goto LABEL_33;
        }
      }
      else
      {
        if ( v23 > 0x1F )
        {
          do
          {
            v26 = v23 & 0x1F | 0x20;
            v27 = v26 << v19;
            v19 += 6;
            v21 |= v27;
            *(_DWORD *)(a1 + 52) = v21;
            if ( v19 > 0x1F )
            {
              v28 = *(_QWORD **)(a1 + 24);
              v29 = v28[1];
              if ( (unsigned __int64)(v29 + 4) > v28[2] )
              {
                sub_2236E10(*(_QWORD *)(a1 + 24), v28 + 3, v29 + 4, 1);
                v29 = v28[1];
                v26 = v23 & 0x1F | 0x20;
              }
              *(_DWORD *)(*v28 + v29) = v21;
              v24 = *(_DWORD *)(a1 + 48);
              v21 = 0;
              v28[1] += 4LL;
              v25 = v26 >> (32 - v24);
              if ( v24 )
                v21 = v25;
              v19 = ((_BYTE)v24 + 6) & 0x1F;
              *(_DWORD *)(a1 + 52) = v21;
            }
            v23 >>= 5;
            *(_DWORD *)(a1 + 48) = v19;
          }
          while ( v23 > 0x1F );
          result = (unsigned int)v23;
        }
        v30 = (_DWORD)result << v19;
        v19 += 6;
        v21 |= v30;
        *(_DWORD *)(a1 + 52) = v21;
        if ( v19 > 0x1F )
        {
          v31 = *(_QWORD **)(a1 + 24);
          v32 = v31[1];
          if ( (unsigned __int64)(v32 + 4) > v31[2] )
          {
            v53 = result;
            sub_2236E10(*(_QWORD *)(a1 + 24), v31 + 3, v32 + 4, 1);
            v32 = v31[1];
            LODWORD(result) = v53;
          }
          *(_DWORD *)(*v31 + v32) = v21;
          v33 = *(_DWORD *)(a1 + 48);
          v21 = 0;
          v31[1] += 4LL;
          result = (unsigned int)result >> (32 - v33);
          if ( v33 )
            v21 = result;
          v19 = ((_BYTE)v33 + 6) & 0x1F;
          *(_DWORD *)(a1 + 52) = v21;
        }
      }
      *(_DWORD *)(a1 + 48) = v19;
LABEL_33:
      v22 += 8;
    }
    while ( v57 != v22 );
  }
  return result;
}
