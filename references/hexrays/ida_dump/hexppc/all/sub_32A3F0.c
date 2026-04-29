__int64 __fastcall sub_32A3F0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v4[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a1;
  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  if ( a1 && (unsigned __int8)deserialize_tinfo(v4, 0, &v3, 0, 0, 0) )
    LOBYTE(v1) = (unsigned int)verify_tinfo(v4[0]) == 0;
  else
    v1 = 0;
  clear_tinfo_t(v4);
  return v1;
}
