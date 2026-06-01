__int64 __fastcall sub_522470(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdi
  const char *v3; // rax
  const char *v4; // rsi
  bool (__fastcall *v5)(__int64, __int64, int); // rax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int128 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v2 = *(_BYTE **)(a2 + 328);
  if ( v2 )
  {
    v3 = *(const char **)(a2 + 200);
    v4 = (const char *)&v8;
    v8 = 0;
    v9 = 0;
    if ( v3 )
      v4 = v3;
    v5 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v2 + 984LL);
    if ( v5 == sub_51F0E0 )
    {
      v6 = 7;
      if ( (v2[2208] & 4) != 0 && *((_QWORD *)v4 + 1) )
        return 3;
    }
    else
    {
      v6 = !v5((__int64)v2, (__int64)v4, 4) ? 7 : 3;
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree(v8, v4);
      }
    }
  }
  else
  {
    return 7;
  }
  return v6;
}
