__int64 __fastcall sub_1FC740(__int64 a1, __int64 a2, unsigned int a3, int *a4, _DWORD *a5, __int64 a6)
{
  int v7; // eax
  __int64 *v8; // rsi
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // r15
  int *v14; // r12
  int v15; // eax
  _DWORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // r14
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // r10
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  int v28; // r14d
  __int64 v29; // r15
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  _DWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v40; // rax
  int v43; // [rsp+10h] [rbp-60h]
  __int64 v45; // [rsp+18h] [rbp-58h] BYREF
  __int128 v46; // [rsp+20h] [rbp-50h]
  unsigned __int64 v47; // [rsp+30h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a2 + 92);
  v8 = *(__int64 **)(a1 + 48);
  v46 = 0;
  v45 = 0;
  v43 = v7;
  if ( !v8[1] )
  {
    v20 = *(_QWORD *)(a2 + 16);
    *a5 = v7;
    return v20;
  }
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = 104 * v12;
    v14 = (int *)(104 * v12 + *v8);
    v15 = sub_1C2AD0(v14, a4);
    v8 = *(__int64 **)(a1 + 48);
    if ( !v15 && (int *)a2 != v14 )
    {
      v16 = *(_DWORD **)a6;
      v17 = *(_QWORD *)a6 + 4LL * *(_QWORD *)(a6 + 8);
      if ( *(_QWORD *)a6 == v17 )
        goto LABEL_40;
      while ( v11 != *v16 )
      {
        if ( (_DWORD *)v17 == ++v16 )
          goto LABEL_40;
      }
      if ( (_DWORD *)v17 == v16 )
      {
LABEL_40:
        v35 = *v8;
        v36 = v45;
        v37 = *(_QWORD *)(v35 + v13 + 16);
        v38 = v46;
        if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
        {
          v45 = qvector_reserve(&v45, v45, v46 + 1, 8);
          v36 = v45;
          v38 = v46;
        }
        *(_QWORD *)(v36 + 8 * v38) = v37;
        v8 = *(__int64 **)(a1 + 48);
        *(_QWORD *)&v46 = v46 + 1;
      }
      else if ( !v43 )
      {
        v43 = *(_DWORD *)(*v8 + v13 + 92);
      }
    }
    ++v11;
    v18 = v8[1];
    v12 = v11;
  }
  while ( v11 < v18 );
  v19 = v45;
  v20 = *(_QWORD *)(a2 + 16);
  v21 = (_QWORD *)(v45 + 8 * v46);
  if ( (_QWORD *)v45 != v21 )
  {
    v22 = (_QWORD *)v45;
    while ( v20 != *v22 )
    {
      if ( v21 == ++v22 )
        goto LABEL_45;
    }
    if ( v22 != v21 )
    {
      v23 = *(_QWORD *)(a6 + 8);
      if ( !v23 )
      {
LABEL_24:
        v28 = v18 - 1;
        if ( (int)v18 - 1 >= *(_DWORD *)(a1 + 104) )
        {
          while ( 1 )
          {
            v29 = *v8 + 104LL * v28;
            if ( a2 != v29 && (*(_BYTE *)(v29 + 25) & 1) == 0 && !(unsigned int)sub_1C2AD0((int *)v29, a4) )
            {
              v30 = (_QWORD *)v45;
              v31 = (_QWORD *)(v45 + 8 * v46);
              if ( (_QWORD *)v45 != v31 )
              {
                while ( *(_QWORD *)(v29 + 16) != *v30 )
                {
                  if ( v31 == ++v30 )
                    goto LABEL_26;
                }
                if ( v30 != v31 && *(_DWORD *)(v29 + 88) <= (signed int)a3 )
                  break;
              }
            }
LABEL_26:
            if ( --v28 < *(_DWORD *)(a1 + 104) )
            {
              v19 = v45;
              v20 = -1;
              goto LABEL_46;
            }
            v8 = *(__int64 **)(a1 + 48);
          }
          v32 = *(_QWORD *)(a6 + 8);
          v33 = *(_DWORD **)a6;
          if ( *(_QWORD *)(a6 + 16) < (unsigned __int64)(v32 + 1) )
          {
            v40 = qvector_reserve(a6, v33, v32 + 1, 4);
            *(_QWORD *)a6 = v40;
            v33 = (_DWORD *)v40;
            v32 = *(_QWORD *)(a6 + 8);
          }
          v33[v32] = v28;
          ++*(_QWORD *)(a6 + 8);
          v34 = sub_1FC740(a1, a2, a3, a4, a5, a6);
          v19 = v45;
          v20 = v34;
        }
        else
        {
          v20 = -1;
        }
        goto LABEL_46;
      }
      v24 = 0;
      v25 = 0;
LABEL_20:
      v26 = *(_QWORD *)(*v8 + 104LL * *(int *)(*(_QWORD *)a6 + 4 * v25) + 16);
      v27 = (_QWORD *)v45;
      do
      {
        if ( v26 == *v27 )
        {
          v25 = ++v24;
          if ( v24 < v23 )
            goto LABEL_20;
          goto LABEL_24;
        }
        ++v27;
      }
      while ( v21 != v27 );
      if ( v26 == v20 )
        goto LABEL_24;
      v20 = v26;
    }
  }
LABEL_45:
  *a5 = v43;
LABEL_46:
  if ( v19 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v19);
  }
  return v20;
}
