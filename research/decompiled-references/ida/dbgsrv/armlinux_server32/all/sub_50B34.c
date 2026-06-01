/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50B34
// Address: 0x00050B34

//----- (00050B34) --------------------------------------------------------
int __fastcall sub_50B34(int a1, int a2, int a3)
{
  int result; // r0
  _BOOL4 v6; // r3
  char v7[8]; // [sp+0h] [bp-1Ch] BYREF
  __int64 v8; // [sp+8h] [bp-14h]

  for ( result = sub_50AA0(a1, a2, a3); *(_WORD *)(*(_DWORD *)(a1 + 592) + 12) == 31868; *(_BYTE *)a2 = 0 )
  {
    v7[0] = 1;
    v8 = 0;
    result = sub_50AA0(a1, (int)v7, 1);
    if ( *(_QWORD *)(a2 + 8) )
      v6 = 1;
    else
      v6 = v8 != 0;
    *(_DWORD *)(a2 + 8) = v6;
    *(_DWORD *)(a2 + 12) = 0;
  }
  return result;
}
