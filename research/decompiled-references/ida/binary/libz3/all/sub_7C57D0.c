__int64 __fastcall sub_7C57D0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 80);
  v3 = 8LL * a2;
  if ( v2 )
    return *(_QWORD *)(v2 + 896) + v3;
  else
    return *(_QWORD *)(*(_QWORD *)(a1 - 56) + 3280LL) + v3;
}

