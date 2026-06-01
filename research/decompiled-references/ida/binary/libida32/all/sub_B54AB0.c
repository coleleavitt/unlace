unsigned __int64 __fastcall sub_B54AB0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 144);
  result = (2LL * (unsigned int)(a2 - 1)) | *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFF9LL;
  *(_QWORD *)v3 = result;
  if ( a2 != 2 && a3 )
  {
    result = *(unsigned int *)(v3 + 8);
    if ( !(_DWORD)result )
      *(_DWORD *)(v3 + 8) = a3;
  }
  return result;
}

