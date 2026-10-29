unsigned __int64 __fastcall sub_D5940(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  char **v10; // rbx
  char v11; // al
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 768);
  v2 = v1[22];
  if ( !v2 )
  {
    v21 = 0;
    v22 = 0;
    v5 = v1[21];
    v6 = v1[23];
    if ( (unsigned __int64)&v21 < v5 || (unsigned __int64)&v21 >= v5 + 24 * v6 )
    {
      v16 = 0;
      if ( v6 > 0xF || (v19 = qvector_reserve(), v16 = v1[22], v1[21] = v19, v5 = v19, v16 <= 0xF) )
      {
        v17 = 24 * v16;
        while ( 1 )
        {
          v18 = v17 + v5;
          v17 += 24;
          *(_QWORD *)v18 = 0;
          *(_OWORD *)(v18 + 8) = 0;
          if ( v17 == 384 )
            break;
          v5 = v1[21];
        }
      }
    }
    else
    {
      v7 = 0;
      if ( v6 > 0xF || (v20 = qvector_reserve(), v7 = v1[22], v1[21] = v20, v5 = v20, v7 <= 0xF) )
      {
        v8 = 24 * v7;
        while ( 1 )
        {
          v9 = v8 + v5;
          v8 += 24;
          *(_QWORD *)v9 = 0;
          *(_OWORD *)(v9 + 8) = 0;
          if ( v8 == 384 )
            break;
          v5 = v1[21];
        }
      }
    }
    v1[22] = 16;
    v10 = &off_4DC940;
    do
    {
      v21 = 0;
      v22 = 0;
      v11 = decorate_name();
      v12 = v21;
      if ( v11 )
      {
        v13 = (__int64 *)(v2 + *(_QWORD *)(*(_QWORD *)(a1 + 768) + 168LL));
        v14 = *v13;
        *v13 = v21;
        v15 = v13[2];
        v12 = v14;
        *(_OWORD *)(v13 + 1) = v22;
        v21 = v14;
        *((_QWORD *)&v22 + 1) = v15;
      }
      if ( v12 )
      {
        *(_QWORD *)&v22 = 0;
        qfree();
      }
      v10 += 2;
      v2 += 24;
    }
    while ( v10 != (char **)&unk_4DCA40 );
  }
  return v23 - __readfsqword(0x28u);
}
