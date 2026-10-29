__int64 __fastcall sub_1AA08F0(unsigned __int64 a1, __int64 a2, double a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]

  if ( !a1 )
    return 0;
  v3 = *(_WORD *)a1 & 0x1FF;
  if ( ((v3 + 274) & 0x1FFu) > 0xE )
  {
    if ( v3 == 1 || ((v3 + 372) & 0x1FFu) <= 0xD )
      return 0;
    return sub_EEB7E0(a1, a2, a3);
  }
  if ( ((0x4061uLL >> (*(_BYTE *)a1 + 18)) & 1) == 0 )
  {
    if ( v3 == 249 )
    {
      v10 = 0;
      v5 = a1 + 8LL * *(unsigned int *)(a1 + 4) + 16;
      v6 = (_QWORD *)(a1 + 16);
      v7 = 0;
      v9 = v6;
      while ( 1 )
      {
        if ( (_QWORD *)v5 == v6 )
        {
LABEL_18:
          if ( !v7 )
            return 0;
        }
        while ( 1 )
        {
          if ( (v7 & 3) != 0 )
            v8 = *(_QWORD *)sub_EF2B30((__int64)&v9);
          else
            v8 = *v6;
          result = sub_1AA08F0(v8);
          if ( (_DWORD)result )
            return result;
          v7 = v10;
          if ( (v10 & 3) != 0 )
            break;
          v6 = v9 + 1;
          v9 = v6;
          if ( (_QWORD *)v5 == v6 )
            goto LABEL_18;
        }
        if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v9);
        else
          sub_EF2750((unsigned __int64 *)&v9, 1);
        v6 = v9;
        v7 = v10;
      }
    }
    return sub_EEB7E0(a1, a2, a3);
  }
  return 0;
}
