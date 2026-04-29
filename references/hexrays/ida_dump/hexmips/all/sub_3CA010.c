__int64 __fastcall sub_3CA010(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  __int64 v4; // rax

  v2 = *(_QWORD *)(a2 + 64);
  if ( !v2 || (unsigned int)(*(_DWORD *)(v2 + 60) - 1) > 1 )
    return 0;
  v3 = *(_QWORD **)(v2 + 64);
  *(_QWORD *)(**(_QWORD **)(a2 + 48) + 1344LL) = v3;
  v4 = sub_62EE0(v3);
  sub_10C5E0(v4);
  return 1;
}
