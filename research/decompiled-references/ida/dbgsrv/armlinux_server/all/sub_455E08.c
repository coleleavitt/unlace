/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455E08
// Address: 0x0000000000455E08

//----- (0000000000455E08) ----------------------------------------------------
__int64 __fastcall sub_455E08(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // w26
  int v6; // w24
  int v7; // w22
  unsigned int v8; // w0
  unsigned int v9; // w19
  unsigned __int8 *v10; // x0
  unsigned int v11; // w1
  unsigned __int8 *v12; // x1
  void *v13; // x0
  unsigned __int64 v15; // x19
  unsigned __int8 *v16; // x1
  char v17; // w28
  unsigned __int64 v18; // x21
  unsigned __int64 v19; // x19
  void *v20; // x0
  unsigned __int64 v21; // x21
  unsigned __int64 v22; // x19
  _BYTE *v23; // x0
  int v24; // w1
  __int64 v25; // x3
  char *v26; // x0
  __int64 v27; // x2
  char *v28; // x3
  void *v29; // x6
  void *v30; // x5
  unsigned __int64 v31; // x1
  unsigned __int64 v32; // x4
  int v33; // w21
  unsigned __int64 v34; // x28
  unsigned __int64 v35; // x19
  _BYTE *v36; // x0
  int v37; // w1
  char v38; // w21
  unsigned __int64 v39; // x19
  unsigned __int64 v40; // x28
  _BYTE *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x3
  char *v44; // x1
  void **v45; // x3
  void *v46; // x6
  unsigned __int64 v47; // x4
  void *v48; // x5
  void *ptr; // [xsp+70h] [xbp-20h] BYREF
  unsigned __int64 v51; // [xsp+78h] [xbp-18h]
  unsigned __int64 v52; // [xsp+80h] [xbp-10h]

  v5 = 0;
  v6 = 0;
  ptr = nullptr;
  v7 = 0;
  v51 = 0;
  v52 = 0;
  *a3 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      v8 = sub_455C28(a1);
      v9 = v8;
      if ( v8 == 34 )
      {
        if ( v7 )
          v42 = 38;
        else
          v42 = 0;
        v9 = sub_4869C8(v42);
        v13 = ptr;
        goto LABEL_8;
      }
      if ( v8 )
        goto LABEL_72;
      v10 = *(unsigned __int8 **)(a1 + 8);
      v11 = *v10;
      if ( !v7 )
        break;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v11 == 34 )
          {
            v15 = v51;
            *(_QWORD *)(a1 + 8) = v10 + 1;
            v33 = *v10;
            if ( !v15 )
              goto LABEL_57;
            while ( 2 )
            {
              v34 = v15 - 1;
              v35 = v15 + 1;
              v36 = ptr;
              if ( v35 <= v52 )
              {
LABEL_53:
                v51 = v35;
                v36[v34] = v33;
                *((_BYTE *)ptr + v34 + 1) = 0;
                v10 = *(unsigned __int8 **)(a1 + 8);
                if ( v33 == 92 )
                  goto LABEL_59;
LABEL_54:
                v37 = *v10;
                v15 = v51;
                if ( v37 != 34 )
                  goto LABEL_55;
LABEL_63:
                v16 = v10 + 1;
                goto LABEL_15;
              }
LABEL_58:
              ptr = sub_491288((__int64)&ptr, v36, v35, 1u);
              v51 = v35;
              *((_BYTE *)ptr + v34) = v33;
              *((_BYTE *)ptr + v34 + 1) = 0;
              v10 = *(unsigned __int8 **)(a1 + 8);
              if ( v33 != 92 )
                goto LABEL_54;
LABEL_59:
              v38 = *v10;
              v15 = v51;
              if ( !*v10 )
                goto LABEL_32;
              if ( v51 )
              {
                v40 = v51 - 1;
                v39 = v51 + 1;
                v41 = ptr;
                if ( v51 + 1 <= v52 )
                  goto LABEL_62;
              }
              else
              {
                v39 = 2;
                v40 = 0;
                v41 = ptr;
                if ( v52 >= 2 )
                {
LABEL_62:
                  v51 = v39;
                  v41[v40] = v38;
                  *((_BYTE *)ptr + v40 + 1) = 0;
                  v15 = v51;
                  v10 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
                  *(_QWORD *)(a1 + 8) = v10;
                  v37 = *v10;
                  if ( v37 == 34 )
                    goto LABEL_63;
LABEL_55:
                  if ( !v37 )
                    goto LABEL_32;
                  *(_QWORD *)(a1 + 8) = v10 + 1;
                  v33 = *v10;
                  if ( v15 )
                    continue;
LABEL_57:
                  v35 = 2;
                  v34 = 0;
                  v36 = ptr;
                  if ( v52 >= 2 )
                    goto LABEL_53;
                  goto LABEL_58;
                }
              }
              break;
            }
            v41 = sub_491288((__int64)&ptr, v41, v39, 1u);
            ptr = v41;
            goto LABEL_62;
          }
          if ( v11 > 0x22 )
            break;
          if ( v11 > 0xA )
          {
            if ( v11 != 32 )
              goto LABEL_14;
          }
          else if ( v11 < 9 )
          {
            if ( !v11 )
            {
              v15 = v51;
LABEL_32:
              if ( v15 )
              {
                v21 = v15 - 1;
                v22 = v15 + 1;
                v23 = ptr;
                if ( v52 >= v22 )
                {
LABEL_34:
                  v51 = v22;
                  v23[v21] = 32;
                  v5 = v7;
                  *((_BYTE *)ptr + v21 + 1) = 0;
                  goto LABEL_35;
                }
              }
              else
              {
                v22 = 2;
                v21 = 0;
                v23 = ptr;
                if ( v52 >= 2 )
                  goto LABEL_34;
              }
              v23 = sub_491288((__int64)&ptr, v23, v22, 1u);
              ptr = v23;
              goto LABEL_34;
            }
            goto LABEL_14;
          }
          v16 = v10 + 1;
          if ( !v5 )
          {
            v5 = v7;
            v15 = v51;
            goto LABEL_15;
          }
          ++v10;
          *(_QWORD *)(a1 + 8) = v16;
          v11 = *v16;
        }
        if ( v11 == 44 )
          break;
        if ( v11 > 0x2C )
        {
          if ( v11 != 47 )
          {
            if ( v11 == 59 && (*(_DWORD *)(a1 + 764) & 8) != 0 )
              goto LABEL_35;
LABEL_14:
            v15 = v51;
            v16 = v10 + 1;
            v5 = 0;
            goto LABEL_15;
          }
          v24 = *(_DWORD *)(a1 + 764);
          if ( (v24 & 1) != 0 && v10[1] == 42 )
            goto LABEL_35;
          if ( (v24 & 4) == 0 )
            goto LABEL_14;
          if ( v10[1] == 47 )
            goto LABEL_35;
          v16 = v10 + 1;
          v5 = 0;
          v15 = v51;
LABEL_15:
          *(_QWORD *)(a1 + 8) = v16;
          v17 = *v10;
          if ( !v15 )
            goto LABEL_26;
          goto LABEL_16;
        }
        if ( v11 == 40 )
        {
          if ( (*(_DWORD *)(a1 + 764) & 2) != 0 && v10[1] == 42 )
          {
            v7 = 1;
            goto LABEL_2;
          }
          ++v6;
          goto LABEL_43;
        }
        if ( v11 != 41 )
          goto LABEL_14;
        if ( !v6 )
        {
          v43 = *(_QWORD *)(a2 + 8);
          v44 = *(char **)a2;
          if ( (unsigned __int64)(v43 + 1) > *(_QWORD *)(a2 + 16) )
          {
            v44 = (char *)sub_491288(a2, v44, v43 + 1, 0x18u);
            v43 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v44;
          }
          v9 = 0;
          v45 = (void **)&v44[24 * v43];
          *v45 = nullptr;
          v45[1] = nullptr;
          v45[2] = nullptr;
          v46 = ptr;
          ++*(_QWORD *)(a2 + 8);
          v13 = *v45;
          v48 = v45[1];
          v47 = (unsigned __int64)v45[2];
          *v45 = v46;
          v45[1] = (void *)v51;
          ptr = v13;
          v51 = (unsigned __int64)v48;
          v45[2] = (void *)v52;
          v52 = v47;
          ++*(_QWORD *)(a1 + 8);
          goto LABEL_8;
        }
        v15 = v51;
        *(_QWORD *)(a1 + 8) = v10 + 1;
        --v6;
        v17 = *v10;
        if ( !v15 )
        {
LABEL_26:
          v19 = 2;
          v18 = 0;
          v20 = ptr;
          if ( v52 >= 2 )
            goto LABEL_17;
          goto LABEL_27;
        }
