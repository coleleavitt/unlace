unsigned __int64 __fastcall sub_230030(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  const char *v3; // rdx
  const char *v5; // [rsp+10h] [rbp-1038h] BYREF
  __int64 v6; // [rsp+18h] [rbp-1030h] BYREF
  int v7; // [rsp+20h] [rbp-1028h] BYREF
  _BYTE v8[4100]; // [rsp+24h] [rbp-1024h] BYREF
  unsigned __int64 v9; // [rsp+1028h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a1 && (unsigned int)sub_20CEA0(a1, 44, 0, " ", 0, 0, 0) )
  {
    v1 = *(_QWORD *)(a1 + 8);
    v7 = 1600610916;
    qstrncpy(v8, v1, 4092);
    v2 = 1;
    v3 = "REMOTE";
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
    {
      v2 = 0;
      v3 = nullptr;
    }
    v5 = v3;
    read_config(&v7, 1, 0, 0, sub_22FE70, &v5, v2);
    v6 = 1;
    if ( (unsigned int)sub_20CEA0(a1, 44, 0, " ", 0, 0, 0) )
      sub_20CEA0(a1, 44, &v6, &unk_5C2F25, 1, 1, &unk_5C2F25);
  }
  return v9 - __readfsqword(0x28u);
}
