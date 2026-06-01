__int64 __fastcall sub_103400(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned int v5; // eax
  unsigned __int64 v6; // rax
  const char *v7; // rbp
  __int64 v8; // rax
  const char *v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 8);
  v11 = __readfsqword(0x28u);
  if ( v2 == 28 || (v3 = 6, v2 == 34) )
  {
    if ( *(_BYTE *)(*(_QWORD *)a2 + 1248LL) )
      return 7;
    v5 = *(_DWORD *)(a1 + 12);
    if ( v5 <= 1 )
    {
      if ( v5 )
        v6 = dword_24516C;
      else
        v6 = dword_245170;
      if ( (v6 & 0x80000000) != 0LL || v6 >= (unsigned __int64)xmmword_2524F8 || !(qword_2524F0 + 56 * v6) )
        return 7;
      v9 = nullptr;
      v10 = 0;
      sub_94440((__int64 *)&v9);
      v7 = s1;
      if ( (_QWORD)v10 )
        v7 = v9;
      v8 = sub_19DCF0(*(_QWORD *)(a2 + 72));
      if ( v8 )
        sub_19CC00(v8, 1, v7);
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree();
      }
    }
    return 3;
  }
  return v3;
}

