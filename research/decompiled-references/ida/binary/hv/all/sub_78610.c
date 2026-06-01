__int64 __fastcall sub_78610(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+8h] [rbp-40h]
  __int64 v15; // [rsp+8h] [rbp-40h]
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = a1[3];
  v16[1] = __readfsqword(0x28u);
  if ( a2 != sub_92670(v6, a2, 0) )
    return -1;
  result = sub_923E0(a1[3], a3, a4);
  v9 = a1[4];
  v10 = a2 + result;
  if ( v9 )
  {
    if ( result <= 0 )
    {
      a1[5] = v10;
      return result;
    }
    v11 = a1[5];
    if ( a2 != v11 && v11 != -1 )
    {
      *(_BYTE *)(v9 + 96) = 1;
      v9 = a1[4];
    }
    if ( !*(_BYTE *)(v9 + 96) )
    {
      v15 = result;
      sub_932D0(v9, a3, result);
      v9 = a1[4];
      result = v15;
    }
    *(_QWORD *)(v9 + 88) += result;
    a1[5] = v10;
  }
  else
  {
    a1[5] = v10;
    if ( result <= 0 )
      return result;
  }
  v12 = a1[7];
  if ( *(_QWORD *)(v12 + 80) )
  {
    v13 = a1[8];
    if ( v13 < v10 )
    {
      v14 = result;
      v16[0] = v10 - v13;
      (*(void (__fastcall **)(__int64, _QWORD *))(v12 + 88))(v12 + 64, v16);
      a1[8] = v10;
      return v14;
    }
  }
  return result;
}

