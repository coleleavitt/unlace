__int64 __fastcall sub_C946E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = sub_BFB9F0(*(_QWORD *)(a1 + 32));
  v2 = 0;
  if ( (*(_WORD *)v1 & 0x1FF) == 0x2E )
    return *(_QWORD *)(v1 + 24);
  return v2;
}
