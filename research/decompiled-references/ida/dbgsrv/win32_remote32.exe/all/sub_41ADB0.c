/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41ADB0
// Address: 0x0041ADB0

//----- (0041ADB0) --------------------------------------------------------
int __userpurge sub_41ADB0@<eax>(__m128i a1@<xmm0>, int a2, int a3)
{
  char *v3; // eax
  void *v4; // ecx
  const char *v5; // edi
  unsigned int v6; // esi
  _DWORD *v7; // ebx
  unsigned int v8; // eax
  LPVOID v9; // ecx
  void *v11; // [esp+10h] [ebp-18h] BYREF
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+24h] [ebp-4h]

  v11 = nullptr;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( *(_DWORD *)(a2 + 12) )
    v3 = *(char **)(a2 + 8);
  else
    v3 = (char *)MultiByteStr;
  sub_42F220(a1, v3, (int)&v11, 3u);
  v4 = v11;
  if ( !v12 )
  {
    v5 = MultiByteStr;
LABEL_6:
    v6 = strlen(v5);
    goto LABEL_7;
  }
  v5 = (const char *)v11;
  if ( v11 )
    goto LABEL_6;
  v6 = 0;
LABEL_7:
  v7 = (_DWORD *)(a3 + 8);
  *(_DWORD *)(a3 + 8) = 0;
  *(_BYTE *)a3 = 7;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  LOBYTE(v14) = 1;
  if ( v6 )
  {
    v8 = v6 + 1;
    v9 = nullptr;
    if ( v6 != -1 )
    {
      v9 = sub_453B00((int)v7, nullptr, v6 + 1, 1u);
      v8 = v6 + 1;
      *v7 = v9;
    }
    *(_DWORD *)(a3 + 12) = v8;
    sub_464310((unsigned int)v9, (unsigned int)v5, v6);
    *(_BYTE *)(v6 + *v7) = 0;
    v4 = v11;
  }
  v14 = 2;
  if ( v4 )
  {
    v12 = 0;
    sub_453A20(v4);
  }
  return 0;
}
