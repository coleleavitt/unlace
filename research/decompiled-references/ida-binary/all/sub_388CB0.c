__int64 __fastcall sub_388CB0(double a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  char *v3; // rcx
  __int64 v4; // rbx

  result = sub_49EDE0(17);
  if ( result )
  {
    result = (unsigned int)dword_8BA580;
    if ( dword_8BA580 != -1 )
    {
      result = (__int64)&qword_8CC430;
      v4 = qword_8CC430 + ((__int64)dword_8BA580 << 8);
      if ( *(_BYTE *)(v4 + 112) )
      {
        result = sub_388840((int *)v4, (__int64 *)(v4 + 88), v2, v3, a1);
        *(_BYTE *)(v4 + 112) = 0;
      }
    }
  }
  return result;
}
