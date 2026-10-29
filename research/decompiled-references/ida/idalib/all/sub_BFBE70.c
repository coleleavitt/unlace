__int64 __fastcall sub_BFBE70(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_BFBC70(*(_QWORD *)(a1 + 32));
  if ( v1 && (*(_BYTE *)(v1 + 28) & 0x7Fu) - 34 <= 5 )
    return sub_B75A50(v1, 0);
  else
    return 0;
}
