/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73BE0
// Address: 0x00073BE0

//----- (00073BE0) --------------------------------------------------------
const char *__fastcall sub_73BE0(const char *result, char *s)
{
  _BOOL4 v2; // r4
  char *v3; // r6
  const char *v4; // r5
  size_t v5; // r7
  char *v6; // r1
  unsigned int v7; // r0
  int v8; // r3
  unsigned int v9; // r2
  void *v10; // r5
  size_t v11; // r8
  void *v12; // r7
  char *v13; // r2
  void *v14; // r0
  void **v15; // r0
  const char *v16; // [sp+Ch] [bp-18h] BYREF
  void *ptr; // [sp+10h] [bp-14h] BYREF
  size_t v18; // [sp+14h] [bp-10h]
  void *v19; // [sp+18h] [bp-Ch]

  v2 = s == nullptr;
  if ( !result )
    v2 = 1;
  if ( !v2 )
  {
    v3 = (char *)result;
    result = sub_793DC(s, ":", &v16);
    v4 = result;
    while ( result )
    {
      if ( *v4 )
      {
        ptr = nullptr;
        v18 = 0;
        v19 = nullptr;
        v5 = strlen(v4);
        ptr = sub_77EB0((int)&ptr, nullptr, v5 + 1, 1u);
        v18 = v5 + 1;
        memmove(ptr, v4, v5);
        *((_BYTE *)ptr + v5) = 0;
        v6 = *(char **)v3;
        if ( *(_DWORD *)v3 > (unsigned int)&ptr )
        {
          v7 = *((_DWORD *)v3 + 2);
          v8 = *((_DWORD *)v3 + 1);
          v9 = v8 + 1;
LABEL_16:
          if ( v7 < v9 )
          {
            v6 = (char *)sub_77EB0((int)v3, v6, v9, 0xCu);
            v8 = *((_DWORD *)v3 + 1);
            *(_DWORD *)v3 = v6;
          }
          v15 = (void **)&v6[12 * v8];
          *v15 = ptr;
          v15[1] = (void *)v18;
          v15[2] = v19;
          ++*((_DWORD *)v3 + 1);
          goto LABEL_13;
        }
        v7 = *((_DWORD *)v3 + 2);
        v8 = *((_DWORD *)v3 + 1);
        v9 = v8 + 1;
        if ( &ptr >= (void **)&v6[12 * v7] )
          goto LABEL_16;
        v10 = ptr;
        v11 = v18;
        v12 = v19;
        ptr = nullptr;
        v18 = 0;
        v19 = nullptr;
        if ( v7 < v9 )
        {
          v6 = (char *)sub_77EB0((int)v3, v6, v9, 0xCu);
          v8 = *((_DWORD *)v3 + 1);
          *(_DWORD *)v3 = v6;
        }
        v13 = &v6[12 * v8];
        *(_DWORD *)v13 = v10;
        v14 = ptr;
        *((_DWORD *)v13 + 1) = v11;
        *((_DWORD *)v13 + 2) = v12;
        ++*((_DWORD *)v3 + 1);
        if ( v14 )
        {
          v18 = 0;
          sub_77E08(v14);
        }
      }
LABEL_13:
      result = sub_793DC(nullptr, ":", &v16);
      v4 = result;
    }
  }
  return result;
}
