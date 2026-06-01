/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BA54
// Address: 0x0047BA54

//----- (0047BA54) --------------------------------------------------------
int __cdecl sub_47BA54(__m128i *lpMem, int a2)
{
  __m128i *v3; // edi
  __m128i *v4; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  __m128i *v9; // eax
  char *v10; // esi
  unsigned int v11; // eax
  __m128i *v12; // ecx
  __int8 *v13; // edx
  __int16 v14; // ax
  WCHAR *v15; // esi
  const WCHAR *v16; // ecx
  __int16 v17; // [esp+4h] [ebp-10h]
  __m128i *v18; // [esp+8h] [ebp-Ch]
  int v19; // [esp+8h] [ebp-Ch]
  int v20; // [esp+Ch] [ebp-8h]
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+10h] [ebp-4h]

  if ( !lpMem )
  {
    *sub_46B984() = 22;
    return -1;
  }
  v3 = lpMem;
  v4 = sub_46669D(lpMem, 0x3Du);
  v18 = v4;
  if ( !v4 || v4 == lpMem )
    goto LABEL_39;
  v17 = v4->m128i_i16[1];
  sub_47BE2F((int)lpMem);
  v5 = dword_4B7A04;
  v6 = 0;
  if ( !dword_4B7A04 )
  {
    if ( a2 && dword_4B7A00 )
    {
      if ( sub_476F62() )
      {
        sub_47BE2F(0);
        goto LABEL_16;
      }
LABEL_39:
      *sub_46B984() = 22;
      goto LABEL_40;
    }
    if ( !v17 )
    {
      v6 = 0;
      goto LABEL_41;
    }
    if ( dword_4B7A00 )
      goto LABEL_15;
    dword_4B7A00 = (int)sub_4791B9(1u, 4u);
    sub_479216(nullptr);
    if ( !dword_4B7A00 )
      goto LABEL_40;
    v5 = dword_4B7A04;
    if ( !dword_4B7A04 )
    {
LABEL_15:
      dword_4B7A04 = sub_4791B9(1u, 4u);
      sub_479216(nullptr);
LABEL_16:
      v5 = dword_4B7A04;
      if ( dword_4B7A04 )
        goto LABEL_17;
LABEL_40:
      v6 = -1;
      goto LABEL_41;
    }
  }
LABEL_17:
  v19 = ((char *)v18 - (char *)lpMem) >> 1;
  v7 = sub_47BE9E((unsigned __int16 *)lpMem, v19);
  v21 = v7;
  if ( v7 >= 0 && *v5 )
  {
    sub_479216((LPVOID)v5[v7]);
    v8 = v21;
    if ( v17 )
    {
      v9 = lpMem;
      v3 = nullptr;
      v5[v21] = lpMem;
      goto LABEL_31;
    }
    while ( v5[v8] )
    {
      v5[v8] = v5[v8 + 1];
      ++v8;
    }
    v10 = sub_47DE51((int)lpMem, v5, v8, 4u);
    sub_479216(nullptr);
    v9 = lpMem;
    if ( !v10 )
    {
LABEL_31:
      if ( a2 )
      {
        v12 = v9;
        v13 = &v9->m128i_i8[2];
        do
        {
          v14 = v12->m128i_i16[0];
          v12 = (__m128i *)((char *)v12 + 2);
        }
        while ( v14 );
        v20 = (((char *)v12 - v13) >> 1) + 2;
        v15 = (WCHAR *)sub_4791B9(v20, 2u);
        if ( v15 )
        {
          if ( sub_47B594(0, (int)v3, v15, v20, (int)lpMem) )
          {
            sub_467F04(0, (int)v3);
            __debugbreak();
          }
          v16 = &v15[v19 + 1];
          *((_WORD *)v16 - 1) = 0;
          if ( !SetEnvironmentVariableW(v15, v17 != 0 ? v16 : nullptr) )
          {
            v6 = -1;
            *sub_46B984() = 42;
          }
        }
        sub_479216(v15);
      }
      goto LABEL_41;
    }
LABEL_30:
    dword_4B7A04 = v10;
    goto LABEL_31;
  }
  if ( v17 )
  {
    v11 = -v7;
    v22 = v11;
    if ( v11 + 2 >= v11 && v11 + 2 < 0x3FFFFFFF )
    {
      v10 = sub_47DE51((int)lpMem, v5, v11 + 2, 4u);
      sub_479216(nullptr);
      if ( v10 )
      {
        v3 = nullptr;
        v9 = lpMem;
        *(_DWORD *)&v10[4 * v22] = lpMem;
        *(_DWORD *)&v10[4 * v22 + 4] = 0;
        goto LABEL_30;
      }
    }
    goto LABEL_40;
  }
LABEL_41:
  sub_479216(v3);
  return v6;
}
// 476F62: using guessed type int sub_476F62(void);
// 4B7A00: using guessed type int dword_4B7A00;
