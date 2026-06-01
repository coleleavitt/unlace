unsigned __int64 __fastcall sub_6989A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v6 = a3;
  v5 = a4;
  v8 = __readfsqword(0x28u);
  v7 = 0;
  if ( (unsigned __int8)deserialize_tinfo(&v7, a2, &v6, &v5, 0, 0) )
    sub_698930(a1, &v7);
  clear_tinfo_t(&v7);
  return v8 - __readfsqword(0x28u);
}

