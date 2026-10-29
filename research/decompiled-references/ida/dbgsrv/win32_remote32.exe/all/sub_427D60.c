/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427D60
// Address: 0x00427D60

//----- (00427D60) --------------------------------------------------------
char __thiscall sub_427D60(_DWORD *this, unsigned int a2, unsigned int *a3)
{
  __int16 *v3; // edi
  unsigned __int8 *v4; // eax
  unsigned int v5; // ebx
  int v6; // esi
  int v8; // eax
  unsigned __int8 *v10; // [esp+10h] [ebp-10h] BYREF
  unsigned int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]
  int v14; // [esp+24h] [ebp+4h]

  v3 = (__int16 *)(*(this + 1) + *this - 2);
  if ( *v3 <= 0 )
    return 0;
  v4 = (unsigned __int8 *)(*this + *(this + 3));
  v11 = 0;
  v10 = v4;
  v5 = 0;
  v6 = 0;
  v12 = sub_4541E0(&v10, (unsigned int)v3);
  if ( v12 <= 0 || v10 >= (unsigned __int8 *)v3 )
    return 0;
  while ( 1 )
  {
    v8 = sub_4541E0(&v10, (unsigned int)v3);
    v11 += v8;
    v5 += sub_4541E0(&v10, (unsigned int)v3);
    v14 = sub_4541E0(&v10, (unsigned int)v3);
    v13 = sub_4541E0(&v10, (unsigned int)v3);
    if ( a2 >= v11 && a2 < v5 )
      break;
    if ( ++v6 >= v12 || v10 >= (unsigned __int8 *)v3 )
      return 0;
  }
  *a3 = v11;
  a3[1] = v5;
  a3[2] = v14;
  a3[3] = v13;
  return 1;
}
