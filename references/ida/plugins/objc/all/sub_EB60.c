unsigned __int64 sub_EB60()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+0h] [rbp-38h] BYREF
  __int128 v3; // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  v0 = qvector_reserve();
  v2 = v0;
  *(_QWORD *)&v3 = 7;
  *(_DWORD *)v0 = 1128940111;
  *(_WORD *)(v0 + 4) = 8250;
  *(_BYTE *)(v2 + 6) = 0;
  sub_D810(&v2);
  sub_E8C0();
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return v4 - __readfsqword(0x28u);
}
