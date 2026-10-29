__int64 __fastcall sub_13FC130(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 result; // rax
  char v7; // cl
  char v8; // cl
  char v9; // dl
  __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  result = sub_FF2620(a2, (__int64)a3, a4);
  if ( !result && (*(_BYTE *)(a2 + 905) & 2) != 0 )
  {
    v11 = sub_13FC0F0((__int64 *)(a1 + 80), 1776, 3u);
    sub_FF1F40(v11, a3, a4, 0, a2, 0, (*(_BYTE *)(a2 + 905) & 4) != 0, 0);
    result = v11;
    v7 = *(_BYTE *)(a2 + 905) & 4 | *(_BYTE *)(v11 + 905) & 0xFB;
    *(_BYTE *)(v11 + 905) = v7;
    v8 = *(_BYTE *)(a2 + 905) & 2 | v7 & 0xFD;
    *(_BYTE *)(v11 + 905) = v8;
    v9 = v8 & 0xF7 | *(_BYTE *)(a2 + 905) & 8;
    *(_BYTE *)(v11 + 905) = v9;
    if ( (v9 & 8) != 0 )
    {
      v10 = *(unsigned int *)(v11 + 1040);
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 1044) )
      {
        sub_2237220(v11 + 1032, v11 + 1048, v10 + 1, 8);
        result = v11;
        v10 = *(unsigned int *)(v11 + 1040);
      }
      *(_QWORD *)(*(_QWORD *)(result + 1032) + 8 * v10) = 4;
      ++*(_DWORD *)(result + 1040);
    }
  }
  return result;
}
