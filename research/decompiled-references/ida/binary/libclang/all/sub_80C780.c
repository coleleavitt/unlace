unsigned __int64 __fastcall sub_80C780(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx

  result = sub_7868A0(a1);
  if ( !result )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
LABEL_3:
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != v3
    || (*(_BYTE *)(result + 68) & 1) != 0 && (v5 = *(_QWORD *)(result + 40), v5 <= 7) && !(_DWORD)v5 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(result + 8);
      result = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v4 <= 7 )
        return 0;
      if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_3;
    }
  }
  return result;
}

