unsigned __int64 __fastcall sub_233900(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbp
  __int64 v3; // rcx
  char *v4; // rax
  __int64 head; // rax
  int v7; // eax
  __int128 v8; // [rsp+0h] [rbp-188h] BYREF
  __int64 v9; // [rsp+10h] [rbp-178h]
  __int64 v10; // [rsp+18h] [rbp-170h]
  __int64 v11; // [rsp+20h] [rbp-168h]
  char v12; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v13[4]; // [rsp+168h] [rbp-20h] BYREF

  v13[0] = __readfsqword(0x28u);
  v1 = get_flags_ex(a1, 4) & 0x600;
  if ( !v1 )
    return create_insn(a1, 0);
  v2 = *(_QWORD *)(*(_QWORD *)(dbg + 56) + 32LL * dword_8BA594);
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
  head = prev_head(a1, 0);
  if ( (~((unsigned __int16)get_flags_ex(head, 4) >> 8) & 6) != 0 )
  {
LABEL_10:
    v7 = sub_1698A0(
           1,
           (int)"HIDECANCEL\n"
                "AUTOHIDE REGISTRY\n"
                "IDA has detected that %s points to\n"
                "an address which is not defined as code.\n"
                "Would you like to directly create an instruction at %s ?",
           v2,
           v2);
    goto LABEL_11;
  }
  if ( sub_233780(a1) != -1 )
    goto LABEL_4;
  v7 = sub_1698A0(
         1,
         (int)"HIDECANCEL\n"
              "AUTOHIDE REGISTRY\n"
              "IDA has detected that %s points inside a previously defined instruction.\n"
              "This can perhaps indicate that:\n"
              "- an error occurred during the analysis.\n"
              "- the code modified itself during the execution.\n"
              "Would you like to directly create an instruction at %s ?",
         v2,
         v2);
LABEL_11:
  LOBYTE(v3) = v7 > 0;
LABEL_5:
  v9 = -1;
  v4 = &v12;
  v10 = 0;
  v11 = 0;
  v8 = -1;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v13 != (_QWORD *)v4 );
  if ( (_BYTE)v3 )
  {
    if ( (int)decode_insn(&v8, a1, v13, v3, 0, 0, 0.0) > 0 )
    {
      del_items(a1, 3, WORD1(v10), 0);
      create_insn(a1, 0);
    }
  }
  return v13[0] - __readfsqword(0x28u);
}
