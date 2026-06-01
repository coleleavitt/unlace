__int64 __fastcall sub_CFF720(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a2);
    v4 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
    sub_E231A0(v4, v3, 16);
  }
  return 1;
}
