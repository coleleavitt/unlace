__int64 __fastcall sub_C4700(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbp
  bool v3; // cl
  unsigned __int64 *v4; // rax
  int v6; // eax
  char v7; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+168h] [rbp-20h] BYREF

  v8 = __readfsqword(0x28u);
  v1 = get_flags_ex() & 0x600;
  if ( !v1 )
    return create_insn();
  v2 = *(_QWORD *)(*(_QWORD *)(dbg + 56LL) + 32LL * dword_245174);
  if ( v1 != 512 )
  {
    if ( v1 == 1536 )
    {
LABEL_4:
      v3 = 0;
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  prev_head();
  if ( (~(unsigned __int16)get_flags_ex() & 0x600) != 0 )
  {
LABEL_10:
    v6 = sub_92580(
           1u,
           (__int64)"HIDECANCEL\n"
                    "AUTOHIDE REGISTRY\n"
                    "IDA has detected that %s points to\n"
                    "an address which is not defined as code.\n"
                    "Would you like to directly create an instruction at %s ?",
           v2,
           v2);
    goto LABEL_11;
  }
  if ( sub_C4580(a1, 4) != -1 )
    goto LABEL_4;
  v6 = sub_92580(
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
LABEL_11:
  v3 = v6 > 0;
LABEL_5:
  v4 = (unsigned __int64 *)&v7;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v8 != v4 );
  if ( v3 && (int)decode_insn() > 0 )
  {
    del_items();
    create_insn();
  }
  return v8 - __readfsqword(0x28u);
}

