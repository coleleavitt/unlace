__int64 __fastcall sub_296EC0(__int64 *a1, double a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int i; // ebx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  signed int v17; // r12d
  __int64 v18; // rax
  int *v19; // rdx
  bool v20; // bp
  __int64 v21; // rax
  void *v22; // rdi
  _QWORD **v23; // rbx
  int *v25; // r13
  int v26; // r12d
  int *v27; // rbp
  int *v28; // rax
  int v29; // r15d
  int *v30; // rdi
  __int64 v31; // [rsp+0h] [rbp-B8h]
  int v32; // [rsp+Ch] [rbp-ACh]
  unsigned int v33; // [rsp+10h] [rbp-A8h]
  int *v35; // [rsp+20h] [rbp-98h]
  __int64 v37; // [rsp+30h] [rbp-88h]
  char v39[8]; // [rsp+40h] [rbp-78h] BYREF
  int v40; // [rsp+48h] [rbp-70h] BYREF
  void *v41; // [rsp+50h] [rbp-68h]
  int *v42; // [rsp+58h] [rbp-60h]
  int *v43; // [rsp+60h] [rbp-58h]
  __int64 v44; // [rsp+68h] [rbp-50h]
  unsigned __int64 v45; // [rsp+78h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v40 = 0;
  v42 = &v40;
  v43 = &v40;
  v6 = a4[1];
  v41 = nullptr;
  v44 = 0;
  v37 = v6;
  if ( !v6 )
    return v37;
  v31 = 0;
  v8 = a5 + 8;
  do
  {
    v9 = *a1;
    v33 = *(_DWORD *)(*a4 + 4 * v31);
    if ( a6 )
    {
      v32 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 104))(a1);
      if ( v32 <= 0 )
        goto LABEL_4;
    }
    else
    {
      v32 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, v33);
      if ( v32 <= 0 )
        goto LABEL_4;
    }
    for ( i = 0; i != v32; ++i )
    {
      v11 = *a1;
      v12 = v33;
      if ( a6 )
        v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 120))(a1, v33, i);
      else
        v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 112))(a1, v33, i);
      v14 = a5;
      v15 = *(_QWORD *)(a5 + 16);
      if ( !v15 )
        goto LABEL_17;
      v16 = v8;
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v15 + 16);
          v14 = *(_QWORD *)(v15 + 24);
          if ( *(_DWORD *)(v15 + 32) < v13 )
            break;
          v16 = v15;
          v15 = *(_QWORD *)(v15 + 16);
          if ( !v12 )
            goto LABEL_15;
        }
        v15 = *(_QWORD *)(v15 + 24);
      }
      while ( v14 );
LABEL_15:
      if ( v16 == v8 || v13 < *(_DWORD *)(v16 + 32) )
      {
LABEL_17:
        if ( under_debugger )
          BUG();
        v16 = 40148;
        interr(40148, v12, v15, v14, a2);
      }
      v17 = *(_DWORD *)(v16 + 36);
      v18 = sub_28FC60((__int64)v39, v17, v31);
      if ( v19 )
      {
        v20 = v19 == &v40 || v18 != 0;
        if ( !v20 )
        {
          if ( v17 < v19[8] )
          {
            v20 = 1;
          }
          else if ( v17 == v19[8] )
          {
            v20 = v19[9] > (int)v31;
          }
        }
        v35 = v19;
        v21 = operator new(0x28u);
        *(_QWORD *)&a2 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v31)).m128i_u64[0];
        *(double *)(v21 + 32) = a2;
        std::_Rb_tree_insert_and_rebalance(v20, v21, v35, &v40);
        ++v44;
      }
    }
LABEL_4:
    ++v31;
  }
  while ( v37 != v31 );
  v25 = v42;
  v23 = (_QWORD **)v41;
  if ( v42 == &v40 )
  {
    v37 = 0;
  }
  else
  {
    v26 = 0;
LABEL_35:
    v27 = v25;
    v28 = (int *)std::_Rb_tree_increment(v25);
    v25 = v28;
    if ( v28 != &v40 )
    {
      v29 = v27[8];
      v30 = v28;
      while ( v30[8] < v29 )
      {
        if ( v30[9] > v27[9] )
          goto LABEL_38;
LABEL_39:
        v30 = (int *)std::_Rb_tree_increment(v30);
        if ( v30 == &v40 )
          goto LABEL_35;
      }
      if ( v30[8] <= v29 || v30[9] >= v27[9] )
        goto LABEL_39;
LABEL_38:
      ++v26;
      goto LABEL_39;
    }
    v37 = v26;
  }
  while ( v23 )
  {
    sub_291410(v23[3]);
    v22 = v23;
    v23 = (_QWORD **)v23[2];
    operator delete(v22, 0x28u);
  }
  return v37;
}
