unsigned __int64 sub_99150()
{
  __m128i v1; // xmm0
  __int64 v2; // [rsp+10h] [rbp-78h]
  __int64 v3; // [rsp+18h] [rbp-70h]
  __int64 v4; // [rsp+20h] [rbp-68h]
  __int64 v5; // [rsp+28h] [rbp-60h]
  __int64 v6; // [rsp+30h] [rbp-58h]
  __int64 v7; // [rsp+38h] [rbp-50h]
  __m128i v8; // [rsp+40h] [rbp-48h] BYREF
  int v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+54h] [rbp-34h]
  char v11; // [rsp+58h] [rbp-30h]
  unsigned __int64 v12; // [rsp+78h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  netnode_check();
  v11 = 1;
  v10 = -1;
  if ( netnode_supval() == 96 )
  {
    v1 = _mm_load_si128(&v8);
    qword_244060 = v2;
    xmmword_244090 = (__int128)v1;
    qword_244068 = v3;
    qword_244070 = v4;
    qword_244078 = v5;
    qword_244080 = v6;
    qword_244088 = v7;
    dword_2440A0 = v9;
    netnode_qsupstr();
    netnode_qsupstr();
  }
  netnode_kill();
  return v12 - __readfsqword(0x28u);
}

