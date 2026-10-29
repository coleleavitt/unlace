__int64 __fastcall sub_2A9010(__int64 a1, signed int a2, int a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 384);
  if ( !(_DWORD)result && a2 >= 0 )
    return sub_2A8140(
             (QT::QAbstractScrollArea **)a1,
             *((__int64 (__fastcall **)(QT::QAbstractScrollArea **))&unk_8BA600 + 5 * a3 + 1),
             a2);
  return result;
}
