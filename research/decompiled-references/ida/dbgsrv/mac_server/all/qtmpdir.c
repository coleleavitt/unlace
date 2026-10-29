/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpdir
// Address: 0x000000010007BD80

//----- (000000010007BD80) ----------------------------------------------------
unsigned __int64 __fastcall qtmpdir(unsigned __int64 a1, __int64 a2)
{
  char *v3; // rsi
  __int128 v5; // [rsp+0h] [rbp-30h] BYREF
  __int64 v6; // [rsp+10h] [rbp-20h]

  v5 = 0;
  v6 = 0;
  if ( (unsigned __int8)qgetenv("TMPDIR", (__int64)&v5) )
  {
    if ( *((_QWORD *)&v5 + 1) )
      v3 = (char *)v5;
    else
      v3 = (char *)_s1;
    qustrncpy(a1, v3, a2);
  }
  else
  {
    qustrncpy(a1, "/tmp", a2);
  }
  if ( (_QWORD)v5 )
  {
    *((_QWORD *)&v5 + 1) = 0;
    qfree((void *)v5);
  }
  return a1;
}
