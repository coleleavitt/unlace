__int64 __fastcall sub_87A350(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v8; // ebp
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int8 v36; // [rsp+1Fh] [rbp-89h]
  __int64 v37; // [rsp+20h] [rbp-88h] BYREF
  __int64 v38; // [rsp+28h] [rbp-80h]
  __m128i v39; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  __m128i v42; // [rsp+50h] [rbp-58h]
  __int64 v43; // [rsp+60h] [rbp-48h]
  __int64 v44; // [rsp+68h] [rbp-40h]

  v38 = a1[9];
  v4 = *(_QWORD *)(a3 + 8);
  v37 = 0;
  if ( v4 )
  {
    v36 = 1;
    v8 = 0;
    do
    {
      if ( v8 >= *(_DWORD *)(v4 - 4) )
        break;
      v9 = *(_QWORD *)(v4 + 8LL * v8);
      v10 = sub_15E1A70(a1[17]);
      v11 = a1[17];
      v39 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)(unsigned __int64)v10);
      v12 = sub_15E1AF0(v11);
      v13 = a1[17];
      v40 = v12;
      v41 = a4;
      v14 = sub_15E1AF0(v13);
      v15 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v16 = v37;
      if ( v37 )
      {
        v17 = v38;
        v18 = (*(_DWORD *)(v37 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v17, v16);
      }
      v19 = a1[10];
      v37 = v15;
      sub_14B9B80(v19 + 2192, &v37);
      if ( a4 != v37 )
      {
        v23 = *(_QWORD *)(a2 + 8LL * v8 + 32);
        v24 = sub_15E1A70(a1[17]);
        v25 = a1[17];
        v42 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)(unsigned __int64)v24);
        v43 = sub_15E1AF0(v25);
        v26 = a1[17];
        v44 = a2;
        v27 = sub_15E1AF0(v26);
        v28 = v27;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v29 = v37;
        if ( v37 )
        {
          v30 = v38;
          v18 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v30, v29);
        }
        v37 = v28;
        v31 = sub_7E58D0((__int64)a1, v28, a2);
        sub_7E5160((__int64)a1, v31, nullptr, v32, v33, v34);
        v36 = 0;
      }
      v4 = *(_QWORD *)(a3 + 8);
      ++v8;
    }
    while ( v4 );
    v20 = v37;
    v21 = v38;
    if ( v37 )
    {
      v18 = (*(_DWORD *)(v37 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v21, v20);
    }
  }
  else
  {
    return 1;
  }
  return v36;
}

