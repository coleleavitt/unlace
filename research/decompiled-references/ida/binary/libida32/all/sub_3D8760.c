unsigned __int64 __fastcall sub_3D8760(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5, char a6)
{
  __int64 v6; // r13
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rsi
  unsigned int *v30; // r15
  unsigned int v31; // edi
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rdi
  __int64 v36; // rax
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // r15
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+8h] [rbp-70h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  unsigned int v49; // [rsp+20h] [rbp-58h] BYREF
  __int64 v50; // [rsp+28h] [rbp-50h]
  unsigned __int64 v51; // [rsp+38h] [rbp-40h]

  v6 = a2;
  v51 = __readfsqword(0x28u);
  if ( a2 == 2 || a2 == a3 )
  {
    if ( !under_debugger )
      interr(1943);
    goto LABEL_73;
  }
  if ( !(unsigned __int8)sub_3E3CD0(a1, a4) )
  {
    if ( !under_debugger )
      interr(1944);
    goto LABEL_73;
  }
  if ( a6 && !(unsigned __int8)sub_3E3CD0(a1, a5) )
  {
    if ( !under_debugger )
      interr(2134);
    goto LABEL_73;
  }
  v12 = a3;
  v13 = a1 + 48LL * a2 + 32;
  v14 = *(_QWORD *)(a1 + 48LL * a2 + 40);
  if ( !v14 )
    goto LABEL_29;
  v15 = a1 + 48LL * a2 + 32;
  do
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 16);
      v17 = *(_QWORD *)(v14 + 24);
      if ( *(_DWORD *)(v14 + 32) < a4 )
        break;
      v15 = v14;
      v14 = *(_QWORD *)(v14 + 16);
      if ( !v16 )
        goto LABEL_10;
    }
    v14 = *(_QWORD *)(v14 + 24);
  }
  while ( v17 );
LABEL_10:
  v12 = a3;
  if ( v13 == v15 || a4 < *(_DWORD *)(v15 + 32) )
  {
LABEL_29:
    v28 = *(_QWORD *)(a1 + 8);
    v45 = v28;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v28 + 1) )
    {
      v48 = v12;
      v47 = *(_QWORD *)(a1 + 16);
      v38 = qvector_reserve(a1, 0, v28 + 1, 12);
      v39 = *(_QWORD *)(a1 + 16);
      v40 = *(_QWORD **)a1;
      v29 = (_QWORD *)v38;
      v41 = *(_QWORD *)(a1 + 8) - 1LL;
      *(_QWORD *)(a1 + 16) = v47;
      if ( v41 >= 0 )
      {
        do
        {
          v42 = *v40;
          v38 += 12;
          v40 = (_QWORD *)((char *)v40 + 12);
          *(_QWORD *)(v38 - 12) = v42;
          *(_DWORD *)(v38 - 4) = *((_DWORD *)v40 - 1);
        }
        while ( v41-- != 0 );
        v40 = *(_QWORD **)a1;
      }
      qfree(v40);
      *(_QWORD *)(a1 + 16) = v39;
      v28 = *(_QWORD *)(a1 + 8);
      v12 = v48;
      *(_QWORD *)a1 = v29;
    }
    else
    {
      v29 = *(_QWORD **)a1;
    }
    v30 = (unsigned int *)v29 + 3 * v28;
    *(_QWORD *)v30 = 0;
    v30[2] = 0;
    ++*(_QWORD *)(a1 + 8);
    v30[v12] = a5;
    v30[v6] = a4;
    if ( (unsigned __int8)sub_3E3CD0(a1, *v30) )
    {
      v31 = *v30;
      v32 = a1 + 32;
      v50 = v45;
      v33 = *(_QWORD *)(a1 + 40);
      v49 = v31;
      if ( !v33 )
        goto LABEL_41;
      do
      {
        if ( *(_DWORD *)(v33 + 32) >= v31 )
        {
          v32 = v33;
          v33 = *(_QWORD *)(v33 + 16);
        }
        else
        {
          v33 = *(_QWORD *)(v33 + 24);
        }
      }
      while ( v33 );
      if ( a1 + 32 != v32 && v31 >= *(_DWORD *)(v32 + 32) )
      {
        if ( a6 )
        {
          if ( !under_debugger )
            interr(1975);
          goto LABEL_73;
        }
        *(_QWORD *)(v32 + 40) = v45;
      }
      else
      {
LABEL_41:
        sub_3D86B0((_QWORD *)(a1 + 24), v32, (__int64)&v49);
      }
    }
    if ( !(unsigned __int8)sub_3E3CD0(a1, v30[1]) )
      return v51 - __readfsqword(0x28u);
    v34 = v30[1];
    v35 = a1 + 80;
    v50 = v45;
    v36 = *(_QWORD *)(a1 + 88);
    v49 = v34;
    if ( !v36 )
      goto LABEL_62;
    do
    {
      if ( *(_DWORD *)(v36 + 32) >= v34 )
      {
        v35 = v36;
        v36 = *(_QWORD *)(v36 + 16);
      }
      else
      {
        v36 = *(_QWORD *)(v36 + 24);
      }
    }
    while ( v36 );
    if ( v35 == a1 + 80 || v34 < *(_DWORD *)(v35 + 32) )
    {
LABEL_62:
      sub_3D86B0((_QWORD *)(a1 + 72), v35, (__int64)&v49);
      return v51 - __readfsqword(0x28u);
    }
    if ( !a6 )
    {
      *(_QWORD *)(v35 + 40) = v45;
      return v51 - __readfsqword(0x28u);
    }
    if ( !under_debugger )
      interr(1976);
