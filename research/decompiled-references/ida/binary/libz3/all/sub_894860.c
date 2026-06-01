__int64 __fastcall sub_894860(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v4 = v1 + 16 * v2;
      do
      {
        v5 = v1;
        v1 += 16;
        result = sub_15D0DF0(v5);
      }
      while ( v1 != v4 );
      v1 = *(_QWORD *)(a1 + 48);
    }
    *(_DWORD *)(v1 - 4) = 0;
  }
  return result;
}

