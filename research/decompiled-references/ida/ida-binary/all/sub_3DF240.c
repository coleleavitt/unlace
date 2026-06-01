char __fastcall sub_3DF240(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  char result; // al
  unsigned __int64 v4; // rax
  char v5; // [rsp+2h] [rbp-16h] BYREF
  char v6; // [rsp+3h] [rbp-15h] BYREF
  int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  sub_3DF180(a1, a2, &v7, &v5, &v6);
  result = 0;
  if ( *(_DWORD *)(v2 + 56) != 4 )
  {
    result = *(_BYTE *)(v2 + 320);
    if ( result )
    {
      v4 = *(int *)(v2 + 312);
      if ( v4 > *(_QWORD *)(v2 + 48) )
        v4 = *(_QWORD *)(v2 + 48);
      return v7 < v4;
    }
  }
  return result;
}
