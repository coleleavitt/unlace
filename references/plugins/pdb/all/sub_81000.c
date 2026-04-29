__int64 __fastcall sub_81000(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v6; // rax

  v4 = *(unsigned __int8 *)(a1 + 56);
  if ( !(_BYTE)v4 )
    return v4;
  *(_QWORD *)(a1 + 40) = a2;
  v6 = qlseek(*(_QWORD *)(a1 + 24), a2, 0, a4);
  LOBYTE(v4) = a2 == v6;
  if ( a2 == v6 )
    return v4;
  sub_37FD0(*(__int64 **)(a1 + 8), (__int64)"COFF failed to seek at 0x%llX", a2);
  return v4;
}
