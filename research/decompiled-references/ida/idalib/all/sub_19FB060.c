unsigned __int64 __fastcall sub_19FB060(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 i; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x19 )
  {
    LOBYTE(a3) = *(_BYTE *)(a2 + 92) != 0;
    return sub_19FACD0(a1 + 96, a2, (unsigned int)(2 * a3), a4, a5, a6);
  }
  else
  {
    for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(v8 + 32) )
    {
      v8 = sub_F63050(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2 > 1 )
        break;
    }
    result = sub_F63500(v8, a2);
    if ( result )
    {
      return sub_19FACD0(a1 + 96, a2, *(unsigned __int8 *)(result + 48), v9, v10, v11);
    }
    else if ( *(_BYTE *)(v8 + 16) == 48 )
    {
      return sub_19FAF70(a1, a2, v8, v9, v10, v11);
    }
  }
  return result;
}
