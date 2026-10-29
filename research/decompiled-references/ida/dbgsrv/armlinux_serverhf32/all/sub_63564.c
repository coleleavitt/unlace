/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63564
// Address: 0x00063564

//----- (00063564) --------------------------------------------------------
int __fastcall sub_63564(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  int v6; // r8
  unsigned int i; // r4
  size_t v10; // r9
  int v11; // r3
  size_t v12; // r9
  size_t v13; // r9
  int v14; // r10
  unsigned int v15; // r11
  size_t v16; // r9
  int v17; // r10
  unsigned int v18; // r11
  char *v19; // r0
  int v20; // r2
  char *v21; // r0
  int v22; // r10
  unsigned int v23; // r11
  int v24; // r10
  unsigned int v25; // r11
  char *v26; // r0
  int v27; // r2
  char *v28; // r0
  char *v29; // r0
  int v30; // r2
  char *v31; // r0
  char *v32; // r0
  int v33; // r2
  void *src; // [sp+14h] [bp-18h]
  _BYTE v36[5]; // [sp+18h] [bp-14h] BYREF
  _BYTE v37[5]; // [sp+1Dh] [bp-Fh] BYREF
  _BYTE v38[2]; // [sp+22h] [bp-Ah] BYREF

  result = 1396;
  if ( a3 > 0 )
  {
    v6 = a1;
    for ( i = 0; a3 != i; ++i )
    {
      if ( a4 && (((int)*(unsigned __int8 *)(a4 + (i >> 3)) >> (i & 7)) & 1) == 0 )
        goto LABEL_10;
      result = (int)sub_75FB0(v36, (unsigned int)v37, *a2 + 3);
      v10 = result - (_DWORD)v36;
      if ( (_BYTE *)result == v36 )
      {
        v11 = *a2;
        if ( *a2 != -2 )
          goto LABEL_7;
        goto LABEL_19;
      }
      v14 = *(_DWORD *)(v6 + 4);
      v15 = v10 + v14;
      if ( __CFADD__(v10, v14) )
      {
        if ( (unsigned int)v14 > 0x7FFFFFFE )
        {
          if ( v14 < 0 )
            *(_DWORD *)(v6 + 4) = 0x7FFFFFFF;
LABEL_17:
          result = (int)memcpy((void *)(*(_DWORD *)v6 + v14), v36, result - (_DWORD)v36);
          goto LABEL_18;
        }
        v15 = 0x7FFFFFFF;
      }
      else if ( v14 >= v15 )
      {
        goto LABEL_17;
      }
      v19 = *(char **)v6;
      if ( *(_DWORD *)(v6 + 8) < v15 )
      {
        v19 = (char *)sub_77EB0(v6, *(void **)v6, v15, 1u);
        v20 = *(_DWORD *)(v6 + 4);
        *(_DWORD *)v6 = v19;
      }
      else
      {
        v20 = *(_DWORD *)(v6 + 4);
      }
      memset(&v19[v20], 0, v15 - v20);
      v21 = *(char **)v6;
      *(_DWORD *)(v6 + 4) = v15;
      result = (int)memcpy(&v21[v14], v36, v10);
LABEL_18:
      v11 = *a2;
      if ( *a2 != -2 )
      {
LABEL_7:
        if ( v11 == -3 )
          goto LABEL_10;
        result = (int)sub_75FB0(v36, (unsigned int)v37, a2[3]);
        v12 = result - (_DWORD)v36;
        if ( (_BYTE *)result == v36 )
          goto LABEL_9;
        v24 = *(_DWORD *)(v6 + 4);
        v25 = v12 + v24;
        if ( __CFADD__(v12, v24) )
        {
          if ( (unsigned int)v24 > 0x7FFFFFFE )
          {
            if ( v24 < 0 )
              *(_DWORD *)(v6 + 4) = 0x7FFFFFFF;
            goto LABEL_42;
          }
          v25 = 0x7FFFFFFF;
LABEL_44:
          v26 = *(char **)v6;
          if ( *(_DWORD *)(v6 + 8) < v25 )
          {
            v26 = (char *)sub_77EB0(v6, *(void **)v6, v25, 1u);
            v27 = *(_DWORD *)(v6 + 4);
            *(_DWORD *)v6 = v26;
          }
          else
          {
            v27 = *(_DWORD *)(v6 + 4);
          }
          memset(&v26[v27], 0, v25 - v27);
          v28 = *(char **)v6;
          *(_DWORD *)(v6 + 4) = v25;
          result = (int)memcpy(&v28[v24], v36, v12);
        }
        else
        {
          if ( v24 < v25 )
            goto LABEL_44;
LABEL_42:
          result = (int)memcpy((void *)(*(_DWORD *)v6 + v24), v36, result - (_DWORD)v36);
        }
LABEL_9:
        v13 = a2[3];
        if ( v13 )
        {
          v22 = *(_DWORD *)(v6 + 4);
          v23 = v13 + v22;
          src = (void *)a2[2];
          if ( __CFADD__(v13, v22) )
          {
            if ( (unsigned int)v22 <= 0x7FFFFFFE )
            {
              v23 = 0x7FFFFFFF;
LABEL_49:
              v29 = *(char **)v6;
              if ( *(_DWORD *)(v6 + 8) < v23 )
              {
                v29 = (char *)sub_77EB0(v6, *(void **)v6, v23, 1u);
                v30 = *(_DWORD *)(v6 + 4);
                *(_DWORD *)v6 = v29;
              }
              else
              {
                v30 = *(_DWORD *)(v6 + 4);
              }
              memset(&v29[v30], 0, v23 - v30);
              v31 = *(char **)v6;
              *(_DWORD *)(v6 + 4) = v23;
              result = (int)memcpy(&v31[v22], src, v13);
              goto LABEL_10;
            }
            if ( v22 < 0 )
              *(_DWORD *)(v6 + 4) = 0x7FFFFFFF;
          }
          else if ( v22 < v23 )
          {
            goto LABEL_49;
          }
          result = (int)memcpy((void *)(*(_DWORD *)v6 + v22), src, v13);
        }
        goto LABEL_10;
      }
LABEL_19:
      result = (int)sub_760FC(v36, (unsigned int)v38, a2[2] + 1, (unsigned __int64)(*((_QWORD *)a2 + 1) + 1LL) >> 32);
      v16 = result - (_DWORD)v36;
      if ( (_BYTE *)result != v36 )
      {
        v17 = *(_DWORD *)(v6 + 4);
        v18 = v16 + v17;
        if ( __CFADD__(v16, v17) )
        {
          if ( (unsigned int)v17 > 0x7FFFFFFE )
          {
            if ( v17 < 0 )
              *(_DWORD *)(v6 + 4) = 0x7FFFFFFF;
            goto LABEL_55;
          }
          v18 = 0x7FFFFFFF;
        }
        else if ( v17 >= v18 )
        {
LABEL_55:
          result = (int)memcpy((void *)(*(_DWORD *)v6 + v17), v36, v16);
          goto LABEL_10;
        }
        v32 = *(char **)v6;
        if ( *(_DWORD *)(v6 + 8) < v18 )
        {
          v32 = (char *)sub_77EB0(v6, *(void **)v6, v18, 1u);
          v33 = *(_DWORD *)(v6 + 4);
          *(_DWORD *)v6 = v32;
        }
        else
        {
          v33 = *(_DWORD *)(v6 + 4);
        }
        memset(&v32[v33], 0, v18 - v33);
        *(_DWORD *)(v6 + 4) = v18;
        goto LABEL_55;
      }
LABEL_10:
      a2 += 6;
    }
  }
  return result;
}
