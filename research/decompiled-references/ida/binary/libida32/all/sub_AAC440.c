void __fastcall sub_AAC440(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r12
  __int64 v5; // rcx
  __int128 v6; // [rsp-20h] [rbp-68h]

  sub_E3A920(*a1 + 8LL, a1[1], a1[2]);
  if ( a1[1] )
  {
    v1 = (__int64 *)sub_B16870();
    v4 = sub_B168B0(a1[1]);
    while ( (__int64 *)v4 != v1 )
    {
      v5 = *v1++;
      *((_QWORD *)&v6 + 1) = v5;
      *(_QWORD *)&v6 = *a1;
      sub_AABEC0((char *)(*a1 + 8LL), (char *)&byte_22CD811, 0, v5, v2, v3, v6, a1[2]);
    }
  }
}

