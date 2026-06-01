/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_939B4
// Address: 0x000939B4

//----- (000939B4) --------------------------------------------------------
int __fastcall sub_939B4(unsigned __int8 **a1)
{
  __int64 v2; // r0
  int v3; // r4
  unsigned __int8 *v4; // r0
  unsigned __int8 *v5; // r1
  __int64 v6; // r0
  __int64 v7; // r0
  unsigned __int8 *v9[2]; // [sp+4h] [bp-24h] BYREF
  unsigned __int8 *v10; // [sp+Ch] [bp-1Ch] BYREF
  unsigned __int8 *v11; // [sp+10h] [bp-18h]

  v2 = *(_QWORD *)a1;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return 1;
  if ( *(_BYTE *)v2 == 104 )
  {
    *a1 = (unsigned __int8 *)(v2 + 1);
    v3 = 1;
    sub_92AAC(&v10, a1, 1);
    v4 = v10;
    v5 = v11;
  }
  else
  {
    if ( *(_BYTE *)v2 != 118 )
      return 1;
    *a1 = (unsigned __int8 *)(v2 + 1);
    v3 = 1;
    sub_92AAC(&v10, a1, 1);
    if ( v10 == v11 )
      return v3;
    v7 = *(_QWORD *)a1;
    if ( (_DWORD)v7 == HIDWORD(v7) || *(_BYTE *)v7 != 95 )
      return 1;
    *a1 = (unsigned __int8 *)(v7 + 1);
    v3 = 1;
    sub_92AAC(v9, a1, 1);
    v4 = v9[0];
    v5 = v9[1];
  }
  if ( v4 != v5 )
  {
    v6 = *(_QWORD *)a1;
    if ( (_DWORD)v6 != HIDWORD(v6) && *(_BYTE *)v6 == 95 )
    {
      *a1 = (unsigned __int8 *)(v6 + 1);
      return 0;
    }
    return 1;
  }
  return v3;
}
