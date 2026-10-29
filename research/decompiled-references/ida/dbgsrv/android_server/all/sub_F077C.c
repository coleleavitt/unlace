/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_F077C
// Address: 0x00000000000F077C

//----- (00000000000F077C) ----------------------------------------------------
unsigned int *__fastcall sub_F077C(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // x20
  char **i; // x21
  __int64 v6; // x0
  int v7; // w0
  _QWORD *v8; // x0
  _QWORD *v9; // x0
  __int64 v10; // x5
  __int64 v11; // x4
  __int64 v12; // x1
  __int64 k; // x2
  char *v14; // x26
  _QWORD *v15; // x27
  _QWORD *v16; // x21
  __int64 v17; // x20
  __int64 v18; // x24
  __int64 v19; // x26
  _QWORD *v20; // x25
  __int64 v21; // x28
  _QWORD *v22; // x0
  unsigned int *result; // x0
  __int64 v24; // x27
  unsigned __int64 v25; // x24
  unsigned __int64 m; // x23
  unsigned __int64 v27; // x21
  __int64 v28; // x20
  char v29; // w28
  char *v30; // x0
  char *v31; // x0
  unsigned __int64 v32; // x0
  __int64 v33; // x5
  unsigned __int64 v34; // x3
  unsigned __int64 v35; // x2
  unsigned __int64 v36; // x1
  unsigned __int64 v37; // x6
  __int64 v38; // x24
  unsigned __int64 v39; // x23
  char v40; // w25
  char *v41; // x28
  unsigned __int64 v42; // x21
  unsigned __int64 *v43; // x4
  unsigned __int64 v44; // x19
  char *v45; // x0
  unsigned int **n; // x20
  unsigned int **j; // x21
  unsigned int *v48; // x2
  _QWORD *v49; // x24
  __int64 (__fastcall *v50)(__int64, __int64, __int64); // x23
  _QWORD *v51; // x25
  __int64 v52; // x3
  __int64 *v53; // x21
  __int64 *v54; // x28
  __int64 v55; // x27
  __int64 *v56; // x4
  int v57; // w0
  char *v58; // x0
  char *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x4
  __int64 v62; // x1
  __int64 *v63; // [xsp+60h] [xbp+60h]
  unsigned __int64 *v64; // [xsp+68h] [xbp+68h]
  __int64 v65; // [xsp+68h] [xbp+68h]
  unsigned __int64 v66; // [xsp+78h] [xbp+78h] BYREF
  _QWORD *v67; // [xsp+80h] [xbp+80h] BYREF
  void *ptr; // [xsp+88h] [xbp+88h]

  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    goto LABEL_2;
  v4 = *(_DWORD *)(a1 + 32) >> 11;
  if ( *(_DWORD *)(a1 + 32) >> 11 )
    goto LABEL_16;
  if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
  {
    for ( i = *(char ***)(a1 + 24); *i; ++i )
    {
      v6 = sub_F04E8(a1, *i);
      if ( v6 == -1 )
        goto LABEL_9;
      v4 += v6;
    }
  }
  else
  {
    v4 = sub_F04E8(a1, *(char **)(a1 + 24));
    if ( v4 == -1 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 32) = 0;
      *(_WORD *)(a1 + 32) = 2040;
      *(_QWORD *)(a1 + 24) = qword_169540;
      goto LABEL_32;
    }
  }
  v7 = (v4 & 0x1FFFFF) == v4 ? *(_DWORD *)(a1 + 32) & 0x7FF | ((_DWORD)v4 << 11) : *(_DWORD *)(a1 + 32) & 0x7FF;
  *(_DWORD *)(a1 + 32) = v7;
  if ( v4 )
  {
LABEL_16:
    v8 = malloc(8 * (v4 + 2));
    v67 = v8;
    if ( v8 )
    {
      v8[1] = 0;
      v9 = malloc(8 * (v4 + 2));
      ptr = v9;
      if ( v9 )
        v9[1] = 0;
      if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
      {
        for ( j = *(unsigned int ***)(a1 + 24); ; ++j )
        {
          v48 = *j;
          if ( !*j )
            break;
          sub_F0648(a1, (__int64 *)&v67, v48);
        }
      }
      else
      {
        sub_F0648(a1, (__int64 *)&v67, *(unsigned int **)(a1 + 24));
      }
      v49 = v67;
      if ( v67 && v67[1] != v4 )
LABEL_69:
        abort();
      if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
      {
        v50 = sub_F044C;
      }
      else if ( (*(_WORD *)(a1 + 32) & 0x7F8) != 0 )
      {
        v50 = sub_EFD34;
      }
      else
      {
        v50 = sub_EF994;
      }
      v51 = ptr;
      if ( ptr )
      {
        v14 = (char *)(v67 + 2);
        v52 = v67[1];
        v53 = (__int64 *)algn_169538;
        v54 = v67 + 2;
        v55 = 0;
        v56 = (__int64 *)algn_169538;
        while ( v55 != v52 )
        {
          while ( v53 != v56 )
          {
            v63 = v56;
            v65 = v52;
            v57 = v50(a1, *v54, *v53);
            v52 = v65;
            v56 = v63;
            if ( (v57 & 0x80000000) == 0 )
              break;
            v58 = (char *)v51 + (char *)v53 - v14;
            v53 = *((__int64 **)v58 + 2);
            *((_QWORD *)v58 + 2) = 0;
          }
          v59 = (char *)&v51[v55++];
          *((_QWORD *)v59 + 2) = v53;
          v53 = v54++;
        }
        v60 = 0;
        v12 = 0;
        for ( k = 0; k != v52; ++k )
        {
          v10 = *(_QWORD *)v14;
          if ( v51[k + 2] )
          {
            v11 = v12 + 2;
            ++v12;
            v49[v11] = v10;
          }
          else
          {
            v61 = v60 + 2;
            ++v60;
            v51[v61] = v10;
          }
          v14 += 8;
        }
        v49[1] = v12;
        v51[1] = v60;
        if ( *((_QWORD *)ptr + 1) + v67[1] != v4 )
          goto LABEL_69;
        sub_EFA70(a1, v50, (__int64)ptr);
        v15 = ptr;
        v16 = v67;
        v17 = *((_QWORD *)ptr + 1);
        if ( v17 )
        {
          v18 = v67[1];
          v19 = v17;
          do
          {
            --v17;
            v20 = &v16[v18];
            v21 = v15[v19 + 1];
            while ( v18 )
            {
              v62 = v20[1];
              --v20;
              if ( (int)v50(a1, v62, v21) <= 0 )
                break;
              --v18;
              v20[v19 + 2] = v20[2];
            }
            --v19;
            v16[v17 + 2 + v18] = v21;
          }
          while ( v17 );
          v16[1] += v15[1];
        }
        free(ptr);
      }
      else
      {
        sub_EFA70(a1, v50, (__int64)v67);
      }
      v22 = v67;
      *v67 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v22;
      *(_BYTE *)(a1 + 32) |= 1u;
    }
  }
