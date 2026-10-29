void __fastcall sub_782A90(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  signed __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rdi

  if ( a3 )
  {
    v6 = 8 * a3;
    *(_DWORD *)(a1 + 80) = a3;
    v7 = (_QWORD *)sub_798D40(a1);
    v8 = -1;
    v9 = v7[274];
    if ( a3 <= 0xFFFFFFFFFFFFFFFLL )
      v8 = v6;
    v7[284] += v8;
    v10 = (_QWORD *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v7[275] >= (unsigned __int64)v10 + v8 && v9 )
      v7[274] = (char *)v10 + v8;
    else
      v10 = (_QWORD *)sub_779030((__int64)(v7 + 274), v8, 3);
    *(_QWORD *)(a1 + 72) = v10;
    if ( v6 <= 8 )
    {
      if ( v6 == 8 )
        *v10 = *a2;
    }
    else
    {
      memmove(v10, a2, v6);
    }
  }
}

