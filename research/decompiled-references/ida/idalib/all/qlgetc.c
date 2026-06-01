__int64 __fastcall qlgetc(__int64 a1)
{
  unsigned __int8 v2; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( qlread(a1, &v2, 1) == 1 )
    return v2;
  else
    return 0xFFFFFFFFLL;
}
