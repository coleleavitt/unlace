__int64 __fastcall sub_7C5860(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rax

  v1 = *(__int64 **)(a1 + 160);
  if ( v1 )
    v2 = *v1;
  else
    v2 = *(_QWORD *)(a1 + 24);
  return v2 + 24;
}

