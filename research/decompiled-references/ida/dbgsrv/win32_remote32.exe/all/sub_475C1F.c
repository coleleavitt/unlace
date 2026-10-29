/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475C1F
// Address: 0x00475C1F

//----- (00475C1F) --------------------------------------------------------
int __usercall sub_475C1F@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3, __int64 a4)
{
  int v4; // ebx
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  unsigned __int8 *v12; // edi
  unsigned __int8 *v13; // ecx
  __int64 v14; // kr00_8
  int v15; // [esp+8h] [ebp-1014h]
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-1010h] BYREF
  int v17; // [esp+10h] [ebp-100Ch]
  DWORD v18; // [esp+14h] [ebp-1008h]
  _BYTE Buffer[4096]; // [esp+18h] [ebp-1004h] BYREF

  v4 = sub_47631B(a1, a2, (int)a3);
  if ( !a3[2] )
    return a4;
  v18 = sub_462A90(*a3 - a3[1], 2);
  v15 = v6;
  v7 = 56 * (v4 & 0x3F);
  v8 = sub_474C96(
         v4,
         v4,
         *(LONG *)((char *)&(*(&dword_4B7B38 + (v4 >> 6)))[1].RecursionCount + v7),
         *(int *)((char *)&(*(&dword_4B7B38 + (v4 >> 6)))[1].OwningThread + v7),
         0);
  v10 = (int)*(&dword_4B7B38 + (v4 >> 6));
  v17 = v8;
  if ( v8 != *(_DWORD *)(v7 + v10 + 32) )
    return -1;
  if ( v9 != *(_DWORD *)(v7 + v10 + 36) )
    return -1;
  if ( !ReadFile(*(HANDLE *)(v7 + v10 + 24), Buffer, 0x1000u, &NumberOfBytesRead, nullptr) )
    return -1;
  sub_474C96(v4, v4, a4, SHIDWORD(a4), 0);
  if ( v11 < 0 || v15 > 0 || v15 >= 0 && v18 > NumberOfBytesRead )
    return -1;
  v12 = &Buffer[NumberOfBytesRead];
  v13 = Buffer;
  v14 = 0;
  if ( v18 || v15 )
  {
    do
    {
      if ( v13 >= v12 )
        break;
      if ( *v13 == 13 )
      {
        if ( v13 < v12 - 1 && v13[1] == 10 )
          ++v13;
      }
      else
      {
        v13 += byte_4B5F20[*v13];
      }
      ++v14;
      ++v13;
    }
    while ( v14 != __PAIR64__(v15, v18) );
  }
  return v17 + v13 - Buffer;
}
// 475C76: variable 'v6' is possibly undefined
// 475CC7: variable 'v9' is possibly undefined
// 475D07: variable 'v11' is possibly undefined
