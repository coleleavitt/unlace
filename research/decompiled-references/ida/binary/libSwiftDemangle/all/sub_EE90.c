unsigned __int64 __fastcall sub_EE90(_QWORD *a1)
{
  int v1; // eax
  int v2; // edx
  unsigned __int64 result; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  _QWORD *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rdx
  __int64 v14; // rax

  v1 = sub_D180(a1);
  if ( v1 <= 0 )
    return 0;
  v2 = v1;
  result = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v2 == 1 )
  {
    a1[1] = result;
    if ( !result || (v10 = result + 24, result + 24 > a1[2]) )
    {
      v11 = 2LL * a1[4];
      if ( v11 < 0x20 )
        v11 = 32;
      a1[4] = v11;
      v12 = v11 + 8;
      v13 = malloc(v11 + 8);
      v14 = a1[3];
      a1[3] = v13;
      *v13 = v14;
      result = ((unsigned __int64)v13 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      a1[2] = (char *)v13 + v12;
      v10 = result + 24;
    }
    a1[1] = v10;
    *(_WORD *)(result + 16) = 235;
    *(_BYTE *)(result + 18) = 0;
  }
  else
  {
    a1[1] = result;
    v4 = (unsigned int)(v2 - 2);
    if ( !result || (v5 = result + 24, result + 24 > a1[2]) )
    {
      v6 = 2LL * a1[4];
      if ( v6 < 0x20 )
        v6 = 32;
      a1[4] = v6;
      v7 = v6 + 8;
      v8 = malloc(v6 + 8);
      v9 = a1[3];
      a1[3] = v8;
      *v8 = v9;
      result = ((unsigned __int64)v8 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      a1[2] = (char *)v8 + v7;
      v5 = result + 24;
    }
    a1[1] = v5;
    *(_WORD *)(result + 16) = 99;
    *(_BYTE *)(result + 18) = 2;
    *(_QWORD *)result = v4;
  }
  return result;
}

