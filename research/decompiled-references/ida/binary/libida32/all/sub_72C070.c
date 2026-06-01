__int64 __fastcall sub_72C070(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // esi
  bool v4; // dl

  v1 = *(_QWORD *)(a1 + 56);
  result = 1;
  if ( v1 && a1 == *(_QWORD *)v1 )
  {
    v3 = *(_DWORD *)(v1 + 8);
    v4 = 1;
    if ( (unsigned int)(v3 - 42) <= 0x3D )
      v4 = ((0x2002000088008001uLL >> ((unsigned __int8)v3 - 42)) & 1) == 0;
    return v4 & (unsigned __int8)(v3 != 666 && v3 != 113);
  }
  return result;
}

