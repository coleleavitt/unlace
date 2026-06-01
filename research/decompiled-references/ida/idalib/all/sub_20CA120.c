__int64 __fastcall sub_20CA120(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // rdx

  a1[1] = 0;
  *a1 = 2LL * a2;
  result = a3[2];
  a1[2] = result;
  if ( result != -4096 && result != 0 && result != -8192 )
  {
    v4 = *a3 & 0xFFFFFFFFFFFFFFF8LL;
    a1[1] = *(_QWORD *)v4;
    *(_QWORD *)v4 = a1;
    result = v4 | *a1 & 7;
    v5 = (unsigned __int64 *)a1[1];
    *a1 = result;
    if ( v5 )
    {
      result = *v5 & 7;
      *v5 = result | (unsigned __int64)(a1 + 1);
    }
  }
  return result;
}
