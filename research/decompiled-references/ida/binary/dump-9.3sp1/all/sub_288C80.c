__int64 __fastcall sub_288C80(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rax

  v4 = a2[3];
  result = 0;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 64) + 24LL) + 16LL) && *(_QWORD *)(v4 + 72) )
  {
    sub_2800E0(*(_QWORD *)(a1 + 72), a2, a2[3], a4);
    v6 = *(_QWORD *)(v4 + 64);
    if ( v6 )
    {
      sub_255050(*(_QWORD *)(v4 + 64));
      j__qfree(v6);
    }
    v7 = *(_QWORD *)(v4 + 72);
    *(_QWORD *)(v4 + 72) = 0;
    *(_QWORD *)(v4 + 64) = v7;
    return 1;
  }
  return result;
}
