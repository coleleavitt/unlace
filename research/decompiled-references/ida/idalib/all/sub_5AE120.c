unsigned __int64 __fastcall sub_5AE120(_QWORD *a1, int a2, int a3, int a4, int a5, char a6)
{
  __int64 v6; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rsi
  __int64 v20; // rax
  char *v21; // rcx
  int v22; // edx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  int v28; // eax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r9
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+8h] [rbp-70h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  char *v48; // [rsp+10h] [rbp-68h]
  int v49; // [rsp+20h] [rbp-58h] BYREF
  __int64 v50; // [rsp+28h] [rbp-50h]
  unsigned __int64 v51; // [rsp+38h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( a2 == 2 || (v6 = a3, a2 == a3) )
  {
    if ( !under_debugger )
      interr(1943);
    goto LABEL_73;
  }
  if ( !a4 )
  {
    if ( !under_debugger )
      interr(1944);
    goto LABEL_73;
  }
  if ( !a5 && a6 )
  {
    if ( !under_debugger )
      interr(2134);
    goto LABEL_73;
  }
  v11 = a2;
  v12 = 6LL * a2;
  v13 = (__int64)&a1[v12 + 4];
  v14 = a1[v12 + 5];
  if ( !v14 )
    goto LABEL_13;
  v15 = v13;
  do
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 16);
      v17 = *(_QWORD *)(v14 + 24);
      if ( a4 > *(_DWORD *)(v14 + 32) )
        break;
      v15 = v14;
      v14 = *(_QWORD *)(v14 + 16);
      if ( !v16 )
        goto LABEL_11;
    }
    v14 = *(_QWORD *)(v14 + 24);
  }
  while ( v17 );
LABEL_11:
  if ( v13 != v15 && *(_DWORD *)(v15 + 32) <= a4 )
  {
    v26 = *(_QWORD *)(v15 + 40);
    v27 = *a1 + 12 * v26;
    v28 = *(_DWORD *)(v27 + 4LL * (int)v6);
    if ( v28 != a5 )
    {
      if ( v28 && a6 )
      {
        if ( !under_debugger )
          interr(2135);
        goto LABEL_73;
      }
      *(_DWORD *)(v27 + 4LL * (int)v6) = a5;
      if ( (_DWORD)v6 != 2 )
      {
        v49 = a5;
        v50 = v26;
        v30 = a1[6 * (int)v6 + 5];
        v31 = (__int64)&a1[6 * (int)v6 + 4];
        if ( !v30 )
          goto LABEL_38;
        do
        {
          while ( 1 )
          {
            v32 = *(_QWORD *)(v30 + 16);
            v33 = *(_QWORD *)(v30 + 24);
            if ( a5 > *(_DWORD *)(v30 + 32) )
              break;
            v31 = v30;
            v30 = *(_QWORD *)(v30 + 16);
            if ( !v32 )
              goto LABEL_33;
          }
          v30 = *(_QWORD *)(v30 + 24);
        }
        while ( v33 );
LABEL_33:
        if ( &a1[6 * (int)v6 + 4] == (_QWORD *)v31 || a5 < *(_DWORD *)(v31 + 32) )
        {
LABEL_38:
          sub_5ADC80(&a1[6 * (int)v6 + 3], v31, (__int64)&v49);
        }
        else
        {
          v34 = *(_QWORD *)(v31 + 40);
          if ( v26 != v34 )
          {
            v35 = *a1 + 12 * v34;
            if ( *(_DWORD *)(v35 + 4 * v11) )
            {
              if ( !under_debugger )
                interr(1949);
              goto LABEL_73;
            }
            *(_DWORD *)(v35 + 4LL * (int)v6) = 0;
          }
        }
      }
    }
  }
  else
  {
LABEL_13:
    v18 = a1[1];
    if ( a1[2] < (unsigned __int64)(v18 + 1) )
    {
      v46 = a1[2];
      v44 = a1[1];
      v38 = qvector_reserve(a1, 0, v18 + 1, 12);
      v39 = a1[2];
      v40 = (_QWORD *)*a1;
      v19 = (_QWORD *)v38;
      v41 = a1[1] - 1LL;
      a1[2] = v46;
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
        v40 = (_QWORD *)*a1;
      }
      v47 = v39;
      qfree(v40);
      v20 = a1[1];
      v18 = v44;
      *a1 = v19;
      a1[2] = v47;
    }
    else
    {
      v19 = (_QWORD *)*a1;
      v20 = a1[1];
    }
    v21 = (char *)v19 + 12 * v20;
    *(_QWORD *)v21 = 0;
    *((_DWORD *)v21 + 2) = 0;
    ++a1[1];
    *(_DWORD *)&v21[4 * v6] = a5;
    *(_DWORD *)&v21[4 * v11] = a4;
    v22 = *(_DWORD *)v21;
    if ( *(_DWORD *)v21 )
    {
      v36 = a1[5];
      v49 = *(_DWORD *)v21;
      v50 = v18;
      v37 = (__int64)(a1 + 4);
      if ( !v36 )
        goto LABEL_57;
      do
      {
        if ( v22 <= *(_DWORD *)(v36 + 32) )
        {
          v37 = v36;
          v36 = *(_QWORD *)(v36 + 16);
        }
        else
        {
          v36 = *(_QWORD *)(v36 + 24);
        }
      }
      while ( v36 );
      if ( a1 + 4 == (_QWORD *)v37 || v22 < *(_DWORD *)(v37 + 32) )
      {
LABEL_57:
        v48 = v21;
        v45 = v18;
        sub_5ADC80(a1 + 3, v37, (__int64)&v49);
        v18 = v45;
        v21 = v48;
      }
      else
      {
        if ( a6 )
        {
          if ( !under_debugger )
            interr(1975);
          goto LABEL_73;
        }
        *(_QWORD *)(v37 + 40) = v18;
      }
    }
    v23 = *((_DWORD *)v21 + 1);
    if ( v23 )
    {
      v24 = a1[11];
      v49 = *((_DWORD *)v21 + 1);
      v50 = v18;
      v25 = (__int64)(a1 + 10);
      if ( !v24 )
        goto LABEL_58;
      do
      {
        if ( v23 <= *(_DWORD *)(v24 + 32) )
        {
          v25 = v24;
          v24 = *(_QWORD *)(v24 + 16);
        }
        else
        {
          v24 = *(_QWORD *)(v24 + 24);
        }
      }
      while ( v24 );
      if ( a1 + 10 == (_QWORD *)v25 || v23 < *(_DWORD *)(v25 + 32) )
      {
LABEL_58:
        sub_5ADC80(a1 + 9, v25, (__int64)&v49);
        return v51 - __readfsqword(0x28u);
      }
      if ( !a6 )
      {
        *(_QWORD *)(v25 + 40) = v18;
        return v51 - __readfsqword(0x28u);
      }
      if ( !under_debugger )
        interr(1976);
LABEL_73:
      BUG();
    }
  }
  return v51 - __readfsqword(0x28u);
}
