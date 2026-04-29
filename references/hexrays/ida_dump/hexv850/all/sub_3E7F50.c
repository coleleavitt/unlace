__int64 __fastcall sub_3E7F50(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  char v4; // dl
  __int64 result; // rax
  unsigned int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v7[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v7[3] = __readfsqword(0x28u);
  v7[0] = off_4BD358;
  v3 = *(_QWORD *)(v2 + 920);
  v7[1] = v3 + 64;
  v4 = sub_1CA740((__int64)v7, &v6, v2, a2);
  result = v6;
  if ( v4 )
  {
    sub_3E7D60(v3, *(_QWORD **)(a1 + 8));
    return 0;
  }
  return result;
}
