__int64 __fastcall sub_5A278A(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE v7[112]; // [rsp+10h] [rbp-70h] BYREF

  sub_5A4ECE(v7, a1 + 40);
  if ( (unsigned __int8)sub_5A4F64(v7) != 1 )
  {
    v2 = 0;
  }
  else
  {
    v3 = sub_5A4F98(v7);
    sub_5ADF07(v3, 0, 56);
    *(_DWORD *)a2 = 7;
    *(_QWORD *)(a2 + 4) = sub_5A4152(v7);
    v4 = sub_5A4F98(v7);
    sub_5A30CE(a1, v4);
    v5 = sub_5A4F98(v7);
    sub_5A36B2(a1, v5);
    v2 = 1;
  }
  sub_5A4F3C(v7);
  return v2;
}
