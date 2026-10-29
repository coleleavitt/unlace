bool __fastcall sub_19A0140(_DWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = (unsigned int)(*a1 + 1);
  return (unsigned int)v4 < (unsigned int)sub_B76070(*a2, (__int64)a2, a3, a4)
      && sub_F611E0(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 120) + 8 * v4) + 48LL) & 0xFFFFFFFFFFFFFFF0LL),
           (__int64)a2,
           v5,
           v6,
           v7,
           v8);
}
