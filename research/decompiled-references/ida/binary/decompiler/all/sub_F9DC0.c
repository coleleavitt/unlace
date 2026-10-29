unsigned __int64 __fastcall sub_F9DC0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = 0;
  v6 = 0;
  if ( a3 == -1 )
  {
    v4 = qvector_reserve();
    v5 = v4;
    *(_QWORD *)&v6 = 7;
    *(_DWORD *)v4 = 1987339634;
    *(_WORD *)(v4 + 4) = 27745;
    *(_BYTE *)(v5 + 6) = 0;
  }
  else
  {
    sub_6AEF0(&v5);
  }
  sub_F3E30(&v5);
  if ( (unsigned int)save_tinfo() )
    sub_CE660(a2, 0);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v7 - __readfsqword(0x28u);
}
