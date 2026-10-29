__int64 __fastcall sub_2198A90(__int64 a1, unsigned int a2)
{
  bool (__fastcall *v2)(__int64); // rax
  int v3; // r12d
  __int64 v4; // rbp
  unsigned int v6[18]; // [rsp+0h] [rbp-48h] BYREF

  sub_2198930(v6, a1);
  if ( !*(_QWORD *)(a1 + 272) || v6[3] <= a2 )
    sub_2221C70("Requested symbol index is out of range.", 1);
  v2 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v2 != sub_2195C40 )
  {
    if ( v2(a1) )
      goto LABEL_5;
LABEL_8:
    v3 = 12;
    goto LABEL_6;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) > 1 )
    goto LABEL_8;
LABEL_5:
  v3 = 16;
LABEL_6:
  v4 = v6[2];
  return a2 * v3 + v4 + sub_215DEC0(a1);
}
