__int64 __fastcall sub_39B1C0(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx
  int v4; // r14d
  __int64 v5; // rbp
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a3 < 0 )
    return (unsigned int)-1;
  v3 = *(_QWORD *)(a1 + 32);
  v8[1] = a3;
  v8[0] = (*(_DWORD *)(v3 + 28) + 1 - *(_DWORD *)(v3 + 20)) / 2;
  v4 = a2[1];
  if ( v4 <= 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( !(unsigned __int8)QT::QRect::contains(v5 + *a2, v8, 0) )
    {
      ++v6;
      v5 += 84;
      if ( v4 == v6 )
        return (unsigned int)-1;
    }
  }
  return v6;
}
