__int64 __fastcall sub_D0800(unsigned int a1)
{
  int v1; // eax
  __int64 v2; // rbp
  bool v3; // cl
  unsigned __int64 *v4; // rax
  int v6; // eax
  char v7; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v8; // [rsp+D8h] [rbp-20h] BYREF

  v8 = __readfsqword(0x28u);
  if ( a1 == -1 )
    return v8 - __readfsqword(0x28u);
  if ( !getseg() )
  {
    sub_D0730(1);
    if ( !(unsigned __int8)is_mapped() )
      return v8 - __readfsqword(0x28u);
  }
  v1 = get_flags_ex() & 0x600;
  if ( v1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(dbg + 56LL) + 32LL * dword_24411C);
    if ( v1 == 512 )
    {
      prev_head();
      if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
      {
        if ( (unsigned int)sub_C3380(a1) != -1 )
          goto LABEL_6;
        v6 = sub_924A0(
               1u,
               (__int64)"HIDECANCEL\n"
                        "AUTOHIDE REGISTRY\n"
                        "IDA has detected that %s points inside a previously defined instruction.\n"
                        "This can perhaps indicate that:\n"
                        "- an error occurred during the analysis.\n"
                        "- the code modified itself during the execution.\n"
                        "Would you like to directly create an instruction at %s ?",
               v2,
               v2);
LABEL_15:
        v3 = v6 > 0;
        goto LABEL_7;
      }
    }
    else if ( v1 == 1536 )
    {
LABEL_6:
      v3 = 0;
LABEL_7:
      v4 = (unsigned __int64 *)&v7;
      do
      {
        *(_WORD *)v4 = 0;
        v4 += 3;
        *((_WORD *)v4 - 11) = 0;
        *((_WORD *)v4 - 10) = 0;
        *((_DWORD *)v4 - 1) = 0;
        *((_WORD *)v4 - 9) = 0;
        *(v4 - 2) = 0;
        *((_DWORD *)v4 - 2) = 0;
      }
      while ( v4 != &v8 );
      if ( v3 && (int)decode_insn() > 0 )
      {
        del_items();
        create_insn();
      }
      return v8 - __readfsqword(0x28u);
    }
    v6 = sub_924A0(
           1u,
           (__int64)"HIDECANCEL\n"
                    "AUTOHIDE REGISTRY\n"
                    "IDA has detected that %s points to\n"
                    "an address which is not defined as code.\n"
                    "Would you like to directly create an instruction at %s ?",
           v2,
           v2);
    goto LABEL_15;
  }
  return create_insn();
}

