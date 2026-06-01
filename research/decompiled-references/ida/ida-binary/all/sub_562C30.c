__int64 __fastcall sub_562C30(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 v3; // rax
  unsigned __int16 *v4; // rcx
  int v5; // esi
  __int64 v6; // rcx

  if ( *(_DWORD *)a1 <= 0xEu || a2 == 0xFFFF || a2 == 0xFFFE || !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 3LL * a2 + 2) )
  {
    *a3 = 0;
    return 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 272);
    v4 = (unsigned __int16 *)(*(_QWORD *)(a1 + 264) + 4LL * a2);
    v5 = v4[1];
    v6 = *v4;
    *a3 = v5;
    return v3 + 2 * v6;
  }
}
