__int64 __fastcall sub_440500(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 32);
  do
  {
    v3 = *(__int64 **)(v1 + 8);
    if ( v3 )
    {
      if ( v3 != off_656088 )
        result = Tcl_Free((__int64)v3);
      *(_QWORD *)(v1 + 8) = 0;
    }
    v1 = *(_QWORD *)(v2 + 112);
    ++*(_DWORD *)(v2 + 104);
    if ( !v1 )
      break;
    *(_QWORD *)(v2 + 112) = 0;
    v2 = *(_QWORD *)(v1 + 32);
  }
  while ( v2 );
  return result;
}

