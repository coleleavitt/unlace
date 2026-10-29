/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_670FC
// Address: 0x000670FC

//----- (000670FC) --------------------------------------------------------
unsigned int __fastcall sub_670FC(int a1, unsigned int a2, const void *a3, unsigned int a4, _DWORD *a5, size_t *a6)
{
  _BYTE *v9; // r0
  size_t v10; // r9
  _BYTE *v11; // r0
  size_t v12; // r9
  int v13; // r0
  void *v14; // r4
  int v15; // r2
  unsigned int v16; // r6
  signed int v17; // r0
  bool v18; // cc
  size_t v19; // r5
  int v21; // r10
  int v22; // r5
  unsigned int v23; // r9
  void *v24; // r0
  unsigned __int8 *v25; // r1
  _BOOL4 v26; // r3
  int v27; // r10
  char *v28; // r0
  char *v29; // r0
  char *v30; // r0
  unsigned int v32; // [sp+Ch] [bp-30h]
  unsigned int v33; // [sp+Ch] [bp-30h]
  unsigned __int8 *v34; // [sp+10h] [bp-2Ch] BYREF
  unsigned int v35; // [sp+14h] [bp-28h]
  void *ptr; // [sp+18h] [bp-24h] BYREF
  int v37; // [sp+1Ch] [bp-20h]
  unsigned int v38; // [sp+20h] [bp-1Ch]
  _BYTE v39[5]; // [sp+24h] [bp-18h] BYREF
  _BYTE v40[3]; // [sp+29h] [bp-13h] BYREF
  _BYTE v41[5]; // [sp+2Ch] [bp-10h] BYREF
  _BYTE v42[3]; // [sp+31h] [bp-Bh] BYREF

  sub_67AA8((int *)&ptr, 39);
  v9 = sub_75FB0(v39, (unsigned int)v40, a2);
  v10 = v9 - v39;
  if ( v9 != v39 )
  {
    v27 = v37;
    v33 = v10 + v37;
    if ( __CFADD__(v10, v37) )
    {
      if ( (unsigned int)v37 > 0x7FFFFFFE )
      {
        if ( v37 < 0 )
          v37 = 0x7FFFFFFF;
        goto LABEL_42;
      }
      v33 = 0x7FFFFFFF;
    }
    else if ( v37 >= v33 )
    {
LABEL_42:
      memcpy((char *)ptr + v27, v39, v10);
      goto LABEL_2;
    }
    v29 = (char *)ptr;
    if ( v38 < v33 )
    {
      v29 = (char *)sub_77EB0((int)&ptr, ptr, v33, 1u);
      ptr = v29;
    }
    memset(&v29[v37], 0, v33 - v37);
    v37 = v33;
    goto LABEL_42;
  }
LABEL_2:
  v11 = sub_75FB0(v41, (unsigned int)v42, a4);
  v12 = v11 - v41;
  if ( v11 != v41 )
  {
    v21 = v37;
    v32 = v12 + v37;
    if ( __CFADD__(v12, v37) )
    {
      if ( (unsigned int)v37 > 0x7FFFFFFE )
      {
        if ( v37 < 0 )
          v37 = 0x7FFFFFFF;
LABEL_20:
        memcpy((char *)ptr + v21, v41, v12);
        if ( !a4 )
          goto LABEL_4;
LABEL_21:
        v22 = v37;
        v23 = a4 + v37;
        if ( __CFADD__(a4, v37) )
        {
          if ( (unsigned int)v37 > 0x7FFFFFFE )
          {
            if ( v37 < 0 )
              v37 = 0x7FFFFFFF;
            goto LABEL_40;
          }
          v23 = 0x7FFFFFFF;
        }
        else if ( v37 >= v23 )
        {
LABEL_40:
          memcpy((char *)ptr + v22, a3, a4);
          goto LABEL_4;
        }
        v30 = (char *)ptr;
        if ( v23 > v38 )
        {
          v30 = (char *)sub_77EB0((int)&ptr, ptr, v23, 1u);
          ptr = v30;
        }
        memset(&v30[v37], 0, v23 - v37);
        v37 = v23;
        goto LABEL_40;
      }
      v32 = 0x7FFFFFFF;
    }
    else if ( v37 >= v32 )
    {
      goto LABEL_20;
    }
    v28 = (char *)ptr;
    if ( v38 < v32 )
    {
      v28 = (char *)sub_77EB0((int)&ptr, ptr, v32, 1u);
      ptr = v28;
    }
    memset(&v28[v37], 0, v32 - v37);
    v37 = v32;
    goto LABEL_20;
  }
  if ( a4 )
    goto LABEL_21;
LABEL_4:
  v13 = (*(int (__fastcall **)(int, int, void **))(*(_DWORD *)a1 + 8))(a1, 39, &ptr);
  v14 = (void *)v13;
  if ( !v13 )
    goto LABEL_32;
  v15 = *(_DWORD *)v13;
  v34 = (unsigned __int8 *)(v13 + 5);
  v35 = v13 + 5 + v15;
  v16 = sub_7617C(&v34, v35);
  v17 = sub_7617C(&v34, v35);
  v18 = (int)a5 <= 0;
  if ( a5 )
    v18 = v17 <= 0;
  v19 = v17;
  if ( v18 )
    goto LABEL_9;
  v24 = sub_77D94(v17);
  *a5 = v24;
  if ( !v24 )
    goto LABEL_9;
  v25 = v34;
  v26 = v34 > &v34[v19];
  if ( v35 < (unsigned int)&v34[v19] )
    v26 = 1;
  if ( !v26 && (v34 += v19, memcpy(v24, v25, v19)) )
  {
LABEL_9:
    if ( a6 )
      *a6 = v19;
    sub_77E08(v14);
  }
  else
  {
LABEL_32:
    v16 = -1;
  }
  if ( ptr )
  {
    v37 = 0;
    sub_77E08(ptr);
  }
  return v16;
}
