/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DB6BB
// Address: 0x000DB6BB

//----- (000DB6BB) --------------------------------------------------------
int __usercall sub_DB6BB@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v3; // eax
  int v5; // edx
  int v7; // eax
  unsigned int v8; // eax
  int v9; // edx
  _BYTE *v10; // [esp+10h] [ebp-28h]
  int v11; // [esp+14h] [ebp-24h]
  int v12; // [esp+18h] [ebp-20h]
  int v13; // [esp+1Ch] [ebp-1Ch]
  _DWORD v14[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = 0;
  v10 = nullptr;
  LOBYTE(v13) = 0;
  v11 = 0;
  while ( *(_DWORD *)a2 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    if ( v5 )
    {
      v12 = a2 + 4 - v5;
      if ( v12 == v3 )
      {
        v12 = v3;
      }
      else
      {
        v13 = sub_DAFEE(a2 + 4 - v5);
        if ( v13 == 255 )
          return -1;
        v10 = (_BYTE *)sub_DAE47(v13, (int)a1);
        v7 = a1[4];
        if ( (v7 & 0x7F8) == 0x7F8 )
        {
          *((_WORD *)a1 + 8) = (8 * (unsigned __int8)v13) | v7 & 0xF807;
        }
        else if ( (unsigned __int8)((unsigned __int16)v7 >> 3) != v13 )
        {
          *((_BYTE *)a1 + 16) |= 4u;
        }
      }
      sub_DAECB(v13, v10, (_BYTE *)(a2 + 8), v14);
      v8 = sub_DADF7(v13);
      v9 = -1;
      if ( v8 <= 3 )
        v9 = (1 << (8 * v8)) - 1;
      if ( (v14[0] & v9) != 0 )
      {
        ++v11;
        if ( v14[0] < *a1 )
          *a1 = v14[0];
      }
    }
    else
    {
      v12 = v3;
    }
    a2 += *(_DWORD *)a2 + 4;
    v3 = v12;
  }
  return v11;
}
