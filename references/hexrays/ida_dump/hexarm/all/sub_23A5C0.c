unsigned __int64 __fastcall sub_23A5C0(__int64 a1, int a2, char a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  char v12; // cl
  int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // r12
  __int64 v16; // rsi
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  char v23; // bl
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 tinfo_size; // rax
  __int64 v27; // rsi
  _DWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  __m128i v32; // xmm0
  _QWORD *v33; // rbx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  bool v36; // bp
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rsi
  int v41; // eax
  _QWORD *v42; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v43; // [rsp+8h] [rbp-30h]

  v43 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 112);
  if ( v4 != *(_QWORD **)(a1 + 120) )
  {
    while ( 1 )
    {
LABEL_2:
      if ( (v4[10] & 1) != 0 )
      {
        v42 = v4;
        sub_239C40(a1, (__int64)&v42, a2, a3);
      }
      if ( (*v4 & 2) != 0 )
        goto LABEL_7;
      v5 = (_QWORD *)v4[2];
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
        v8 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = *v8;
        if ( (*v8 & 2) == 0 )
        {
          while ( (_QWORD *)v8[2] == v4 )
          {
            v4 = v8;
            v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
            v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v9 & 2) != 0 )
            {
              v4 = (_QWORD *)v10;
              if ( *(_QWORD *)(a1 + 120) != v10 )
                goto LABEL_2;
              goto LABEL_8;
            }
            v8 = (_QWORD *)v10;
          }
        }
        v4 = v8;
        if ( *(_QWORD **)(a1 + 120) == v8 )
          break;
      }
      else
      {
        do
        {
          v4 = v5;
          v5 = (_QWORD *)v5[1];
        }
        while ( (*(_BYTE *)v5 & 2) == 0 );
LABEL_7:
        if ( *(_QWORD **)(a1 + 120) == v4 )
          break;
      }
    }
  }
LABEL_8:
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 176) >= *(_QWORD *)(v6 + 144) )
  {
    v11 = *(_QWORD *)(v6 + 432) + 104LL * a2;
    v12 = sub_22CFE0(a1, v11);
    v13 = *(_DWORD *)(a1 + 200);
    if ( v12 )
    {
      if ( (v13 & 0x1000) == 0 )
      {
        v14 = 1;
        v15 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 944LL);
        v16 = *v15;
        if ( *(int *)(v11 + 88) > 0 )
          v14 = *(int *)(v11 + 88);
        v17 = *(_DWORD *)(*(_QWORD *)(*v15 + 1504LL) + 80LL);
        v18 = (v17 - 1 + *(_QWORD *)(a1 + 176) + v14) & -v17;
        v19 = v15[3];
        if ( v19 < v18 )
          v19 = v18;
        v15[3] = v19;
        v20 = v15[1];
        if ( v20 < v18 && !*(_BYTE *)(v16 + 320) )
        {
          v21 = v15[2];
          v22 = v18 & -*(_DWORD *)(*(_QWORD *)(v16 + 1504) + 80LL);
          v23 = v20 != v22;
          if ( v18 < v20 + v21 )
          {
            v24 = v20 + v21 + v22 - v18;
          }
          else
          {
            v23 |= v21 != 0;
            v24 = v18 & -*(_DWORD *)(*(_QWORD *)(v16 + 1504) + 80LL);
          }
          v15[1] = v22;
          v25 = v15[4];
          v15[2] = v24 - v18;
          tinfo_size = get_tinfo_size(0, v25, 0);
          v27 = v15[2];
          if ( tinfo_size != v27 )
          {
            clear_tinfo_t(v15 + 4);
            v27 = v15[2];
          }
          v28 = (_DWORD *)*v15;
          v29 = *(_DWORD *)(*(_QWORD *)(*v15 + 1504LL) + 80LL);
          v15[3] = (v27 + v15[1] + v29 - 1) & -v29;
          if ( v23 )
            *v28 |= 0x8000000u;
        }
      }
    }
    else if ( (v13 & 0x1000) != 0 )
    {
      v30 = *(_QWORD *)(a1 + 8);
      v31 = *(_QWORD *)(a1 + 176);
      v32 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v30 + 944) + 8LL));
      if ( v31 < _mm_add_epi64(v32, _mm_srli_si128(v32, 8)).m128i_u64[0] )
      {
        BYTE1(v13) &= ~0x10u;
        *(_DWORD *)(a1 + 200) = v13;
        v33 = *(_QWORD **)(v30 + 944);
        v34 = v33[1];
        if ( v34 == -1 || v31 < v34 )
        {
          if ( !under_debugger )
            sub_3835A0(52877);
          BUG();
        }
        v35 = v34 & -*(_DWORD *)(*(_QWORD *)(*v33 + 1504LL) + 80LL);
        v33[1] = v35;
        if ( v34 >= v31 )
        {
          v36 = 1;
          if ( v34 == v35 )
            v36 = v33[2] != 0;
        }
        else
        {
          v36 = v34 != v35;
          v35 += v31 - v34;
        }
        v37 = v33[4];
        v33[2] = v35 - v34;
        v38 = get_tinfo_size(0, v37, 0);
        v39 = v33[2];
        if ( v38 != v39 )
        {
          clear_tinfo_t(v33 + 4);
          v39 = v33[2];
        }
        v40 = (_DWORD *)*v33;
        v41 = *(_DWORD *)(*(_QWORD *)(*v33 + 1504LL) + 80LL);
        v33[3] = (v39 + v33[1] + v41 - 1) & -v41;
        if ( v36 )
          *v40 |= 0x8000000u;
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}
