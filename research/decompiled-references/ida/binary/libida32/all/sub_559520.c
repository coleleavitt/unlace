__int64 __fastcall sub_559520(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rcx

  result = *(_QWORD *)(a1 + 480);
  v2 = *(_QWORD **)(result + 24);
  if ( v2 && *v2 )
  {
    do
    {
      result = sub_359BD0(a1, 0, (__int64)&unk_22B29DC);
      v3 = v2[1];
      ++v2;
    }
    while ( v3 );
  }
  return result;
}

