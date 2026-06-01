__int64 __fastcall sub_D37C0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // rdx
  int v6; // ecx
  _QWORD *v7; // rdi
  unsigned __int64 v9; // rsi
  _DWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rdi
  char v16; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v17; // [rsp+168h] [rbp-20h] BYREF

  v17 = __readfsqword(0x28u);
  if ( !*(_DWORD *)(get_ph() + 4) && *(_QWORD *)(a1 + 136) != -1 )
  {
    if ( *(_DWORD *)a2 )
    {
      v10 = (_DWORD *)qword_252590;
      v11 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
      if ( qword_252590 != v11 )
      {
        while ( *(_DWORD *)a2 != *v10 )
        {
          v10 += 64;
          if ( (_DWORD *)v11 == v10 )
            goto LABEL_3;
        }
        if ( v10 )
        {
          v12 = sub_CFA40((__int64)v10, -1);
          if ( v12 )
          {
            v13 = dword_245170;
            if ( dword_245170 == -1 )
              return 0;
            v14 = *(_QWORD *)(v12 + 32LL * dword_245170 + 8);
            if ( dbg )
            {
              if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
              {
                v15 = qword_252758;
                if ( qword_252758 )
                {
                  *(_QWORD *)qword_252758 = v14;
                  v15[1] = v12;
                  *((_DWORD *)v15 + 4) = v13;
                  if ( (unsigned int)sub_CDCF0((__int64)v15, 11) != 1 )
                    return 0;
                  v14 = *(_QWORD *)qword_252758;
                }
              }
            }
            if ( v14 >= *(_QWORD *)(a1 + 136) )
              return 0;
          }
        }
      }
    }
  }
LABEL_3:
  sub_D1B30(0);
  v4 = (unsigned __int64 *)&v16;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( v4 != &v17 );
  v5 = *(_QWORD *)(a2 + 40);
  if ( !v5
    || (v6 = dword_245174, dbg)
    && (*(_BYTE *)(dbg + 37LL) & 0x40) != 0
    && (v7 = qword_252758) != nullptr
    && (*(_QWORD *)qword_252758 = *(_QWORD *)(v5 + 32LL * dword_245174 + 8),
        v7[1] = v5,
        *((_DWORD *)v7 + 4) = v6,
        (unsigned int)sub_CDCF0((__int64)v7, 11) != 1) )
  {
    if ( !(unsigned int)decode_insn() )
      return 0;
  }
  else if ( !(unsigned int)decode_insn() )
  {
    return 0;
  }
  if ( !(unsigned __int8)is_ret_insn() )
    return 0;
  v9 = *(_QWORD *)(a1 + 128) - 1LL;
  if ( v9 > 0xFFFFFFFFFFFFFFFDLL )
    return 0;
  return sub_CE160(a2, v9, 2, nullptr, 0, 1);
}

