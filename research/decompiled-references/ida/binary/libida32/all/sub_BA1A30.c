unsigned __int64 __fastcall sub_BA1A30(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 *v12; // rdi

  result = *(_QWORD *)(a1 + 120);
  if ( result )
  {
    if ( (result & 4) != 0 )
    {
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( result )
      {
LABEL_4:
        *(_DWORD *)(result + 12) = a2;
        return result;
      }
    }
  }
  if ( a2 )
  {
    v5 = (_QWORD *)sub_B685F0(a1);
    v8 = v5[294];
    v5[304] += 16LL;
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5[295] >= v9 + 16 && v8 )
    {
      v5[294] = v9 + 16;
      result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      result = sub_962430((__int64)(v5 + 294), 16, 16, 3, v6, v7);
      v9 = result & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)result = 0;
    v10 = 0;
    *(_QWORD *)(result + 8) = 0;
    v11 = *(_QWORD *)(a1 + 120);
    if ( v11 )
    {
      v12 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      v10 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v11 & 4) != 0 )
      {
        v10 = 0;
        if ( v12 )
          v10 = *v12;
      }
    }
    *(_QWORD *)result = v10;
    *(_QWORD *)(a1 + 120) = v9 | 4;
    goto LABEL_4;
  }
  return result;
}

