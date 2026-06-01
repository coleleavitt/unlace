unsigned __int64 __fastcall sub_39F4C0(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  void *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // r15
  unsigned int v20; // r14d
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  _QWORD *v26; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v4 = a2;
  v5 = 104LL * a2;
  v6 = a1 + v5 + 136;
  if ( *(_QWORD *)(a1 + v5 + 184) )
  {
    v7 = *(_QWORD *)(a1 + v5 + 160);
    v9 = a1 + v5 + 152;
    if ( v7 )
    {
      v11 = v6 + 16;
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v7 + 16);
          v13 = *(_QWORD *)(v7 + 24);
          if ( *(_DWORD *)(v7 + 32) < a4 )
            break;
          v11 = v7;
          v7 = *(_QWORD *)(v7 + 16);
          if ( !v12 )
            goto LABEL_7;
        }
        v7 = *(_QWORD *)(v7 + 24);
      }
      while ( v13 );
LABEL_7:
      if ( v9 != v11 )
      {
        v14 = *(_DWORD *)(v11 + 36);
        if ( v14 - 1 < a4 )
        {
          v23 = v5;
          if ( *(_DWORD *)(v11 + 32) == a4 )
          {
            v22 = sub_39E9A0(a1 + v5 + 144, v11, *(_DWORD *)(a1 + 104 * v4 + 200));
            v5 = v23;
            v11 = v22;
          }
          else
          {
            sub_39BBF0(v6, v11, a4 + 1);
            v5 = v23;
          }
          if ( v14 - 1 < a3 )
          {
            v24 = v5;
            v15 = *(_DWORD *)(a1 + 104 * v4 + 192);
            v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(v14)).m128i_u64[0];
            v16 = sub_39ED20((_QWORD *)(a1 + v5 + 144), (unsigned int *)&v29, (unsigned int *)&v29 + 1, v15);
            v5 = v24;
            v11 = (__int64)v16;
          }
        }
      }
    }
    else
    {
      v11 = v6 + 16;
    }
    v17 = *(_QWORD *)(v6 + 32);
    v25 = v5;
    if ( v11 != v17 )
    {
      v18 = std::_Rb_tree_decrement();
      if ( a3 < *(_DWORD *)(v18 + 32) )
      {
        v26 = (_QWORD *)(a1 + v25 + 144);
        v28 = 13 * v4;
        v19 = a1 + 104 * v4;
        while ( 1 )
        {
          v20 = *(_DWORD *)(v18 + 36);
          sub_39E9A0((__int64)v26, v18, *(_DWORD *)(v19 + 200));
          if ( v20 - 1 < a3 )
            break;
          if ( v17 == v18 )
            return v30 - __readfsqword(0x28u);
          v18 = std::_Rb_tree_decrement();
          if ( a3 >= *(_DWORD *)(v18 + 32) )
            return v30 - __readfsqword(0x28u);
          v17 = *(_QWORD *)(v6 + 32);
        }
        v29 = __PAIR64__(v20, a3);
        sub_39ED20(v26, (unsigned int *)&v29, (unsigned int *)&v29 + 1, *(_DWORD *)(a1 + 8 * v28 + 192));
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}

