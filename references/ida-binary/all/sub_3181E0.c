__int64 __fastcall sub_3181E0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rbx

  v4 = 100 * a1 / a2;
  if ( *a3 + 10 < v4 )
  {
    sub_541EF0(a1, a2, 100 * a1 % a2);
    *a3 = v4;
  }
  return 1;
}
