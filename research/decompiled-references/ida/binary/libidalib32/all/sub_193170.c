__int64 __fastcall sub_193170(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = **(_QWORD **)a2;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1) - *(_QWORD *)(a2 + 8);
  if ( v2 >= v3 )
    return v3 - 1;
  return v2;
}

