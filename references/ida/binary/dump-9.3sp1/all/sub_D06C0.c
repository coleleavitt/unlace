unsigned __int64 __fastcall sub_D06C0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  char **v11; // rbx
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 776);
  v2 = v1[22];
  if ( !v2 )
  {
    v22 = 0;
    v23 = 0;
    v5 = v1[21];
    v6 = v1[23];
    v7 = (__int64)(v1 + 21);
    if ( (unsigned __int64)&v22 < v5 || (unsigned __int64)&v22 >= v5 + 24 * v6 )
    {
      v17 = 0;
      if ( v6 > 0xF || (v20 = qvector_reserve(v7, v5, 16, 24), v17 = v1[22], v1[21] = v20, v5 = v20, v17 <= 0xF) )
      {
        v18 = 24 * v17;
        while ( 1 )
        {
          v19 = v18 + v5;
          v18 += 24;
          *(_QWORD *)v19 = 0;
          *(_OWORD *)(v19 + 8) = 0;
          if ( v18 == 384 )
            break;
          v5 = v1[21];
        }
      }
    }
    else
    {
      v8 = 0;
      if ( v6 > 0xF || (v21 = qvector_reserve(v7, v5, 16, 24), v8 = v1[22], v1[21] = v21, v5 = v21, v8 <= 0xF) )
      {
        v9 = 24 * v8;
        while ( 1 )
        {
          v10 = v9 + v5;
          v9 += 24;
          *(_QWORD *)v10 = 0;
          *(_OWORD *)(v10 + 8) = 0;
          if ( v9 == 384 )
            break;
          v5 = v1[21];
        }
      }
    }
    v1[22] = 16;
    v11 = &off_4DCC20;
    do
    {
      v22 = 0;
      v23 = 0;
      v12 = decorate_name();
      v13 = v22;
      if ( v12 )
      {
        v14 = v2 + *(_QWORD *)(*(_QWORD *)(a1 + 776) + 168LL);
        v15 = *(_QWORD *)v14;
        *(_QWORD *)v14 = v22;
        v16 = *(_QWORD *)(v14 + 16);
        v13 = v15;
        *(_OWORD *)(v14 + 8) = v23;
        v22 = v15;
        *((_QWORD *)&v23 + 1) = v16;
      }
      if ( v13 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v13);
      }
      v11 += 2;
      v2 += 24;
    }
    while ( v11 != (char **)&unk_4DCD20 );
  }
  return v24 - __readfsqword(0x28u);
}
