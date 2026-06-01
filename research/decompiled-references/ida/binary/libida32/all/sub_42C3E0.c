unsigned __int64 __fastcall sub_42C3E0(__int64 a1, unsigned int a2)
{
  int v2; // r13d

  v2 = *(_DWORD *)(a1 + 572);
  if ( v2 != (unsigned int)getinf(36) )
    *(_BYTE *)(a1 + 568) = 0;
  return sub_42C220(
           a1 + 360,
           a2,
           *(_QWORD *)(a1 + 144)
         + *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4LL * a2)));
}

