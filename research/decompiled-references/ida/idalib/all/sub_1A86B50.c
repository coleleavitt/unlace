_BOOL8 __fastcall sub_1A86B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _BOOL8 result; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    return 0;
  v5 = (__int64 *)(sub_F68450(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5)
                 & 0xFFFFFFFFFFFFFFF0LL);
  result = false;
  if ( v5 )
  {
    if ( (*(_BYTE *)(*v5 + 17) & 4) != 0 )
      return true;
    v10 = (__int64 *)(sub_F68450(*v5, a2, v6, v7, v8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v10 )
    {
      if ( sub_F63270(*v10, a2, v11, v12, v13, v14) )
        return true;
    }
  }
  return result;
}