LABEL_32:
  if ( a2 < *(_QWORD *)a1 )
    return nullptr;
LABEL_2:
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 24);
      v25 = 0;
      for ( m = *(_QWORD *)(v24 + 8); v25 < m; m = v27 )
      {
        v27 = (m + v25) >> 1;
        v28 = *(_QWORD *)(v24 + 8 * (v27 + 2));
        v29 = sub_F0020(v28);
        v30 = (char *)sub_EFB84(v29, a1);
        v31 = sub_EFC44(v29, v30, (char *)(v28 + 8), &v66);
        sub_EFC44(v29 & 0xF, nullptr, v31, (unsigned __int64 *)&v67);
        if ( a2 >= v66 )
        {
          if ( a2 < (unsigned __int64)v67 + v66 )
            return (unsigned int *)v28;
          v25 = v27 + 1;
          v27 = m;
        }
      }
    }
    else
    {
      v32 = *(unsigned __int16 *)(a1 + 32);
      if ( (v32 & 0x7F8) != 0 )
      {
        v38 = *(_QWORD *)(a1 + 24);
        v39 = 0;
        v40 = v32 >> 3;
        v41 = (char *)sub_EFB84(v40, a1);
        v42 = *(_QWORD *)(v38 + 8);
        v43 = &v66;
        while ( v39 < v42 )
        {
          v44 = (v42 + v39) >> 1;
          v64 = v43;
          v28 = *(_QWORD *)(v38 + 8 * (v44 + 2));
          v45 = sub_EFC44(v40, v41, (char *)(v28 + 8), v43);
          sub_EFC44(v40 & 0xF, nullptr, v45, (unsigned __int64 *)&v67);
          v43 = v64;
          if ( a2 >= v66 )
          {
            if ( a2 < (unsigned __int64)v67 + v66 )
              return (unsigned int *)v28;
            v39 = v44 + 1;
            v44 = v42;
          }
          v42 = v44;
        }
      }
      else
      {
        v33 = *(_QWORD *)(a1 + 24);
        v34 = 0;
        v35 = *(_QWORD *)(v33 + 8);
        while ( v34 < v35 )
        {
          v36 = (v35 + v34) >> 1;
          result = *(unsigned int **)(v33 + 8 * (v36 + 2));
          v37 = *((_QWORD *)result + 1);
          if ( a2 < v37 )
          {
            v35 = (v35 + v34) >> 1;
          }
          else
          {
            if ( a2 < v37 + *((_QWORD *)result + 2) )
              return result;
            v34 = v36 + 1;
          }
        }
      }
    }
    return nullptr;
  }
  if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
  {
    for ( n = *(unsigned int ***)(a1 + 24); *n; ++n )
    {
      result = sub_EFEC0(a1, *n, a2);
      if ( result )
        return result;
    }
    return nullptr;
  }
  return sub_EFEC0(a1, *(unsigned int **)(a1 + 24), a2);
}
// 169538: using guessed type _BYTE[8];
// 169540: using guessed type __int64 qword_169540[6];
