unsigned __int64 __fastcall sub_BBC170(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 )
    v3 = sub_EEC140(v2);
  return *(unsigned int *)(*(_QWORD *)(a1 + 56) + 8LL) | (unsigned __int64)(v3 << 32);
}
