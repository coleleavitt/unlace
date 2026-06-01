__int64 __fastcall sub_86B310(__int64 a1, unsigned int a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * a2)) + 24) + 8LL);
  if ( v2[8] )
    JUMPOUT(0x129008);
  return *(unsigned int *)v2;
}

