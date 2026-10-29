unsigned __int64 __fastcall sub_A47D00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = a2;
  if ( a2 )
    v4 = a2 - 32;
  sub_F3F820(v4, a3, *(_QWORD *)(a1 + 16));
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

