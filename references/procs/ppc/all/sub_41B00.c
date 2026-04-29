__int64 __fastcall sub_41B00(__int64 a1)
{
  char *v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int128 v5; // [rsp+0h] [rbp-178h] BYREF
  __int64 v6; // [rsp+10h] [rbp-168h]
  __int64 v7; // [rsp+18h] [rbp-160h]
  __int64 v8; // [rsp+20h] [rbp-158h]
  char v9; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v10[2]; // [rsp+168h] [rbp-10h] BYREF

  v10[0] = __readfsqword(0x28u);
  v1 = &v9;
  v5 = -1;
  v6 = -1;
  v7 = 0;
  v8 = 0;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 40;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *((_QWORD *)v1 - 2) = 0;
  }
  while ( v10 != (_QWORD *)v1 );
  if ( a1 == -1 || !(unsigned int)decode_insn(&v5, a1, v10, 0.0) )
    return -1;
  if ( (v7 & 0x800000000LL) == 0 )
  {
    v2 = (unsigned __int16)v7;
    if ( (unsigned __int16)v7 > 0x116u )
    {
      if ( (unsigned __int16)(v7 - 2078) > 3u )
        return -1;
    }
    else
    {
      if ( (unsigned __int16)v7 <= 0xDAu )
        return -1;
      v3 = 0xFFFFFFFFFFC0063LL;
      LOWORD(v2) = v7 - 219;
      if ( !_bittest64(&v3, v2) )
        return -1;
    }
  }
  if ( (get_flags_ex(v6 + WORD1(v7), 4) & 0x10000) != 0 )
    return v6 + WORD1(v7);
  return -1;
}
