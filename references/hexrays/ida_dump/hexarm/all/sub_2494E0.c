__int64 __fastcall sub_2494E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  sub_244580(a3, *(_QWORD *)(a1 + 112), 0);
  v4 = j__qalloc_or_throw(64);
  *(_QWORD *)v4 = -1;
  v5 = v4;
  *(_DWORD *)(v4 + 8) = 2;
  *(_QWORD *)(v4 + 12) = -1;
  *(_QWORD *)(v4 + 24) = a2;
  *(_QWORD *)(v4 + 32) = a3;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  sub_244580(v4, *(_QWORD *)(a1 + 112), 0);
  if ( !(unsigned __int8)sub_245780(v5, a1) )
    sub_248A20(v5, a1, 0);
  return v5;
}
