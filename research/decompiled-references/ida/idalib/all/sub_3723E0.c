__int64 __fastcall sub_3723E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  *(_QWORD *)(a2 + 8) = -1;
  if ( (~((unsigned __int16)get_flags_ex(*(_QWORD *)(a1 + 8), 4) >> 8) & 6) == 0 )
    sub_372280(a1, a2, v2, v3, v4, v5);
  return 0;
}
