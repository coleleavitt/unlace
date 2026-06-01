__int64 __fastcall sub_147B420(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 17) = 1;
  sub_1564E40(*(_QWORD *)a1, 0);
  result = sub_16A2FF0(
             *(_QWORD *)(*(_QWORD *)a1 + 96LL),
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 608LL),
             *(_QWORD *)(a1 + 8));
  if ( !(_BYTE)result )
    *(_BYTE *)(a1 + 16) = 1;
  return result;
}
