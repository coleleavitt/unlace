__int64 __fastcall sub_208DC00(__int64 a1)
{
  char *v2; // rbp
  char *v3; // r12
  char *v4; // rdi
  void *v5; // rbp
  __int64 *v6; // rbp
  __int64 v7; // r12
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rdx
  _WORD v12[44]; // [rsp+0h] [rbp-58h] BYREF

  sub_208D8F0(a1, 1);
  v2 = *(char **)(a1 + 96);
  if ( v2 )
  {
    v3 = &v2[40 * *(_QWORD *)(a1 + 104)];
    if ( v2 != v3 )
    {
      do
      {
        v12[16] = 257;
        sub_20CC090(v2, v12);
        v4 = v2;
        v2 += 40;
        sub_20CC0C0(v4);
      }
      while ( v3 != v2 );
      v3 = *(char **)(a1 + 96);
    }
    operator delete(v3);
    *(_QWORD *)(a1 + 96) = 0;
  }
  if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
  {
    sub_2092200(**(_QWORD **)(a1 + 8), a1);
    *(_WORD *)(a1 + 2) &= ~0x4000u;
  }
  v5 = *(void **)(a1 + 112);
  if ( v5 )
  {
    sub_20CDDA0(*(_QWORD *)(a1 + 112));
    operator delete(v5, 0x20u);
  }
  v6 = *(__int64 **)(a1 + 80);
  v7 = a1 + 72;
  if ( (__int64 *)(a1 + 72) != v6 )
  {
    while ( 1 )
    {
      v8 = (__int64 *)v6[1];
      sub_208D370(a1 + 72, (__int64)(v6 - 3));
      v9 = *v6;
      v10 = (__int64 *)v6[1];
      *v10 = *v6;
      *(_QWORD *)(v9 + 8) = v10;
      *(_OWORD *)v6 = 0;
      if ( v6 == &qword_18 )
      {
        if ( (__int64 *)v7 == v8 )
          return sub_208DE60(a1);
      }
      else
      {
        sub_204BEA0((__int64)(v6 - 3));
        operator delete(v6 - 3, 0x50u);
        if ( (__int64 *)v7 == v8 )
          return sub_208DE60(a1);
      }
      v6 = v8;
    }
  }
  return sub_208DE60(a1);
}
