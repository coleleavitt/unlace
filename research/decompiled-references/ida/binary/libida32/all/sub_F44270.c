__int64 __fastcall sub_F44270(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v3 + 16LL) - 35 > 1 )
    v4 = sub_F3F130(v4);
  if ( (unsigned __int8)sub_F422E0(v4) )
    goto LABEL_9;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 35 > 1 )
  {
    if ( !(*(_BYTE *)(sub_F3F130(v5) + 19) >> 2) )
      return a1;
LABEL_9:
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 35 > 1 )
      v5 = sub_F3F130(v5);
    goto LABEL_6;
  }
  if ( !(*(_BYTE *)(v5 + 19) >> 2) )
    return a1;
LABEL_6:
  v6 = sub_F42360(v5, a2);
  result = *(_QWORD *)(sub_A51180(a2, v6) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(result + 16) != 34 )
    return sub_F3F130(result);
  return result;
}

