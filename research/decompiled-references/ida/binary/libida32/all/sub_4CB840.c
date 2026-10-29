__int64 __fastcall sub_4CB840(__int64 *a1, __int64 a2, unsigned int a3, int *a4)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v10 = 0xFFFFFFFF00000000LL;
  v9 = 0;
  v11 = 0;
  if ( !(unsigned __int8)get_fixup(&v9, a2) || (result = BYTE4(v9) & 4, (v9 & 0x400000000LL) != 0) )
  {
    if ( !(unsigned __int8)get_fixups(0, (unsigned int)a2, 4) )
    {
      if ( a4 )
      {
        v7 = *a4;
        v8 = *a4;
        return sub_4CB660((__int64)a1, (unsigned int)a2, v7);
      }
      if ( a3 != -1 )
      {
        if ( !a3 )
          a3 = dword_2389F80[(unsigned __int8)(sub_4CB760((__int64)a1, a2) - 1)];
        if ( (unsigned __int8)sub_3C4B80(a1, &v8, a2, a3) )
        {
          v7 = v8;
          return sub_4CB660((__int64)a1, (unsigned int)a2, v7);
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( (v9 & 0x100000000LL) != 0 )
    return (unsigned int)v10;
  if ( HIDWORD(v10) != -1 )
    return 16 * (unsigned int)sel2para(HIDWORD(v10));
  return result;
}

