__int64 __fastcall dwarf_bitoffset(__int64 *a1, _WORD *a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v8[0] = 0;
  result = sub_52350(a1, 107, v8, a4);
  if ( (_DWORD)result == -1 )
  {
    result = sub_52350(a1, 12, v8, a4);
    if ( !(_DWORD)result )
    {
      v7 = v8[0];
      *a2 = 12;
      *a3 = v7;
    }
  }
  else if ( !(_DWORD)result )
  {
    *a2 = 107;
    *a3 = v8[0];
  }
  return result;
}

