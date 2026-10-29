/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_757FC
// Address: 0x000757FC

//----- (000757FC) --------------------------------------------------------
int __fastcall sub_757FC(int a1, unsigned int a2, int a3)
{
  unsigned __int8 *v3; // r4
  unsigned int v4; // r6
  int v6; // r2
  int v7; // r3
  unsigned int v8; // r3
  int v9; // r2
  int v10; // r3
  unsigned int v11; // r3
  int v12; // r0
  void *v13; // r9
  size_t v14; // r7
  int v15; // r7
  int v16; // r3
  void **v17; // r1
  void **v18; // r0
  int v19; // r4
  int v20; // r3
  bool v21; // zf
  unsigned int v22; // r9
  unsigned int v23; // r7
  void **v24; // r1
  unsigned int v25; // r9
  unsigned int v26; // r10
  int v27; // r0
  size_t v28; // r2
  __int16 v29; // r0
  unsigned __int8 v30; // r2
  void **v31; // r0
  int v32; // r2
  int v34; // r10
  void **v35; // r1
  int v36; // r0
  unsigned int v37; // r7
  unsigned int v38; // r2
  char v39; // r3
  char *v40; // r0
  unsigned int v42; // [sp+Ch] [bp-20h]
  void *src; // [sp+14h] [bp-18h] BYREF
  int v44; // [sp+18h] [bp-14h]
  int v45; // [sp+1Ch] [bp-10h]
  unsigned __int16 v46[2]; // [sp+20h] [bp-Ch] BYREF

  v3 = (unsigned __int8 *)a2;
  v4 = a2 + a3;
  if ( a2 >= a2 + a3 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = *v3;
      if ( (v15 & 0x80) != 0 )
        break;
      v16 = *(_DWORD *)(a1 + 4);
      v17 = *(void ***)a1;
      if ( (unsigned int)(v16 + 1) > *(_DWORD *)(a1 + 8) )
      {
        v18 = (void **)sub_77EB0(a1, v17, v16 + 1, 1u);
        v16 = *(_DWORD *)(a1 + 4);
        v17 = v18;
        *(_DWORD *)a1 = v18;
      }
      *((_BYTE *)v17 + v16) = v15;
      ++v3;
      ++*(_DWORD *)(a1 + 4);
      if ( v4 <= (unsigned int)v3 )
        return (int)&v3[-a2];
    }
    if ( (v15 & 0xE0) != 0xC0 )
      break;
    if ( (int)(v4 - (_DWORD)v3) <= 1 )
      goto LABEL_70;
    v20 = v3[1];
    v21 = v20 == 128;
    if ( v20 == 128 )
      v21 = v15 == 192;
    if ( v21 )
    {
      v35 = *(void ***)a1;
      v36 = *(_DWORD *)(a1 + 4);
      LOBYTE(src) = 0;
      v37 = *(_DWORD *)(a1 + 8);
      v38 = v36 + 1;
      if ( v35 > &src || &src >= (void **)((char *)v35 + v37) )
      {
        if ( v38 > v37 )
        {
          v35 = (void **)sub_77EB0(a1, v35, v38, 1u);
          v39 = (char)src;
          v36 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v35;
        }
        else
        {
          v39 = 0;
        }
        *((_BYTE *)v35 + v36) = v39;
      }
      else
      {
        if ( v38 > v37 )
        {
          v35 = (void **)sub_77EB0(a1, v35, v38, 1u);
          v36 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v35;
        }
        *((_BYTE *)v35 + v36) = 0;
      }
      ++*(_DWORD *)(a1 + 4);
    }
    else
    {
      if ( (v20 ^ 0x80u) > 0x3F || (v20 & 0x3F | (v15 << 6) & 0x7C0) <= 127 )
      {
LABEL_48:
        v19 = -1;
        *_errno_location() = 84;
        return v19;
      }
      v22 = *(_DWORD *)(a1 + 4);
      v23 = v22 + 2;
      if ( v22 >= 0xFFFFFFFE )
      {
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      }
      else if ( v22 < v23 )
      {
        v31 = *(void ***)a1;
        if ( v23 > *(_DWORD *)(a1 + 8) )
        {
          v31 = (void **)sub_77EB0(a1, *(void **)a1, v22 + 2, 1u);
          v32 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v31;
        }
        else
        {
          v32 = *(_DWORD *)(a1 + 4);
        }
        memset((char *)v31 + v32, 0, v23 - v32);
        *(_DWORD *)(a1 + 4) = v23;
      }
      *(_WORD *)(*(_DWORD *)a1 + v22) = *(_WORD *)v3;
    }
    v3 += 2;
LABEL_20:
    if ( v4 <= (unsigned int)v3 )
      return (int)&v3[-a2];
  }
  if ( (v15 & 0xF0) != 0xE0 )
    goto LABEL_48;
  if ( (int)(v4 - (_DWORD)v3) > 2 )
  {
    v6 = v3[1];
    v7 = v3[2];
    if ( (v6 ^ 0x80u) > 0x3F )
      goto LABEL_48;
    if ( (v7 ^ 0x80u) > 0x3F )
      goto LABEL_48;
    v8 = v7 & 0x3F | (unsigned __int16)((_WORD)v15 << 12) | ((_WORD)v6 << 6) & 0xFC0;
    if ( v8 < 0x800 )
      goto LABEL_48;
    if ( (unsigned __int16)(v8 + 10240) >= 0x400u )
    {
      v25 = *(_DWORD *)(a1 + 4);
      v24 = *(void ***)a1;
      v26 = v25 + 3;
      if ( v25 >= 0xFFFFFFFD )
      {
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      }
      else if ( v25 < v26 )
      {
        if ( v26 > *(_DWORD *)(a1 + 8) )
        {
          v24 = (void **)sub_77EB0(a1, v24, *(_DWORD *)(a1 + 4) + 3, 1u);
          v27 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v24;
          v28 = v26 - v27;
        }
        else
        {
          v27 = *(_DWORD *)(a1 + 4);
          v28 = 3;
        }
        memset((char *)v24 + v27, 0, v28);
        v24 = *(void ***)a1;
        *(_DWORD *)(a1 + 4) = v26;
      }
      v29 = *(_WORD *)v3;
      v30 = v3[2];
      v3 += 3;
      *(_WORD *)((char *)v24 + v25) = v29;
      *((_BYTE *)v24 + v25 + 2) = v30;
      goto LABEL_20;
    }
    v46[0] = v8;
    if ( (int)(v4 - (_DWORD)(v3 + 3)) <= 2 )
    {
      *_errno_location() = 22;
      return -1;
    }
    v9 = v3[4];
    v10 = v3[5];
    if ( (v9 ^ 0x80u) > 0x3F
      || (v10 ^ 0x80u) > 0x3F
      || (v11 = v10 & 0x3F | (unsigned __int16)(v3[3] << 12) | ((_WORD)v9 << 6) & 0xFC0, v11 < 0x800)
      || (unsigned __int16)(v11 + 9216) >= 0x400u )
    {
      *_errno_location() = 84;
      return -1;
    }
    v46[1] = v11;
    src = nullptr;
    v44 = 0;
    v45 = 0;
    v12 = sub_704C8((int)&src, v46, 2u);
    v13 = src;
    if ( !v12 )
    {
      *_errno_location() = 84;
      if ( v13 )
      {
        v44 = 0;
        sub_77E08(v13);
      }
      return -1;
    }
    if ( !v44 )
      goto LABEL_18;
    v14 = v44 - 1;
    if ( v44 == 1 )
      goto LABEL_18;
    v34 = *(_DWORD *)(a1 + 4);
    v42 = v14 + v34;
    if ( __CFADD__(v14, v34) )
    {
      if ( (unsigned int)v34 > 0x7FFFFFFE )
      {
        if ( v34 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_57;
      }
      v42 = 0x7FFFFFFF;
    }
    else if ( v34 >= v42 )
    {
LABEL_57:
      memcpy((void *)(*(_DWORD *)a1 + v34), v13, v14);
      v13 = src;
LABEL_18:
      v3 += 6;
      if ( v13 )
      {
        v44 = 0;
        sub_77E08(v13);
      }
      goto LABEL_20;
    }
    v40 = *(char **)a1;
    if ( v42 > *(_DWORD *)(a1 + 8) )
    {
      v40 = (char *)sub_77EB0(a1, *(void **)a1, v42, 1u);
      *(_DWORD *)a1 = v40;
    }
    memset(&v40[*(_DWORD *)(a1 + 4)], 0, v42 - *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = v42;
    goto LABEL_57;
  }
LABEL_70:
  v19 = -1;
  *_errno_location() = 22;
  return v19;
}
