__int64 __fastcall sub_588980(__int64 *a1, char **a2, const char *a3, _QWORD *a4, char a5)
{
  char v5; // r12
  int v6; // ebp

  v5 = ~a5;
  v6 = sub_4B3EA0(a2, a3, a4);
  if ( v6 == 2 && (v5 & 1) == 0 )
    goto LABEL_6;
  if ( (unsigned __int64)a2[1] > 1 )
  {
    sub_586DF0(*a2, v5 & 1);
    if ( v6 != 2 )
      return (__int64)&a2[1][(a2[1] == nullptr) - 1];
    goto LABEL_6;
  }
  if ( v6 == 2 )
LABEL_6:
    sub_4B8BE0(*a1, (__int64)a2);
  return (__int64)&a2[1][(a2[1] == nullptr) - 1];
}

