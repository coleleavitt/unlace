__int64 __fastcall sub_5DFAF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // dl
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v8 = sub_728190(&v12, a1, a3, 0, 255);
  result = 3;
  if ( v8 )
  {
    v10 = a6 + 464;
    v11 = a6 + 448;
    if ( a4 )
      v11 = v10;
    *(_BYTE *)(v11 + 8) = v12;
    return 0;
  }
  return result;
}

