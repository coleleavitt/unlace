__int64 __fastcall sub_573030(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rcx

  result = *(_QWORD *)(a1 + 632);
  v2 = *(_QWORD **)(result + 24);
  if ( v2 && *v2 )
  {
    do
    {
      result = sub_35CEC0(a1, 0, (__int64)&unk_22D5EB0);
      v3 = v2[1];
      ++v2;
    }
    while ( v3 );
  }
  return result;
}
