/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D4E0
// Address: 0x0006D4E0

//----- (0006D4E0) --------------------------------------------------------
int __fastcall sub_6D4E0(int a1, char *s)
{
  int result; // r0
  size_t v5; // r7
  const char *i; // r8
  int v7; // r4
  char *v8; // r0
  const void *v9; // r7
  size_t v10; // r0
  size_t v11; // r9
  size_t v12; // r0
  size_t v13; // r7
  int v14; // r3
  void *v15; // r7
  unsigned int v16; // r9
  void *v17; // r0
  unsigned int v18; // r2
  void *v19; // r0
  unsigned int v20; // [sp+4h] [bp-20h]
  const char *v21; // [sp+Ch] [bp-18h] BYREF
  void *ptr; // [sp+10h] [bp-14h] BYREF
  size_t v23; // [sp+14h] [bp-10h]
  int v24; // [sp+18h] [bp-Ch]

  if ( !s )
    return 0;
  result = (unsigned __int8)*s;
  if ( *s )
  {
    ptr = nullptr;
    v23 = 0;
    v24 = 0;
    v5 = strlen(s);
    ptr = sub_78018((int)&ptr, nullptr, v5 + 1, 1u);
    v23 = v5 + 1;
    memmove(ptr, s, v5);
    *((_BYTE *)ptr + v5) = 0;
    for ( i = sub_79544((char *)ptr, ":", &v21); i; i = sub_79544(nullptr, ":", &v21) )
    {
      v14 = *(_DWORD *)(a1 + 4);
      v15 = *(void **)a1;
      if ( (unsigned int)(v14 + 1) > *(_DWORD *)(a1 + 8) )
      {
        v15 = sub_78018(a1, *(void **)a1, v14 + 1, 0x18u);
        v14 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v15;
      }
      v7 = (int)v15 + 24 * v14;
      *(_DWORD *)v7 = 0;
      *(_DWORD *)(v7 + 4) = 0;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)(v7 + 12) = 0;
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 20) = 0;
      ++*(_DWORD *)(a1 + 4);
      v8 = strchr(i, 61);
      if ( v8 )
      {
        v9 = v8 + 1;
        *v8 = 0;
        if ( v8 != (char *)-1 && (v10 = strlen(v8 + 1), (v11 = v10) != 0) )
        {
          v18 = v10 + 1;
          v20 = v18;
          v19 = *(void **)(v7 + 12);
          if ( v18 > *(_DWORD *)(v7 + 20) )
          {
            v19 = sub_78018(v7 + 12, *(void **)(v7 + 12), v18, 1u);
            *(_DWORD *)(v7 + 12) = v19;
          }
          *(_DWORD *)(v7 + 16) = v20;
          memmove(v19, v9, v11);
          *(_BYTE *)(*(_DWORD *)(v7 + 12) + v11) = 0;
        }
        else
        {
          *(_DWORD *)(v7 + 16) = 0;
        }
      }
      v12 = strlen(i);
      v13 = v12;
      if ( v12 )
      {
        v16 = v12 + 1;
        v17 = *(void **)v7;
        if ( v16 > *(_DWORD *)(v7 + 8) )
        {
          v17 = sub_78018(v7, *(void **)v7, v16, 1u);
          *(_DWORD *)v7 = v17;
        }
        *(_DWORD *)(v7 + 4) = v16;
        memmove(v17, i, v13);
        *(_BYTE *)(*(_DWORD *)v7 + v13) = 0;
      }
      else
      {
        *(_DWORD *)(v7 + 4) = 0;
      }
    }
    if ( ptr )
    {
      v23 = 0;
      sub_77F70(ptr);
    }
    return 1;
  }
  return result;
}
