__int64 __fastcall sub_27C940(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 *j; // r12
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // ecx
  __int64 i; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+10h] [rbp-68h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 8);
  v25 = __readfsqword(0x28u);
  if ( v3 == 77 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    v22 = v10;
    v21 = sub_250740(v10);
    if ( (get_tinfo_property(*(_QWORD *)(v21 + 48), 2) & 0x3F) == 0x2D )
    {
      v23 = 0;
      v24 = 0;
      v11 = *(_QWORD *)(v10 + 120);
      v12 = *(_QWORD *)(v10 + 112);
      for ( i = v12 + 56 * v11; i != v12; v12 += 56 )
      {
        v13 = *(__int64 **)(v12 + 32);
        v14 = v24;
        for ( j = &v13[*(_QWORD *)(v12 + 40)]; j != v13; *(_QWORD *)&v24 = v24 + 1 )
        {
          v16 = *v13;
          v17 = v23;
          if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v14 + 1) )
          {
            v23 = qvector_reserve(&v23, v23, v14 + 1, 8);
            v14 = v24;
            v17 = v23;
          }
          *(_QWORD *)(v17 + 8 * v14) = v16;
          ++v13;
          v14 = v24 + 1;
        }
      }
      if ( (get_tinfo_property(*(_QWORD *)(v21 + 48), 2) & 0x3F) == 0x2D && !*(_BYTE *)(v22 + 77) )
      {
        v18 = -1;
        v19 = 8 * *(char *)(v22 + 79);
        if ( (unsigned __int64)v19 <= 0x3F )
          v18 = (1LL << v19) - 1;
        if ( (unsigned __int8)sub_23BEE0(v22 + 72, (__int64 *)(v21 + 48), &v23, *(_QWORD *)(v22 + 64) & v18) )
        {
          copy_tinfo_t(v21 + 48, v21 + 48);
          *(_BYTE *)(a1 + 88) = 1;
        }
      }
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v23);
      }
    }
  }
  else if ( v3 == 80 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v5 + 8) == 61 )
    {
      v6 = *(_QWORD *)(a1 + 80);
      if ( !(_BYTE)v6 )
      {
        sub_368820(&v23, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL), 0);
        copy_tinfo_t(a1 + 80, &v23);
        clear_tinfo_t(&v23);
        v6 = *(_QWORD *)(a1 + 80);
        if ( !(_BYTE)v6 )
          return 0;
        v5 = *(_QWORD *)(a2 + 24);
      }
      v7 = *(_QWORD *)(v5 + 24);
      if ( (get_tinfo_property(v6, 2) & 0x3F) == 0x2D && !*(_BYTE *)(v7 + 13) )
      {
        v8 = -1;
        v9 = 8 * *(char *)(v7 + 15);
        if ( (unsigned __int64)v9 <= 0x3F )
          v8 = (1LL << v9) - 1;
        if ( (unsigned __int8)sub_23BEE0(v7 + 8, (__int64 *)(a1 + 80), nullptr, *(_QWORD *)v7 & v8) )
        {
          copy_tinfo_t(v5 + 48, a1 + 80);
          *(_BYTE *)(a1 + 88) = 1;
        }
      }
    }
  }
  return 0;
}
