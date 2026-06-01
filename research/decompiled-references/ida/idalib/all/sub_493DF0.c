__int64 __fastcall sub_493DF0(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int tinfo_details; // ebx
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1[3];
  v12[1] = __readfsqword(0x28u);
  v9 = 0;
  v10 = v3;
  v5 = 0;
  if ( a1[7] > 1u )
    v5 = a1[6];
  v11 = v5;
  v6 = 0;
  if ( a1[13] > 1u )
    v6 = a1[12];
  v12[0] = v6;
  tinfo_details = deserialize_tinfo(&v9, 0, &v10, &v11, v12, 0);
  if ( (_BYTE)tinfo_details )
    tinfo_details = get_tinfo_details(v9, a3 | 0xDu, a2);
  clear_tinfo_t(&v9);
  return tinfo_details;
}
