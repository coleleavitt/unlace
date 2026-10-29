__int64 __fastcall sub_3B140(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax

  result = *(unsigned __int16 *)(a1 + 54);
  *(_DWORD *)(a1 + 88) = 0;
  if ( (_WORD)result != 0xFFFF )
  {
    if ( (unsigned __int16)result <= 0xFEFFu )
      *(_DWORD *)(a1 + 88) = result;
    return result;
  }
  v5 = *(_QWORD *)(a2 + 288);
  v6 = a2;
  if ( !a1 || a1 < v5 || v5 + 96LL * *(_QWORD *)(a2 + 296) < a1 )
  {
    if ( under_debugger )
      goto LABEL_25;
    v6 = 20088;
    interr(20088);
    goto LABEL_18;
  }
  v7 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1 - v5) >> 5);
  v8 = *(_QWORD *)(a2 + 312);
  v2 = -1431655765 * ((__int64)(a1 - v5) >> 5);
  if ( v7 < v8 )
  {
LABEL_18:
    v13 = *(unsigned int *)(a2 + 204);
    if ( !(_DWORD)v13 )
      return sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v2);
    if ( !*(_BYTE *)(a2 + 248) )
      goto LABEL_24;
    if ( v13 < *(_QWORD *)(a2 + 120) )
    {
      v10 = *(_QWORD *)(a2 + 112) + (v13 << 6);
      v11 = 4LL * (unsigned int)v7;
      goto LABEL_13;
    }
    return sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v2);
  }
  v2 -= v8;
  v9 = *(unsigned int *)(a2 + 208);
  if ( !(_DWORD)v9 )
    return sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v2);
  if ( !*(_BYTE *)(a2 + 248) )
  {
LABEL_24:
    sub_30AC0();
LABEL_25:
    BUG();
  }
  if ( v9 >= *(_QWORD *)(a2 + 120) )
    return sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v2);
  v10 = *(_QWORD *)(a2 + 112) + (v9 << 6);
  v11 = 4LL * v2;
LABEL_13:
  v12 = *(_QWORD *)(v10 + 24);
  if ( !v12 )
    return sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v2);
  if ( v11 >= *(_QWORD *)(v10 + 32) )
    return sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v2);
  result = sub_3B070(v6, v12 + v11);
  *(_DWORD *)(a1 + 88) = result;
  if ( !(_DWORD)result )
    return sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v2);
  return result;
}

