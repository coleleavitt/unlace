__int64 __fastcall sub_AEFE0(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v4; // r15d
  int v5; // eax
  __int64 v6; // r15
  __int64 v8; // [rsp+20h] [rbp-58h]
  unsigned __int64 v9; // [rsp+38h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  LOBYTE(v8) = 0;
  qlread();
  *(_DWORD *)(a3 + 12) += sub_A8550(a2);
  if ( *a1 <= 7u )
  {
    v5 = sub_A8550(a2);
  }
  else
  {
    v4 = sub_A8550(a2);
    sub_A8550(a2);
    v5 = v4;
  }
  *(_DWORD *)(a3 + 8) += v5;
  v6 = (unsigned int)sub_A8550(a2);
  *(_QWORD *)(a3 + 16) += v6 | (sub_A8550(a2) << 32);
  return 1;
}

