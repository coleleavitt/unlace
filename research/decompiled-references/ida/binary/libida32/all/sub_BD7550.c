__int64 __fastcall sub_BD7550(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 32LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(result + 16) != 26 )
    return sub_F3F310(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 32LL)
                       & 0xFFFFFFFFFFFFFFF0LL),
             a2,
             a3,
             a4);
  return result;
}

