__int64 __fastcall sub_3CDC20(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  int v4; // edx

  if ( (int)a2 < 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(v3 + 64);
  if ( v4 <= (int)a2 )
    return 0;
  if ( (unsigned int)a2 >= v4 )
    sub_3CA100(a3, a1, a2);
  return *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * (int)a2);
}
