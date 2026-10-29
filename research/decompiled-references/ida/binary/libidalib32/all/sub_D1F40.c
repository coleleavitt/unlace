__int64 sub_D1F40()
{
  unsigned int v0; // ebx
  int v2; // [rsp+0h] [rbp-48h] BYREF
  __int64 v3; // [rsp+8h] [rbp-40h]
  __int128 v4; // [rsp+10h] [rbp-38h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2 = -2;
  v4 = 0;
  v3 = HIDWORD(qword_251700);
  v0 = (unsigned __int8)sub_D1320(dword_251408, (unsigned int)dword_24411C, (__int64)&v2);
  if ( v2 >= -1 && v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
  }
  return v0;
}

