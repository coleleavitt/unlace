__int64 __fastcall sub_4A2BD0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v7[3]; // [rsp+10h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v3 = *a1;
  v10 = __readfsqword(0x28u);
  sub_4A2850(v7, v3, a2, a3, 0);
  if ( (v9 & 1) != 0 )
  {
    v6 = v8;
    v4 = sub_79B3A0(&v6, v7[0], 1, 65);
  }
  else
  {
    v4 = 0;
  }
  qfree((void *)v7[1]);
  return v4;
}

