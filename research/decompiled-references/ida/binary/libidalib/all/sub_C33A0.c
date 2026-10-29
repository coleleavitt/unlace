__int64 __fastcall sub_C33A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *i; // r12

  v2 = *(_QWORD **)(a1 + 24);
  result = *(_QWORD *)(a1 + 32);
  for ( i = &v2[result]; i != v2; ++v2 )
  {
    if ( *v2 != a2 )
    {
      result = sub_193920();
      if ( result )
        result = sub_196B90(result, 0, 7, 0);
    }
  }
  return result;
}

