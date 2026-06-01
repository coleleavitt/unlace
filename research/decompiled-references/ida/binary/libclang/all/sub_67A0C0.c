__int64 __fastcall sub_67A0C0(__int64 *a1, __int64 *a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned __int64 v7; // rsi
  __int64 *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // r13
  __int64 *v16; // rbp
  __int64 v17; // rax

  if ( !(unsigned __int8)sub_66D270(a1, a2[6], a3, a4, a5, a6) )
    return 0;
  if ( (unsigned __int64)a2[9] > 7 && (a2[9] & 6) != 2 )
  {
    if ( !(_BYTE)qword_4AD2108 && __cxa_guard_acquire(&qword_4AD2108) )
    {
      LODWORD(qword_4AD2120[0]) = 0;
      qword_4AD2120[1] = 0;
      qword_4AD2120[3] = 0;
      __cxa_guard_release(&qword_4AD2108);
    }
    v7 = a2[9];
    if ( v7 <= 7 )
    {
      v8 = qword_4AD2120;
      goto LABEL_10;
    }
    v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    v9 = a2[9] & 6;
    if ( v9 == 2 )
    {
      v17 = v8[9];
      v8 = nullptr;
      if ( !v17 || (v8 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL), (v17 & 6) != 4) || !v8 )
      {
LABEL_10:
        if ( !(unsigned __int8)sub_674590(a1, (__int64)v8, a3, a4, a5, a6) )
          return 0;
        goto LABEL_11;
      }
    }
    else if ( v9 != 4 )
    {
      goto LABEL_10;
    }
    v8 = (__int64 *)v8[1];
    goto LABEL_10;
  }
LABEL_11:
  if ( (unsigned __int8)sub_673240(a1, a2[7], a3, a4, a5, a6) )
  {
    v12 = 0;
    if ( (unsigned __int8)sub_79B790(a2) )
      v12 = sub_79AC10(a2);
    v10 = sub_66F3A0(a1, v12, a3, a4, a5, a6);
    if ( (_BYTE)v10 )
    {
      v13 = sub_6434A0((__int64)a2);
      v15 = v14;
      v16 = (__int64 *)v13;
      if ( (__int64 *)v13 == v14 )
        return v10;
      while ( (unsigned __int8)sub_6777E0(a1, *v16, a3, a4, a5, a6) )
      {
        if ( v15 == ++v16 )
          return v10;
      }
    }
  }
  return 0;
}

