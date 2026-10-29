__int64 __fastcall sub_5EC3F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = a1[16];
  if ( v2 )
  {
    v3 = *(_BYTE *)(v2 + 186) & 0xF;
    if ( v3 == 11 || v3 == 12 || v3 == 10 )
      *(_QWORD *)(v2 + 48) = a2;
  }
  else
  {
    a1[15] = a2;
  }
  result = a1[14];
  a1[16] = a2;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(result + 8);
  *(_QWORD *)(result + 8) = v5;
  return result;
}
