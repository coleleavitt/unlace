unsigned __int64 __fastcall sub_1F9890(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  LODWORD(v6) = -1;
  if ( a3 )
  {
    sub_1E86E0((__int64)(a1 + 78), 1, a3, (__int64)a1, &v6);
    v4 = (unsigned int)v6;
    if ( (_DWORD)v6 != -1 )
    {
      v6 = 0;
      v7 = 0;
      if ( (unsigned __int8)sub_1F97A0(a1, (__int64)&v6, v4, v3) && (unsigned __int64)v7 > 1 )
      {
        sub_2D4060(a2, &v6);
        *(_DWORD *)(a2 + 100) = *(_QWORD *)(a2 + 8);
      }
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree(v6, (const char *)&v6);
      }
    }
  }
  return v8 - __readfsqword(0x28u);
}