LABEL_16:
        v18 = v15 - 1;
        v19 = v15 + 1;
        v20 = ptr;
        if ( v52 >= v19 )
          goto LABEL_17;
LABEL_27:
        v20 = sub_491288((__int64)&ptr, v20, v19, 1u);
        ptr = v20;
LABEL_17:
        v51 = v19;
        *((_BYTE *)v20 + v18) = v17;
        *((_BYTE *)ptr + v18 + 1) = 0;
        v10 = *(unsigned __int8 **)(a1 + 8);
        v11 = *v10;
      }
      if ( v6 )
      {
LABEL_43:
        v16 = v10 + 1;
        v15 = v51;
        goto LABEL_15;
      }
      v25 = *(_QWORD *)(a2 + 8);
      v26 = *(char **)a2;
      if ( (unsigned __int64)(v25 + 1) > *(_QWORD *)(a2 + 16) )
      {
        v26 = (char *)sub_491288(a2, *(void **)a2, v25 + 1, 0x18u);
        v25 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v26;
      }
      v27 = 3 * v25;
      v7 = 1;
      v28 = &v26[24 * v25];
      *(_QWORD *)&v26[8 * v27] = 0;
      v29 = ptr;
      *((_QWORD *)v28 + 1) = 0;
      *((_QWORD *)v28 + 2) = 0;
      ++*(_QWORD *)(a2 + 8);
      v30 = *(void **)&v26[8 * v27];
      v32 = *((_QWORD *)v28 + 1);
      v31 = *((_QWORD *)v28 + 2);
      *(_QWORD *)&v26[8 * v27] = v29;
      *((_QWORD *)v28 + 1) = v51;
      ptr = v30;
      v51 = v32;
      *((_QWORD *)v28 + 2) = v52;
      v52 = v31;
      ++*(_QWORD *)(a1 + 8);
    }
    if ( v11 != 40 )
      break;
    *(_QWORD *)(a1 + 8) = v10 + 1;
    if ( v10[1] == 41 )
    {
      v12 = v10 + 2;
      v13 = ptr;
      *(_QWORD *)(a1 + 8) = v12;
      goto LABEL_8;
    }
LABEL_35:
    v7 = 1;
  }
  *a3 = 0;
LABEL_72:
  v13 = ptr;
LABEL_8:
  if ( v13 )
  {
    v51 = 0;
    j__free(v13);
  }
  return v9;
}
