__int64 __fastcall sub_F3AD20(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v1 + 16) != 33 )
    BUG();
  return sub_E6C380(*(_QWORD *)(v1 + 40));
}

