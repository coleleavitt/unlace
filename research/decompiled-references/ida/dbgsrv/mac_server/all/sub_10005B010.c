/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B010
// Address: 0x000000010005B010

//----- (000000010005B010) ----------------------------------------------------
__int64 __fastcall sub_10005B010(__int64 *a1, unsigned __int64 a2)
{
  __int128 v3; // [rsp+0h] [rbp-60h] BYREF
  __int128 v4; // [rsp+10h] [rbp-50h]
  __int128 v5; // [rsp+20h] [rbp-40h]
  __int128 v6; // [rsp+30h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]

  if ( a1[1] != a2 )
  {
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v3 = 0;
    v7 = 0;
    v8 = -1;
    sub_10005FC70(a1, a2, (unsigned __int64)&v3);
    if ( (_QWORD)v6 )
    {
      *((_QWORD *)&v6 + 1) = 0;
      qfree((void *)v6);
      *(_QWORD *)&v6 = 0;
      v7 = 0;
    }
    if ( *((_QWORD *)&v4 + 1) )
    {
      *(_QWORD *)&v5 = 0;
      qfree(*((void **)&v4 + 1));
      *((_QWORD *)&v4 + 1) = 0;
      *((_QWORD *)&v5 + 1) = 0;
    }
    if ( (_QWORD)v3 )
    {
      *((_QWORD *)&v3 + 1) = 0;
      qfree((void *)v3);
    }
  }
  return __stack_chk_guard;
}
