/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50A30
// Address: 0x00050A30

//----- (00050A30) --------------------------------------------------------
int __fastcall sub_50A30(int a1, int a2, _BYTE *a3)
{
  int *v3; // r7
  int v4; // r5
  int v5; // r0
  int v6; // r7
  char *v7; // r0
  int v8; // r1
  int v9; // r6
  int v10; // r6
  int v11; // r4
  void *v12; // r1
  char v13; // r2
  int v14; // r6
  void *v15; // r1
  int v16; // r1
  int v17; // r5
  char v18; // r4
  void *v19; // r1
  int v20; // r5
  void *v21; // r1
  _BYTE *v22; // r0
  int v23; // r4
  int v24; // r1
  char *v25; // r0
  int v26; // r2
  char *v27; // r3
  void *v28; // r1
  int v29; // r0
  unsigned int v30; // r2
  int v31; // r0
  int v32; // r1
  char *v33; // r0
  int v34; // r2
  char *v35; // r1
  void *v36; // r3
  int v37; // r0
  unsigned int v38; // r2
  int v42; // [sp+Ch] [bp-28h]
  _BYTE *v43; // [sp+10h] [bp-24h]
  char v44; // [sp+14h] [bp-20h]
  int v45; // [sp+18h] [bp-1Ch]
  void *ptr; // [sp+24h] [bp-10h] BYREF
  int v48; // [sp+28h] [bp-Ch]
  unsigned int v49; // [sp+2Ch] [bp-8h]

  v3 = (int *)a1;
  v4 = 0;
  v49 = 0;
  v48 = 0;
  ptr = nullptr;
  *a3 = 1;
  v43 = (_BYTE *)(a1 + 492);
  v45 = 0;
  v42 = 0;
LABEL_3:
  while ( 1 )
  {
    v5 = sub_5014C(v3);
    v6 = v5;
    if ( v5 )
      break;
    if ( v42 << 31 )
    {
      v3 = (int *)a1;
      v7 = *(char **)(a1 + 4);
      while ( 2 )
      {
        v8 = (unsigned __int8)*v7;
        v9 = 0;
        switch ( *v7 )
        {
          case 0:
            goto LABEL_46;
          case 9:
          case 10:
          case 32:
            if ( v4 << 31 )
            {
              v3[1] = (int)++v7;
              v4 = 1;
              continue;
            }
            v9 = 1;
            goto LABEL_41;
          case 34:
            while ( 2 )
            {
              if ( v8 << 24 )
              {
                v3[1] = (int)(v7 + 1);
                v10 = v48 - 1;
                if ( !v48 )
                  v10 = 0;
                v11 = (unsigned __int8)*v7;
                v12 = ptr;
                if ( v49 < v10 + 2 )
                {
                  v12 = qvector_reserve((int)&ptr, ptr, v10 + 2, 1u);
                  ptr = v12;
                }
                v48 = v10 + 2;
                *((_BYTE *)v12 + v10) = v11;
                v8 = 0;
                *((_BYTE *)ptr + v10 + 1) = 0;
                v3 = (int *)a1;
                v7 = *(char **)(a1 + 4);
                if ( v11 == 92 )
                {
                  v13 = *v7;
                  if ( *v7 )
                  {
                    v14 = v48 - 1;
                    if ( !v48 )
                      v14 = 0;
                    v15 = ptr;
                    if ( v49 < v14 + 2 )
                    {
                      v44 = *v7;
                      v15 = qvector_reserve((int)&ptr, ptr, v14 + 2, 1u);
                      ptr = v15;
                      v13 = v44;
                    }
                    v48 = v14 + 2;
                    *((_BYTE *)v15 + v14) = v13;
                    *((_BYTE *)ptr + v14 + 1) = 0;
                    v3 = (int *)a1;
                    v7 = (char *)(*(_DWORD *)(a1 + 4) + 1);
                    *(_DWORD *)(a1 + 4) = v7;
                    goto LABEL_22;
                  }
                }
                else
                {
LABEL_22:
                  v8 = (unsigned __int8)*v7;
                }
                if ( v8 == 34 )
                  goto LABEL_40;
                continue;
              }
              break;
            }
LABEL_46:
            v20 = v48 - 1;
            if ( !v48 )
              v20 = 0;
            v21 = ptr;
            if ( v49 < v20 + 2 )
            {
              v21 = qvector_reserve((int)&ptr, ptr, v20 + 2, 1u);
              ptr = v21;
            }
            v48 = v20 + 2;
            *((_BYTE *)v21 + v20) = 32;
            *((_BYTE *)ptr + v20 + 1) = 0;
            v4 = 1;
            v3 = (int *)a1;
            break;
          case 40:
            if ( (*v43 & 2) != 0 && v7[1] == 42 )
              goto LABEL_3;
            v16 = v45 + 1;
            goto LABEL_39;
          case 41:
            if ( !v45 )
            {
              v32 = *(_DWORD *)(a2 + 4);
              if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v32 + 1) )
              {
                v33 = *(char **)a2;
              }
              else
              {
                v33 = (char *)qvector_reserve(a2, *(void **)a2, v32 + 1, 0xCu);
                *(_DWORD *)a2 = v33;
                v32 = *(_DWORD *)(a2 + 4);
              }
              v34 = 12 * v32;
              v6 = 0;
              *(_DWORD *)&v33[v34] = 0;
              v35 = &v33[12 * v32];
              *((_DWORD *)v35 + 1) = 0;
              *((_DWORD *)v35 + 2) = 0;
              ++*(_DWORD *)(a2 + 4);
              v36 = *(void **)&v33[v34];
              *(_DWORD *)&v33[v34] = ptr;
              v37 = *((_DWORD *)v35 + 1);
              *((_DWORD *)v35 + 1) = v48;
              v38 = *((_DWORD *)v35 + 2);
              *((_DWORD *)v35 + 2) = v49;
              v49 = v38;
              v48 = v37;
              ptr = v36;
              ++*(_DWORD *)(a1 + 4);
              goto LABEL_65;
            }
            v16 = v45 - 1;
LABEL_39:
            v45 = v16;
LABEL_40:
            v9 = v4;
LABEL_41:
            v3[1] = (int)(v7 + 1);
            v17 = v48 - 1;
            if ( !v48 )
              v17 = 0;
            v18 = *v7;
            v19 = ptr;
            if ( v49 < v17 + 2 )
            {
              v19 = qvector_reserve((int)&ptr, ptr, v17 + 2, 1u);
              ptr = v19;
            }
            v48 = v17 + 2;
            *((_BYTE *)v19 + v17) = v18;
            *((_BYTE *)ptr + v17 + 1) = 0;
            v4 = v9;
            v3 = (int *)a1;
            v7 = *(char **)(a1 + 4);
            continue;
          case 44:
            if ( v45 )
              goto LABEL_40;
            v23 = a2;
            v24 = *(_DWORD *)(a2 + 4);
            if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v24 + 1) )
            {
              v25 = *(char **)a2;
            }
            else
            {
              v25 = (char *)qvector_reserve(a2, *(void **)a2, v24 + 1, 0xCu);
              v23 = a2;
              *(_DWORD *)a2 = v25;
              v24 = *(_DWORD *)(a2 + 4);
              v3 = (int *)a1;
            }
            v26 = 12 * v24;
            *(_DWORD *)&v25[v26] = 0;
            v27 = &v25[12 * v24];
            *((_DWORD *)v27 + 1) = 0;
            *((_DWORD *)v27 + 2) = 0;
            ++*(_DWORD *)(v23 + 4);
            v28 = *(void **)v27;
            *(_DWORD *)&v25[v26] = ptr;
            v29 = *(_DWORD *)&v25[v26 + 4];
            *((_DWORD *)v27 + 1) = v48;
            v30 = *((_DWORD *)v27 + 2);
            *((_DWORD *)v27 + 2) = v49;
            v49 = v30;
            v48 = v29;
            ptr = v28;
            ++v3[1];
            goto LABEL_3;
          case 47:
            if ( *(_DWORD *)v43 << 31 && v7[1] == 42 || (*(_DWORD *)v43 & 4) != 0 && v7[1] == 47 )
              goto LABEL_3;
            goto LABEL_41;
          case 59:
            if ( (*v43 & 8) != 0 )
              goto LABEL_3;
            goto LABEL_41;
          default:
            goto LABEL_41;
        }
        break;
      }
    }
    else
    {
      v3 = (int *)a1;
      v22 = *(_BYTE **)(a1 + 4);
      if ( *v22 != 40 )
      {
        v6 = 0;
        *a3 = 0;
        goto LABEL_65;
      }
      *(_DWORD *)(a1 + 4) = v22 + 1;
      v42 = 1;
      if ( v22[1] == 41 )
      {
        *(_DWORD *)(a1 + 4) = v22 + 2;
        v6 = 0;
        goto LABEL_65;
      }
    }
  }
  if ( v5 == 34 )
  {
    v31 = 38;
    if ( (v42 & 1) == 0 )
      v31 = 0;
    v6 = set_qerrno(v31);
  }
LABEL_65:
  if ( ptr )
  {
    v48 = 0;
    qfree(ptr);
    v49 = 0;
    ptr = nullptr;
  }
  return v6;
}
