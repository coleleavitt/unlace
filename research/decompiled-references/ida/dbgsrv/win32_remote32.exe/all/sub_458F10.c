/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458F10
// Address: 0x00458F10

//----- (00458F10) --------------------------------------------------------
int __cdecl sub_458F10(int a1, const WCHAR *a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // ebx
  int v6; // edi
  int v8; // eax
  int v9; // esi
  int v10; // [esp+18h] [ebp-18h] BYREF
  CHAR v11[16]; // [esp+1Ch] [ebp-14h] BYREF

  v5 = a4;
  v6 = a3;
  v10 = 16;
  if ( ConvertINetUnicodeToMultiByte((LPDWORD)(a1 + 24), *(_DWORD *)a1, a2, &a3, v11, &v10) || v6 != a3 )
    goto LABEL_7;
  if ( a5 < v10 )
  {
    *sub_46B984() = 7;
    return -1;
  }
  v8 = (*(int (__cdecl **)(int, CHAR *, int))(a1 + 16))(a1, v11, v10);
  v9 = v10;
  if ( v8 == v10 )
  {
    sub_464310(v5, (unsigned int)v11, v10);
    return v9;
  }
  else
  {
LABEL_7:
    *sub_46B984() = 42;
    return -1;
  }
}
