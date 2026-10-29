__int64 __fastcall sub_F5EA60(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v1 + 16) != 33 )
    BUG();
  return sub_E900C0(*(_QWORD *)(v1 + 40));
}
