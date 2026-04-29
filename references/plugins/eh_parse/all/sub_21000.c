__int64 __fastcall sub_21000(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  if ( sub_7FF0(0x53u, v3, a2, 0) == 1 && (unsigned __int8)is_mapped(v3[0]) )
    return v3[0];
  else
    return -1;
}
