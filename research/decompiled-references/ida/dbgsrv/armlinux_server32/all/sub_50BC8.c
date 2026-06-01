/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50BC8
// Address: 0x00050BC8

//----- (00050BC8) --------------------------------------------------------
int __fastcall sub_50BC8(int a1, int a2, int a3)
{
  int result; // r0
  char v6; // r1
  _BYTE *v7; // r10
  char v8; // r1
  char v9[8]; // [sp+0h] [bp-38h] BYREF
  __int64 v10; // [sp+8h] [bp-30h]
  _BYTE v11[8]; // [sp+10h] [bp-28h] BYREF
  int v12; // [sp+18h] [bp-20h]
  int v13; // [sp+1Ch] [bp-1Ch]
  _BYTE v14[8]; // [sp+20h] [bp-18h] BYREF
  int v15; // [sp+28h] [bp-10h]
  int v16; // [sp+2Ch] [bp-Ch]

  v9[0] = 1;
  v10 = 0;
  result = sub_50B34(a1, (int)v9, a3);
  if ( *(_WORD *)(*(_DWORD *)(a1 + 592) + 12) == 63 )
  {
    v7 = v11;
    v11[0] = 1;
    v12 = 0;
    v13 = 0;
    sub_50BC8(a1, v11, 1);
    if ( *(_WORD *)(*(_DWORD *)(a1 + 592) + 12) != 58 )
      sub_4C0D8(a1);
    v15 = 0;
    v16 = 0;
    v14[0] = 1;
    result = sub_50BC8(a1, v14, 1);
    if ( !v10 )
      v7 = v14;
    v8 = *v7;
    *(_QWORD *)(a2 + 8) = *((_QWORD *)v7 + 1);
    *(_BYTE *)a2 = v8;
  }
  else
  {
    v6 = v9[0];
    *(_QWORD *)(a2 + 8) = v10;
    *(_BYTE *)a2 = v6;
  }
  return result;
}
