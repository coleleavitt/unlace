/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8AE0
// Address: 0x00000000000D8AE0

//----- (00000000000D8AE0) ----------------------------------------------------
__int64 __fastcall sub_D8AE0(__int64 result, __int64 a2, char *a3, unsigned int a4, char a5)
{
  __int64 v5; // x8
  __int64 v10; // x23
  const char *v11; // x24
  __int64 v12; // x8
  __int64 v13; // x24
  __int64 v14; // x9
  __int64 v15; // x3
  int v16; // w8
  unsigned __int64 v17; // x24
  __int64 *v18; // x23
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x0
  __int64 v22; // t1
  __int64 v23; // x3
  int v24; // w8
  __int64 v25; // x8
  char v26; // w22
  char v27; // w24
  _QWORD *v28; // x25
  unsigned __int64 v29; // x26
  __int64 v30; // x8
  __int64 v31; // x9
  __int64 v32; // x4
  __int64 v33; // x8
  __int64 v34; // x9
  __int64 v35; // x0
  __int64 v36; // t1
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // x0
  __int64 v41; // t1
  __int64 v42; // x3
  int v43; // w8
  int v44; // w9
  int v45; // w8

  v5 = *(_QWORD *)(a2 + 16);
  v10 = result;
  if ( (a5 & 1) != 0 )
  {
    v11 = *(const char **)(result + 8);
    result = strcmp(v11, *(const char **)(v5 + 8));
    if ( (_DWORD)result )
    {
      result = strcmp(v11, *(const char **)(*(_QWORD *)a2 + 8LL));
      if ( (_DWORD)result )
      {
LABEL_4:
        v12 = *(_QWORD *)(v10 + 32);
        v13 = *(unsigned int *)(v10 + 20);
        v14 = v12 >> 8;
        if ( (v12 & 1) != 0 )
          v14 = *(_QWORD *)(*(_QWORD *)a3 + v14);
        if ( (v12 & 2) != 0 )
          v15 = a4;
        else
          v15 = 2;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64, _QWORD))(**(_QWORD **)(v10 + 24) + 48LL))(
                   *(_QWORD *)(v10 + 24),
                   a2,
                   &a3[v14],
                   v15,
                   a5 & 1);
        if ( (unsigned int)v13 >= 2 )
        {
          v16 = *(_DWORD *)(v10 + 16);
          v17 = v10 + 16 * v13 + 24;
          v18 = (__int64 *)(v10 + 40);
          if ( (v16 & 2) != 0 || *(_DWORD *)(a2 + 60) == 1 )
          {
            do
            {
              if ( *(_BYTE *)(a2 + 78) )
                break;
              v19 = v18[1];
              v20 = v19 >> 8;
              if ( (v19 & 1) != 0 )
                v20 = *(_QWORD *)(*(_QWORD *)a3 + v20);
              v22 = *v18;
              v18 += 2;
              v21 = v22;
              v23 = (v19 & 2) != 0 ? a4 : 2LL;
              result = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v21 + 48LL))(
                         v21,
                         a2,
                         &a3[v20],
                         v23,
                         a5 & 1);
            }
            while ( (unsigned __int64)v18 < v17 );
          }
          else if ( (v16 & 1) != 0 )
          {
            do
            {
              if ( *(_BYTE *)(a2 + 78) || *(_DWORD *)(a2 + 60) == 1 && *(_DWORD *)(a2 + 48) == 1 )
                break;
              v38 = v18[1];
              v39 = v38 >> 8;
              if ( (v38 & 1) != 0 )
                v39 = *(_QWORD *)(*(_QWORD *)a3 + v39);
              v41 = *v18;
              v18 += 2;
              v40 = v41;
              v42 = (v38 & 2) != 0 ? a4 : 2LL;
              result = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v40 + 48LL))(
                         v40,
                         a2,
                         &a3[v39],
                         v42,
                         a5 & 1);
            }
            while ( (unsigned __int64)v18 < v17 );
          }
          else
          {
            do
            {
              if ( *(_BYTE *)(a2 + 78) || *(_DWORD *)(a2 + 60) == 1 )
                break;
              v33 = v18[1];
              v34 = v33 >> 8;
              if ( (v33 & 1) != 0 )
                v34 = *(_QWORD *)(*(_QWORD *)a3 + v34);
              v36 = *v18;
              v18 += 2;
              v35 = v36;
              v37 = (v33 & 2) != 0 ? a4 : 2LL;
              result = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v35 + 48LL))(
                         v35,
                         a2,
                         &a3[v34],
                         v37,
                         a5 & 1);
            }
            while ( (unsigned __int64)v18 < v17 );
          }
        }
        return result;
      }
      goto LABEL_22;
    }
