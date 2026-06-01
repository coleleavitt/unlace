/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_674E0
// Address: 0x000674E0

//----- (000674E0) --------------------------------------------------------
int __fastcall sub_674E0(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v6; // r10
  unsigned int v7; // r0
  size_t v8; // r8
  void *v9; // r9
  unsigned __int8 *v10; // r1
  _BOOL4 v11; // r4
  unsigned int v12; // r7
  _BYTE *v13; // r0
  size_t v14; // r7
  size_t v15; // r7
  void *v16; // r10
  _BYTE *v17; // r0
  size_t v18; // r8
  int v20; // r9
  unsigned int v21; // r11
  int v22; // r4
  unsigned int v23; // r8
  int v24; // r9
  unsigned int v25; // r10
  char *v26; // r0
  int v27; // r2
  char *v28; // r0
  int v29; // r2
  char *v30; // r0
  int v31; // r2
  void *ptr; // [sp+Ch] [bp-20h] BYREF
  size_t v33; // [sp+10h] [bp-1Ch] BYREF
  unsigned __int8 *v34; // [sp+14h] [bp-18h] BYREF
  unsigned int v35; // [sp+18h] [bp-14h]
  _BYTE v36[5]; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v37[3]; // [sp+21h] [bp-Bh] BYREF

  if ( *(_DWORD *)(a1 + 20) )
  {
    v34 = a3;
    v35 = a4;
    v6 = sub_762E4(&v34, a4);
    v7 = sub_762E4(&v34, v35);
    v8 = v7;
    if ( v7 )
    {
      v9 = sub_77EFC(v7);
      if ( !v9 )
        return 2;
    }
    else
    {
      v9 = nullptr;
    }
    v10 = v34;
    v11 = v34 > &v34[v8];
    if ( v35 < (unsigned int)&v34[v8] )
      v11 = 1;
    if ( !v11 )
    {
      v34 += v8;
      if ( memcpy(v9, v10, v8) )
      {
        v33 = 0;
        ptr = nullptr;
        v12 = (*(int (__fastcall **)(int, unsigned int, void *, size_t, void **, size_t *))(a1 + 20))(
                a1,
                v6,
                v9,
                v8,
                &ptr,
                &v33);
        sub_77F70(v9);
        v13 = sub_76118(v36, (unsigned int)v37, v12);
        v14 = v13 - v36;
        if ( v13 == v36 )
          goto LABEL_9;
        v24 = *(_DWORD *)(a2 + 4);
        v25 = v14 + v24;
        if ( __CFADD__(v14, v24) )
        {
          if ( (unsigned int)v24 > 0x7FFFFFFE )
          {
            if ( v24 < 0 )
              *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
            goto LABEL_33;
          }
          v25 = 0x7FFFFFFF;
        }
        else if ( v24 >= v25 )
        {
LABEL_33:
          memcpy((void *)(*(_DWORD *)a2 + v24), v36, v14);
LABEL_9:
          v15 = v33;
          v16 = ptr;
          v17 = sub_76118(v36, (unsigned int)v37, v33);
          v18 = v17 - v36;
          if ( v17 == v36 )
          {
            if ( !v15 )
            {
LABEL_11:
              sub_77F70(ptr);
              return 0;
            }
LABEL_22:
            v22 = *(_DWORD *)(a2 + 4);
            v23 = v15 + v22;
            if ( __CFADD__(v15, v22) )
            {
              if ( (unsigned int)v22 > 0x7FFFFFFE )
              {
                if ( v22 < 0 )
                  *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
                goto LABEL_27;
              }
              v23 = 0x7FFFFFFF;
            }
            else if ( v22 >= v23 )
            {
LABEL_27:
              memcpy((void *)(*(_DWORD *)a2 + v22), v16, v15);
              goto LABEL_11;
            }
            v30 = *(char **)a2;
            if ( *(_DWORD *)(a2 + 8) < v23 )
            {
              v30 = (char *)sub_78018(a2, *(void **)a2, v23, 1u);
              v31 = *(_DWORD *)(a2 + 4);
              *(_DWORD *)a2 = v30;
            }
            else
            {
              v31 = *(_DWORD *)(a2 + 4);
            }
            memset(&v30[v31], 0, v23 - v31);
            *(_DWORD *)(a2 + 4) = v23;
            goto LABEL_27;
          }
          v20 = *(_DWORD *)(a2 + 4);
          v21 = v18 + v20;
          if ( __CFADD__(v18, v20) )
          {
            if ( (unsigned int)v20 > 0x7FFFFFFE )
            {
              if ( v20 < 0 )
                *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
LABEL_21:
              memcpy((void *)(*(_DWORD *)a2 + v20), v36, v18);
              if ( !v15 )
                goto LABEL_11;
              goto LABEL_22;
            }
            v21 = 0x7FFFFFFF;
          }
          else if ( v20 >= v21 )
          {
            goto LABEL_21;
          }
          v26 = *(char **)a2;
          if ( v21 > *(_DWORD *)(a2 + 8) )
          {
            v26 = (char *)sub_78018(a2, *(void **)a2, v21, 1u);
            v27 = *(_DWORD *)(a2 + 4);
            *(_DWORD *)a2 = v26;
          }
          else
          {
            v27 = *(_DWORD *)(a2 + 4);
          }
          memset(&v26[v27], 0, v21 - v27);
          *(_DWORD *)(a2 + 4) = v21;
          goto LABEL_21;
        }
        v28 = *(char **)a2;
        if ( *(_DWORD *)(a2 + 8) < v25 )
        {
          v28 = (char *)sub_78018(a2, *(void **)a2, v25, 1u);
          v29 = *(_DWORD *)(a2 + 4);
          *(_DWORD *)a2 = v28;
        }
        else
        {
          v29 = *(_DWORD *)(a2 + 4);
        }
        memset(&v28[v29], 0, v25 - v29);
        *(_DWORD *)(a2 + 4) = v25;
        goto LABEL_33;
      }
    }
  }
  return 1;
}
