void __fastcall sub_AD0180(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r12
  __int64 v5; // rcx
  __int128 v6; // [rsp-20h] [rbp-68h]

  sub_E5E660(*a1 + 8LL, a1[1], a1[2]);
  if ( a1[1] )
  {
    v1 = (__int64 *)sub_B3A5B0();
    v4 = sub_B3A5F0(a1[1]);
    while ( (__int64 *)v4 != v1 )
    {
      v5 = *v1++;
      *((_QWORD *)&v6 + 1) = v5;
      *(_QWORD *)&v6 = *a1;
      sub_ACFC00((char *)(*a1 + 8LL), (char *)&byte_22F0C30, 0, v5, v2, v3, v6, a1[2]);
    }
  }
}
