unsigned __int64 __fastcall sub_ED6360(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  __int64 v5; // rcx
  int v6; // edx
  int v7; // r13d
  unsigned __int64 result; // rax
  __int16 v9; // dx
  unsigned __int64 v10; // rbx
  char v11; // al
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v4 = sub_FDB350(18);
  v6 = 29;
  if ( !v4 )
  {
    if ( (unsigned __int8)sub_FDA840(18, a2, 29, v5)
      || (unsigned __int8)sub_FDA890(18)
      || (unsigned __int8)sub_FDB1A0(18)
      || (v11 = sub_FDB040(18), v6 = 8, v11) )
    {
      v6 = 16;
    }
  }
  v7 = v6 + 8 * a3;
  result = sub_ED2130(
             (__int64 *)(a1 + 2352),
             8 * ((8 * ((unsigned int)a2 + (unsigned __int64)(unsigned int)(v7 + 1)) + 15) >> 3) + 48,
             3u);
  v9 = *(_WORD *)result;
  v10 = result + 40;
  *(_DWORD *)(result + 40) = a2;
  *(_DWORD *)(result + 44) = v7;
  v9 &= 0xFE00u;
  *(_BYTE *)(result + 48) = 1;
  LOBYTE(v9) = v9 | 0xE1;
  *(_WORD *)result = v9;
  if ( unk_2CAD564 )
  {
    v12 = result;
    sub_EC5E10(225);
    result = v12;
  }
  *(_QWORD *)(result + 8) = 18;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 32) = a3;
  *(_QWORD *)(result + 24) = v10;
  return result;
}

