__int64 __fastcall sub_20E15C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // r12
  char v4; // dl

  result = sub_20D1DD0((char **)a1);
  if ( !result )
    return 0;
  v2 = result;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && **(_BYTE **)a1 == 73 )
  {
    v3 = sub_20DCBE0(a1, 0);
    if ( v3 )
    {
      result = sub_20CF970(a1 + 816, 32);
      *(_WORD *)(result + 8) = 16429;
      v4 = *(_BYTE *)(result + 10);
      *(_QWORD *)(result + 16) = v2;
      *(_QWORD *)(result + 24) = v3;
      *(_BYTE *)(result + 10) = v4 & 0xF0 | 5;
      *(_QWORD *)result = off_2BE77A0;
      return result;
    }
    return 0;
  }
  return result;
}
