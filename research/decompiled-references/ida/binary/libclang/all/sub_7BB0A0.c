unsigned __int64 __fastcall sub_7BB0A0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 120);
  if ( !v1 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v1 = *(_QWORD *)(a1 + 120);
  }
  v2 = *(unsigned int *)(a1 + 60);
  if ( v1 > 7 && a1 == *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL) )
    return v2 | ((unsigned __int64)*(unsigned int *)(a1 + 84) << 32);
  else
    return v2 | ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32);
}

