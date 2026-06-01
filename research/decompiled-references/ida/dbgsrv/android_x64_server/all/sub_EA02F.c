/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA02F
// Address: 0x00000000000EA02F

//----- (00000000000EA02F) ----------------------------------------------------
unsigned int *__fastcall sub_EA02F(__int64 a1, unsigned __int64 a2)
{
  char v3; // al
  char v4; // al
  __int64 v5; // rbp
  char **i; // r13
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 k; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rbp
  __int64 v18; // r13
  __int64 v19; // r15
  _QWORD *v20; // r9
  __int64 v21; // r10
  _QWORD *v22; // rax
  unsigned int *result; // rax
  __int64 v24; // r10
  unsigned __int64 v25; // r15
  unsigned __int64 m; // r14
  unsigned __int64 v27; // r13
  __int64 v28; // rbp
  char *v29; // rax
  char *v30; // rax
  int v31; // ebp
  __int64 v32; // r8
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r9
  char v37; // r14
  unsigned __int64 v38; // r15
  __int64 v39; // r13
  unsigned __int64 n; // rbx
  unsigned __int64 v41; // rbp
  char *v42; // rax
  unsigned int **ii; // rbp
  char **j; // r13
  _QWORD *v45; // r13
  __int64 (__fastcall *v46)(__int64, __int64, __int64); // r14
  _QWORD *v47; // r15
  __int64 *v48; // r9
  __int64 v49; // r10
  __int64 v50; // r11
  __int64 *v51; // rcx
  int v52; // eax
  char *v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  char *v56; // [rsp+8h] [rbp-80h]
  char *v57; // [rsp+8h] [rbp-80h]
  __int64 v58; // [rsp+8h] [rbp-80h]
  __int64 *v59; // [rsp+10h] [rbp-78h]
  __int64 v60; // [rsp+10h] [rbp-78h]
  __int64 *v61; // [rsp+18h] [rbp-70h]
  _QWORD *v62; // [rsp+18h] [rbp-70h]
  char v63; // [rsp+20h] [rbp-68h]
  __int64 v64; // [rsp+20h] [rbp-68h]
  _QWORD *v65; // [rsp+20h] [rbp-68h]
  __int64 v66; // [rsp+28h] [rbp-60h]
  __int64 v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+28h] [rbp-60h]
  unsigned __int64 v69; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v70; // [rsp+40h] [rbp-48h] BYREF
  void *ptr; // [rsp+48h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 32);
  if ( (v3 & 1) != 0 )
    goto LABEL_2;
  v5 = *(_DWORD *)(a1 + 32) >> 11;
  if ( *(_DWORD *)(a1 + 32) >> 11 )
    goto LABEL_16;
  if ( (v3 & 2) != 0 )
  {
    for ( i = *(char ***)(a1 + 24); *i; ++i )
    {
      v7 = sub_E9DEB(a1, *i);
      if ( v7 == -1 )
        goto LABEL_9;
      v5 += v7;
    }
  }
  else
  {
    v5 = sub_E9DEB(a1, *(char **)(a1 + 24));
    if ( v5 == -1 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 32) = 0;
      *(_WORD *)(a1 + 32) = 2040;
      *(_QWORD *)(a1 + 24) = &qword_159108;
      goto LABEL_32;
    }
  }
  v8 = (v5 & 0x1FFFFF) == v5 ? ((_DWORD)v5 << 11) | *(_DWORD *)(a1 + 32) & 0x7FF : *(_DWORD *)(a1 + 32) & 0x7FF;
  *(_DWORD *)(a1 + 32) = v8;
  if ( v5 )
  {
LABEL_16:
    v9 = malloc(8 * v5 + 16);
    v70 = v9;
    if ( v9 )
    {
      v9[1] = 0;
      v10 = malloc(8 * v5 + 16);
      ptr = v10;
      if ( v10 )
        v10[1] = 0;
      if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
      {
        for ( j = *(char ***)(a1 + 24); *j; ++j )
          sub_E9F20(a1, (__int64 *)&v70, *j);
      }
      else
      {
        sub_E9F20(a1, (__int64 *)&v70, *(char **)(a1 + 24));
      }
      v45 = v70;
      if ( v70 && v70[1] != v5 )
LABEL_69:
        abort();
      v46 = sub_E9D66;
      if ( (*(_BYTE *)(a1 + 32) & 4) == 0 )
      {
        v46 = sub_E9427;
        if ( (*(_WORD *)(a1 + 32) & 0x7F8) != 0 )
          v46 = sub_E96E3;
      }
      v47 = ptr;
      if ( ptr )
      {
        v48 = v70 + 2;
        v49 = 0;
        v50 = v70[1];
        v51 = &qword_159100;
        v57 = (char *)(v70 + 2);
        while ( v49 != v50 )
        {
          while ( v51 != &qword_159100 )
          {
            v68 = v49;
            v64 = v50;
            v61 = v51;
            v59 = v48;
            v52 = v46(a1, *v48, *v51);
            v48 = v59;
            v51 = v61;
            v50 = v64;
            v49 = v68;
            if ( v52 >= 0 )
              break;
            v53 = (char *)v47 + (char *)v61 - v57;
            v51 = *((__int64 **)v53 + 2);
            *((_QWORD *)v53 + 2) = 0;
          }
          v47[v49 + 2] = v51;
          v51 = v48;
          ++v49;
          ++v48;
        }
        v54 = 0;
        v13 = 0;
        for ( k = 0; k != v50; ++k )
        {
          v12 = v45[k + 2];
          if ( v47[k + 2] )
            v45[v13++ + 2] = v12;
          else
            v47[v54++ + 2] = v12;
        }
        v15 = v70;
        v45[1] = v13;
        v47[1] = v54;
        if ( *((_QWORD *)ptr + 1) + v15[1] != v5 )
          goto LABEL_69;
        sub_E94DC(a1, (int (__fastcall *)(__int64, _QWORD, _QWORD))v46, (__int64)ptr, v13);
        v16 = ptr;
        v17 = v70;
        v18 = *((_QWORD *)ptr + 1);
        if ( v18 )
        {
          v19 = v70[1];
          v20 = &v70[v18];
          do
          {
            v21 = v16[--v18 + 2];
            while ( v19 )
            {
              v65 = v20;
              v62 = v16;
              v58 = v21;
              v60 = v19 - 1;
              v55 = v46(a1, v17[v19 + 1], v21);
              v21 = v58;
              v16 = v62;
              v20 = v65;
              if ( v55 <= 0 )
                break;
              --v19;
              v65[v60 + 2] = v17[v60 + 2];
            }
            --v20;
            v17[v18 + 2 + v19] = v21;
          }
          while ( v18 );
          v17[1] += v16[1];
        }
        free(ptr);
      }
      else
      {
        sub_E94DC(a1, (int (__fastcall *)(__int64, _QWORD, _QWORD))v46, (__int64)v70, v11);
      }
      v22 = v70;
      *v70 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v22;
      *(_BYTE *)(a1 + 32) |= 1u;
    }
  }
