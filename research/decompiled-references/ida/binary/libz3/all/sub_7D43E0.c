__int64 __fastcall sub_7D43E0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  _DWORD *v4; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v4 || *v4 )
    return 0;
  if ( v4[1] == 8 && *(_DWORD *)(a2 + 24) == 1 )
  {
    v23 = *(_QWORD *)(a2 + 32);
    if ( !*(_WORD *)(v23 + 4) )
    {
      v24 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
      if ( v24 )
      {
        if ( !*v24 && v24[1] == 6 && *(_DWORD *)(v23 + 24) == 2 )
        {
          v25 = *(_QWORD *)(v23 + 32);
          v26 = *(_QWORD *)(v23 + 40);
          if ( sub_7D4320(a1, v25) && sub_7D4320(a1, v26) )
          {
            v39 = sub_15EC2C0(*(_QWORD *)(a1 + 72), v25);
            v40 = v39;
            if ( v39 )
              ++*(_DWORD *)(v39 + 8);
            v41 = *a3;
            if ( *a3 )
            {
              v42 = a3[1];
              v18 = (*(_DWORD *)(v41 + 8))-- == 1;
              if ( v18 )
                sub_15D7BC0(v42, v41);
            }
            *a3 = v40;
            v20 = sub_15EC2C0(*(_QWORD *)(a1 + 72), v26);
            if ( !v20 )
              goto LABEL_27;
            goto LABEL_26;
          }
          if ( *(_WORD *)(a2 + 4) )
            return 0;
          v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
          if ( !v4 )
            return 0;
        }
      }
    }
    v9 = *(_QWORD *)(a1 + 72);
    if ( *v4 )
      return 0;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 72);
  }
  if ( v4[1] == 2 && *(_DWORD *)(a2 + 24) == 2 )
  {
    v27 = *(_QWORD *)(a2 + 32);
    v28 = *(_QWORD *)(a2 + 40);
    if ( (unsigned __int8)sub_15D2CB0(v9, v27) && sub_7D4320(a1, v27) && sub_7D4320(a1, v28) )
    {
      v29 = sub_15E1B70(*(_QWORD *)(a1 + 72));
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v31 = *a3;
      if ( *a3 )
      {
        v32 = a3[1];
        v18 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v32, v31);
      }
      *a3 = v30;
      v20 = sub_15E1B70(*(_QWORD *)(a1 + 72));
      if ( !v20 )
        goto LABEL_27;
      goto LABEL_26;
    }
    if ( *(_WORD *)(a2 + 4) )
      return 0;
    v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v4 || *v4 )
      return 0;
  }
  if ( v4[1] == 5 && *(_DWORD *)(a2 + 24) == 2 )
  {
    v33 = *(_QWORD *)(a2 + 32);
    v34 = *(_QWORD *)(a2 + 40);
    if ( sub_7D4320(a1, v33) && sub_7D4320(a1, v34) )
    {
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      v35 = *a3;
      if ( *a3 )
      {
        v36 = a3[1];
        v18 = (*(_DWORD *)(v35 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v36, v35);
      }
      *a3 = v33;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v37 = *a4;
      if ( *a4 )
      {
        v38 = a4[1];
        v18 = (*(_DWORD *)(v37 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v38, v37);
      }
      *a4 = v34;
      return 1;
    }
    if ( *(_WORD *)(a2 + 4) )
      return 0;
    v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v4 || *v4 )
      return 0;
  }
  if ( v4[1] != 8 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) != 1 )
    return 0;
  v10 = *(_QWORD *)(a2 + 32);
  if ( *(_WORD *)(v10 + 4) )
    return 0;
  v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
  if ( !v11 )
    return 0;
  if ( *v11 )
    return 0;
  if ( v11[1] != 2 )
    return 0;
  if ( *(_DWORD *)(v10 + 24) != 2 )
    return 0;
  v12 = *(_QWORD *)(v10 + 32);
  v13 = *(_QWORD *)(v10 + 40);
  if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 72), v12) || !sub_7D4320(a1, v12) || !sub_7D4320(a1, v13) )
    return 0;
  v14 = sub_15E1B70(*(_QWORD *)(a1 + 72));
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = *a3;
  if ( *a3 )
  {
    v17 = a3[1];
    v18 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v17, v16);
  }
  *a3 = v15;
  v19 = *(_QWORD *)(a1 + 72);
  sub_15EC2C0(v19, v13);
  sub_15EC2C0(*(_QWORD *)(a1 + 72), v12);
  v20 = sub_15E1B70(v19);
  if ( !v20 )
    goto LABEL_27;
LABEL_26:
  ++*(_DWORD *)(v20 + 8);
LABEL_27:
  v21 = *a4;
  if ( *a4 )
  {
    v22 = a4[1];
    v18 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v22, v21);
  }
  *a4 = v20;
  return 1;
}

