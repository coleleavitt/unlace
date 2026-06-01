__int64 __fastcall sub_8C5930(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  v1 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v2 = sub_7A3750(v1);
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 56);
  if ( (v4 & 4) != 0 )
    return *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 40);
  return v3;
}

