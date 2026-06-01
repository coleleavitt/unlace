/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6185C
// Address: 0x0006185C

//----- (0006185C) --------------------------------------------------------
int __fastcall sub_6185C(int a1, char *s, char *a3)
{
  const char *v4; // r7
  char *v5; // r0
  char *v6; // r4
  char *v7; // r5
  size_t v8; // r2
  unsigned int v9; // r6
  size_t v10; // r3
  unsigned int v11; // r7
  void *v12; // r1
  void *v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r2
  int v16; // r4
  const char *v18; // [sp+0h] [bp-34h]
  int v19; // [sp+4h] [bp-30h]
  size_t v20; // [sp+Ch] [bp-28h]
  size_t v21; // [sp+18h] [bp-1Ch]
  void *ptr; // [sp+24h] [bp-10h] BYREF
  unsigned int v25; // [sp+28h] [bp-Ch]
  unsigned int v26; // [sp+2Ch] [bp-8h]

  v25 = 0;
  ptr = nullptr;
  v26 = 0;
  v21 = strlen(s);
  if ( *(_DWORD *)(a1 + 4) )
    v4 = *(const char **)a1;
  else
    v4 = &byte_B3CBE;
  v5 = strstr(v4, s);
  if ( !v5 )
    goto LABEL_18;
  v6 = v5;
  v19 = a1;
  v18 = v4;
  v7 = (char *)v4;
  do
  {
    v8 = v6 - v7;
    if ( v6 != v7 )
    {
      v9 = v25 - 1;
      if ( !v25 )
        v9 = 0;
      v10 = v9 + v8;
      v11 = v9 + v8 + 1;
      v12 = ptr;
      if ( v26 < v11 )
      {
        v20 = v9 + v8;
        v12 = qvector_reserve((int)&ptr, ptr, v9 + v8 + 1, 1u);
        ptr = v12;
        v8 = v6 - v7;
        v10 = v20;
      }
      v25 = v11;
      *((_BYTE *)v12 + v10) = 0;
      memmove((char *)ptr + v9, v7, v8);
    }
    sub_28C34((int)&ptr, a3);
    v7 = &v6[v21];
    v6 = strstr(&v6[v21], s);
  }
  while ( v6 );
  if ( v7 == v18 )
  {
LABEL_18:
    v16 = 0;
    v13 = ptr;
    if ( !ptr )
      return v16;
LABEL_19:
    v25 = 0;
    qfree(v13);
    v26 = 0;
    ptr = nullptr;
    return v16;
  }
  if ( *v7 )
    sub_28C34((int)&ptr, v7);
  v13 = *(void **)v19;
  *(_DWORD *)v19 = ptr;
  v14 = *(_DWORD *)(v19 + 4);
  *(_DWORD *)(v19 + 4) = v25;
  v15 = *(_DWORD *)(v19 + 8);
  *(_DWORD *)(v19 + 8) = v26;
  ptr = v13;
  v25 = v14;
  v26 = v15;
  v16 = 1;
  if ( v13 )
    goto LABEL_19;
  return v16;
}
// B3CBE: using guessed type char byte_B3CBE;
