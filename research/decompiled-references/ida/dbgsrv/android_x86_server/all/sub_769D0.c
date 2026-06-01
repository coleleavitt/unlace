/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_769D0
// Address: 0x000769D0

//----- (000769D0) --------------------------------------------------------
int __userpurge sub_769D0@<eax>(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edx
  _DWORD *v6; // edx
  _DWORD *v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // esi
  unsigned int v10; // esi
  _DWORD *v11; // edx
  unsigned int v12; // [esp+8h] [ebp-20h]
  int v13; // [esp+10h] [ebp-18h]
  unsigned int v14; // [esp+14h] [ebp-14h]

  result = a1;
  v4 = a2[1];
  v5 = a3[1];
  v14 = v4 - 1;
  if ( (v4 & (v4 - 1)) != 0 )
  {
    if ( v5 >= v4 )
      v5 %= v4;
  }
  else
  {
    v5 &= v4 - 1;
  }
  v12 = v5;
  v6 = *(_DWORD **)(*a2 + 4 * v5);
  do
  {
    v7 = v6;
    v6 = (_DWORD *)*v6;
  }
  while ( v6 != a3 );
  if ( v7 == a2 + 2 )
    goto LABEL_18;
  v8 = v7[1];
  if ( (v4 & v14) != 0 )
  {
    if ( v8 >= v4 )
    {
      v8 %= v4;
      result = a1;
    }
  }
  else
  {
    v8 &= v14;
  }
  if ( v8 != v12 )
  {
LABEL_18:
    if ( !*a3 )
      goto LABEL_19;
    v9 = *(_DWORD *)(*a3 + 4);
    if ( (v4 & v14) != 0 )
    {
      if ( v9 >= v4 )
      {
        v9 %= v4;
        result = a1;
      }
    }
    else
    {
      v9 &= v14;
    }
    if ( v9 != v12 )
LABEL_19:
      *(_DWORD *)(*a2 + 4 * v12) = 0;
  }
  v13 = *a3;
  if ( *a3 )
  {
    v10 = *(_DWORD *)(*a3 + 4);
    if ( (v4 & v14) != 0 )
    {
      if ( v10 >= v4 )
      {
        v10 %= v4;
        result = a1;
      }
    }
    else
    {
      v10 &= v14;
    }
    v11 = a2 + 2;
    if ( v10 != v12 )
    {
      *(_DWORD *)(*a2 + 4 * v10) = v7;
      v13 = *a3;
    }
  }
  else
  {
    v11 = a2 + 2;
  }
  *v7 = v13;
  *a3 = 0;
  --a2[3];
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = v11;
  *(_BYTE *)(result + 8) = 1;
  return result;
}
