void __fastcall sub_557080(char *a1, void *a2)
{
  __int64 v2; // rcx
  __int64 *v3; // r13
  __int64 v4; // rbx

  if ( (_BYTE *)a2 - a1 <= 1792 )
  {
    sub_549BE0((__int64)a1, a2);
  }
  else
  {
    v2 = ((_BYTE *)a2 - a1) >> 8;
    v3 = (__int64 *)&a1[128 * v2];
    v4 = v2 << 7 >> 7;
    sub_557080(a1, v3);
    sub_557080(v3, a2);
    sub_556F30(a1, v3, (__int64)a2, v4, ((_BYTE *)a2 - (_BYTE *)v3) >> 7);
  }
}

