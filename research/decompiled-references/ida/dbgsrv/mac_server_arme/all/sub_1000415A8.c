/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000415A8
// Address: 0x00000001000415A8

//----- (00000001000415A8) ----------------------------------------------------
__int64 __fastcall sub_1000415A8(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  char v6; // w23
  int v7; // w26
  __int64 v8; // x22
  __int64 result; // x0
  __int64 v10; // x27
  char *v11; // x8
  unsigned int v12; // w9
  int v13; // w9
  int v14; // w28
  void *v15; // x1
  __int64 v16; // x25
  char v17; // w28
  void *v18; // x1
  __int64 v19; // x25
  int v20; // w9
  char v21; // w28
  void *v22; // x1
  __int64 v23; // x25
  void *v24; // x1
  __int64 v25; // x25
  _QWORD *v26; // x1
  __int64 v27; // x8
  void **v28; // x8
  void *v29; // x9
  __int128 v30; // q0
  _BYTE *v31; // x8
  void *v32; // x8
  _QWORD *v33; // x1
  __int64 v34; // x8
  void **v35; // x8
  void *v36; // x9
  void *v37; // x10
  __int64 v38; // x19
  void *v39; // [xsp+0h] [xbp-70h] BYREF
  __int128 v40; // [xsp+8h] [xbp-68h]

  v6 = 0;
  v39 = nullptr;
  v40 = 0u;
  *a3 = 1;
  while ( 2 )
  {
    v7 = 0;
    v8 = 0;
LABEL_4:
    result = sub_100040994(a1);
    if ( !(_DWORD)result )
    {
      v10 = v8;
      if ( (v6 & 1) == 0 )
      {
        v31 = *(_BYTE **)(a1 + 8);
        if ( *v31 != 40 )
        {
          result = 0;
          *a3 = 0;
          v32 = v39;
          if ( v39 )
            goto LABEL_99;
          return result;
        }
        *(_QWORD *)(a1 + 8) = v31 + 1;
        v6 = 1;
        if ( v31[1] == 41 )
        {
          result = 0;
          *(_QWORD *)(a1 + 8) = v31 + 2;
          v32 = v39;
          if ( v39 )
            goto LABEL_99;
          return result;
        }
        continue;
      }
      while ( 1 )
      {
        v11 = *(char **)(a1 + 8);
        v12 = (unsigned __int8)*v11;
        if ( v12 <= 0x27 )
        {
          if ( (unsigned __int8)*v11 > 0x1Fu )
          {
            if ( v12 != 32 )
            {
              if ( v12 == 34 )
                goto LABEL_25;
LABEL_58:
              v10 = 0;
              goto LABEL_74;
            }
          }
          else if ( v12 - 9 >= 2 )
          {
LABEL_17:
            if ( !v12 )
            {
LABEL_79:
              v24 = v39;
              if ( (_QWORD)v40 )
                v25 = v40 - 1;
              else
                v25 = 0;
              if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v25 + 2) )
              {
                v24 = qvector_reserve(&v39, v39, v25 + 2, 1u);
                v39 = v24;
              }
              *(_QWORD *)&v40 = v25 + 2;
              *((_BYTE *)v24 + v25) = 32;
              *((_BYTE *)v39 + v25 + 1) = 0;
              v8 = 1;
              goto LABEL_4;
            }
            goto LABEL_58;
          }
          if ( (v10 & 1) == 0 )
          {
            v10 = 1;
            goto LABEL_74;
          }
          while ( 1 )
          {
            while ( 1 )
            {
              *(_QWORD *)(a1 + 8) = ++v11;
              v12 = (unsigned __int8)*v11;
              if ( v12 > 0x1F )
                break;
              if ( v12 - 9 >= 2 )
                goto LABEL_17;
            }
            if ( (unsigned __int8)*v11 > 0x21u )
              break;
            if ( v12 != 32 )
              goto LABEL_58;
          }
          if ( (unsigned __int8)*v11 <= 0x2Bu )
          {
            if ( v12 == 34 )
            {
              v10 = 1;
LABEL_25:
              v13 = 34;
              while ( 1 )
              {
                if ( !v13 )
                  goto LABEL_79;
                *(_QWORD *)(a1 + 8) = v11 + 1;
                v14 = (unsigned __int8)*v11;
                v15 = v39;
                if ( (_QWORD)v40 )
                  v16 = v40 - 1;
                else
                  v16 = 0;
                if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v16 + 2) )
                {
                  v15 = qvector_reserve(&v39, v39, v16 + 2, 1u);
                  v39 = v15;
                }
                *(_QWORD *)&v40 = v16 + 2;
                *((_BYTE *)v15 + v16) = v14;
                *((_BYTE *)v39 + v16 + 1) = 0;
                v11 = *(char **)(a1 + 8);
                if ( v14 == 92 )
                {
                  v17 = *v11;
                  if ( !*v11 )
                  {
                    v13 = 0;
                    continue;
                  }
                  v18 = v39;
                  if ( (_QWORD)v40 )
                    v19 = v40 - 1;
                  else
                    v19 = 0;
                  if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v19 + 2) )
                  {
                    v18 = qvector_reserve(&v39, v39, v19 + 2, 1u);
                    v39 = v18;
                  }
                  *(_QWORD *)&v40 = v19 + 2;
                  *((_BYTE *)v18 + v19) = v17;
                  *((_BYTE *)v39 + v19 + 1) = 0;
                  v11 = (char *)(*(_QWORD *)(a1 + 8) + 1LL);
                  *(_QWORD *)(a1 + 8) = v11;
                }
                v13 = (unsigned __int8)*v11;
                if ( v13 == 34 )
                  goto LABEL_74;
              }
            }
            if ( v12 != 40 )
            {
              if ( v12 == 41 )
              {
                v10 = 1;
                if ( !v7 )
                {
LABEL_96:
                  v33 = (_QWORD *)*a2;
                  v34 = a2[1];
                  if ( a2[2] < (unsigned __int64)(v34 + 1) )
                  {
                    v33 = qvector_reserve(a2, v33, v34 + 1, 0x18u);
                    *a2 = v33;
                    v34 = a2[1];
                  }
                  result = 0;
                  v35 = (void **)&v33[3 * v34];
                  *v35 = nullptr;
                  v35[1] = nullptr;
                  v35[2] = nullptr;
                  ++a2[1];
                  v36 = *v35;
                  v37 = v35[2];
                  *v35 = v39;
                  *(_OWORD *)(v35 + 1) = v40;
                  v39 = v36;
                  *((_QWORD *)&v40 + 1) = v37;
                  ++*(_QWORD *)(a1 + 8);
                  v32 = v39;
                  if ( v39 )
                    goto LABEL_99;
                  return result;
                }
                goto LABEL_22;
              }
              goto LABEL_58;
            }
            v10 = 1;
