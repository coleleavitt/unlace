__int64 __fastcall sub_F0B240(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  unsigned int v4; // eax
  const void *v5; // rax
  size_t v6; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE **)(v2 + 32);
  if ( (unsigned __int64)v3 >= *(_QWORD *)(v2 + 24) )
  {
    v2 = sub_2257CD0(*(_QWORD *)(a1 + 1096), 32);
  }
  else
  {
    *(_QWORD *)(v2 + 32) = v3 + 1;
    *v3 = 32;
  }
  v4 = sub_F348E0(*(_BYTE *)(a2 + 73) >> 5);
  v5 = (const void *)sub_F34900(v4);
  sub_9717A0(v2, v5, v6);
  sub_F07020(a1, a2);
  result = *(_QWORD *)(a2 + 8) & 7LL;
  if ( result == 4 )
    result = sub_971800(*(_QWORD *)(a1 + 1096), " __module_private__");
  if ( (*(_BYTE *)(a2 + 74) & 1) != 0 )
    return sub_971800(*(_QWORD *)(a1 + 1096), " definition");
  return result;
}

