__int64 __fastcall sub_17A590(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_182CC0(*(_QWORD *)(a1 + 112) + 160LL, -2);
  v3 = -1;
  if ( a2 >= 0 && (unsigned __int64)a2 < *(_QWORD *)(v2 + 16) )
    return *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * a2);
  return v3;
}

