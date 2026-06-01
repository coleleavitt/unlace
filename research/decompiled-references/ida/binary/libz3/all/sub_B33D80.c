__int64 __fastcall sub_B33D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  sub_18183E0(a2, "user-propagations", *(unsigned int *)(a1 + 432));
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    v3 = *(unsigned int *)(v2 - 4);
  else
    v3 = 0;
  return sub_18183E0(a2, "user-watched", v3);
}

