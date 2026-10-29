__int64 __fastcall sub_63A0B0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    return (v1 << 32) | (unsigned int)v1;
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
}