LABEL_42:
    if ( *(char **)(a2 + 8) == a3 && *(_DWORD *)(a2 + 52) != 1 )
      *(_DWORD *)(a2 + 52) = a4;
    return result;
  }
  if ( result == v5 )
    goto LABEL_42;
  if ( result != *(_QWORD *)a2 )
    goto LABEL_4;
LABEL_22:
  if ( *(char **)(a2 + 32) != a3 && *(char **)(a2 + 40) != a3 )
  {
    v24 = *(_DWORD *)(a2 + 68);
    *(_DWORD *)(a2 + 56) = a4;
    if ( v24 == 4 )
      return result;
    v25 = *(unsigned int *)(v10 + 20);
    if ( (_DWORD)v25 )
    {
      v26 = 0;
      v27 = 0;
      v28 = (_QWORD *)(v10 + 24);
      v29 = v10 + 16 * v25 + 24;
      do
      {
        *(_WORD *)(a2 + 76) = 0;
        v30 = v28[1];
        v31 = v30 >> 8;
        if ( (v30 & 1) != 0 )
          v31 = *(_QWORD *)(*(_QWORD *)a3 + v31);
        if ( (v30 & 2) != 0 )
          v32 = 1;
        else
          v32 = 2;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, __int64, _QWORD))(*(_QWORD *)*v28 + 40LL))(
                   *v28,
                   a2,
                   a3,
                   &a3[v31],
                   v32,
                   a5 & 1);
        if ( *(_BYTE *)(a2 + 78) )
          break;
        if ( *(_BYTE *)(a2 + 77) )
        {
          if ( *(_BYTE *)(a2 + 76) )
          {
            if ( *(_DWORD *)(a2 + 48) == 1 || (*(_BYTE *)(v10 + 16) & 2) == 0 )
              goto LABEL_73;
            v27 = 1;
            v26 = 1;
          }
          else
          {
            v26 = 1;
            if ( (*(_BYTE *)(v10 + 16) & 1) == 0 )
              break;
          }
        }
        v28 += 2;
      }
      while ( (unsigned __int64)v28 < v29 );
      if ( (v27 & 1) != 0 )
        goto LABEL_72;
    }
    else
    {
      v26 = 0;
    }
    v44 = *(_DWORD *)(a2 + 60);
    v43 = *(_DWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 40) = a3;
    *(_DWORD *)(a2 + 64) = v43 + 1;
    if ( v44 == 1 && *(_DWORD *)(a2 + 48) == 2 )
    {
      *(_BYTE *)(a2 + 78) = 1;
      if ( (v26 & 1) != 0 )
      {
LABEL_73:
        v45 = 3;
        goto LABEL_74;
      }
LABEL_71:
      v45 = 4;
LABEL_74:
      *(_DWORD *)(a2 + 68) = v45;
      return result;
    }
LABEL_72:
    if ( (v26 & 1) != 0 )
      goto LABEL_73;
    goto LABEL_71;
  }
  if ( a4 == 1 )
    *(_DWORD *)(a2 + 56) = 1;
  return result;
}
