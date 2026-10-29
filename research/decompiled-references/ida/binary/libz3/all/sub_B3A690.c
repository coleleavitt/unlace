__int64 __fastcall sub_B3A690(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8560LL);
  if ( v1 )
  {
    result = *(unsigned int *)(v1 - 4);
    *(_DWORD *)(a1 + 44) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 0;
    return 0;
  }
  return result;
}

