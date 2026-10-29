__int64 __fastcall sub_F1440(_QWORD *a1, unsigned __int64 a2, double a3, double a4)
{
  _QWORD *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx

  v4 = (_QWORD *)a1[24];
  if ( a2 >= v4[1]
    || !(*v4 + 80 * a2)
    || (unsigned int)sub_92580(
                       1u,
                       (__int64)"HIDECANCEL\nAUTOHIDE REGISTRY\nDo you really want to delete region %a..%a?",
                       a3,
                       a4) != 1 )
  {
    return -1;
  }
  sub_F13B0((_QWORD *)a1[24], a2, (__int64)a1);
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  v7 = v6;
  if ( !v6 )
    return -1;
  result = v6 - 1;
  if ( a2 < v7 )
    return a2;
  return result;
}

