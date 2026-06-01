unsigned __int64 __fastcall sub_D1F0(_QWORD *a1)
{
  int v1; // edx
  unsigned __int64 result; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  _QWORD *v7; // rdx
  __int64 v8; // rax

  v1 = sub_D180(a1);
  result = 0;
  if ( v1 >= 0 )
  {
    v3 = v1;
    result = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
    a1[1] = result;
    if ( !result || (v4 = result + 24, result + 24 > a1[2]) )
    {
      v5 = 2LL * a1[4];
      if ( v5 < 0x20 )
        v5 = 32;
      a1[4] = v5;
      v6 = v5 + 8;
      v7 = malloc(v5 + 8);
      v8 = a1[3];
      a1[3] = v7;
      *v7 = v8;
      result = ((unsigned __int64)v7 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      a1[2] = (char *)v7 + v6;
      v4 = result + 24;
    }
    a1[1] = v4;
    *(_WORD *)(result + 16) = 151;
    *(_BYTE *)(result + 18) = 2;
    *(_QWORD *)result = v3;
  }
  return result;
}
