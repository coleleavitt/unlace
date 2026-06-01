__int64 __fastcall sub_9C5920(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 result; // rax

  v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  result = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
    return (**(__int64 (__fastcall ***)(_QWORD, __int64))a1)(*(_QWORD *)(*(_QWORD *)a1 + 8LL), a3);
  return result;
}

