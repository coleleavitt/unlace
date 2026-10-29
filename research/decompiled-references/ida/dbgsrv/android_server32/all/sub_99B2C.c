/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99B2C
// Address: 0x00099B2C

//----- (00099B2C) --------------------------------------------------------
int __fastcall sub_99B2C(int *a1, int a2)
{
  int v3; // r5
  int v4; // r3
  __int64 v6; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+Ch] [bp-14h]

  v3 = ((*(int (__fastcall **)(int *, int))(*a1 + 12))(a1, -1) & 0xFFFFFFFE) - a2;
  if ( !sub_99EE8(a1[1], v3, &v6, v4) || !(_DWORD)v6 || !sub_99F2C(a1, v3, &v6) )
    *((_BYTE *)a1 + 384) = 1;
  return _stack_chk_guard - v7;
}
// 99B5C: variable 'v4' is possibly undefined
