void __fastcall sub_226E270(__int64 a1, __int64 a2, char *a3)
{
  char *v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 336);
  if ( v4 <= (unsigned __int64)a3 )
    v3 = (char *)(v4 - 1);
  if ( v5 )
  {
    v6 = std::_V2::generic_category((std::_V2 *)a1);
    *(_DWORD *)v5 = 22;
    *(_QWORD *)(v5 + 8) = v6;
  }
  if ( !*(_BYTE *)(a1 + 75) )
    sub_223BFB0(*(__int64 **)a1, v3, 0, a2, 0, 0, nullptr, 0, *(_BYTE *)(a1 + 76));
  *(_BYTE *)(a1 + 75) = 1;
}
