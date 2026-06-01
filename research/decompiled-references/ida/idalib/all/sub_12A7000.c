__int64 __fastcall sub_12A7000(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+8h] [rbp-20h]

  if ( (unsigned __int8)sub_21B7850(a2, 1624, 1289, 0)
    || (unsigned __int8)sub_21B7850(a2, 1635, 1292, 0)
    || (unsigned __int8)sub_21B7850(a2, 1634, 1292, 0)
    || (unsigned __int8)sub_21B7850(a2, 1637, 1293, 0)
    || (unsigned __int8)sub_21B7850(a2, 1636, 1293, 0)
    || (unsigned __int8)sub_21B7850(a2, 536, 1292, 0)
    || (unsigned __int8)sub_21B7850(a2, 535, 1292, 0)
    || sub_10DCD30((__int64)a2, 0x216u)
    || (result = sub_10DCD30((__int64)a2, 0xE7u)) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 832LL))(a1);
    result = sub_12A5750(a2, "--dependent-lib=", v4, &byte_22F0C30);
    v6 = *(unsigned int *)(a3 + 8);
    if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v7 = result;
      sub_2237220(a3, a3 + 16, v6 + 1, 8);
      v6 = *(unsigned int *)(a3 + 8);
      result = v7;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = result;
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
