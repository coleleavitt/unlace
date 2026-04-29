char __fastcall sub_527A0(_QWORD *a1, __int64 a2)
{
  char result; // al
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-48h] BYREF
  int v4; // [rsp+8h] [rbp-40h]
  __int64 v5; // [rsp+10h] [rbp-38h]
  _QWORD *v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  result = sub_52400(a1, a2, 1);
  if ( result )
  {
    v4 = 0;
    v5 = 0;
    v3 = off_C7948;
    v6 = a1;
    return (unsigned int)sub_A1190(a2, &v3, 0) == 0;
  }
  return result;
}
