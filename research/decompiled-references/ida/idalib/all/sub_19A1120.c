void __fastcall sub_19A1120(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rcx
  char *v3; // r13
  __int64 v4; // rbx

  if ( (char *)a2 - (char *)a1 <= 112 )
  {
    sub_19A03C0(a1, a2);
  }
  else
  {
    v2 = ((char *)a2 - (char *)a1) >> 4;
    v3 = (char *)&a1[v2];
    v4 = (8 * v2) >> 3;
    sub_19A1120(a1, v3);
    sub_19A1120(v3, a2);
    sub_19A0CA0(a1, v3, (__int64)a2, v4, ((char *)a2 - v3) >> 3);
  }
}
