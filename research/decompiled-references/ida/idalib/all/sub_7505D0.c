__int64 __fastcall sub_7505D0(_QWORD *a1)
{
  unsigned int v1; // ebp
  void (__fastcall *v3)(__int64); // rcx
  __int64 v4; // rax
  __int64 v5; // rdi

  v1 = -2;
  if ( a1 && a1[8] && a1[9] )
  {
    v1 = sub_74E4F0((__int64)a1);
    if ( v1 )
    {
      return (unsigned int)-2;
    }
    else
    {
      v4 = a1[7];
      v5 = a1[10];
      if ( *(_QWORD *)(v4 + 72) )
      {
        v3(v5);
        v3 = (void (__fastcall *)(__int64))a1[9];
        v4 = a1[7];
        v5 = a1[10];
      }
      ((void (__fastcall *)(__int64, __int64))v3)(v5, v4);
      a1[7] = 0;
    }
  }
  return v1;
}
