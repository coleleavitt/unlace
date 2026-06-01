/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AB620
// Address: 0x080AB620

//----- (080AB620) --------------------------------------------------------
int __cdecl sub_80AB620(int a1, char *s, unsigned int a3)
{
  _BYTE *v3; // eax
  size_t v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // edi
  int v7; // edi
  char *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // [esp+0h] [ebp-4Ch]
  unsigned int v12; // [esp+0h] [ebp-4Ch]
  size_t v13; // [esp+4h] [ebp-48h]
  size_t v14; // [esp+4h] [ebp-48h]
  void *ptr; // [esp+1Ch] [ebp-30h] BYREF
  unsigned int v16; // [esp+20h] [ebp-2Ch]
  unsigned int v17; // [esp+24h] [ebp-28h]
  _BYTE v18[5]; // [esp+2Bh] [ebp-21h] BYREF
  unsigned int v19[7]; // [esp+30h] [ebp-1Ch] BYREF

  v19[0] = __readgsdword(0x14u);
  sub_80BD060((int *)&ptr, 55);
  sub_80B8A50((char **)&ptr, s);
  v3 = sub_80CDC90(v18, (unsigned int)v19, a3);
  v4 = v3 - v18;
  if ( v3 != v18 )
  {
    v5 = v16;
    v6 = v16 + v4;
    if ( __CFADD__(v16, v4) )
    {
      if ( v16 > 0x7FFFFFFE )
      {
        if ( v16 != 0x7FFFFFFF )
          v16 = 0x7FFFFFFF;
LABEL_6:
        memcpy((char *)ptr + v5, v18, v4);
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFF;
    }
    v9 = (char *)ptr;
    v10 = v16;
    if ( v17 < v6 )
    {
      v12 = v16;
      v14 = v4;
      v9 = (char *)sub_80CF920((int)&ptr, ptr, v6, 1u);
      v10 = v16;
      v5 = v12;
      ptr = v9;
      v4 = v14;
    }
    v13 = v4;
    v11 = v5;
    memset(&v9[v10], 0, v6 - v10);
    v16 = v6;
    v4 = v13;
    v5 = v11;
    goto LABEL_6;
  }
LABEL_7:
  v7 = sub_80B7C10(a1 + 100, (int *)&ptr, -1, nullptr);
  if ( ptr )
  {
    v16 = 0;
    sub_80CF780(ptr);
  }
  if ( v19[0] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v7;
}
