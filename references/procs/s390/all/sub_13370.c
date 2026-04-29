__int64 __fastcall sub_13370(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned int dword; // eax
  __int64 v5; // rax

  *a2 = -1;
  v2 = *a1;
  if ( a1[1] - *a1 == 14 )
  {
    v3 = 0;
    while ( (byte_23D90[v3] & (unsigned __int8)get_byte(v2 + v3)) == byte_23DA0[v3] )
    {
      if ( ++v3 == 14 )
      {
        dword = get_dword(v2 + 2);
        v5 = sub_104C0(dword, 32);
        *a2 = get_qword(v2 + 2 * v5);
        return 1;
      }
    }
  }
  return 0;
}
