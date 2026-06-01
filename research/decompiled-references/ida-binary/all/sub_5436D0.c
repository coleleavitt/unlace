__int64 __fastcall sub_5436D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v9; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r15
  _QWORD *v23; // r13
  _QWORD *v24; // r12
  __int64 v25; // r14
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r10
  char v32; // r11
  char v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // [rsp+0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+8h] [rbp-40h]

  v6 = a5 + 1;
  v7 = a4 + 1;
  v9 = (a5 + 1) * (a4 + 1);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  if ( v9 )
  {
    v38 = qvector_reserve(a1 + 32, 0, v9, 8);
    v39 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 32) = v38;
    memset((void *)(v38 + 8 * v39), 0, 8 * (v9 - v39));
    *(_QWORD *)(a1 + 40) = v9;
  }
  v11 = -1;
  v12 = 0;
  result = v6;
  v14 = a4;
  if ( !v7 )
    return result;
  while ( !result )
  {
    v37 = v12;
LABEL_27:
    ++v12;
    ++v11;
    if ( v14 == v37 )
      return result;
  }
  v15 = *(_QWORD *)(a1 + 24);
  v16 = result;
  v17 = v15 + 1;
  while ( 2 )
  {
    v18 = v12 * v17;
    v19 = 0;
    do
    {
      v20 = v18 + v19;
      if ( (unsigned __int64)(v18 + v19) >= *(_QWORD *)(a1 + 40) )
        goto LABEL_45;
      v15 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v15 + 8 * v20) = 0;
      v21 = v19 + 1;
      if ( a5 == v19 )
        goto LABEL_30;
      ++v19;
    }
    while ( !v21 || !v12 );
    v40 = v16;
    v15 = *(_QWORD *)(a1 + 40);
    v22 = v11 * v17;
    v23 = *(_QWORD **)a1;
    v24 = *(_QWORD **)(a1 + 8);
    v41 = v17;
    v25 = v12 * v17;
    while ( 1 )
    {
      v30 = v19 - 1;
      v31 = (v19 - 1) | v24[1];
      if ( v23[1] | v11 )
      {
        v32 = *(_BYTE *)(*v23 + v11);
        v33 = 0;
        if ( !v31 )
          goto LABEL_22;
      }
      else
      {
        v32 = 0;
        if ( !v31 )
        {
LABEL_23:
          v34 = v22 + v30;
          if ( v34 >= v15 )
            goto LABEL_43;
          v35 = *(_QWORD *)(a1 + 32);
          v36 = *(_QWORD *)(v35 + 8 * v34) + 1LL;
          if ( v25 + v19 >= v15 )
            goto LABEL_41;
          *(_QWORD *)(v35 + 8 * (v25 + v19)) = v36;
          v29 = v19 + 1;
          if ( a5 == v19 )
          {
            result = v40;
            v37 = v12;
            goto LABEL_27;
          }
          goto LABEL_18;
        }
      }
      v33 = *(_BYTE *)(*v24 + v30);
LABEL_22:
      if ( v32 == v33 )
        goto LABEL_23;
      if ( v22 + v19 >= v15 )
      {
        if ( !under_debugger )
        {
          interr(2351, v12, v30, v15, 0.0);
LABEL_37:
          if ( !under_debugger )
          {
            interr(2351, v12, v28, v15, 0.0);
LABEL_39:
            if ( !under_debugger )
            {
              interr(2351, v12, v27, v15, 0.0);
LABEL_41:
              if ( !under_debugger )
              {
                interr(2351, v12, v36, v15, 0.0);
LABEL_43:
                if ( !under_debugger )
                {
                  interr(2351, v12, v34, v15, 0.0);
LABEL_45:
                  if ( !under_debugger )
                    interr(2351, v12, v20, v15, 0.0);
                }
              }
            }
          }
        }
        BUG();
      }
      v26 = *(_QWORD *)(a1 + 32);
      v27 = v25 + v30;
      if ( v27 >= v15 )
        goto LABEL_39;
      v28 = *(_QWORD *)(v26 + 8 * v27);
      if ( *(_QWORD *)(v26 + 8 * (v22 + v19)) >= v28 )
        v28 = *(_QWORD *)(v26 + 8 * (v22 + v19));
      if ( v25 + v19 >= v15 )
        goto LABEL_37;
      *(_QWORD *)(v26 + 8 * (v25 + v19)) = v28;
      v29 = v19 + 1;
      if ( a5 == v19 )
        break;
LABEL_18:
      v19 = v29;
    }
    v16 = v40;
    v17 = v41;
LABEL_30:
    result = v12 + 1;
    ++v11;
    if ( v14 != v12 )
    {
      ++v12;
      continue;
    }
    return result;
  }
}
