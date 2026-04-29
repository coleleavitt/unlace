__int64 __fastcall sub_7200(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  char *v12; // r13
  __int64 v13; // r12
  void *v14; // rax
  const void *v15; // rsi
  unsigned __int64 v16; // r14
  char *v17; // rbx
  __int64 v18; // rdi
  void *v19; // rax
  const void *v20; // rsi
  unsigned __int64 v23; // [rsp+28h] [rbp-1D0h] BYREF
  __int128 v24; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-1B8h]
  __int128 v26; // [rsp+48h] [rbp-1B0h]
  __int64 v27; // [rsp+58h] [rbp-1A0h]
  __int128 v28; // [rsp+60h] [rbp-198h] BYREF
  __int64 v29; // [rsp+70h] [rbp-188h]
  __int128 v30; // [rsp+78h] [rbp-180h]
  __int64 v31; // [rsp+88h] [rbp-170h]
  __int64 v32; // [rsp+90h] [rbp-168h]
  int v33; // [rsp+98h] [rbp-160h]
  __int128 v34; // [rsp+A0h] [rbp-158h]
  __int64 v35; // [rsp+B0h] [rbp-148h]
  void *v36; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-130h]
  __int64 v38; // [rsp+D8h] [rbp-120h]
  int v39; // [rsp+E0h] [rbp-118h]
  __int64 v40; // [rsp+E8h] [rbp-110h]
  _BYTE v41[192]; // [rsp+F0h] [rbp-108h] BYREF
  char v42; // [rsp+1B0h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+1B8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v5 = is_mapped();
  if ( (_BYTE)v5 )
  {
    v6 = *(_QWORD *)(a1 + 368);
    v5 = 0;
    if ( a3 >= v6 )
    {
      v27 = a1;
      v25 = 0;
      v24 = 0;
      v26 = 0;
      v5 = sub_4AA0((unsigned __int64 *)&v24, a3 - v6, a3, 0);
      if ( (_BYTE)v5 )
      {
        v8 = *(_QWORD *)(a1 + 128);
        v29 = 0;
        v31 = a1;
        v32 = 0xFFFFFFFFLL;
        v33 = 0;
        v35 = -1;
        v36 = 0;
        v28 = 0;
        v30 = 0;
        v34 = -1;
        v37 = 0;
        if ( v8 )
        {
          v19 = (void *)qalloc_or_throw();
          v20 = *(const void **)(a1 + 120);
          v36 = v19;
          *((_QWORD *)&v37 + 1) = v8;
          memcpy(v19, v20, 16 * v8);
          *(_QWORD *)&v37 = v8;
        }
        v9 = *(_QWORD *)(a1 + 160);
        v38 = 0;
        v10 = a1 + 168;
        v39 = -1;
        v11 = 7;
        v12 = v41;
        v40 = v9;
        do
        {
          v13 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)v12 = 0;
          *(_OWORD *)(v12 + 8) = 0;
          if ( v13 )
          {
            v14 = (void *)qalloc_or_throw();
            v15 = *(const void **)v10;
            *(_QWORD *)v12 = v14;
            *((_QWORD *)v12 + 2) = v13;
            memcpy(v14, v15, 8 * v13);
            *((_QWORD *)v12 + 1) = v13;
          }
          v12 += 24;
          --v11;
          v10 += 24;
        }
        while ( v12 != &v42 );
        v42 = *(_BYTE *)(a1 + 360);
        if ( (unsigned __int8)sub_4D90(&v24, 0, (__int64 *)&v23, 0, 0)
          && (v16 = v23, (unsigned __int8)is_mapped())
          && (!*(_QWORD *)(a2 + 8) || !rangeset_t_find_range())
          && (v5 = sub_6C70(&v28, (__int64)&v36, v16, 0), (_BYTE)v5) )
        {
          if ( !*(_QWORD *)(a2 + 8) || !rangeset_t_find_range() )
            sub_6C70(&v28, a2, v16, a4);
        }
        else
        {
          v5 = 0;
        }
        v17 = &v42;
        do
        {
          v18 = *((_QWORD *)v17 - 3);
          v17 -= 24;
          if ( v18 )
          {
            *((_QWORD *)v17 + 1) = 0;
            qfree();
          }
        }
        while ( v17 != v41 );
        if ( v36 )
        {
          *(_QWORD *)&v37 = 0;
          qfree();
        }
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree();
        }
      }
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree();
      }
    }
  }
  return v5;
}
