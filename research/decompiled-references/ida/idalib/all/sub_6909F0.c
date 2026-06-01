__int64 __fastcall sub_6909F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = v1 + 8;
  if ( *(__int64 *)(v1 + 32) >= 0 )
    return v1 + 8;
  sub_690720(v1 + 8);
  return v2;
}
