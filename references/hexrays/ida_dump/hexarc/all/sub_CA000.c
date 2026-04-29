unsigned __int64 __fastcall sub_CA000(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  char **v11; // rbx
  __int64 v12; // rax
  char *v13; // rsi
  char v14; // al
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 776);
  v2 = v1[22];
  if ( !v2 )
  {
    v24 = 0;
    v25 = 0;
    v5 = v1[21];
    v6 = v1[23];
    v7 = v1 + 21;
    if ( (unsigned __int64)&v24 < v5 || (unsigned __int64)&v24 >= v5 + 24 * v6 )
    {
      v19 = 0;
      if ( v6 > 0xF || (v22 = qvector_reserve(v7, v5, 16, 24), v19 = v1[22], v1[21] = v22, v5 = v22, v19 <= 0xF) )
      {
        v20 = 24 * v19;
        while ( 1 )
        {
          v21 = v20 + v5;
          v20 += 24;
          *(_QWORD *)v21 = 0;
          *(_OWORD *)(v21 + 8) = 0;
          if ( v20 == 384 )
            break;
          v5 = v1[21];
        }
      }
    }
    else
    {
      v8 = 0;
      if ( v6 > 0xF || (v23 = qvector_reserve(v7, v5, 16, 24), v8 = v1[22], v1[21] = v23, v5 = v23, v8 <= 0xF) )
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
    v11 = &off_4A9460;
    do
    {
      v12 = *(_QWORD *)(a1 + 112);
      v13 = *v11;
      v24 = 0;
      v25 = 0;
      v14 = decorate_name(&v24, v13, 1, (*(_DWORD *)(v12 + 48) & 8) == 0 ? 112 : 48, 0, 0.0);
      v15 = v24;
      if ( v14 )
      {
        v16 = (__int64 *)(v2 + *(_QWORD *)(*(_QWORD *)(a1 + 776) + 168LL));
        v17 = *v16;
        *v16 = v24;
        v18 = v16[2];
        v15 = v17;
        *(_OWORD *)(v16 + 1) = v25;
        v24 = v17;
        *((_QWORD *)&v25 + 1) = v18;
      }
      if ( v15 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v15);
      }
      v11 += 2;
      v2 += 24;
    }
    while ( v11 != (char **)&unk_4A9560 );
  }
  return v26 - __readfsqword(0x28u);
}
