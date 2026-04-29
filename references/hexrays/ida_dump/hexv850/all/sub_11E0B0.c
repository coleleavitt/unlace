__int64 __fastcall sub_11E0B0(__int64 *a1, __int64 a2, int a3)
{
  bool v3; // zf
  __int64 v4; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_BYTE *)a2 == 4;
  v4 = a1[1];
  v9[1] = __readfsqword(0x28u);
  v6 = *a1;
  if ( v3 )
  {
    if ( (unsigned __int8)sub_11E180(a1, *(_QWORD *)(a2 + 8), (unsigned __int8)a3) )
      return 1;
  }
  else
  {
    v9[0] = 0;
    if ( (unsigned __int8)sub_11B1C0((char *)a2, v9, 1u) )
    {
      v7 = v9[0];
      if ( (_BYTE)a3 )
        v7 = -v9[0];
      *a1 += v7;
      return 1;
    }
  }
  result = 0;
  if ( !v4 && (!a1[1] || *(_BYTE *)a2 == 4) )
  {
    *a1 = v6;
    a1[1] = a2;
    return a3 ^ 1u;
  }
  return result;
}
