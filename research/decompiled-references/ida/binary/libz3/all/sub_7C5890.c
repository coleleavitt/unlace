__int64 __fastcall sub_7C5890(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rax

  v1 = *(__int64 **)(a1 + 80);
  if ( v1 )
    v2 = *v1;
  else
    v2 = *(_QWORD *)(a1 - 56);
  return v2 + 24;
}

