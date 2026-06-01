__int64 __fastcall sub_179FCB0(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_F57E80(a1);
  if ( v1 && (*(_QWORD *)(v1 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return (((unsigned __int8)(*(_BYTE *)(v1 + 17) & 0x1F) >> 2) ^ 1) & 1;
  else
    return 0;
}
