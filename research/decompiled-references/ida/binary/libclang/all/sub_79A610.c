unsigned __int64 __fastcall sub_79A610(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 result; // rax
  bool v12; // r11
  __int64 v13; // rsi
  _QWORD *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 (*v20)(); // rax

  v7 = a2[270];
  v8 = a2[284];
  v9 = a2[274];
  v10 = a2[275];
  result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v9 != 0;
  if ( (*(_BYTE *)(v7 + 193) & 0x70) != 0 || (*(_BYTE *)(v7 + 20) & 0x20) != 0 || !a3 )
  {
    v13 = a1 + a4 + 8;
    a2[284] = v13 + v8;
    if ( v10 >= v13 + result && v12 )
    {
      a2[274] = v13 + result;
      v14 = (_QWORD *)result;
    }
    else
    {
      v14 = (_QWORD *)sub_792ED0((__int64)(a2 + 274), v13, 3);
    }
    if ( a3 )
    {
      v15 = sub_79A2E0(a3);
      v16 = *(_QWORD *)(v15 + 8) & 7LL;
      if ( *(char *)(v15 + 29) < 0 )
      {
        a3 = 0;
        if ( v16 )
        {
          v18 = v15;
          if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0 )
            v18 = sub_793320(v15);
          a3 = 0;
          v19 = *(_QWORD *)(*(_QWORD *)(v18 + 88) + 18200LL);
          v20 = *(__int64 (**)())(*(_QWORD *)v19 + 104LL);
          if ( v20 != sub_792D90 )
            a3 = ((__int64 (__fastcall *)(__int64, _QWORD))v20)(v19, *(unsigned __int16 *)(v15 - 2));
        }
      }
      else if ( v16 )
      {
        a3 = *(_QWORD *)(v15 - 8);
      }
      else
      {
        a3 = 0;
      }
    }
    *v14 = a3;
    return (unsigned __int64)(v14 + 1);
  }
  else
  {
    a2[284] = a1 + a4 + v8;
    v17 = a1 + a4 + result;
    if ( v10 >= v17 && v9 )
      a2[274] = v17;
    else
      return sub_792ED0((__int64)(a2 + 274), a1 + a4, 3);
  }
  return result;
}

