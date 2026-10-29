bool __fastcall sub_16C5A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return (unsigned int)sub_16BA0C0(
                         *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7,
                         *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7,
                         *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3,
                         *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL,
                         a5) == 1;
}