LABEL_32:
  if ( a2 < *(_QWORD *)a1 )
    return nullptr;
LABEL_2:
  v4 = *(_BYTE *)(a1 + 32);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 24);
      v25 = 0;
      for ( m = *(_QWORD *)(v24 + 8); v25 < m; m = v27 )
      {
        v66 = v24;
        v27 = (m + v25) >> 1;
        v28 = *(_QWORD *)(v24 + 8 * v27 + 16);
        v63 = sub_E9979(v28);
        v29 = (char *)sub_E959E(v63, a1);
        v30 = sub_E961A(v63, v29, (char *)(v28 + 8), &v69);
        sub_E961A(v63 & 0xF, nullptr, v30, (unsigned __int64 *)&v70);
        v24 = v66;
        if ( a2 >= v69 )
        {
          if ( a2 < (unsigned __int64)v70 + v69 )
            return (unsigned int *)v28;
          v25 = v27 + 1;
          v27 = m;
        }
      }
    }
    else
    {
      v31 = *(_DWORD *)(a1 + 32);
      if ( (v31 & 0x7F8) != 0 )
      {
        v37 = (unsigned __int16)v31 >> 3;
        v38 = 0;
        v39 = *(_QWORD *)(a1 + 24);
        v56 = (char *)sub_E959E(v37, a1);
        for ( n = *(_QWORD *)(v39 + 8); v38 < n; n = v41 )
        {
          v41 = (n + v38) >> 1;
          v67 = *(_QWORD *)(v39 + 8 * v41 + 16);
          v42 = sub_E961A(v37, v56, (char *)(v67 + 8), &v69);
          sub_E961A(v37 & 0xF, nullptr, v42, (unsigned __int64 *)&v70);
          if ( a2 >= v69 )
          {
            if ( a2 < (unsigned __int64)v70 + v69 )
              return (unsigned int *)v67;
            v38 = v41 + 1;
            v41 = n;
          }
        }
      }
      else
      {
        v32 = *(_QWORD *)(a1 + 24);
        v33 = 0;
        v34 = *(_QWORD *)(v32 + 8);
        while ( v33 < v34 )
        {
          v35 = (v34 + v33) >> 1;
          result = *(unsigned int **)(v32 + 8 * v35 + 16);
          v36 = *((_QWORD *)result + 1);
          if ( a2 < v36 )
          {
            v34 = (v34 + v33) >> 1;
          }
          else
          {
            if ( a2 < v36 + *((_QWORD *)result + 2) )
              return result;
            v33 = v35 + 1;
          }
        }
      }
    }
    return nullptr;
  }
  if ( (v4 & 2) != 0 )
  {
    for ( ii = *(unsigned int ***)(a1 + 24); *ii; ++ii )
    {
      result = sub_E9839(a1, *ii, a2);
      if ( result )
        return result;
    }
    return nullptr;
  }
  return sub_E9839(a1, *(unsigned int **)(a1 + 24), a2);
}
// EA588: variable 'v11' is possibly undefined
// 159100: using guessed type __int64 qword_159100;
// 159108: using guessed type __int64 qword_159108;
