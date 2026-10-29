__int64 __fastcall sub_3FB9D0(_QWORD *a1)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rbp
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 result; // rax

  v1 = 0;
  if ( !sub_3BD540((__int64)a1, 0) )
    v1 = sub_3BD3C0((__int64)a1, 0);
  v2 = sub_3BD420((__int64)a1, -1) + 1;
  if ( sub_631AD0(*a1, 19) != v1 || (result = sub_631AD0(*a1, 20), v2 != result) )
  {
    sub_632610(*a1, 19, v1);
    sub_632610(*a1, 20, v2);
    callui(1, 20, (int)callui, v3, v4, v5);
  }
  return result;
}
