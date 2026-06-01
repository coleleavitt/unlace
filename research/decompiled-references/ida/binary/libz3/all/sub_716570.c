__int64 *__fastcall sub_716570(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 *v11; // r8
  unsigned int v12; // esi
  unsigned int v13; // r9d
  __int64 v14; // rdi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // r11
  __int64 *i; // rax
  __int64 v19; // rdx
  _DWORD *v20; // r12
  _QWORD *v21; // r10
  unsigned int v22; // r11d
  __int64 v23; // r12
  bool v24; // zf
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rax
  _DWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  int v38; // edx
  __int64 v39; // r9
  __int64 *v40; // r11
  __int64 *j; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-80h]
  __int64 v49; // [rsp+20h] [rbp-68h]
  __int64 v50; // [rsp+28h] [rbp-60h]
  int v51[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v52; // [rsp+38h] [rbp-50h] BYREF
  __m128i v53[4]; // [rsp+40h] [rbp-48h] BYREF

  v45 = *(_QWORD *)a2;
  sub_7154C0(v53, (__int64 *)a2, a3);
  v8 = v53[0].m128i_i64[0];
  v9 = *(unsigned int *)(a2 + 96);
  *(_QWORD *)v51 = -1;
  v10 = *(_QWORD *)a2;
  v11 = *(__int64 **)(a2 + 88);
  *a1 = 0;
  v12 = *(_DWORD *)(v8 + 12);
  v13 = v9 - 1;
  v14 = 16 * v9;
  a1[1] = v10;
  v15 = &v11[(unsigned __int64)v14 / 8];
  v16 = 16LL * (v13 & v12);
  v17 = &v11[(unsigned __int64)v16 / 8];
  if ( v16 != v14 )
  {
    for ( i = &v11[(unsigned __int64)v16 / 8]; v15 != i; i += 2 )
    {
      v19 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v12 && v8 == v19 )
        {
LABEL_13:
          v23 = i[1];
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
LABEL_15:
          *a1 = v23;
          goto LABEL_16;
        }
      }
      else if ( !v19 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v11 == v17 )
  {
LABEL_8:
    if ( *(_WORD *)(v8 + 4) )
      goto LABEL_27;
    goto LABEL_9;
  }
  i = v11;
  while ( 1 )
  {
    v26 = *i;
    if ( (unsigned __int64)*i <= 1 )
      break;
    if ( *(_DWORD *)(v26 + 12) == v12 && v8 == v26 )
      goto LABEL_13;
LABEL_23:
    i += 2;
    if ( v17 == i )
      goto LABEL_8;
  }
  if ( v26 )
    goto LABEL_23;
  if ( *(_WORD *)(v8 + 4) )
  {
LABEL_27:
    if ( !sub_7109E0(*(_QWORD **)(a2 + 112), *(_DWORD *)(a2 + 120), v8) )
      goto LABEL_28;
LABEL_12:
    ++*(_DWORD *)(v8 + 8);
    sub_710AA0(0, v10);
    v23 = v8;
    goto LABEL_15;
  }
LABEL_9:
  v20 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
  if ( !v20 )
    goto LABEL_27;
  if ( !*v20 && v20[1] == 8 && *(_DWORD *)(v8 + 24) == 1 )
  {
    v37 = *(_QWORD *)(v8 + 32);
    v38 = *(_DWORD *)(v37 + 12);
    v39 = 16LL * (v38 & v13);
    v40 = &v11[(unsigned __int64)v39 / 8];
    if ( v14 != v39 )
    {
      for ( j = &v11[(unsigned __int64)v39 / 8]; v15 != j; j += 2 )
      {
        v42 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v42 + 12) == v38 && v37 == v42 )
          {
LABEL_62:
            v43 = sub_15E1A70(v10);
            v23 = v43;
            if ( v43 )
              ++*(_DWORD *)(v43 + 8);
            sub_710AA0(*a1, a1[1]);
            goto LABEL_15;
          }
        }
        else if ( !v42 )
        {
          goto LABEL_11;
        }
      }
    }
    for ( ; v40 != v11; v11 += 2 )
    {
      v44 = *v11;
      if ( (unsigned __int64)*v11 > 1 )
      {
        if ( *(_DWORD *)(v44 + 12) == v38 && v37 == v44 )
          goto LABEL_62;
      }
      else if ( !v44 )
      {
        break;
      }
    }
  }
LABEL_11:
  if ( sub_7109E0(*(_QWORD **)(a2 + 112), *(_DWORD *)(a2 + 120), v8)
    || !*v20 && v20[1] == 8 && *(_DWORD *)(v8 + 24) == 1 && sub_7109E0(v21, v22, *(_QWORD *)(v8 + 32)) )
  {
    goto LABEL_12;
  }
LABEL_28:
  sub_712560(v53, a2, "def");
  v27 = v53[0].m128i_i64[0];
  if ( *(_WORD *)(v8 + 4)
    || (v35 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) == nullptr
    || *v35
    || v35[1] != 8
    || *(_DWORD *)(v8 + 24) != 1 )
  {
    if ( a4 )
    {
      sub_135F9B0(a4, *(_QWORD *)(v53[0].m128i_i64[0] + 16), *(_QWORD *)(*(_QWORD *)a2 + 856LL));
    }
    else if ( !v53[0].m128i_i64[0] )
    {
      goto LABEL_32;
    }
    ++*(_DWORD *)(v27 + 8);
LABEL_32:
    sub_710AA0(*a1, a1[1]);
    v50 = v8;
    v32 = v27;
    goto LABEL_33;
  }
  v50 = *(_QWORD *)(v8 + 32);
  if ( a4 )
    sub_135F9B0(a4, *(_QWORD *)(v53[0].m128i_i64[0] + 16), *(_QWORD *)(*(_QWORD *)a2 + 864LL));
  v36 = sub_15E1A70(*(_QWORD *)a2);
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  v49 = v36;
  sub_710AA0(*a1, a1[1]);
  v32 = v49;
LABEL_33:
  *a1 = v32;
  v53[0].m128i_i64[0] = v27;
  v53[0].m128i_i64[1] = *(_QWORD *)a5;
  sub_7183C0(a2 + 168, v53, v28, v29, v30, v31);
  sub_713110((__int64 *)a2, v27, a5);
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  sub_715950((_QWORD *)a2, v50, (unsigned int *)v51, a6);
  sub_714210(v53, (const __m128i *)a2, v50);
  v33 = v53[0].m128i_i64[0];
  sub_710AA0(v50, v53[0].m128i_i64[1]);
  v34 = sub_15E1B70(*(_QWORD *)a2);
  v52 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  sub_712A90((_QWORD *)(a6 + 8), &v52);
  sub_716220(a2, v27, v50);
  if ( v33 )
  {
    v24 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v10, v33);
  }
  if ( v27 )
  {
    v24 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v10, v27);
  }
LABEL_16:
  v24 = (*(_DWORD *)(v8 + 8))-- == 1;
  if ( v24 )
    sub_15D7BC0(v45, v8);
  return a1;
}