LABEL_73:
    BUG();
  }
  v18 = *(_QWORD *)(v15 + 40);
  v19 = *(_QWORD *)a1 + 12 * v18;
  v20 = (unsigned int *)(v19 + 4LL * a3);
  if ( a5 != *v20 )
  {
    if ( a6 )
    {
      v46 = *(_QWORD *)(v15 + 40);
      v37 = sub_3E3CD0(a1, *(unsigned int *)(v19 + 4LL * a3));
      v12 = a3;
      v18 = v46;
      if ( v37 )
      {
        if ( !under_debugger )
          interr(2135);
        goto LABEL_73;
      }
    }
    *v20 = a5;
    if ( a3 != 2 )
    {
      v49 = a5;
      v50 = v18;
      v21 = *(_QWORD *)(a1 + 48 * v12 + 40);
      v22 = a1 + 48 * v12 + 32;
      if ( !v21 )
        goto LABEL_38;
      do
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v21 + 16);
          v24 = *(_QWORD *)(v21 + 24);
          if ( *(_DWORD *)(v21 + 32) < a5 )
            break;
          v22 = v21;
          v21 = *(_QWORD *)(v21 + 16);
          if ( !v23 )
            goto LABEL_20;
        }
        v21 = *(_QWORD *)(v21 + 24);
      }
      while ( v24 );
LABEL_20:
      if ( a1 + 48 * v12 + 32 == v22 || a5 < *(_DWORD *)(v22 + 32) )
      {
LABEL_38:
        sub_3D86B0((_QWORD *)(a1 + 48 * v12 + 24), v22, (__int64)&v49);
        return v51 - __readfsqword(0x28u);
      }
      v25 = *(_QWORD *)(v22 + 40);
      if ( v18 != v25 )
      {
        v44 = v12;
        v26 = *(_QWORD *)a1 + 12 * v25;
        if ( !(unsigned __int8)sub_3E3CD0(a1, *(unsigned int *)(v26 + 4 * v6)) )
        {
          *(_DWORD *)(v26 + 4 * v44) = *(_DWORD *)(v26 + 4 * v6);
          return v51 - __readfsqword(0x28u);
        }
        if ( !under_debugger )
          interr(1949);
        goto LABEL_73;
      }
    }
  }
  return v51 - __readfsqword(0x28u);
}

