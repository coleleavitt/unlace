__int64 __fastcall sub_C0EE90(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(result + 40);
  if ( v2 == 1 )
  {
    if ( *(_DWORD *)(result + 44) != 1 )
      goto LABEL_3;
  }
  else if ( v2 != 2 )
  {
    goto LABEL_3;
  }
  *(_DWORD *)(result + 44) = 0;
LABEL_3:
  if ( !*(_DWORD *)(result + 476) )
    *(_BYTE *)(result + 480) = 0;
  return result;
}

