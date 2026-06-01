__int64 __fastcall sub_D1370(unsigned int a1)
{
  int v2; // eax
  _DWORD *v3; // rdi
  char v4[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  qsnprintf();
  if ( (unsigned __int8)sub_C06B0(a1, v4) )
  {
    v2 = xmmword_252458;
    v3 = qword_252758;
    if ( qword_252758 )
    {
      *(_QWORD *)qword_252758 = qword_252450;
      v3[2] = v2;
      sub_CDCF0((__int64)v3, 24);
    }
    else
    {
      sub_9E1E0();
    }
  }
  return 0;
}

