__int64 __fastcall sub_CDB380(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rdx
  __int64 j; // rax

  v1 = a1 + 384;
  for ( i = *(_QWORD *)(v1 + 32); i; i = *(_QWORD *)(i + 16) )
  {
    for ( j = *(_QWORD *)(i + 32); j; j = *(_QWORD *)(j + 16) )
      *(_QWORD *)(j + 32) = 0;
  }
  return sub_D8AAC0(v1 + 48);
}

