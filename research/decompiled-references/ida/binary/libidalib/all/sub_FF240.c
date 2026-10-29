__int64 __fastcall sub_FF240(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rbx
  __int64 v5; // rsi
  const char *v6; // rax
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161C80(a3, &v7, v8) )
  {
    v4 = (const char *)sub_9DC30(1u, (__int64)"*", (__int64)"Please specify the output file");
    if ( v4 )
    {
      if ( (unsigned __int8)qfileexist() )
      {
        if ( !(unsigned __int8)sub_FF080(
                                 (__int64)&qword_252980,
                                 (__int64)"The output file exists. Please specify an offset within it") )
          return 0;
        fopenM();
        v5 = qword_252980;
      }
      else
      {
        fopenWB();
        v5 = 0;
        qword_252980 = 0;
      }
      if ( (unsigned int)base2file() )
      {
        sub_922D0((__int64)"The selected range has been sucessfully saved to the file", v5);
      }
      else
      {
        __errno_location();
        v6 = (const char *)qstrerror();
        sub_92200((__int64)"AUTOHIDE NONE\n%s: %s", v4, v6);
      }
      qfclose();
    }
  }
  return 0;
}

