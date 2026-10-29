__int64 __fastcall sub_187170(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // cl
  unsigned __int8 v9; // cl
  _QWORD *v10; // rsi
  __int64 v11; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 200);
  result = 9LL * *(_QWORD *)(a1 + 208);
  v3 = v1 + 72LL * *(_QWORD *)(a1 + 208);
  if ( v3 != v1 )
  {
    v4 = *(_QWORD *)(a1 + 200);
    while ( 1 )
    {
      v8 = *(_BYTE *)(v4 + 52);
      if ( v8 == 32 )
        goto LABEL_8;
      v9 = v8 - 66;
      if ( v9 > 0x30u )
        goto LABEL_15;
      result = 1LL << v9;
      if ( ((1LL << v9) & 0x1002200010022LL) != 0 )
      {
        v10 = (_QWORD *)operator new(0x10u);
        result = (__int64)&off_234D60;
        *v10 = &off_234D60;
        v10[1] = a1;
        v5 = *(_QWORD *)v4;
        if ( !*(_QWORD *)v4 )
          goto LABEL_8;
        if ( !v10 )
        {
LABEL_6:
          v11 = v5;
          v6 = operator new(0x18u);
          v5 = v11;
          v7 = v6;
          LODWORD(v6) = *(_DWORD *)(v4 + 56);
          *(_QWORD *)v7 = off_234D88;
          *(_QWORD *)(v7 + 8) = a1;
          *(_DWORD *)(v7 + 16) = v6;
        }
        result = TView::set_onchange(v5);
        goto LABEL_8;
      }
      if ( (result & 0x20000000201LL) != 0 )
      {
LABEL_8:
        v4 += 72;
        if ( v3 == v4 )
          return result;
      }
      else
      {
        if ( v9 == 3 )
        {
          result = *(_QWORD *)v4;
          v5 = *(_QWORD *)(*(_QWORD *)v4 + 160LL);
          if ( v5 )
            goto LABEL_6;
          goto LABEL_8;
        }
LABEL_15:
        v5 = *(_QWORD *)v4;
        if ( *(_QWORD *)v4 )
          goto LABEL_6;
        v4 += 72;
        if ( v3 == v4 )
          return result;
      }
    }
  }
  return result;
}

