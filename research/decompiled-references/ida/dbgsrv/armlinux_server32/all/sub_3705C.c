/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3705C
// Address: 0x0003705C

//----- (0003705C) --------------------------------------------------------
int __fastcall sub_3705C(int a1, int a2)
{
  int v3; // r1
  const char *v4; // r2
  void *v6; // r0
  int v7; // r6
  size_t v8; // r9
  size_t v9; // r11
  const char *v10; // r5
  size_t v11; // r0
  size_t v12; // r6
  size_t v13; // r8
  void *v14; // r0
  void *src; // [sp+4h] [bp-20h] BYREF
  int v16; // [sp+8h] [bp-1Ch]
  int v17; // [sp+Ch] [bp-18h]
  void *ptr; // [sp+10h] [bp-14h] BYREF
  int v19; // [sp+14h] [bp-10h]
  unsigned int v20; // [sp+18h] [bp-Ch]

  v3 = *(_DWORD *)(a1 + 12);
  src = nullptr;
  v16 = 0;
  v17 = 0;
  if ( v3 )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = (const char *)&dword_8DB98;
  if ( !sub_3DD8C(a2, -1, v4, (int)&src) )
  {
    ptr = nullptr;
    v19 = 0;
    v20 = 0;
    ptr = sub_78018((int)&ptr, nullptr, 0xEu, 1u);
    v19 = 14;
    strcpy((char *)ptr, "IDC_FAILURE: ");
    v6 = ptr;
    v7 = v19;
    if ( v16 )
    {
      v8 = v16 - 1;
      if ( v16 != 1 )
      {
        v9 = v16 - 1;
        if ( v19 )
        {
          v7 = v19 - 1;
          v9 = v8 + v19 - 1;
        }
        if ( v9 + 1 > v20 )
        {
          v6 = sub_78018((int)&ptr, ptr, v9 + 1, 1u);
          ptr = v6;
        }
        v19 = v9 + 1;
        *((_BYTE *)v6 + v9) = 0;
        memcpy((char *)ptr + v7, src, v8);
        v7 = v19;
      }
    }
    if ( v7 )
      v10 = (const char *)ptr;
    else
      v10 = (const char *)&dword_8DB98;
    if ( v10 )
    {
      v11 = strlen(v10);
      v12 = v11;
      *(_BYTE *)a2 = 7;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 16) = 0;
      if ( v11 )
      {
        v13 = v11 + 1;
        v14 = sub_78018(a2 + 8, nullptr, v11 + 1, 1u);
        *(_DWORD *)(a2 + 8) = v14;
        *(_DWORD *)(a2 + 12) = v13;
        memmove(v14, v10, v12);
        *(_BYTE *)(*(_DWORD *)(a2 + 8) + v12) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)a2 = 7;
    }
    if ( ptr )
    {
      v19 = 0;
      sub_77F70(ptr);
    }
  }
  if ( src )
  {
    v16 = 0;
    sub_77F70(src);
  }
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
// 9C5A8: using guessed type char byte_9C5A8;
