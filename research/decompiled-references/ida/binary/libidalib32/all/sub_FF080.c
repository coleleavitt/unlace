__int64 __fastcall sub_FF080(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rbx
  __int64 v5; // rsi
  const char *v6; // rax
  int v7; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161360(a3, &v7, &v8) )
  {
    v4 = (const char *)sub_9DAF0(1u, (__int64)"*", (__int64)"Please specify the output file");
    if ( v4 )
    {
      if ( (unsigned __int8)qfileexist() )
      {
        if ( !(unsigned __int8)sub_FEEC0(
                                 (__int64)&dword_2517E0,
                                 (__int64)"The output file exists. Please specify an offset within it") )
          return 0;
        fopenM();
        v5 = dword_2517E0;
      }
      else
      {
        fopenWB();
        v5 = 0;
        dword_2517E0 = 0;
      }
      if ( (unsigned int)base2file() )
      {
        sub_921F0((__int64)"The selected range has been sucessfully saved to the file", v5);
      }
      else
      {
        __errno_location();
        v6 = (const char *)qstrerror();
        sub_92120((__int64)"AUTOHIDE NONE\n%s: %s", v4, v6);
      }
      qfclose();
    }
  }
  return 0;
}

