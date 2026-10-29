__int64 __fastcall sub_898B80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 409616);
  do
  {
    while ( !*(_BYTE *)(v1 + 28) )
    {
      v1 = *(_QWORD *)(v1 + 16);
      if ( *(_QWORD *)(a1 + 409616) == v1 )
        return result;
    }
    result = sub_898B00(a1, v1);
    v1 = *(_QWORD *)(v1 + 16);
  }
  while ( *(_QWORD *)(a1 + 409616) != v1 );
  return result;
}

