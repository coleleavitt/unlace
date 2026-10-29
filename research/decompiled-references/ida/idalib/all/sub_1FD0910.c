__int64 __fastcall sub_1FD0910(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebp
  int v5; // ecx
  int v6; // r14d
  unsigned int v7; // ecx
  unsigned int v8; // r15d
  unsigned int i; // r12d
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 result; // rax
  unsigned int v17; // r14d
  __int64 v18; // r12
  unsigned __int64 v19; // r15
  int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // edx
  _QWORD *v24; // rbp
  __int64 v25; // rcx
  int v26; // edx
  _QWORD *v27; // r15
  __int64 v28; // rcx
  int v29; // edx
  int v30; // esi
  unsigned int v31; // ebp
  int v32; // edx
  _QWORD *v33; // r15
  __int64 v34; // rcx
  int v35; // edx
  _QWORD *v36; // r15
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // ecx
  _QWORD *v40; // r15
  __int64 v41; // rax
  _QWORD *v42; // r14
  __int64 v43; // rax
  int v44; // eax
  _QWORD *v45; // [rsp+0h] [rbp-48h]
  int v46; // [rsp+0h] [rbp-48h]
  int v47; // [rsp+0h] [rbp-48h]
  int v48; // [rsp+0h] [rbp-48h]
  __int64 v49; // [rsp+8h] [rbp-40h]

  v4 = *(_DWORD *)(a3 + 8);
  sub_A1FEC0(a1, 3u, *(_DWORD *)(a1 + 56));
  v5 = *(_DWORD *)(a1 + 48);
  v6 = a2 << v5;
  v7 = v5 + 6;
  v8 = v6 | *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 52) = v8;
  if ( v7 > 0x1F )
  {
    v42 = *(_QWORD **)(a1 + 24);
    v43 = v42[1];
    if ( (unsigned __int64)(v43 + 4) > v42[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v42 + 3, v43 + 4, 1);
      v43 = v42[1];
    }
    *(_DWORD *)(*v42 + v43) = v8;
    v44 = *(_DWORD *)(a1 + 48);
    v8 = 0;
    v42[1] += 4LL;
    if ( v44 )
      v8 = a2 >> (32 - v44);
    *(_DWORD *)(a1 + 52) = v8;
    v7 = ((_BYTE)v44 + 6) & 0x1F;
  }
  *(_DWORD *)(a1 + 48) = v7;
  for ( i = v4; i > 0x1F; *(_DWORD *)(a1 + 48) = v7 )
  {
    v11 = (i & 0x1F | 0x20) << v7;
    v7 += 6;
    v8 |= v11;
    *(_DWORD *)(a1 + 52) = v8;
    if ( v7 > 0x1F )
    {
      v12 = *(_QWORD **)(a1 + 24);
      v13 = v12[1];
      if ( (unsigned __int64)(v13 + 4) > v12[2] )
      {
        v45 = *(_QWORD **)(a1 + 24);
        sub_2236E10(v45, v12 + 3, v13 + 4, 1);
        v12 = v45;
        v13 = v45[1];
      }
      *(_DWORD *)(*v12 + v13) = v8;
      v8 = 0;
      v12[1] += 4LL;
      v10 = *(_DWORD *)(a1 + 48);
      if ( v10 )
        v8 = (i & 0x1F | 0x20) >> (32 - v10);
      v7 = ((_BYTE)v10 + 6) & 0x1F;
      *(_DWORD *)(a1 + 52) = v8;
    }
    i >>= 5;
  }
  v14 = i << v7;
  v15 = v7 + 6;
  result = v8 | v14;
  v17 = result;
  *(_DWORD *)(a1 + 52) = result;
  if ( v15 > 0x1F )
  {
    v40 = *(_QWORD **)(a1 + 24);
    v41 = v40[1];
    if ( (unsigned __int64)(v41 + 4) > v40[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v40 + 3, v41 + 4, 1);
      v41 = v40[1];
    }
    *(_DWORD *)(*v40 + v41) = v17;
    result = *(unsigned int *)(a1 + 48);
    v17 = 0;
    v40[1] += 4LL;
    if ( (_DWORD)result )
      v17 = i >> (32 - result);
    *(_DWORD *)(a1 + 52) = v17;
    v15 = ((_BYTE)result + 6) & 0x1F;
  }
  *(_DWORD *)(a1 + 48) = v15;
  if ( v4 )
  {
    v18 = 0;
    v49 = 8LL * (v4 - 1) + 8;
    do
    {
      v19 = *(_QWORD *)(*(_QWORD *)a3 + v18);
      result = (unsigned int)v19;
      if ( v19 == (unsigned int)v19 )
      {
        if ( (unsigned int)v19 > 0x1F )
        {
          do
          {
            v31 = result & 0x1F | 0x20;
            v32 = v31 << v15;
            v15 += 6;
            v17 |= v32;
            *(_DWORD *)(a1 + 52) = v17;
            if ( v15 > 0x1F )
            {
              v33 = *(_QWORD **)(a1 + 24);
              v34 = v33[1];
              if ( (unsigned __int64)(v34 + 4) > v33[2] )
              {
                v47 = result;
                sub_2236E10(*(_QWORD *)(a1 + 24), v33 + 3, v34 + 4, 1);
                v34 = v33[1];
                LODWORD(result) = v47;
              }
              *(_DWORD *)(*v33 + v34) = v17;
              v30 = *(_DWORD *)(a1 + 48);
              v33[1] += 4LL;
              v17 = 0;
              if ( v30 )
                v17 = v31 >> (32 - v30);
              v15 = ((_BYTE)v30 + 6) & 0x1F;
              *(_DWORD *)(a1 + 52) = v17;
            }
            result = (unsigned int)result >> 5;
            *(_DWORD *)(a1 + 48) = v15;
          }
          while ( (unsigned int)result > 0x1F );
        }
        v35 = (_DWORD)result << v15;
        v15 += 6;
        v17 |= v35;
        *(_DWORD *)(a1 + 52) = v17;
        if ( v15 > 0x1F )
        {
          v36 = *(_QWORD **)(a1 + 24);
          v37 = v36[1];
          if ( (unsigned __int64)(v37 + 4) > v36[2] )
          {
            v48 = result;
            sub_2236E10(*(_QWORD *)(a1 + 24), v36 + 3, v37 + 4, 1);
            v37 = v36[1];
            LODWORD(result) = v48;
          }
          *(_DWORD *)(*v36 + v37) = v17;
          v38 = *(_DWORD *)(a1 + 48);
          v36[1] += 4LL;
          result = (unsigned int)result >> (32 - v38);
          v39 = 0;
          if ( v38 )
            v39 = result;
          v17 = v39;
          *(_DWORD *)(a1 + 52) = v39;
          v15 = ((_BYTE)v38 + 6) & 0x1F;
          *(_DWORD *)(a1 + 48) = v15;
          goto LABEL_32;
        }
      }
      else
      {
        if ( v19 > 0x1F )
        {
          do
          {
            v22 = v19 & 0x1F | 0x20;
            v23 = v22 << v15;
            v15 += 6;
            v17 |= v23;
            *(_DWORD *)(a1 + 52) = v17;
            if ( v15 > 0x1F )
            {
              v24 = *(_QWORD **)(a1 + 24);
              v25 = v24[1];
              if ( (unsigned __int64)(v25 + 4) > v24[2] )
              {
                sub_2236E10(*(_QWORD *)(a1 + 24), v24 + 3, v25 + 4, 1);
                v25 = v24[1];
                v22 = v19 & 0x1F | 0x20;
              }
              *(_DWORD *)(*v24 + v25) = v17;
              v20 = *(_DWORD *)(a1 + 48);
              v17 = 0;
              v24[1] += 4LL;
              v21 = v22 >> (32 - v20);
              if ( v20 )
                v17 = v21;
              v15 = ((_BYTE)v20 + 6) & 0x1F;
              *(_DWORD *)(a1 + 52) = v17;
            }
            v19 >>= 5;
            *(_DWORD *)(a1 + 48) = v15;
          }
          while ( v19 > 0x1F );
          result = (unsigned int)v19;
        }
        v26 = (_DWORD)result << v15;
        v15 += 6;
        v17 |= v26;
        *(_DWORD *)(a1 + 52) = v17;
        if ( v15 > 0x1F )
        {
          v27 = *(_QWORD **)(a1 + 24);
          v28 = v27[1];
          if ( (unsigned __int64)(v28 + 4) > v27[2] )
          {
            v46 = result;
            sub_2236E10(*(_QWORD *)(a1 + 24), v27 + 3, v28 + 4, 1);
            v28 = v27[1];
            LODWORD(result) = v46;
          }
          *(_DWORD *)(*v27 + v28) = v17;
          v29 = *(_DWORD *)(a1 + 48);
          v17 = 0;
          v27[1] += 4LL;
          result = (unsigned int)result >> (32 - v29);
          if ( v29 )
            v17 = result;
          v15 = ((_BYTE)v29 + 6) & 0x1F;
          *(_DWORD *)(a1 + 52) = v17;
        }
      }
      *(_DWORD *)(a1 + 48) = v15;
LABEL_32:
      v18 += 8;
    }
    while ( v49 != v18 );
  }
  return result;
}
