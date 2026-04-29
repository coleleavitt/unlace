__int64 __fastcall sub_3AFFA0(__int64 a1, __int64 a2, unsigned int **a3)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 idati; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rbx
  _QWORD *v17; // r13
  __int64 v18; // rcx
  char v19; // si
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // ebp
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v30; // [rsp+18h] [rbp-C0h]
  unsigned int *v31; // [rsp+20h] [rbp-B8h]
  __int64 v32; // [rsp+30h] [rbp-A8h]
  __int64 v33; // [rsp+48h] [rbp-90h] BYREF
  __int64 v34; // [rsp+50h] [rbp-88h] BYREF
  int v35; // [rsp+58h] [rbp-80h]
  __int64 v36; // [rsp+60h] [rbp-78h] BYREF
  __int128 v37; // [rsp+68h] [rbp-70h]
  __int64 v38; // [rsp+80h] [rbp-58h] BYREF
  __int128 v39; // [rsp+88h] [rbp-50h]
  unsigned __int64 v40; // [rsp+98h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v3 = a3[1];
  if ( !v3 )
    return 0;
  v33 = 0;
  v4 = *a3;
  v36 = 0;
  v37 = 0;
  v31 = &v4[(_QWORD)v3];
  if ( v4 == v31 )
  {
    v25 = 0;
    goto LABEL_26;
  }
  do
  {
    v11 = *v4;
    WORD4(v39) = 257;
    *(_QWORD *)&v39 = v11;
    idati = a2;
    if ( !a2 )
      idati = get_idati();
    v38 = idati;
    if ( (unsigned __int8)create_tinfo() )
    {
      sub_3A9370(&v33);
      v7 = *((_QWORD *)&v37 + 1);
      v6 = v37;
      if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
      {
        v13 = qvector_reserve((__int64)&v36, 0, v37 + 1, 24);
        v14 = *((_QWORD *)&v37 + 1);
        v15 = v36;
        *((_QWORD *)&v37 + 1) = v7;
        v30 = v13;
        v32 = v14;
        v16 = v37 - 1;
        if ( (__int64)v37 - 1 >= 0 )
        {
          v17 = (_QWORD *)v13;
          do
          {
            v18 = *(_QWORD *)v15;
            v17[1] = 0;
            *v17 = v18;
            copy_tinfo_t();
            v19 = *(_BYTE *)(v15 + 16);
            v15 += 24;
            v17 += 3;
            *((_BYTE *)v17 - 8) = v19;
            *((_DWORD *)v17 - 1) = *(_DWORD *)(v15 - 4);
            clear_tinfo_t();
          }
          while ( v16-- != 0 );
          v15 = v36;
        }
        qfree(v15);
        v36 = v30;
        *((_QWORD *)&v37 + 1) = v32;
        v6 = v37;
      }
      else
      {
        v30 = v36;
      }
      v8 = v30 + 24 * v6;
      *(_QWORD *)v8 = 0;
      v9 = v33;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)&v37 = v37 + 1;
      v10 = *(_QWORD *)(v8 + 8);
      *(_DWORD *)(v8 + 20) = 0;
      *(_BYTE *)(v8 + 16) = 1;
      *(_QWORD *)(v8 + 8) = v9;
      v33 = v10;
    }
    ++v4;
  }
  while ( v31 != v4 );
  v21 = v37;
  if ( (_QWORD)v37 )
  {
    v38 = 0;
    v39 = 0;
    if ( (_QWORD)v37 == 1 )
    {
      v24 = v36;
      v23 = 0;
      if ( (*(_QWORD *)(v36 + 8) & 0x100LL) != 0 )
      {
        get_tinfo_pdata();
        v23 = v38;
        v24 = v36;
        v21 = v37;
      }
    }
    else
    {
      v22 = qvector_reserve((__int64)&v38, 0, 24, 1);
      v38 = v22;
      *(_QWORD *)&v39 = 24;
      *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_424AA0);
      *(_QWORD *)(v22 + 15) = 0x736570797420656CLL;
      v23 = v38;
      v24 = v36;
      v21 = v37;
      *(_BYTE *)(v38 + 23) = 0;
    }
    v35 = 0;
    v34 = 0xFFFFFFFFLL;
    v25 = sub_3AF790(a1, v23, v24, v21, -1, &v34);
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38);
    }
    v26 = v36;
    if ( !v36 )
      goto LABEL_26;
    v27 = v37;
    if ( (_QWORD)v37 )
    {
      v28 = 0;
      do
      {
        ++v28;
        clear_tinfo_t();
        v26 = v36;
      }
      while ( v27 != v28 );
    }
  }
  else
  {
    v26 = v36;
    if ( !v36 )
    {
      v25 = 0;
      goto LABEL_26;
    }
    v25 = 0;
  }
  *(_QWORD *)&v37 = 0;
  qfree(v26);
LABEL_26:
  clear_tinfo_t();
  return v25;
}
