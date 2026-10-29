/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B816
// Address: 0x0047B816

//----- (0047B816) --------------------------------------------------------
int __usercall sub_47B816@<eax>(int a1@<ebx>, char *lpMem, int a3)
{
  char *v4; // edi
  __int8 *v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // kr00_4
  CHAR *v12; // eax
  CHAR *v13; // esi
  const CHAR *v14; // ecx
  __int8 *v15; // [esp+4h] [ebp-10h]
  int v16; // [esp+8h] [ebp-Ch]
  char *v17; // [esp+8h] [ebp-Ch]
  int v18; // [esp+8h] [ebp-Ch]
  _DWORD *v19; // [esp+Ch] [ebp-8h]
  char *v20; // [esp+Ch] [ebp-8h]
  __int8 v21; // [esp+13h] [ebp-1h]

  if ( !lpMem )
  {
    *sub_46B984() = 22;
    return -1;
  }
  v4 = lpMem;
  v5 = sub_464F10(lpMem, 0x3Du);
  v15 = v5;
  if ( !v5 || v5 == lpMem )
    goto LABEL_37;
  v21 = v5[1];
  sub_47BE15(a1);
  v6 = 0;
  if ( dword_4B7A00 )
    goto LABEL_15;
  if ( a3 && dword_4B7A04 )
  {
    if ( sub_476F5D() )
    {
      sub_47BE15(0);
      goto LABEL_15;
    }
LABEL_37:
    *sub_46B984() = 22;
    goto LABEL_38;
  }
  if ( !v21 )
  {
    v6 = 0;
    goto LABEL_39;
  }
  dword_4B7A00 = (int)sub_4791B9(1u, 4u);
  sub_479216(nullptr);
  if ( !dword_4B7A00 || !dword_4B7A04 && (dword_4B7A04 = sub_4791B9(1u, 4u), sub_479216(nullptr), !dword_4B7A04) )
  {
LABEL_38:
    v6 = -1;
    goto LABEL_39;
  }
LABEL_15:
  v19 = (_DWORD *)dword_4B7A00;
  if ( !dword_4B7A00 )
    goto LABEL_38;
  v7 = sub_47BE49((unsigned __int8 *)lpMem, v15 - lpMem);
  v16 = v7;
  if ( v7 >= 0 && *v19 )
  {
    sub_479216((LPVOID)v19[v7]);
    v8 = v16;
    if ( v21 )
    {
      v4 = nullptr;
      v19[v16] = lpMem;
      goto LABEL_31;
    }
    while ( v19[v8] )
    {
      v19[v8] = v19[v8 + 1];
      ++v8;
    }
    v17 = sub_47DE51((int)lpMem, v19, v8, 4u);
    sub_479216(nullptr);
    v9 = (int)v17;
    if ( !v17 )
    {
LABEL_31:
      if ( a3 )
      {
        v11 = strlen(lpMem);
        v12 = (CHAR *)sub_4791B9(v11 + 2, 1u);
        v13 = v12;
        if ( v12 )
        {
          if ( sub_46C78C(0, (int)v4, v12, v11 + 2, (int)lpMem) )
          {
            sub_467F04(0, (int)v4);
            __debugbreak();
          }
          v14 = &v15[v13 - lpMem + 1];
          *((_BYTE *)v14 - 1) = 0;
          if ( !sub_47BFDB(v13, v21 != 0 ? v14 : nullptr) )
          {
            v6 = -1;
            *sub_46B984() = 42;
          }
        }
        sub_479216(v13);
      }
      goto LABEL_39;
    }
LABEL_30:
    dword_4B7A00 = v9;
    goto LABEL_31;
  }
  if ( v21 )
  {
    v10 = -v7;
    v18 = v10;
    if ( v10 + 2 >= v10 && v10 + 2 < 0x3FFFFFFF )
    {
      v20 = sub_47DE51((int)lpMem, v19, v10 + 2, 4u);
      sub_479216(nullptr);
      v9 = (int)v20;
      if ( v20 )
      {
        v4 = nullptr;
        *(_DWORD *)&v20[4 * v18] = lpMem;
        *(_DWORD *)&v20[4 * v18 + 4] = 0;
        goto LABEL_30;
      }
    }
    goto LABEL_38;
  }
LABEL_39:
  sub_479216(v4);
  return v6;
}
// 476F5D: using guessed type int sub_476F5D(void);
// 4B7A00: using guessed type int dword_4B7A00;
