__int64 __fastcall sub_11DEB0(_QWORD *a1, unsigned int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rbp
  char v5[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v6; // [rsp+408h] [rbp-20h]

  v2 = (__int64 *)(a1[1068] + 16LL * a2);
  v6 = __readfsqword(0x28u);
  v3 = *v2;
  qstrftime64();
  if ( (unsigned int)sub_924A0(
                       1u,
                       (__int64)"AUTOHIDE REGISTRY\n"
                                "HIDECANCEL\n"
                                "Are you sure you want to delete this snapshot?\n"
                                "%s - %s\n",
                       v5,
                       (const char *)(v3 + 10)) == 1 )
  {
    qunlink();
    sub_11D360(a1);
  }
  return 1;
}

