__int64 __fastcall sub_74D9D0(_QWORD *a1)
{
  unsigned int v1; // ebp
  void (__fastcall *v3)(__int64); // r8
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // r12d

  v1 = -2;
  if ( a1 && a1[8] && a1[9] )
  {
    v1 = sub_74C540((__int64)a1);
    if ( v1 )
    {
      return (unsigned int)-2;
    }
    else
    {
      v4 = a1[7];
      v5 = a1[10];
      v6 = *(_DWORD *)(v4 + 8);
      if ( *(_QWORD *)(v4 + 16) )
      {
        v3(v5);
        v4 = a1[7];
        v3 = (void (__fastcall *)(__int64))a1[9];
        v5 = a1[10];
      }
      if ( *(_QWORD *)(v4 + 120) )
      {
        v3(v5);
        v4 = a1[7];
        v3 = (void (__fastcall *)(__int64))a1[9];
        v5 = a1[10];
      }
      if ( *(_QWORD *)(v4 + 112) )
      {
        v3(v5);
        v4 = a1[7];
        v3 = (void (__fastcall *)(__int64))a1[9];
        v5 = a1[10];
      }
      if ( *(_QWORD *)(v4 + 96) )
      {
        v3(v5);
        v3 = (void (__fastcall *)(__int64))a1[9];
        v4 = a1[7];
        v5 = a1[10];
      }
      ((void (__fastcall *)(__int64, __int64))v3)(v5, v4);
      a1[7] = 0;
      if ( v6 == 113 )
        return (unsigned int)-3;
    }
  }
  return v1;
}
