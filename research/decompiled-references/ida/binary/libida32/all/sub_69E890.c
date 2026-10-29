unsigned __int64 __fastcall sub_69E890(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    sub_69E750(a1, a2, 1);
    sub_3DD870((__int64)a1, a2, v5, v6);
    sub_3DDD20((__int64)a1, a2, 1);
    if ( a3 )
    {
      v7 = sub_3B90A0(a1, a2);
      sub_79BCF0((int)&v7);
    }
  }
  return v8 - __readfsqword(0x28u);
}

