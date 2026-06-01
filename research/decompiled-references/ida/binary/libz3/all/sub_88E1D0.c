char __fastcall sub_88E1D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  char result; // al
  bool v6; // zf
  __int64 v7; // rax
  __int64 *v8; // rdx
  _DWORD *v9; // r14
  __int64 v10; // r12
  bool v11; // bl
  _DWORD *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // ebp
  _DWORD *v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  _DWORD *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // r13d
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rsi
  __int64 v32; // rdi
  __m128 *v33; // rax
  char v34; // al
  void *v35; // rdi
  char v36; // al
  void *v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rsi
  __int64 v42; // rdi
  _DWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  void *v49; // [rsp+8h] [rbp-90h]
  __int64 v50; // [rsp+10h] [rbp-88h]
  char v51; // [rsp+2Fh] [rbp-69h] BYREF
  __m128i v52; // [rsp+30h] [rbp-68h] BYREF
  __int64 v53; // [rsp+40h] [rbp-58h] BYREF
  __int64 v54; // [rsp+48h] [rbp-50h]
  __int64 v55; // [rsp+50h] [rbp-48h] BYREF
  __int64 v56; // [rsp+58h] [rbp-40h]

  v4 = a3;
  result = sub_15D2CB0(*(_QWORD *)(a1 + 72), **(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * a2));
  if ( !result )
  {
    if ( *(_DWORD *)(a1 + 104) )
    {
      do
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
        v6 = (*(_DWORD *)(a1 + 104))-- == 1;
      }
      while ( !v6 );
    }
    v7 = *(_QWORD *)(a1 + 88);
    v8 = *(__int64 **)(v7 + 8LL * a2);
    v9 = (_DWORD *)*v8;
    v10 = **(_QWORD **)(v7 + 8 * v4);
    if ( *(_DWORD *)v10 >= *(_DWORD *)*v8 )
    {
      v10 = *v8;
      v9 = **(_DWORD ***)(v7 + 8 * v4);
    }
    result = sub_15D27F0(*(_QWORD *)(a1 + 72), v10, v9);
    v11 = result;
    if ( !result )
    {
      if ( !*(_WORD *)(v10 + 4) )
      {
        v12 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
        if ( v12 )
        {
          if ( *v12 == 5 && !v12[1] )
          {
            v43 = (_DWORD *)v10;
            v10 = (__int64)v9;
            v9 = v43;
          }
        }
      }
      v13 = sub_7E58D0(a1, v10, (__int64)v9);
      v14 = *(_QWORD *)(a1 + 832);
      v15 = v13;
      if ( !*((_WORD *)v9 + 2) && (v16 = *(_DWORD **)(*((_QWORD *)v9 + 2) + 24LL)) != nullptr && *v16 == 5 && !v16[1] )
      {
        v44 = sub_15E1B70(v14);
        v28 = sub_7E58C0(a1, v44);
        v45 = sub_15E1B70(*(_QWORD *)(a1 + 832));
        v30 = sub_7E58C0(a1, v45);
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 72);
        v18 = sub_15E1B70(v14);
        v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)v17);
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v50 = *(_QWORD *)(a1 + 72);
        v19 = *(_DWORD **)(sub_15D1F10(v10) + 24);
        if ( v19 && *v19 == 5 )
          v11 = v19[1] == 1;
        v53 = 0;
        v54 = 0;
        v55 = 1;
        v56 = 0;
        sub_182CBA0(qword_1C7F2C0, &v55);
        v23 = *(_QWORD *)(a1 + 840);
        BYTE4(v55) &= ~1u;
        LODWORD(v55) = 1;
        if ( !v23 )
        {
          sub_16669E0(a1 + 832);
          v23 = *(_QWORD *)(a1 + 840);
        }
        v24 = sub_166A700(v23, (unsigned int)&v53, v11, v20, v21, v22);
        v25 = v24;
        if ( v24 )
          ++*(_DWORD *)(v24 + 8);
        v49 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v53);
        sub_182CBA0(v49, &v55);
        sub_7E5890(a1, (__int64)&v52);
        if ( !*(_WORD *)(v52.m128i_i64[0] + 4) )
        {
          v26 = *(_DWORD **)(*(_QWORD *)(v52.m128i_i64[0] + 16) + 24LL);
          if ( v26 )
          {
            if ( *v26 == 5 && !v26[1] )
            {
              v53 = 0;
              v54 = 0;
              v55 = 1;
              v56 = 0;
              v34 = sub_1666AE0(a1 + 832, v52.m128i_i64[0], &v53, &v51);
              v35 = qword_1C7F2C0;
              if ( !v34 || (_DWORD)v53 )
              {
                sub_182CBA0(qword_1C7F2C0, &v53);
                result = sub_182CBA0(v35, &v55);
              }
              else
              {
                sub_182CBA0(qword_1C7F2C0, &v53);
                sub_182CBA0(v35, &v55);
                v53 = 0;
                v54 = 0;
                v55 = 1;
                v56 = 0;
                v36 = sub_1666AE0(a1 + 832, v52.m128i_i64[0], &v53, &v51);
                v37 = qword_1C7F2C0;
                if ( !v36 || (_DWORD)v53 )
                {
                  sub_182CBA0(qword_1C7F2C0, &v53);
                  sub_182CBA0(v37, &v55);
                  result = sub_7E5160(a1, v15 ^ 1, nullptr, v46, v47, v48);
                }
                else
                {
                  sub_182CBA0(qword_1C7F2C0, &v53);
                  sub_182CBA0(v37, &v55);
                  result = sub_7E5160(a1, v15, nullptr, v38, v39, v40);
                }
              }
              if ( v25 )
              {
                v6 = (*(_DWORD *)(v25 + 8))-- == 1;
                if ( v6 )
                  result = sub_15D7BC0(v50, v25);
              }
              v41 = v52.m128i_i64[0];
              if ( v52.m128i_i64[0] )
              {
                v42 = v52.m128i_i64[1];
                v6 = (*(_DWORD *)(v52.m128i_i64[0] + 8))-- == 1;
                if ( v6 )
                  return sub_15D7BC0(v42, v41);
              }
              return result;
            }
          }
        }
        v27 = sub_15E1B70(*(_QWORD *)(a1 + 832));
        v28 = sub_7E58C0(a1, v27);
        v29 = sub_15E1B70(*(_QWORD *)(a1 + 832));
        v30 = sub_7E58C0(a1, v29);
        if ( v25 )
        {
          v6 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v50, v25);
        }
        v31 = v52.m128i_i64[0];
        if ( v52.m128i_i64[0] )
        {
          v32 = v52.m128i_i64[1];
          v6 = (*(_DWORD *)(v52.m128i_i64[0] + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v32, v31);
        }
      }
      ++*(_DWORD *)(a1 + 436);
      sub_88CE90(a1, v15 ^ 1, v28);
      sub_88CE90(a1, v15 ^ 1, v30);
      v33 = (__m128 *)sub_880460(a1, v28, v30, v15);
      return sub_7E5420(a1, v28 ^ 1, v30 ^ 1, v15, v33);
    }
  }
  return result;
}

