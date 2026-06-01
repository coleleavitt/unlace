__int64 __fastcall sub_16B91E0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rbp
  __int64 v11; // rbx
  bool v12; // cc
  __int64 v13; // rdx
  _DWORD v15[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v4 = 0;
  v5 = sub_A97D20((__int64)a1, *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( a3 )
  {
    v6 = v5;
    while ( 1 )
    {
      v15[0] = 0;
      v7 = sub_AA8980(a1, a3, v15, nullptr);
      if ( v15[0] )
        break;
      v9 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v9 + 16) == 26 )
      {
        if ( *(_WORD *)(v9 + 22) != 1 )
          break;
      }
      else
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v13 + 16) != 26 )
          break;
        v9 = sub_F63050(v9, a3, v13, v8);
        if ( !v9 || *(_WORD *)(v9 + 22) != 1 )
          break;
      }
      v11 = *(_QWORD *)(v9 + 48);
      v10 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_13:
      if ( v6 > sub_A97D20((__int64)a1, *v10) )
        goto LABEL_16;
      if ( v4 )
      {
        if ( (v10[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v10[1] | (unsigned __int8)v11) & 7) == (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | a2 & 7 | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL) )
          return a3;
LABEL_16:
        v12 = a3 <= 0xF2;
        if ( a3 == 242 )
          goto LABEL_35;
LABEL_17:
        if ( v12 )
        {
          if ( a3 == 96 )
          {
            a3 = 98;
          }
          else if ( a3 > 0x60 )
          {
            if ( a3 == 97 )
            {
              a3 = 99;
            }
            else
            {
              if ( a3 != 241 )
                return v4;
              a3 = 243;
            }
          }
          else if ( a3 == 94 )
          {
            a3 = 96;
          }
          else
          {
            if ( a3 != 95 )
              return v4;
            a3 = 97;
          }
        }
        else if ( a3 == 561 )
        {
          a3 = 563;
        }
        else if ( a3 <= 0x231 )
        {
          if ( a3 == 243 )
          {
            a3 = 245;
          }
          else
          {
            if ( a3 != 244 )
              return v4;
            a3 = 246;
          }
        }
        else if ( a3 == 563 )
        {
          a3 = 565;
        }
        else if ( a3 < 0x233 )
        {
          a3 = 564;
        }
        else
        {
          if ( a3 != 564 )
            return v4;
          a3 = 566;
        }
      }
      else
      {
        v4 = a3;
        v12 = a3 <= 0xF2;
        if ( a3 != 242 )
          goto LABEL_17;
LABEL_35:
        a3 = 244;
      }
    }
    v10 = nullptr;
    LOBYTE(v11) = 0;
    goto LABEL_13;
  }
  return v4;
}
