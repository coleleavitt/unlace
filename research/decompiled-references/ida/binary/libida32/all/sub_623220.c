__int64 __fastcall sub_623220(__int64 a1)
{
  unsigned int v2; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  v2 = -1;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  netnode_check(&v2, "$ loader name", 0, 1);
  if ( netnode_qsupstr(v2, a1, 1, 83) <= 0 )
    sub_375320((__int64)"Can't determine the loader name");
  return a1;
}

