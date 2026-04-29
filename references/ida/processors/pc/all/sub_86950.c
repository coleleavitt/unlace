__int64 __fastcall sub_86950(
        char *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(const char *, __int64),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v10; // eax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]
  __int64 v15; // [rsp+18h] [rbp-20h]

  v7 = 1;
  v8 = *(unsigned __int16 *)(a2 + 24);
  v13 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v8 - 148) > 3u )
  {
    if ( (_WORD)v8 == 349 )
      return 2;
    if ( (_WORD)v8 == 48 )
      return 2;
    if ( (unsigned __int16)(v8 - 139) <= 3u
      && (v10 = callui(1067, a2, &callui, (unsigned int)(v8 - 148), a5, a6, v12, v13, v14, v15),
          (unsigned __int8)sub_85E60(a1, a2, 1, &v12, 1, v10, a3, a4, 0))
      && (v12 & 1) != 0 )
    {
      return 2;
    }
    else
    {
      return 0;
    }
  }
  return v7;
}
