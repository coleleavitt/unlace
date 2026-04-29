__int64 __fastcall sub_10340(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  int v5; // edx
  int v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  v2 = sub_101F0(a1, &v6);
  if ( v2 )
  {
    if ( v6 == -21 )
    {
      v7 = 0;
      v4 = sub_101F0(a1, &v7);
      v5 = v7;
      *a2 = -21;
      v2 += v4;
      a2[1] = v5;
    }
    else
    {
      *a2 = v6;
      a2[1] = -1;
    }
  }
  return v2;
}
