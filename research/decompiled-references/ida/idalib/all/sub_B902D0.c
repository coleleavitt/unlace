unsigned __int64 __fastcall sub_B902D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 result; // rax
  bool v11; // r12
  __int64 v12; // r8
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (*v19)(); // rax

  v4 = (__int64)(a2 + 294);
  v6 = a2[294];
  v7 = a2[290];
  v8 = a2[304];
  v9 = a2[295];
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v11 = v6 != 0;
  if ( !(*(_BYTE *)(v7 + 201) >> 5) && *(char *)(v7 + 22) >= 0 && a3 )
  {
    v16 = a4 + a1;
    a2[304] = v16 + v8;
    if ( v16 + result <= v9 && v6 )
      a2[294] = v16 + result;
    else
      return sub_986170(v4, v16, v16, 3, v6, v7);
  }
  else
  {
    v12 = a1 + a4 + 8;
    a2[304] = v12 + v8;
    if ( v12 + result <= v9 && v11 )
    {
      a2[294] = v12 + result;
      v13 = (_QWORD *)result;
    }
    else
    {
      v13 = (_QWORD *)sub_986170(v4, v12, v12, 3, v12, v7);
    }
    if ( a3 )
    {
      v14 = sub_B8C1B0(a3);
      v15 = *(_QWORD *)(v14 + 8) & 7LL;
      if ( *(char *)(v14 + 29) < 0 )
      {
        a3 = 0;
        if ( v15 )
        {
          v17 = v14;
          if ( (*(_BYTE *)(v14 + 28) & 0x7F) != 0 )
            v17 = sub_B8C2C0(v14);
          a3 = 0;
          v18 = *(_QWORD *)(*(_QWORD *)(v17 + 88) + 18360LL);
          v19 = *(__int64 (**)())(*(_QWORD *)v18 + 104LL);
          if ( v19 != sub_6EE8B0 )
            a3 = ((__int64 (__fastcall *)(__int64, _QWORD))v19)(v18, *(unsigned __int16 *)(v14 - 2));
        }
      }
      else if ( v15 )
      {
        a3 = *(_QWORD *)(v14 - 8);
      }
      else
      {
        a3 = 0;
      }
    }
    *v13 = a3;
    return (unsigned __int64)(v13 + 1);
  }
  return result;
}
