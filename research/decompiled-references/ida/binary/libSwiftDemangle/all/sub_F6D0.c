unsigned __int64 __fastcall sub_F6D0(_QWORD *a1)
{
  int v1; // eax
  __int64 v2; // rsi
  size_t v3; // rbp
  unsigned __int64 result; // rax
  const void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  char *v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rdx
  __int64 v13; // rax
  char *v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v1 = sub_D100(a1);
  if ( v1 <= 0 )
    return 0;
  v2 = a1[9];
  v3 = v1;
  result = 0;
  if ( v2 + v3 <= a1[8] )
  {
    v5 = (const void *)(a1[7] + v2);
    v14 = nullptr;
    v15 = 0;
    sub_C6F0(&v14, v5, v3, a1);
    v6 = a1[1];
    a1[9] += v3;
    v7 = (unsigned int)v15;
    v8 = v14;
    result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a1[1] = result;
    if ( !result || (v9 = result + 24, result + 24 > a1[2]) )
    {
      v10 = 2LL * a1[4];
      if ( v10 < 0x20 )
        v10 = 32;
      a1[4] = v10;
      v11 = v10 + 8;
      v12 = malloc(v10 + 8);
      v13 = a1[3];
      a1[3] = v12;
      *v12 = v13;
      result = ((unsigned __int64)v12 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      a1[2] = (char *)v12 + v11;
      v9 = result + 24;
    }
    a1[1] = v9;
    *(_WORD *)(result + 16) = 21;
    *(_BYTE *)(result + 18) = 1;
    *(_QWORD *)result = v8;
    *(_QWORD *)(result + 8) = v7;
  }
  return result;
}

