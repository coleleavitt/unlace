__int64 __fastcall sub_4259E0(_QWORD *a1)
{
  __int64 v1; // rax
  _BYTE *v2; // rdx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = a1[5];
  v4[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(v1 + 24) && (v2 = *(_BYTE **)(v1 + 16)) != nullptr && *v2 )
  {
    if ( a1[19] == -1 )
    {
      sub_7BEFF0(v4, a1[18], v2, 0, 1);
      a1[19] = v4[0];
    }
  }
  else
  {
    a1[19] = -1;
  }
  return sub_777EE0(a1);
}
