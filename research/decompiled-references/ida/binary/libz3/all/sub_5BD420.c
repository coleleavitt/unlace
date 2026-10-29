__int64 __fastcall sub_5BD420(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v4; // r8
  _DWORD *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // r13
  unsigned int v10; // r15d
  _DWORD *v11; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r12
  unsigned int v26; // eax
  __int16 v27; // ax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 *v30; // r10
  __int64 v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int16 v34; // ax
  __int64 v35; // rax
  __int16 v36; // ax
  _QWORD *v37; // [rsp+8h] [rbp-90h]
  _QWORD *v38; // [rsp+8h] [rbp-90h]
  __int64 v39; // [rsp+10h] [rbp-88h]
  int v42; // [rsp+38h] [rbp-60h] BYREF
  int v43; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v44; // [rsp+40h] [rbp-58h] BYREF
  __int64 v45; // [rsp+48h] [rbp-50h]
  __int64 v46; // [rsp+50h] [rbp-48h] BYREF
  __int64 v47; // [rsp+58h] [rbp-40h]

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_WORD *)(a2 + 4);
  v9 = v7;
  if ( v8 )
  {
    v10 = 0;
    if ( v8 != 1 )
      return v10;
    v13 = *(_QWORD *)(a1 + 32);
    v14 = 0;
    v15 = 0;
    goto LABEL_7;
  }
  v10 = 0;
  v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v11 || *v11 )
    return v10;
  if ( v11[1] != 4 )
  {
    v15 = 0;
    v14 = 0;
LABEL_21:
    if ( v11[1] == 8 && *(_DWORD *)(v4 + 24) == 1 )
    {
      v4 = *(_QWORD *)(v4 + 32);
      v36 = *(_WORD *)(v4 + 4);
      if ( v36 == 1 )
      {
        *v5 = *(_DWORD *)(v4 + 16);
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 864LL);
        if ( !v21 )
        {
LABEL_28:
          v22 = *v6;
          if ( *v6 )
          {
            v23 = v6[1];
            v19 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v19 )
            {
              v38 = v6;
              sub_15D7BC0(v23, v22);
              v6 = v38;
            }
          }
          *v6 = v21;
          v10 = 1;
          goto LABEL_13;
        }
LABEL_27:
        ++*(_DWORD *)(v21 + 8);
        goto LABEL_28;
      }
      if ( v36 )
        goto LABEL_58;
      v11 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
      if ( !v11 || *v11 )
        goto LABEL_58;
    }
    v10 = 0;
    if ( v11[1] == 2 )
    {
      if ( *(_DWORD *)(v4 + 24) == 2 )
      {
        v35 = *(_QWORD *)(v4 + 32);
        if ( *(_WORD *)(v35 + 4) == 1 )
        {
          v21 = *(_QWORD *)(v4 + 40);
          *v5 = *(_DWORD *)(v35 + 16);
          if ( !v21 )
            goto LABEL_28;
          goto LABEL_27;
        }
      }
      v10 = 0;
      if ( *(_DWORD *)(v4 + 24) == 2 )
      {
        v20 = *(_QWORD *)(v4 + 40);
        if ( *(_WORD *)(v20 + 4) == 1 )
        {
          v21 = *(_QWORD *)(v4 + 32);
          *v5 = *(_DWORD *)(v20 + 16);
          if ( !v21 )
            goto LABEL_28;
          goto LABEL_27;
        }
      }
    }
LABEL_13:
    if ( v14 )
    {
      v19 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v19 )
        sub_15D7BC0(v9, v14);
    }
    goto LABEL_16;
  }
  v24 = *(_QWORD *)(a2 + 40);
  v25 = *(_QWORD *)(v4 + 48);
  v39 = v4;
  v44 = 0;
  v45 = v7;
  v26 = sub_5BD420(a1, v24, (unsigned int)&v42, (unsigned int)&v44, v4, (_DWORD)a3);
  v15 = v44;
  v13 = v45;
  v10 = v26;
  v4 = v39;
  v5 = a3;
  v6 = a4;
  if ( (_BYTE)v26 )
  {
    v46 = 0;
    v47 = v7;
    v28 = sub_5BD420(a1, v25, (unsigned int)&v43, (unsigned int)&v46, v39, (_DWORD)a3);
    v14 = v46;
    v9 = v47;
    v10 = v28;
    v4 = v39;
    v5 = a3;
    v6 = a4;
    if ( (_BYTE)v28 && v42 == v43 )
    {
      *a3 = v42;
      v29 = sub_15E1BF0(*(_QWORD *)(a1 + 32));
      v30 = a4;
      v31 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v32 = *a4;
      if ( *a4 )
      {
        v33 = a4[1];
        v19 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v19 )
        {
          sub_15D7BC0(v33, v32);
          v30 = a4;
        }
      }
      *v30 = v31;
      v7 = v13;
      goto LABEL_13;
    }
    v34 = *(_WORD *)(v39 + 4);
    if ( v34 != 1 )
    {
      v7 = v13;
      v10 = 0;
      if ( v34 )
        goto LABEL_13;
      v11 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL);
      if ( !v11 )
        goto LABEL_13;
      goto LABEL_47;
    }
    v7 = v47;
    v9 = *(_QWORD *)(a1 + 32);
LABEL_7:
    v16 = *(_QWORD *)(v9 + 856);
    *v5 = *(_DWORD *)(v4 + 16);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = *v6;
    if ( *v6 )
    {
      v18 = v6[1];
      v19 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v19 )
      {
        v37 = v6;
        sub_15D7BC0(v18, v17);
        v6 = v37;
      }
    }
    *v6 = v16;
    v10 = 1;
    v9 = v7;
    v7 = v13;
    goto LABEL_13;
  }
  v27 = *(_WORD *)(v39 + 4);
  if ( v27 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v14 = 0;
    goto LABEL_7;
  }
  if ( !v27 )
  {
    v11 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL);
    if ( v11 )
    {
      v14 = 0;
LABEL_47:
      v7 = v13;
      if ( *v11 )
      {
LABEL_58:
        v10 = 0;
        goto LABEL_13;
      }
      goto LABEL_21;
    }
  }
  v7 = v45;
LABEL_16:
  if ( v15 )
  {
    v19 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v7, v15);
  }
  return v10;
}

