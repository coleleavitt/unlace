__int64 __fastcall sub_1E5F5F0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 5 )
  {
    sub_1E5F3D0(a1, a2);
    return *(_QWORD *)(a2 + 8);
  }
  return result;
}
