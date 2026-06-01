char __fastcall sub_8E91A0(__int64 a1)
{
  char result; // al
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = *(unsigned int *)(a1 + 32);
    v4 = *(_QWORD *)(v2 + 32);
    if ( *(_DWORD *)(v4 + 16) != (_DWORD)v3 && (_DWORD)v3 )
      v4 = *(_QWORD *)(v2 + v3 + 32);
    result = *(_BYTE *)(v4 + 51);
    if ( result )
      return *(_QWORD *)a1 == *(unsigned int *)(a1 + 32);
  }
  return result;
}

