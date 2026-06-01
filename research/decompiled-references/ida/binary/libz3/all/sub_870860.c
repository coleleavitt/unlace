__int64 __fastcall sub_870860(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 *v16; // rbp
  __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 *v22; // r13
  unsigned __int64 v23; // r14
  __int64 v24; // rsi
  __int64 *v25; // r13
  unsigned __int64 v26; // r14
  __int64 v27; // rsi
  __int64 *v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v33; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h] BYREF
  __int64 v39; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 72);
  v37 = nullptr;
  v6 = *(_QWORD *)(v4 + 1720);
  v36 = v5;
  if ( v6 )
  {
    v7 = **(unsigned int **)(a2 + 32);
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 - 4) )
      v6 = 0;
    else
      v6 = *(_QWORD *)(v6 + 8 * v7);
  }
  v8 = sub_86BFC0((unsigned int *)a1, v6);
  v32 = v5;
  v33 = nullptr;
  sub_86BC60(a1, v8, (__int64)&v32);
  v9 = v33;
  v31 = v32;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v10 )
  {
    v11 = **(unsigned int **)(a2 + 40);
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) )
      v10 = 0;
    else
      v10 = *(_QWORD *)(v10 + 8 * v11);
  }
  v12 = sub_86BFC0((unsigned int *)a1, v10);
  v34 = v5;
  v35 = nullptr;
  sub_86BC60(a1, v12, (__int64)&v34);
  v13 = *(_QWORD *)(a1 + 72);
  v14 = v34;
  v38 = 0;
  v15 = a1 + 272;
  v16 = v35;
  v39 = v13;
  if ( v9 )
    v17 = *((unsigned int *)v9 - 1);
  else
    v17 = 0;
  sub_FDB330(v15, v17, v9, v35, &v36, &v38);
  result = sub_86FBB0((_QWORD *)a1, (unsigned int *)a2, (__int64)&v36);
  v19 = v38;
  if ( v38 )
  {
    v20 = v39;
    v21 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v20, v19);
  }
  v22 = v37;
  if ( v37 )
  {
    result = *((unsigned int *)v37 - 1);
    v23 = (unsigned __int64)&v37[result];
    if ( (unsigned __int64)v37 >= v23 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v21 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( (unsigned __int64)++v22 >= v23 )
          goto LABEL_19;
      }
      result = sub_15D7BC0(v36, v24);
      ++v22;
    }
    while ( (unsigned __int64)v22 < v23 );
LABEL_19:
    v22 = v37;
    if ( v37 )
LABEL_20:
      result = sub_186B220(v22 - 1);
  }
  if ( v16 )
  {
    v25 = v16;
    v26 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
    if ( (unsigned __int64)v16 < v26 )
    {
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v21 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( (unsigned __int64)++v25 >= v26 )
            goto LABEL_28;
        }
        ++v25;
        sub_15D7BC0(v14, v27);
      }
      while ( (unsigned __int64)v25 < v26 );
    }
LABEL_28:
    result = sub_186B220(v16 - 1);
  }
  if ( v9 )
  {
    v28 = v9;
    v29 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
    if ( (unsigned __int64)v9 < v29 )
    {
      do
      {
        while ( 1 )
        {
          v30 = *v28;
          if ( *v28 )
          {
            v21 = (*(_DWORD *)(v30 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( (unsigned __int64)++v28 >= v29 )
            return sub_186B220(v9 - 1);
        }
        ++v28;
        sub_15D7BC0(v31, v30);
      }
      while ( (unsigned __int64)v28 < v29 );
    }
    return sub_186B220(v9 - 1);
  }
  return result;
}

