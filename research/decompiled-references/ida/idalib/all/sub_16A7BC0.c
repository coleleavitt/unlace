bool __fastcall sub_16A7BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool result; // al
  __int64 v14; // r13

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  result = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
        || (sub_F60F80(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a3, a3, v7, a5, a6)
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL) == 47)
        && (sub_F60F80(*v6, a3, v9, v10, v11, v12)
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47)
        && (v14 = sub_AAE980(a3, a2), sub_AAE980(a3, a1) == v14)
        || *(_QWORD *)(*(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  return result;
}
