bool __fastcall sub_BAE9A0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  bool result; // al
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = a2;
  v8 = *(_QWORD *)(a1 + 120);
  if ( !v8 )
  {
    a2 = *(_QWORD *)(a1 + 96);
    sub_A794E0((__int64 *)(a2 + 88), a2, (__int64)a3, a4, a5, a6);
    v8 = *(_QWORD *)(a1 + 120);
  }
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 || a1 != *(_QWORD *)v9 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    v11 = *(_QWORD *)(v10 + 120);
    if ( v11 )
    {
      if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return 0;
    }
    else
    {
      a2 = *(_QWORD *)(v10 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, (__int64)a3, a4, a5, a6);
      if ( (*(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return 0;
    }
    v13 = sub_6E2600(*(_QWORD *)(a1 + 96), a2, (__int64)a3, a4, a5, a6);
    if ( v13 != sub_6E2600(a1, a2, v14, v15, v16, v17) )
      return 0;
    v9 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( (*(_BYTE *)(v9 + 72) & 1) != 0 )
  {
    sub_BA8900(a1);
    v18 = sub_BAE900(a1, a2, v46, v47, v48, v49);
    v22 = v18;
    if ( !v18 )
      return 0;
  }
  else
  {
    v18 = sub_BAE900(a1, a2, (__int64)a3, a4, a5, a6);
    v22 = v18;
    if ( !v18 )
      return 0;
  }
  v23 = sub_BAAB00(v18, v7, 1, v19, v20, v21);
  v28 = v23;
  if ( !v23 || !(result = sub_BA8350(v23, v7, v24, v25, v26, v27)) )
  {
    for ( v50[0] = sub_BAAD00(v22, v7, v24, v25, v26, v27); ; v50[0] = *(_QWORD *)(v50[0] + 128) )
    {
      sub_BA6800(v50);
      if ( !v50[0] )
        break;
      v32 = sub_BAAB00(v50[0], v7, 1, v29, v30, v31);
      v37 = v32;
      if ( v32 && (unsigned int)sub_BA8080(v32, v7, v33, v34, v35, v36) == 3 && (*(_BYTE *)(v37 + 29) & 1) != 0 )
      {
        v42 = sub_B8C3D0(v37, v7, v38, v39, v40, v41);
        v43 = *v42;
        v44 = *v42 + 8LL * *((unsigned int *)v42 + 2);
        if ( *v42 >= v44 )
        {
          if ( v43 != v44 )
          {
            while ( *(_WORD *)(*(_QWORD *)v44 + 36LL) != 427 )
            {
              v44 += 8LL;
              if ( v43 == v44 )
                goto LABEL_16;
            }
LABEL_26:
            if ( a3 )
              *a3 = v37;
            return 1;
          }
        }
        else
        {
          v45 = *v42;
          while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 427 )
          {
            v45 += 8LL;
            if ( v44 == v45 )
              goto LABEL_16;
          }
          if ( v44 != v45 )
            goto LABEL_26;
        }
      }
LABEL_16:
      ;
    }
    return 0;
  }
  if ( a3 )
    *a3 = v28;
  return result;
}
