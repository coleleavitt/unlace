__int64 __fastcall sub_655090(
        __int64 a1,
        unsigned int *s1,
        unsigned int a3,
        unsigned int a4,
        double a5,
        __m128i a6,
        double a7)
{
  __int64 v8; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rcx
  unsigned int *v13; // rbp
  __int64 result; // rax
  __int64 v15; // rdx
  char v16; // al
  __int64 *v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22[2]; // [rsp+10h] [rbp-58h] BYREF
  int v23[2]; // [rsp+18h] [rbp-50h] BYREF
  int v24[4]; // [rsp+20h] [rbp-48h]
  bool v25; // [rsp+30h] [rbp-38h]
  char v26; // [rsp+31h] [rbp-37h]
  char v27; // [rsp+32h] [rbp-36h] BYREF
  int v28[2]; // [rsp+38h] [rbp-30h]

  *(_QWORD *)v28 = __readfsqword(0x28u);
  if ( !s1 )
    return 0xFFFFFFFFLL;
  if ( (s1[6] & 8) != 0 )
    return 4294967288LL;
  v8 = *s1;
  v11 = sub_4EE820(a1 + 1552, v8);
  v13 = v11;
  if ( !v11 )
    return 0xFFFFFFFFLL;
  if ( s1 != v11 )
  {
    v8 = (__int64)v11;
    if ( memcmp(s1, v11, 0x68u) )
      return 0xFFFFFFFFLL;
  }
  if ( (((_BYTE)a3 - *(_BYTE *)v13) & 1) != 0 )
    return 4294967290LL;
  result = 0;
  if ( a3 != *v13 )
  {
    *(_QWORD *)v22 = a1;
    v15 = a4 & 0x20;
    v27 = 0;
    *(_OWORD *)v24 = 0;
    *(_QWORD *)v23 = 0;
    v25 = (a4 & 0x20) != 0;
    v16 = *(_BYTE *)(a1 + 2752);
    *(_BYTE *)(a1 + 2752) = 1;
    v26 = v16;
    if ( (a4 & 0x20) != 0 )
    {
      ++*(_DWORD *)(a1 + 792);
      sub_6633D0(a1);
      v17 = *(__int64 **)v22;
    }
    else
    {
      v17 = (__int64 *)a1;
    }
    sub_5AF050(*v17, (unsigned int *)v8, v15, v12);
    sub_654C90((__int64 *)a1, v13, a3, a4, &v27, (unsigned int **)v23, 0.0, a6, a7);
    sub_652150((__int64)v22, (int)v13, v18, v19, v20, v21);
  }
  return result;
}

