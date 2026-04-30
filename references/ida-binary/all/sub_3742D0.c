unsigned __int64 sub_3742D0()
{
  int v0; // edx
  __int64 v2; // [rsp+8h] [rbp-30h] BYREF
  int v3; // [rsp+10h] [rbp-28h] BYREF
  int v4; // [rsp+14h] [rbp-24h]
  __int64 v5; // [rsp+18h] [rbp-20h]
  int v6; // [rsp+20h] [rbp-18h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  netnode_check(&v2, "$ proximity view", 0, 0);
  if ( (unsigned __int8)netnode_exist(&v2) && (netnode_supval(v2, 1, &v3, 20, 83), v3 == 1) )
  {
    v0 = v6;
    byte_8CF0E0 = v4 & 1;
    byte_8CF0DF = (v4 & 2) != 0;
    byte_8CF0DE = (v4 & 4) != 0;
    byte_8CF0DC = (v4 & 0x10) != 0;
    byte_8CF0DD = (v4 & 8) != 0;
    qword_8CF0D4 = v5;
  }
  else
  {
    v0 = dword_8CF0C8;
    byte_8CF0E0 = byte_8BCA41;
    byte_8CF0DF = byte_8CF0CE;
    byte_8CF0DE = byte_8CF0CD;
    byte_8CF0DD = byte_8CF0CC;
    byte_8CF0DC = byte_8BCA40;
    qword_8CF0D4 = qword_8BCA38;
  }
  dword_8CF0D0 = v0;
  return v7 - __readfsqword(0x28u);
}
