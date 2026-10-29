__int64 __fastcall sub_4D8D50(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  _DWORD *v4; // rbp
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( a3 >= a1[4] )
    return 0;
  v3 = 16 * a3;
  v4 = (_DWORD *)(16 * a3 + a1[3]);
  v5 = v4[2];
  if ( v5 != 3 )
  {
    if ( v5 )
      return 0;
    v7 = *a1 + 24 * a3;
    if ( (*(_BYTE *)(v7 + 9) & 1) != 0 )
    {
      *(_QWORD *)v4 = 0;
      v4 = (_DWORD *)(v3 + a1[3]);
    }
    else
    {
      sub_4D89F0(a2, *(_DWORD *)v7, 0);
      v9[0] = 0;
      if ( !(unsigned __int8)parse_pretty_size(v9, v8) || v9[0] < 0LL )
      {
        v4[2] = 3;
        return 0;
      }
      *(_QWORD *)v4 = v9[0];
      v4[2] = 3;
      v4 = (_DWORD *)(v3 + a1[3]);
    }
  }
  return *(_QWORD *)v4;
}
