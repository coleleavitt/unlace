_BOOL8 __fastcall sub_F43BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BOOL8 result; // rax

  v2 = sub_F3F130(a1);
  v7 = sub_F3F480(v2, a2, v3, v4, v5, v6);
  result = false;
  if ( v7 )
  {
    v12 = (__int64)v7;
    if ( (*((_BYTE *)v7 + 28) & 0x7Fu) - 59 <= 2
      && sub_B5ABC0((__int64)v7, a2, v8, v9, v10, v11)
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(sub_B5ABC0(v12, a2, v13, v14, v15, v16) + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 27 )
    {
      return true;
    }
  }
  return result;
}

