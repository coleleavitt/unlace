/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B010
// Address: 0x0041B010

//----- (0041B010) --------------------------------------------------------
int __userpurge sub_41B010@<eax>(__m128i a1@<xmm0>, int a2, int a3)
{
  char *v3; // eax
  unsigned int v4; // edi
  int v5; // esi
  _BYTE *v6; // eax
  const char *v7; // eax
  int v8; // esi
  void *v10; // [esp+Ch] [ebp-24h] BYREF
  int v11; // [esp+10h] [ebp-20h]
  int v12; // [esp+14h] [ebp-1Ch]
  _BYTE *v13; // [esp+18h] [ebp-18h] BYREF
  int v14; // [esp+1Ch] [ebp-14h]
  unsigned int v15; // [esp+20h] [ebp-10h]
  int v16; // [esp+2Ch] [ebp-4h]

  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  v16 = 0;
  if ( *(_DWORD *)(a2 + 12) )
    v3 = *(char **)(a2 + 8);
  else
    v3 = (char *)MultiByteStr;
  if ( sub_428D70(a1, a3, -1, v3, (int)&v10) )
  {
    v8 = 0;
  }
  else
  {
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    LOBYTE(v16) = 1;
    v13 = sub_453B00((int)&v13, nullptr, 0xEu, 1u);
    v14 = 14;
    sub_464310((unsigned int)v13, (unsigned int)"IDC_FAILURE: ", 0xDu);
    v13[13] = 0;
    LOBYTE(v16) = 2;
    v4 = v11 != 0 ? v11 - 1 : 0;
    if ( v4 )
    {
      v5 = v14 != 0 ? v14 - 1 : 0;
      if ( v4 + v5 + 1 <= v15 )
      {
        v6 = v13;
      }
      else
      {
        v6 = sub_453B00((int)&v13, v13, v4 + v5 + 1, 1u);
        v13 = v6;
      }
      v14 = v5 + v4 + 1;
      v6[v5 + v4] = 0;
      sub_464310((unsigned int)&v13[v5], (unsigned int)v10, v4);
    }
    v7 = MultiByteStr;
    if ( v14 )
      v7 = v13;
    v8 = sub_41BC80(v7, a3);
    LOBYTE(v16) = 3;
    if ( v13 )
    {
      v14 = 0;
      sub_453A20(v13);
    }
  }
  v16 = 5;
  if ( v10 )
  {
    v11 = 0;
    sub_453A20(v10);
  }
  return v8;
}
