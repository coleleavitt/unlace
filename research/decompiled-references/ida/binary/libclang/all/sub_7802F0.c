void __fastcall sub_7802F0(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v5; // rsi
  signed __int64 v6; // r12
  __int64 v8; // rax
  _QWORD *v10; // rdi

  if ( a4 )
  {
    v5 = -1;
    v6 = 8 * a4;
    v8 = a2[274];
    if ( a4 <= 0xFFFFFFFFFFFFFFFLL )
      v5 = 8 * a4;
    a2[284] += v5;
    v10 = (_QWORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[275] >= (unsigned __int64)v10 + v5 && v8 )
      a2[274] = (char *)v10 + v5;
    else
      v10 = (_QWORD *)sub_779030((__int64)(a2 + 274), v5, 3);
    *(_QWORD *)(a1 + 120) = v10;
    if ( v6 <= 8 )
    {
      if ( v6 == 8 )
        *v10 = *a3;
    }
    else
    {
      memmove(v10, a3, v6);
    }
  }
}

