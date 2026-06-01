unsigned __int64 __fastcall sub_4224E0(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // esi
  unsigned int v4; // eax
  __int64 v5; // rax
  int v6; // [rsp+8h] [rbp-440h] BYREF
  _WORD v7[516]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v8; // [rsp+418h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 1640);
  v8 = __readfsqword(0x28u);
  netnode_check(&v6, "$ groups", 0, 0);
  if ( sub_7BE950(&v6, a1, 0, v7, 1024, 83) > 0 )
  {
    v3 = 16;
    v4 = 2 * sub_7BE710(&v6, a1, 0, 65);
    if ( v4 <= 0x10 )
      v3 = v4;
    *(_DWORD *)(v1 + 136) = v3;
    if ( v4 )
    {
      v5 = 0;
      do
      {
        *(_QWORD *)(v1 + 8 * v5 + 8) = (unsigned __int16)v7[v5];
        ++v5;
      }
      while ( v5 != v3 );
    }
    *(_DWORD *)(v1 + 136) = v3 >> 1;
    sub_422110(v1);
    sub_7BF0F0((int)&v6);
  }
  return v8 - __readfsqword(0x28u);
}
