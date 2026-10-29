__int64 __fastcall CoinModelLinkedList::addEasy(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        _QWORD *a5,
        __int64 a6,
        CoinModelHash2 *a7)
{
  int v7; // r13d
  int v10; // eax
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r10
  unsigned int v16; // r9d
  unsigned __int64 v17; // rdx
  unsigned int v18; // edx
  int v19; // edi
  unsigned int v20; // r9d
  unsigned int v21; // edi
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // r10
  unsigned int v26; // r11d
  int v27; // r11d
  int v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // r10d
  int v36; // r15d
  int *v37; // rsi
  int v38; // r14d
  int v39; // edi
  __int64 *v40; // rbp
  __int64 v41; // r11
  _DWORD *v42; // r13
  int v43; // eax
  __int64 v44; // xmm0_8
  __int64 v45; // rdx
  __int64 v46; // rsi
  int v47; // r12d
  __int64 v48; // r9
  __int64 v49; // rsi
  int v50; // edx
  __int64 v51; // xmm0_8
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 result; // rax
  int v55; // r13d
  __int64 v56; // rax
  __int64 v58; // [rsp+10h] [rbp-68h]
  _QWORD *v59; // [rsp+10h] [rbp-68h]
  int v61; // [rsp+18h] [rbp-60h]
  __int64 v62; // [rsp+20h] [rbp-58h]
  int v63; // [rsp+2Ch] [rbp-4Ch]
  __int64 v64; // [rsp+30h] [rbp-48h]
  CoinModelLinkedList *v65; // [rsp+38h] [rbp-40h]

  v7 = a2;
  v10 = a3 + *(_DWORD *)(a1 + 40);
  if ( v10 > *(_DWORD *)(a1 + 44) )
  {
    v59 = a5;
    CoinModelLinkedList::resize((CoinModelLinkedList *)a1, *(_DWORD *)(a1 + 36), 3 * v10 / 2 + 1000);
    a5 = v59;
  }
  v11 = *(_DWORD *)(a1 + 32);
  if ( v11 <= a2 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = (unsigned int)(v7 - v11);
    v15 = 4LL * v11;
    v16 = v14 + 1;
    v17 = v12 + v15;
    if ( (v13 + v15 >= (unsigned __int64)(v12 + v15 + 16) || v12 + v15 >= (unsigned __int64)(v13 + v15 + 16))
      && v16 > 0xE )
    {
      v18 = -(int)(v17 >> 2) & 3;
      if ( v18 )
      {
        *(_DWORD *)(v12 + 4LL * v11) = -1;
        v19 = v11 + 1;
        *(_DWORD *)(v13 + 4LL * v11) = -1;
        if ( v18 == 1 || (*(_DWORD *)(v12 + 4LL * v19) = -1, *(_DWORD *)(v13 + 4LL * v19) = -1, v19 = v11 + 2, v18 == 2) )
        {
          v11 = v19;
        }
        else
        {
          v11 += 3;
          *(_DWORD *)(v12 + 4LL * v19) = -1;
          *(_DWORD *)(v13 + 4LL * v19) = -1;
        }
      }
      v20 = v16 - v18;
      v21 = 0;
      v22 = v15 + 4LL * v18;
      v23 = 0;
      v24 = v12 + v22;
      v25 = v13 + v22;
      v26 = ((v20 - 4) >> 2) + 1;
      do
      {
        ++v21;
        *(_OWORD *)(v24 + v23) = -1;
        *(_OWORD *)(v25 + v23) = -1;
        v23 += 16;
      }
      while ( v26 > v21 );
      v27 = 4 * v26;
      v28 = v27 + v11;
      if ( v20 != v27 )
      {
        *(_DWORD *)(v12 + 4LL * v28) = -1;
        *(_DWORD *)(v13 + 4LL * v28) = -1;
        v29 = v28 + 1;
        if ( v7 >= v28 + 1 )
        {
          *(_DWORD *)(v12 + 4LL * v29) = -1;
          *(_DWORD *)(v13 + 4LL * v29) = -1;
          v30 = v28 + 2;
          if ( v7 >= v28 + 2 )
          {
            *(_DWORD *)(v12 + 4LL * v30) = -1;
            *(_DWORD *)(v13 + 4LL * v30) = -1;
            v31 = v28 + 3;
            if ( v7 >= v28 + 3 )
            {
              *(_DWORD *)(v12 + 4LL * v31) = -1;
              *(_DWORD *)(v13 + 4LL * v31) = -1;
              v32 = v28 + 4;
              if ( v7 >= v28 + 4 )
              {
                v33 = v28 + 5;
                *(_DWORD *)(v12 + 4LL * v32) = -1;
                *(_DWORD *)(v13 + 4LL * v32) = -1;
                if ( v7 >= v33 )
                {
                  *(_DWORD *)(v12 + 4LL * v33) = -1;
                  *(_DWORD *)(v13 + 4LL * v33) = -1;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v56 = 0;
      do
      {
        *(_DWORD *)(v17 + v56) = -1;
        *(_DWORD *)(v13 + v15 + v56) = -1;
        v56 += 4;
      }
      while ( v56 != 4 * v14 + 4 );
    }
  }
  if ( !a3 )
  {
    result = 0xFFFFFFFFLL;
    goto LABEL_39;
  }
  v34 = *(_QWORD *)(a1 + 24);
  v35 = *((_DWORD *)a7 + 3);
  v36 = *(_DWORD *)(v34 + 4LL * *(int *)(a1 + 36));
  v65 = (CoinModelLinkedList *)v7;
  v37 = (int *)(v34 + 4LL * v7);
  v58 = 4LL * v7;
  v38 = *v37;
  if ( a3 <= 0 )
  {
    v47 = *v37;
    v45 = *(_QWORD *)(a1 + 8);
    v48 = 4LL * v38;
    goto LABEL_36;
  }
  v39 = v7;
  v40 = a5;
  v41 = (__int64)&a5[(unsigned int)(a3 - 1) + 1];
  v42 = a4;
  v43 = v39;
  while ( 1 )
  {
    if ( v36 < 0 )
    {
      v46 = *(int *)(a1 + 40);
      v47 = *(_DWORD *)(a1 + 40);
      v48 = 4 * v46;
      *(_DWORD *)(a1 + 40) = v46 + 1;
    }
    else
    {
      v46 = v36;
      v47 = v36;
      v48 = 4LL * v36;
      v36 = *(_DWORD *)(*(_QWORD *)a1 + v48);
    }
    v49 = a6 + 16 * v46;
    if ( *(_DWORD *)(a1 + 48) )
      break;
    *(_DWORD *)v49 = v43;
    v44 = *v40;
    *(_DWORD *)(v49 + 4) = *v42;
    *(_QWORD *)(v49 + 8) = v44;
    if ( v35 )
      goto LABEL_30;
LABEL_23:
    if ( v38 >= 0 )
      goto LABEL_24;
LABEL_31:
    ++v40;
    ++v42;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + v58) = v47;
    *(_DWORD *)(*(_QWORD *)a1 + v48) = v38;
    if ( v40 == (__int64 *)v41 )
    {
      v7 = v43;
      v45 = *(_QWORD *)(a1 + 8);
      v52 = v58;
      goto LABEL_35;
    }
LABEL_25:
    v38 = v47;
  }
  v50 = *v42;
  v51 = *v40;
  *(_DWORD *)(v49 + 4) = v43;
  *(_QWORD *)(v49 + 8) = v51;
  *(_DWORD *)v49 = v50;
  if ( !v35 )
    goto LABEL_23;
LABEL_30:
  v64 = v48;
  v63 = v43;
  v62 = v41;
  v61 = v35;
  CoinModelHash2::addHash(a7);
  v48 = v64;
  v43 = v63;
  v41 = v62;
  v35 = v61;
  if ( v38 < 0 )
    goto LABEL_31;
LABEL_24:
  v45 = *(_QWORD *)(a1 + 8);
  ++v40;
  ++v42;
  *(_DWORD *)(v45 + 4LL * v38) = v47;
  *(_DWORD *)(*(_QWORD *)a1 + v48) = v38;
  if ( v40 != (__int64 *)v41 )
    goto LABEL_25;
  v52 = v58;
  v7 = v43;
LABEL_35:
  v34 = *(_QWORD *)(a1 + 24);
  v37 = (int *)(v34 + v52);
LABEL_36:
  *(_DWORD *)(v45 + v48) = -1;
  v53 = *v37;
  if ( (int)v53 < 0 )
  {
    result = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * (_QWORD)v65);
    *v37 = v47;
    if ( v36 < 0 )
      goto LABEL_43;
LABEL_38:
    *(_DWORD *)(v45 + 4LL * v36) = -1;
    *(_DWORD *)(v34 + 4LL * *(int *)(a1 + 36)) = v36;
  }
  else
  {
    result = *(unsigned int *)(v45 + 4 * v53);
    *v37 = v47;
    if ( v36 >= 0 )
      goto LABEL_38;
LABEL_43:
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * *(int *)(a1 + 36)) = -1;
    *(_DWORD *)(v34 + 4LL * *(int *)(a1 + 36)) = -1;
  }
LABEL_39:
  v55 = v7 + 1;
  if ( v55 < *(_DWORD *)(a1 + 32) )
    v55 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v55;
  return result;
}

