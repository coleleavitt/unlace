unsigned __int64 __fastcall sub_77D930(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  bool v4; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx

  v4 = a4 != 0;
  v8 = a1[274];
  v9 = 8 * (a3 + (a4 != 0) + 1);
  a1[284] += v9;
  v10 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v9 + v10 && v8 )
    a1[274] = v9 + v10;
  else
    v10 = sub_779030((__int64)(a1 + 274), v9, 3);
  *(_DWORD *)v10 = a3;
  *(_BYTE *)(v10 + 4) = v4;
  if ( 8 * a3 <= 8 )
  {
    if ( 8 * a3 == 8 )
      *(_QWORD *)(v10 + 8) = *a2;
  }
  else
  {
    memmove((void *)(v10 + 8), a2, 8 * a3);
  }
  if ( a4 )
    *(_QWORD *)(v10 + 8LL * (unsigned int)a3 + 8) = a4;
  return v10;
}

