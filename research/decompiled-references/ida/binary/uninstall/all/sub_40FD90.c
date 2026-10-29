__int64 __fastcall sub_40FD90(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebp
  __int64 v3; // r12
  __int64 v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rdx
  char **v7; // rbx
  __int64 v8; // rdx
  char v9[104]; // [rsp+0h] [rbp-68h] BYREF

  result = sub_458F10();
  if ( !(_DWORD)result )
  {
    v2 = 0;
    v3 = sub_40FB00(16);
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = sub_40FB00(176);
    do
    {
      v4 = v2++;
      v5 = (_DWORD *)sub_48DF10(*(&off_64E040 + v4), 0xFFFFFFFF);
      v6 = *(_QWORD *)(v3 + 8);
      ++*v5;
      *(_QWORD *)(v6 + 8 * v4) = v5;
    }
    while ( v2 <= 21 );
    result = 0x633A3A6C63743A3ALL;
    strcpy(v9, "::tcl::clock::");
    v7 = &off_651F40;
    if ( "clicks" )
    {
      do
      {
        strcpy(&v9[14], *v7);
        ++*(_DWORD *)v3;
        v8 = (__int64)v7[1];
        v7 += 2;
        result = sub_407770(a1, v9, v8, v3, (__int64)sub_411A90);
      }
      while ( *v7 );
    }
  }
  return result;
}

