bool __fastcall sub_3BCD40(__int64 a1, __int16 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rdx
  bool result; // al
  bool v9; // [rsp+Fh] [rbp-39h]
  int *v10; // [rsp+10h] [rbp-38h] BYREF
  __int128 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 232) )
    return 0;
  v2 = *(_QWORD *)(a1 + 208);
  if ( (*(_BYTE *)(v2 + 31) & 0xEF) != 0xD || *(_QWORD *)(v2 + 32) == -1 )
    return 0;
  v4 = (unsigned int)a2;
  v10 = nullptr;
  v11 = 0;
  if ( (int)get_custom_data_formats(&v10, v4) <= 0 )
  {
    result = 0;
  }
  else
  {
    v4 = 14;
    v5 = *v10;
    v6 = *(_QWORD *)(v2 + 120);
    *(_WORD *)(v2 + 128) = a2;
    *(_WORD *)(v2 + 130) = v5;
    v7 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 120) = v6 & 0xFFFFFFFFFFFFFFF0LL | 0xC;
    result = (unsigned int)set_tinfo_property4(*(_QWORD *)(a1 + 208) + 8LL, 14, v7, v2 + 120, 0, 0) == 0;
  }
  if ( v10 )
  {
    v9 = result;
    *(_QWORD *)&v11 = 0;
    qfree(v10, (const char *)v4);
    return v9;
  }
  return result;
}
