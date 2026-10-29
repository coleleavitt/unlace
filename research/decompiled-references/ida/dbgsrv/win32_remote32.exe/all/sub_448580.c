/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448580
// Address: 0x00448580

//----- (00448580) --------------------------------------------------------
char __userpurge sub_448580@<al>(int a1@<ecx>, __m128i a2@<xmm0>, LPVOID *a3)
{
  _BYTE *v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // esi
  int v9; // esi
  unsigned __int8 *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  _BYTE *v15; // [esp+10h] [ebp-1Ch] BYREF
  int v16; // [esp+14h] [ebp-18h]
  unsigned int v17; // [esp+18h] [ebp-14h]
  int v18; // [esp+1Ch] [ebp-10h]
  int v19; // [esp+28h] [ebp-4h]

  v4 = nullptr;
  v5 = 0;
  v15 = nullptr;
  v17 = 0;
  v6 = *(_DWORD *)(a1 + 12);
  v19 = 0;
  v18 = v6;
  v16 = 0;
  if ( v6 == 25 )
  {
LABEL_14:
    v13 = -1;
    if ( v18 == 25 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( a1 == -1050 || (v7 = strlen((const char *)(a1 + 1050))) == 0 )
  {
    v8 = 0;
    v16 = 0;
  }
  else
  {
    if ( v7 != -1 )
    {
      v4 = sub_453B00((int)&v15, nullptr, v7 + 1, 1u);
      v15 = v4;
    }
    v16 = v7 + 1;
    sub_464310((unsigned int)v4, a1 + 1050, v7);
    v15[v7] = 0;
    v5 = v17;
    v8 = v16;
    v4 = v15;
  }
  v9 = v8 != 0 ? v8 - 1 : 0;
  if ( v9 + 2 > v5 )
  {
    v4 = sub_453B00((int)&v15, v4, v9 + 2, 1u);
    v15 = v4;
  }
  v16 = v9 + 2;
  v4[v9 + 1] = 0;
  v15[v9] = 124;
  v10 = (unsigned __int8 *)(a1 + 26);
  v11 = *(unsigned __int16 *)(a1 + 24);
  if ( !*(_WORD *)(a1 + 24) )
  {
    v4 = v15;
    goto LABEL_14;
  }
  do
  {
    v12 = *v10++;
    sub_41F840(a2, (int)&v15, "%02X", v12);
    --v11;
  }
  while ( v11 );
  v4 = v15;
LABEL_15:
  v13 = *(_DWORD *)(a1 + 20);
LABEL_16:
  sub_402970(a2, a3, "%s|%d|%d|%s", *(const char **)a1, *(_DWORD *)(a1 + 12), v13, v4);
  v19 = 1;
  if ( v15 )
  {
    v16 = 0;
    sub_453A20(v15);
  }
  return 1;
}