LABEL_66:
            if ( (*(_BYTE *)(a1 + 612) & 2) != 0 && v11[1] == 42 )
            {
              v8 = v10;
              goto LABEL_4;
            }
            ++v7;
            goto LABEL_74;
          }
          if ( v12 == 44 )
          {
            v10 = 1;
LABEL_73:
            if ( !v7 )
            {
              v26 = (_QWORD *)*a2;
              v27 = a2[1];
              if ( a2[2] < (unsigned __int64)(v27 + 1) )
              {
                v26 = qvector_reserve(a2, v26, v27 + 1, 0x18u);
                *a2 = v26;
                v27 = a2[1];
              }
              v7 = 0;
              v28 = (void **)&v26[3 * v27];
              *v28 = nullptr;
              v28[1] = nullptr;
              v28[2] = nullptr;
              ++a2[1];
              v29 = *v28;
              *v28 = v39;
              v30 = *(_OWORD *)(v28 + 1);
              *(_OWORD *)(v28 + 1) = v40;
              v39 = v29;
              v40 = v30;
              ++*(_QWORD *)(a1 + 8);
              v8 = v10;
              goto LABEL_4;
            }
            goto LABEL_74;
          }
          if ( v12 != 47 )
          {
            if ( v12 != 59 )
              goto LABEL_58;
            v10 = 1;
            goto LABEL_13;
          }
          v8 = 1;
          v20 = *(_DWORD *)(a1 + 612);
          if ( (v20 & 1) != 0 )
          {
LABEL_56:
            if ( v11[1] == 42 )
              goto LABEL_4;
          }
        }
        else
        {
          if ( (unsigned __int8)*v11 <= 0x2Bu )
          {
            if ( v12 != 40 )
            {
              if ( v12 == 41 )
              {
                if ( !v7 )
                  goto LABEL_96;
LABEL_22:
                --v7;
                goto LABEL_74;
              }
              goto LABEL_58;
            }
            goto LABEL_66;
          }
          if ( v12 == 44 )
            goto LABEL_73;
          if ( v12 != 47 )
          {
            if ( v12 != 59 )
              goto LABEL_58;
LABEL_13:
            v8 = v10;
            v10 = 0;
            if ( (*(_BYTE *)(a1 + 612) & 8) != 0 )
              goto LABEL_4;
            goto LABEL_74;
          }
          v8 = v10;
          v20 = *(_DWORD *)(a1 + 612);
          if ( (v20 & 1) != 0 )
            goto LABEL_56;
        }
        if ( (v20 & 4) == 0 )
          goto LABEL_58;
        v10 = 0;
        if ( v11[1] == 47 )
          goto LABEL_4;
LABEL_74:
        *(_QWORD *)(a1 + 8) = v11 + 1;
        v21 = *v11;
        v22 = v39;
        if ( (_QWORD)v40 )
          v23 = v40 - 1;
        else
          v23 = 0;
        if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v23 + 2) )
        {
          v22 = qvector_reserve(&v39, v39, v23 + 2, 1u);
          v39 = v22;
        }
        *(_QWORD *)&v40 = v23 + 2;
        *((_BYTE *)v22 + v23) = v21;
        *((_BYTE *)v39 + v23 + 1) = 0;
      }
    }
    break;
  }
  if ( (_DWORD)result == 34 )
    result = set_qerrno();
  v32 = v39;
  if ( v39 )
  {
LABEL_99:
    *(_QWORD *)&v40 = 0;
    v38 = result;
    qfree(v32);
    return v38;
  }
  return result;
}
