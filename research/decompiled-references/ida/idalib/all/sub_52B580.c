__int64 __fastcall sub_52B580(__int64 a1, __int64 a2, _BYTE *a3, int a4, int a5, int a6)
{
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( *a3 == 1
    && (v7[0] = -1, (unsigned int)qsscanf((int)a3 + 1, (unsigned int)"%a", (unsigned int)v7, a4, a5, a6) == 1) )
  {
    return v7[0];
  }
  else
  {
    return -1;
  }
}
