__int64 __fastcall sub_7239C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rbp
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ebp
  unsigned int v10; // [rsp+Ch] [rbp-3Ch]
  void *v11; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-20h]

  result = *(_QWORD *)(a1 + 48);
  if ( !BYTE4(result) )
  {
    v4 = *(_QWORD **)(a1 + 40);
    if ( *(_BYTE *)(a1 + 35) )
    {
      if ( v4 )
      {
        sub_863FA0(&v11, v4, a2, 0);
        LODWORD(v5) = (_DWORD)v11;
        if ( v12 > 0x40 )
          v5 = *(_QWORD *)v11;
        result = (unsigned int)v5
               * (unsigned int)sub_6F6DE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 18488) & 0xFFFFFFFFFFFFFFF0LL));
        if ( v12 > 0x40 )
        {
          if ( v11 )
          {
            v10 = result;
            operator delete[](v11);
            return v10;
          }
        }
      }
      else
      {
        return sub_6BF3C0(a2);
      }
    }
    else
    {
      v6 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFF0LL);
      v7 = *v6;
      if ( (unsigned int)*(unsigned __int8 *)(*v6 + 16) - 42 <= 1
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
        && (v7 = sub_B0D320(v7)) != 0 )
      {
        while ( (*(_BYTE *)(v7 + 18) & 0x10) != 0 )
        {
          while ( 1 )
          {
            v7 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 42 <= 1 )
              break;
            v7 = sub_B0D320(v7);
            if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
              goto LABEL_14;
          }
        }
LABEL_14:
        v6 = (__int64 *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      }
      v8 = v6[1];
      if ( (v8 & 8) != 0 && (*((_BYTE *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
      {
        return sub_6F6DE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 18488) & 0xFFFFFFFFFFFFFFF0LL));
      }
      else
      {
        v9 = sub_70CFB0(a2, *v6);
        return v9 * (unsigned int)sub_6F6DE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 18488) & 0xFFFFFFFFFFFFFFF0LL));
      }
    }
  }
  return result;
}

