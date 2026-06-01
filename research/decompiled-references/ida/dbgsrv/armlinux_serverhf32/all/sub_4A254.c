/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A254
// Address: 0x0004A254

//----- (0004A254) --------------------------------------------------------
int __fastcall sub_4A254(_DWORD *a1, int *a2, unsigned __int8 **a3)
{
  int v6; // r2
  int v7; // r0
  int v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r6
  int v13; // r0
  int v14; // r0
  size_t v15; // r4
  int v16; // r7
  size_t v17; // r7
  unsigned int v18; // r8
  void *v19; // r1
  char *v20; // r4
  char *v21; // r7
  char *v22; // r10
  void *v23; // r1
  const char *v24; // r1
  void *v25; // r0
  const void *v26; // r1
  void *src[3]; // [sp+4h] [bp-1Ch] BYREF
  void *ptr; // [sp+10h] [bp-10h] BYREF
  char *v29; // [sp+14h] [bp-Ch]
  unsigned int v30; // [sp+18h] [bp-8h]
  int v31; // [sp+1Ch] [bp-4h]

  memset(src, 0, sizeof(src));
  v6 = _stack_chk_guard;
  *a2 = -1;
  v31 = v6;
  v7 = sub_46F80((int)a1, (__int64 *)src);
  v8 = v7;
  if ( !v7 )
  {
    v11 = 0;
    goto LABEL_6;
  }
  v9 = (_DWORD *)sub_3F1E4(*(_DWORD *)(v7 + 28));
  v10 = sub_42798(v9, (int)src);
  if ( v10 != -1 )
  {
    *a2 = v10;
LABEL_5:
    v11 = 1;
    goto LABEL_6;
  }
  v13 = sub_4A214(a1, v8, (const char **)src, a3);
  v11 = v13;
  if ( v13 )
    goto LABEL_5;
  sub_70A2C(88);
  v14 = sub_3F1E4(*(_DWORD *)(v8 + 28));
  v15 = *(_DWORD *)(v14 + 36);
  v16 = v14;
  ptr = nullptr;
  v29 = nullptr;
  v30 = 0;
  if ( !v15 )
  {
    v17 = 0;
    v18 = 2;
    v19 = nullptr;
LABEL_13:
    v19 = sub_77EB0((int)&ptr, v19, v18, 1u);
    ptr = v19;
    goto LABEL_14;
  }
  v25 = sub_77E84(v15);
  v26 = *(const void **)(v16 + 32);
  ptr = v25;
  v18 = v15 + 1;
  v30 = v15;
  v17 = v15 - 1;
  memcpy(v25, v26, v15);
  v29 = (char *)v15;
  v19 = ptr;
  if ( v30 < v15 + 1 )
    goto LABEL_13;
LABEL_14:
  v29 = (char *)v18;
  *((_BYTE *)v19 + v17) = 46;
  *((_BYTE *)ptr + v17 + 1) = 0;
  v20 = v29;
  if ( src[1] )
  {
    v21 = (char *)src[1] - 1;
    if ( src[1] != (void *)1 )
    {
      v22 = (char *)src[1] - 1;
      if ( v29 )
      {
        v20 = v29 - 1;
        v22 = &v29[(_DWORD)v21 - 1];
      }
      v23 = ptr;
      if ( (unsigned int)(v22 + 1) > v30 )
      {
        v23 = sub_77EB0((int)&ptr, ptr, (unsigned int)(v22 + 1), 1u);
        ptr = v23;
      }
      v29 = v22 + 1;
      v22[(_DWORD)v23] = 0;
      memcpy(&v20[(_DWORD)ptr], src[0], (size_t)v21);
      v20 = v29;
    }
  }
  if ( v20 )
    v24 = (const char *)ptr;
  else
    v24 = (const char *)&dword_8DA5C;
  sub_70A98(0, v24);
  if ( ptr )
  {
    v29 = nullptr;
    sub_77E08(ptr);
  }
LABEL_6:
  if ( src[0] )
  {
    src[1] = nullptr;
    sub_77E08(src[0]);
  }
  return v11;
}
// 8DA5C: using guessed type int dword_8DA5C;
