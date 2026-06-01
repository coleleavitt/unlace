/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DB098
// Address: 0x000DB098

//----- (000DB098) --------------------------------------------------------
int __usercall sub_DB098@<eax>(int a1@<eax>, int a2@<edx>, int a3)
{
  __int16 v6; // ax
  int v7; // eax
  int v8; // edx
  unsigned int v9; // edx
  bool v10; // zf
  _BYTE *v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  _BYTE *v15; // [esp+14h] [ebp-24h]
  int v16; // [esp+18h] [ebp-20h]
  int v17; // [esp+1Ch] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-10h] BYREF
  unsigned int v19[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v6 = (unsigned __int16)*(_DWORD *)(a1 + 16) >> 3;
  v17 = (unsigned __int8)v6;
  v15 = (_BYTE *)sub_DAE47(v6, a1);
  v7 = 0;
  while ( *(_DWORD *)a2 )
  {
    v8 = *(_DWORD *)(a2 + 4);
    v16 = v7;
    if ( v8 )
    {
      if ( (*(_BYTE *)(a1 + 16) & 4) != 0 )
      {
        v16 = a2 + 4 - v8;
        if ( v16 != v7 )
        {
          v17 = sub_DAFEE(a2 + 4 - v8);
          v15 = (_BYTE *)sub_DAE47(v17, a1);
        }
      }
      if ( v17 )
      {
        v12 = sub_DAECB(v17, v15, (_BYTE *)(a2 + 8), &v18);
        sub_DAECB(v17 & 0xF, nullptr, v12, v19);
        v13 = sub_DADF7(v17);
        v14 = -1;
        if ( v13 <= 3 )
          v14 = (1 << (8 * v13)) - 1;
        v10 = (v14 & v18) == 0;
      }
      else
      {
        v9 = *(_DWORD *)(a2 + 12);
        v18 = *(_DWORD *)(a2 + 8);
        v10 = v18 == 0;
        v19[0] = v9;
      }
      if ( !v10 && a3 - v18 < v19[0] )
        return a2;
    }
    a2 += *(_DWORD *)a2 + 4;
    v7 = v16;
  }
  return 0;
}
