/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37F70
// Address: 0x00037F70

//----- (00037F70) --------------------------------------------------------
void __fastcall sub_37F70(void **a1, int a2)
{
  signed int v4; // r2
  unsigned __int8 *v5; // r1
  size_t v6; // r6
  int *v7; // r8
  char *v8; // r4
  size_t v9; // r10
  void *v10; // r1
  size_t v11; // r4
  void *v12; // r0
  int v13; // r10
  size_t v14; // r9
  void *v15; // r1
  void *src; // [sp+0h] [bp-14h] BYREF
  size_t n; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch]

  v4 = *(_DWORD *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 20) )
  {
    src = nullptr;
    n = 0;
    v18 = 0;
    if ( v4 )
    {
      v5 = *(unsigned __int8 **)a2;
      --v4;
    }
    else
    {
      v5 = (unsigned __int8 *)&dword_8DB98;
    }
    if ( !sub_709DC((int)&src, v5, v4) )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(274);
    }
    v6 = n;
    if ( n )
    {
      v7 = (int *)src;
      v6 = 2 * (n - 1);
    }
    else
    {
      v7 = &dword_9C8A4;
    }
    v8 = (char *)a1[1];
    v9 = v6;
    if ( v8 )
      v9 = (size_t)&(--v8)[v6];
    v10 = *a1;
    if ( v9 + 1 > (unsigned int)a1[2] )
    {
      v10 = sub_78018((int)a1, v10, v9 + 1, 1u);
      *a1 = v10;
    }
    a1[1] = (void *)(v9 + 1);
    *((_BYTE *)v10 + v9) = 0;
    memmove(&v8[(_DWORD)*a1], v7, v6);
    if ( src )
    {
      n = 0;
      sub_77F70(src);
    }
  }
  else if ( v4 )
  {
    v11 = v4 - 1;
    if ( v4 != 1 )
    {
      v12 = a1[1];
      v13 = (int)v12 - 1;
      v14 = (size_t)v12 + v11 - 1;
      if ( !v12 )
      {
        v13 = 0;
        v14 = v4 - 1;
      }
      v15 = *a1;
      if ( v14 + 1 > (unsigned int)a1[2] )
      {
        v15 = sub_78018((int)a1, v15, v14 + 1, 1u);
        *a1 = v15;
      }
      a1[1] = (void *)(v14 + 1);
      *((_BYTE *)v15 + v14) = 0;
      memcpy((char *)*a1 + v13, *(const void **)a2, v11);
    }
  }
}
// 8DB98: using guessed type int dword_8DB98;
// 9C8A4: using guessed type int dword_9C8A4;
// D6C20: using guessed type char under_debugger;
