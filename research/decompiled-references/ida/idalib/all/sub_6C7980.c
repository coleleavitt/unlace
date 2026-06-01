unsigned __int64 __fastcall sub_6C7980(__int64 a1, void *a2, double a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 *v8; // rdi
  unsigned __int64 tinfo_tid; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  _QWORD *v13; // r9
  unsigned __int64 v14; // r10
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  _QWORD *v26; // r13
  __int64 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-30h]

  v8 = *(__int64 **)a1;
  v39 = __readfsqword(0x28u);
  v37 = 0;
  if ( !(unsigned int)sub_6BD6E0(v8, a2, 1, (__int64)&v37, a7) )
  {
    v20 = *(_QWORD *)(a1 + 104);
    v21 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v20 + 1) )
    {
      v23 = qvector_reserve(a1 + 96, v21, v20 + 1, 8);
      *(_QWORD *)(a1 + 96) = v23;
      v21 = v23;
      v20 = *(_QWORD *)(a1 + 104);
    }
    *(_QWORD *)(v21 + 8 * v20) = a2;
    ++*(_QWORD *)(a1 + 104);
    goto LABEL_20;
  }
  tinfo_tid = get_tinfo_tid(&v37, 0);
  v38 = tinfo_tid;
  v11 = tinfo_tid;
  if ( tinfo_tid == -1 )
  {
    if ( !under_debugger )
      interr(3053);
    BUG();
  }
  if ( (void *)tinfo_tid == a2 )
  {
    v31 = *(_QWORD *)(a1 + 80);
    v32 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v31 + 1) )
    {
      v36 = qvector_reserve(a1 + 72, v32, v31 + 1, 8);
      *(_QWORD *)(a1 + 72) = v36;
      v32 = v36;
      v31 = *(_QWORD *)(a1 + 80);
    }
    v33 = (__int64 *)(v32 + 8 * v31);
    *v33 = 0;
    v34 = v37;
    ++*(_QWORD *)(a1 + 80);
    v35 = *v33;
    *v33 = v34;
    v37 = v35;
    goto LABEL_20;
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8 * (tinfo_tid % v12));
    v14 = tinfo_tid % v12;
    if ( v13 )
    {
      v15 = (_QWORD *)*v13;
      if ( v11 != *(_QWORD *)(*v13 + 8LL) )
      {
        do
        {
          v16 = (_QWORD *)*v15;
          if ( !*v15 )
            goto LABEL_26;
          v13 = v15;
          if ( v14 != v16[1] % v12 )
            goto LABEL_26;
          v15 = (_QWORD *)*v15;
        }
        while ( v11 != v16[1] );
      }
      if ( v13 )
      {
        v17 = (_QWORD *)*v13;
        if ( *v13 )
        {
LABEL_12:
          v18 = v17[23];
          if ( v18 )
          {
            v19 = 0;
            while ( *(void **)(v17[7] + 32 * v19 + 24) != a2 )
            {
              if ( ++v19 == v18 )
                goto LABEL_20;
            }
            v17[23] = v19;
          }
          goto LABEL_20;
        }
      }
    }
  }
  else
  {
    v17 = *(_QWORD **)(a1 + 32);
    if ( v17 )
    {
      while ( tinfo_tid != v17[1] )
      {
        v17 = (_QWORD *)*v17;
        if ( !v17 )
          goto LABEL_26;
      }
      goto LABEL_12;
    }
  }
LABEL_26:
  v24 = sub_6C76C0((char **)(a1 + 16), &v38);
  v25 = v37;
  v26 = (_QWORD *)v24;
  v27 = *(__int64 **)a1;
  v28 = *(_QWORD *)(v24 + 176);
  v26[22] = v37;
  v37 = v28;
  if ( (get_tinfo_property(v25, 2) & 0x3F) != 0x1D )
  {
    if ( (unsigned __int8)sub_6C1ED0(v27, (__int64)v26, v26 + 22, 1, a3, a4) )
    {
      v29 = v26[6];
      v26[21] = v29;
      if ( v29 )
      {
        v30 = 0;
        while ( *(void **)(v26[5] + 32 * v30 + 24) != a2 )
        {
          if ( v29 == ++v30 )
            goto LABEL_20;
        }
        v26[21] = v30;
      }
    }
  }
LABEL_20:
  clear_tinfo_t(&v37);
  return v39 - __readfsqword(0x28u);
}
