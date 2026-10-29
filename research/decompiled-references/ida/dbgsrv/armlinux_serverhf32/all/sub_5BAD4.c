/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BAD4
// Address: 0x0005BAD4

//----- (0005BAD4) --------------------------------------------------------
void __fastcall sub_5BAD4(int a1, void **a2, __int64 *a3)
{
  unsigned int v5; // r1
  void *v6; // r2
  int v7; // r8
  char *v8; // r4
  int v9; // r7
  __int64 v10; // kr00_8
  unsigned __int8 *v11; // r3
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r4
  char *v16; // r1
  void *v17; // r0
  int v18; // r6
  int v19; // r5
  char *i; // r4
  char *v21; // r4
  void *v22; // r0
  void *v23; // r0
  size_t v24; // r0
  size_t v25; // r10
  unsigned int v26; // r2
  void *v27; // r0
  unsigned int v28; // r0
  unsigned int v29; // r1
  unsigned __int8 *v30; // r3
  unsigned int v31; // r6
  unsigned __int8 *v32; // r3
  unsigned int v33; // r2
  unsigned __int8 *v34; // r12
  void *v35; // r0
  int v36; // r2
  unsigned int v37; // r0
  int *v38; // r2
  int v39; // [sp+8h] [bp-3Ch]
  unsigned int v41; // [sp+18h] [bp-2Ch]
  unsigned int v42; // [sp+20h] [bp-24h] BYREF
  void *v43; // [sp+24h] [bp-20h] BYREF
  int v44; // [sp+28h] [bp-1Ch]
  int v45; // [sp+2Ch] [bp-18h]
  void *ptr; // [sp+30h] [bp-14h] BYREF
  int v47; // [sp+34h] [bp-10h]
  int v48; // [sp+38h] [bp-Ch]

  v5 = *((_DWORD *)a3 + 1);
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  v39 = sub_7617C((unsigned __int8 **)a3, v5);
  sub_5B220(&v43, v39);
  v6 = v43;
  if ( v39 > 0 )
  {
    v7 = 0;
    v8 = (char *)v43 + 32;
    v9 = 0;
    while ( 1 )
    {
      v8[216] = 0;
      v9 += sub_76244((unsigned __int8 **)a3, *((_DWORD *)a3 + 1)) - 1;
      *((_DWORD *)v8 - 8) = v9;
      v10 = *a3;
      if ( HIDWORD(v10) <= (unsigned int)v10 )
        goto LABEL_8;
      v11 = (unsigned __int8 *)(v10 + 1);
      if ( *(_BYTE *)v10 )
      {
        while ( (unsigned __int8 *)HIDWORD(v10) != v11 )
        {
          if ( !*v11++ )
            goto LABEL_31;
        }
LABEL_8:
        *((_DWORD *)v8 - 6) = 0;
        if ( *(_BYTE *)(a1 + 96) )
          goto LABEL_56;
        goto LABEL_9;
      }
LABEL_31:
      *(_DWORD *)a3 = v11;
      if ( !(_DWORD)v10 )
        goto LABEL_8;
      v24 = strlen((const char *)v10);
      v25 = v24;
      if ( !v24 )
        goto LABEL_8;
      v26 = v24 + 1;
      v41 = v26;
      v27 = *((void **)v8 - 7);
      if ( v26 > *((_DWORD *)v8 - 5) )
      {
        v27 = sub_77EB0((int)(v8 - 28), *((void **)v8 - 7), v26, 1u);
        *((_DWORD *)v8 - 7) = v27;
      }
      *((_DWORD *)v8 - 6) = v41;
      memmove(v27, (const void *)v10, v25);
      *(_BYTE *)(*((_DWORD *)v8 - 7) + v25) = 0;
      if ( *((_DWORD *)v8 - 6) > 1u )
        break;
LABEL_52:
      if ( *(_BYTE *)(a1 + 96) )
      {
        if ( *((_DWORD *)v8 - 6) )
          v38 = *((int **)v8 - 7);
        else
LABEL_56:
          v38 = &dword_8DA5C;
        sub_1700C((int)"update_lowcnd(ea=%a cnd=%s)\n", v9, v38);
      }
LABEL_9:
      ++v7;
      v8 += 256;
      if ( v39 == v7 )
      {
        v6 = v43;
        goto LABEL_11;
      }
    }
    *((_DWORD *)v8 + 55) = 0;
    v28 = sub_7617C((unsigned __int8 **)a3, *((_DWORD *)a3 + 1));
    *((_DWORD *)v8 - 4) = v28;
    if ( v28 != 4 )
      *((_DWORD *)v8 + 55) = sub_7617C((unsigned __int8 **)a3, *((_DWORD *)a3 + 1));
    v29 = *((_DWORD *)a3 + 1);
    v30 = *(unsigned __int8 **)a3;
    if ( v29 <= *(_DWORD *)a3 || (v31 = *v30, v32 = v30 + 1, *(_DWORD *)a3 = v32, !v31) )
    {
LABEL_50:
      v37 = sub_76244((unsigned __int8 **)a3, v29) - 1;
      *((_DWORD *)v8 + 2) = v37;
      if ( v37 != -1 )
        sub_639D8(v8, a3);
      goto LABEL_52;
    }
    v33 = *((_DWORD *)v8 - 2);
    if ( v31 > v33 )
    {
      sub_5B7EC((int)(v8 - 12), v31);
    }
    else
    {
      if ( v31 >= v33 )
      {
LABEL_43:
        v34 = &v32[v31];
        v35 = *((void **)v8 - 3);
        v36 = __CFADD__(v32, v31);
        if ( (unsigned int)v34 > v29 )
          v36 |= 1u;
        if ( !v36 )
        {
          *(_DWORD *)a3 = v34;
          memcpy(v35, v32, v31);
          v29 = *((_DWORD *)a3 + 1);
        }
        goto LABEL_50;
      }
      *((_DWORD *)v8 - 2) = v31;
    }
    v29 = *((_DWORD *)a3 + 1);
    v32 = *(unsigned __int8 **)a3;
    goto LABEL_43;
  }
LABEL_11:
  v13 = *(_DWORD *)(a1 + 244);
  ptr = nullptr;
  v47 = 0;
  v48 = 0;
  v14 = (*(int (__fastcall **)(int, unsigned int *, void *, int, void **))(*(_DWORD *)v13 + 176))(
          v13,
          &v42,
          v6,
          v39,
          &ptr);
  v15 = v14;
  if ( *(_BYTE *)(a1 + 96) )
    sub_1700C((int)"  update_lowcnds => %d\n", v14);
  sub_57FBC((int)a2, v15);
  sub_57FBC((int)a2, v42);
  if ( v15 != 1 )
  {
    if ( v47 )
      v16 = (char *)ptr;
    else
      v16 = (char *)&dword_8DA5C;
    sub_58044(a2, v16);
  }
  if ( ptr )
  {
    v47 = 0;
    sub_77E08(ptr);
  }
  v17 = v43;
  if ( v43 )
  {
    v18 = v44;
    if ( v44 )
    {
      v19 = 0;
      for ( i = (char *)v43; ; i = (char *)v43 )
      {
        v21 = &i[256 * v19];
        v22 = *((void **)v21 + 5);
        if ( v22 )
        {
          *((_DWORD *)v21 + 6) = 0;
          sub_77E08(v22);
        }
        v23 = *((void **)v21 + 1);
        if ( v23 )
        {
          *((_DWORD *)v21 + 2) = 0;
          sub_77E08(v23);
        }
        if ( v18 == ++v19 )
          break;
      }
      v17 = v43;
    }
    v44 = 0;
    sub_77E08(v17);
  }
}
// 639D8: using guessed type int __fastcall sub_639D8(_DWORD, _DWORD);
// 8DA5C: using guessed type int dword_8DA5C;
