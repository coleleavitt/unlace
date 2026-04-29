unsigned __int64 __fastcall sub_194D0(__int64 a1, __int64 a2, const char *a3, unsigned __int16 a4, int a5)
{
  int v8; // r8d
  char v10[136]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v11; // [rsp+88h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a2 != -1 )
    remember_problem(7, a2, 0);
  v10[0] = 0;
  if ( a5 <= 2 )
  {
    if ( a5 == 1 )
      v8 = *(unsigned __int16 *)(a1 + 33271);
    else
      v8 = *(unsigned __int16 *)(a1 + 33147);
    qsnprintf(v10, 126, " for %s#%u", off_2CAC0[(unsigned __int8)a5], v8);
  }
  sub_19260(a1, (__int64)"Illegal %s reference (%u)%s\n", a3, a4, v10);
  return v11 - __readfsqword(0x28u);
}
