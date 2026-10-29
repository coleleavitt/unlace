__int64 __fastcall calc_c_cpp_name(char **a1, const char *a2, _QWORD *a3, char a4)
{
  char v4; // r12
  __int64 *v5; // r13
  int v6; // ebp

  v4 = ~a4;
  v5 = *(__int64 **)(qword_2CCB598 + 1672);
  v6 = sub_4CABC0(a1, a2, a3);
  if ( v6 == 2 && (v4 & 1) == 0 )
    goto LABEL_6;
  if ( (unsigned __int64)a1[1] > 1 )
  {
    sub_5A0EB0(*a1, v4 & 1);
    if ( v6 != 2 )
      return (__int64)&a1[1][(a1[1] == nullptr) - 1];
    goto LABEL_6;
  }
  if ( v6 == 2 )
LABEL_6:
    sub_4CFA10(*v5, (__int64)a1);
  return (__int64)&a1[1][(a1[1] == nullptr) - 1];
}
