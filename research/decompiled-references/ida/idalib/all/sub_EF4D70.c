__int64 __fastcall sub_EF4D70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( (*(_WORD *)a3 & 0x1FF) == 0xF3 )
    v3 = *(_QWORD *)(a3 + 40);
  else
    v3 = *(_QWORD *)(a3 + 64);
  if ( (*(_WORD *)v3 & 0x1FF) == 0xED )
    v3 = *(_QWORD *)(v3 + 8);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))a1)(*(_QWORD *)(a1 + 8), a2, a3, v3);
  return 0;
}
