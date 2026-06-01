unsigned __int64 __fastcall sub_6A6A80(
        __int64 a1,
        unsigned int a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 *v8; // rdi
  unsigned int tinfo_tid; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // r8
  _QWORD *v13; // r9
  unsigned __int64 v14; // r10
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  _QWORD *v26; // r13
  char *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v38; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-30h]

  v8 = *(__int64 **)a1;
  v39 = __readfsqword(0x28u);
  v38 = 0;
  if ( !(unsigned int)sub_69CC60(v8, a2, 1, (__int64)&v38, a7) )
  {
    v20 = *(_QWORD *)(a1 + 104);
    v21 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v20 + 1) )
    {
      v23 = qvector_reserve(a1 + 96, v21, v20 + 1, 4);
      *(_QWORD *)(a1 + 96) = v23;
      v21 = v23;
      v20 = *(_QWORD *)(a1 + 104);
    }
    *(_DWORD *)(v21 + 4 * v20) = a2;
    ++*(_QWORD *)(a1 + 104);
    goto LABEL_20;
  }
  tinfo_tid = get_tinfo_tid(&v38, 0);
  v37 = tinfo_tid;
  v11 = tinfo_tid;
  if ( tinfo_tid == -1 )
  {
    if ( !under_debugger )
      interr(3053);
    BUG();
  }
  if ( tinfo_tid == a2 )
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
    v34 = v38;
    ++*(_QWORD *)(a1 + 80);
    v35 = *v33;
    *v33 = v34;
    v38 = v35;
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
      if ( v11 != *(_DWORD *)(*v13 + 8LL) )
      {
        do
        {
          v16 = (_QWORD *)*v15;
          if ( !*v15 )
            goto LABEL_26;
          v13 = v15;
          if ( v14 != *((unsigned int *)v16 + 2) % v12 )
            goto LABEL_26;
          v15 = (_QWORD *)*v15;
        }
        while ( v11 != *((_DWORD *)v16 + 2) );
      }
      if ( v13 )
      {
        v17 = (__int64 *)*v13;
        if ( *v13 )
        {
LABEL_12:
          v18 = v17[22];
          if ( v18 )
          {
            v19 = 0;
            while ( *(_DWORD *)(v17[6] + 32 * v19 + 24) != a2 )
            {
              if ( ++v19 == v18 )
                goto LABEL_20;
            }
            v17[22] = v19;
          }
          goto LABEL_20;
        }
      }
    }
  }
  else
  {
    v17 = *(__int64 **)(a1 + 32);
    if ( v17 )
    {
      while ( tinfo_tid != *((_DWORD *)v17 + 2) )
      {
        v17 = (__int64 *)*v17;
        if ( !v17 )
          goto LABEL_26;
      }
      goto LABEL_12;
    }
  }
LABEL_26:
  v24 = sub_6A67C0((char **)(a1 + 16), &v37);
  v25 = v38;
  v26 = (_QWORD *)v24;
  v27 = *(char **)a1;
  v28 = *(_QWORD *)(v24 + 168);
  v26[21] = v38;
  v38 = v28;
  if ( (get_tinfo_property(v25, 2) & 0x3F) != 0x1D )
  {
    if ( (unsigned __int8)sub_6A1230(v27, (__int64)v26, v26 + 21, 1, a3, a4) )
    {
      v29 = v26[5];
      v26[20] = v29;
      if ( v29 )
      {
        v30 = 0;
        while ( *(_DWORD *)(v26[4] + 32 * v30 + 24) != a2 )
        {
          if ( v29 == ++v30 )
            goto LABEL_20;
        }
        v26[20] = v30;
      }
    }
  }
LABEL_20:
  clear_tinfo_t(&v38);
  return v39 - __readfsqword(0x28u);
}

