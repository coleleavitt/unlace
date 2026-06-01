__int64 __fastcall sub_1EEE630(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_DWORD *)a3 = sub_1EE7490(*a1);
  *(_QWORD *)(a3 + 4) = sub_1EEDED0(
                          *(_QWORD *)(*a1 + 8),
                          *(_QWORD *)(*a1 + 16),
                          (_QWORD *)(*a1 + 32),
                          (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a3 + 16) = sub_1F6A0A0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16));
  result = sub_1F6A0A0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16));
  *(_QWORD *)(a3 + 24) = result;
  return result;
}
