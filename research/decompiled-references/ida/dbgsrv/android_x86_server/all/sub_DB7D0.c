/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DB7D0
// Address: 0x000DB7D0

//----- (000DB7D0) --------------------------------------------------------
int __usercall sub_DB7D0@<eax>(int a1@<eax>, int *a2@<edx>, int a3)
{
  __int16 v5; // ax
  int result; // eax
  int v7; // edx
  bool v8; // zf
  unsigned int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  _BYTE *v14; // [esp+14h] [ebp-24h]
  int v15; // [esp+18h] [ebp-20h]
  int v16; // [esp+1Ch] [ebp-1Ch]
  _DWORD v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v5 = (unsigned __int16)*(_DWORD *)(a1 + 16) >> 3;
  v16 = (unsigned __int8)v5;
  v14 = (_BYTE *)sub_DAE47(v5, a1);
  result = 0;
  while ( *(_DWORD *)a3 )
  {
    v7 = *(_DWORD *)(a3 + 4);
    v15 = result;
    if ( v7 )
    {
      if ( (*(_BYTE *)(a1 + 16) & 4) != 0 )
      {
        v15 = a3 + 4 - v7;
        if ( v15 != result )
        {
          v16 = sub_DAFEE(a3 + 4 - v7);
          v14 = (_BYTE *)sub_DAE47(v16, a1);
        }
      }
      if ( v16 )
      {
        sub_DAECB(v16, v14, (_BYTE *)(a3 + 8), v17);
        v9 = sub_DADF7(v16);
        v10 = -1;
        if ( v9 <= 3 )
          v10 = (1 << (8 * v9)) - 1;
        v8 = (v10 & v17[0]) == 0;
      }
      else
      {
        v8 = *(_DWORD *)(a3 + 8) == 0;
      }
      if ( !v8 )
      {
        v11 = *a2;
        if ( *a2 )
        {
          v12 = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v11 + 4) = v12 + 1;
          *(_DWORD *)(v11 + 4 * v12 + 8) = a3;
        }
      }
    }
    a3 += *(_DWORD *)a3 + 4;
    result = v15;
  }
  return result;
}
