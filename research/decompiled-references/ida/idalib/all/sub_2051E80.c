__int64 __fastcall sub_2051E80(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v1 + 8) == 16 )
    return *(_QWORD *)(v1 + 32);
  else
    return *(unsigned int *)(v1 + 32);
}
