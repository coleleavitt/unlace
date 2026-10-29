bool __fastcall sub_16B66C0(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
}
