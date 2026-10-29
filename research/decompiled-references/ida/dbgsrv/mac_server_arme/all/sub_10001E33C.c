/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E33C
// Address: 0x000000010001E33C

//----- (000000010001E33C) ----------------------------------------------------
__int64 __fastcall sub_10001E33C(__int64 a1)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_DWORD)result )
  {
    if ( *(_BYTE *)(a1 + 896) != 1
      || (result = sub_10001D5D0(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84), a1 + 96), (_DWORD)result) )
    {
      if ( *(_BYTE *)(a1 + 897) != 1 )
        return 1;
      result = sub_10001E3C8(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84), (natural_t *)(a1 + 368));
      if ( (_DWORD)result )
        return 1;
    }
  }
  return result;
}
