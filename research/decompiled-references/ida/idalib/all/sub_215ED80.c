_QWORD *__fastcall sub_215ED80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int16 v9; // cx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  bool v14; // cf
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  unsigned int *v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v42[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = a1;
  v7 = *(_QWORD *)(a2 + 48);
  if ( !v7 )
  {
    v19 = *(_QWORD *)(a2 + 56);
    if ( !v19 )
    {
      v21 = *(_QWORD *)(a2 + 16);
      goto LABEL_50;
    }
    v20 = *(_QWORD *)(a2 + 96);
    if ( v20 )
    {
LABEL_41:
      v22 = 20LL * *(unsigned int *)(v19 + 52);
      goto LABEL_42;
    }
    goto LABEL_37;
  }
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_WORD *)(v7 + 2);
  if ( *(_QWORD *)(a2 + 96) || *(_QWORD *)(a2 + 104) )
  {
    if ( v9 != -1 )
    {
      v10 = *(_QWORD *)(a2 + 24);
      v11 = v8 + *(unsigned int *)(v7 + 8);
      v12 = 18LL * *(unsigned int *)(v7 + 12);
      v13 = v11;
      v14 = __CFADD__(v11, v12);
      v15 = v11 + v12;
      if ( v14 )
        goto LABEL_6;
      goto LABEL_5;
    }
LABEL_40:
    v10 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 16);
    v15 = v8;
    v11 = v8;
LABEL_5:
    v10 += v8;
    if ( v10 >= v15 )
      goto LABEL_12;
    goto LABEL_6;
  }
  if ( v9 == -1 )
    goto LABEL_40;
  v11 = v8 + *(unsigned int *)(v7 + 8);
  v10 = v8 + *(_QWORD *)(a2 + 24);
  v13 = v11;
  if ( v10 >= v11 )
  {
LABEL_12:
    if ( v8 <= v13 )
      goto LABEL_13;
  }
LABEL_6:
  v16 = sub_2195B10(a1, v13, v8, v10);
  a1 = v42;
  sub_2220500(v42, 4, v16);
  v17 = v42[0];
  if ( v42[0] )
    goto LABEL_7;
LABEL_13:
  v19 = *(_QWORD *)(a2 + 56);
  v20 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 96) = v11;
  if ( v19 )
  {
    if ( *(_QWORD *)(a2 + 96) )
    {
LABEL_15:
      if ( v20 )
      {
        if ( *(_WORD *)(v20 + 2) != 0xFFFF )
        {
          v21 = *(_QWORD *)(a2 + 16);
          v22 = 18LL * *(unsigned int *)(v20 + 12);
LABEL_18:
          v23 = v21 + *(unsigned int *)(v20 + 8);
          goto LABEL_19;
        }
        v21 = *(_QWORD *)(a2 + 16);
        goto LABEL_45;
      }
      goto LABEL_41;
    }
LABEL_37:
    if ( !*(_QWORD *)(a2 + 104) )
    {
      if ( v20 )
      {
        v21 = *(_QWORD *)(a2 + 16);
        if ( *(_WORD *)(v20 + 2) != 0xFFFF )
        {
          v22 = 0;
          goto LABEL_18;
        }
LABEL_45:
        v19 = v21;
        v23 = v21;
        v24 = v21;
LABEL_46:
        v25 = v21 + *(_QWORD *)(a2 + 24);
        if ( v25 >= v24 && v21 <= v19 )
          goto LABEL_22;
LABEL_20:
        v26 = sub_2195B10(a1, v19, v25, v21);
        a1 = v42;
        v19 = 4;
        sub_2220500(v42, 4, v26);
        v17 = v42[0];
        if ( !v42[0] )
        {
          v21 = *(_QWORD *)(a2 + 16);
LABEL_22:
          *(_QWORD *)(a2 + 104) = v23;
          v20 = *(_QWORD *)(a2 + 48);
          goto LABEL_23;
        }
LABEL_7:
        *v5 = v17;
        return v5;
      }
      v22 = 0;
LABEL_42:
      v21 = *(_QWORD *)(a2 + 16);
      v23 = v21 + *(unsigned int *)(v19 + 48);
LABEL_19:
      v14 = __CFADD__(v23, v22);
      v24 = v23 + v22;
      v19 = v23;
      v25 = v14;
      if ( v14 )
        goto LABEL_20;
      goto LABEL_46;
    }
    goto LABEL_15;
  }
  v21 = *(_QWORD *)(a2 + 16);
LABEL_23:
  if ( !v20 )
  {
LABEL_50:
    v39 = *(_QWORD *)(a2 + 56);
    v20 = *(unsigned int *)(v39 + 48);
    if ( *(_QWORD *)(a2 + 96) || (v28 = (unsigned int)v20, *(_QWORD *)(a2 + 104)) )
      v28 = (unsigned int)(v20 + 20 * *(_DWORD *)(v39 + 52));
    goto LABEL_27;
  }
  v27 = *(_QWORD *)(a2 + 96);
  if ( *(_WORD *)(v20 + 2) == 0xFFFF )
  {
    v28 = 0;
    if ( v27 )
      goto LABEL_27;
    v19 = 0;
  }
  else
  {
    v19 = *(unsigned int *)(v20 + 8);
    if ( v27 )
    {
LABEL_26:
      v28 = (unsigned int)(v19 + 18 * *(_DWORD *)(v20 + 12));
      goto LABEL_27;
    }
  }
  v28 = (unsigned int)v19;
  if ( *(_QWORD *)(a2 + 104) && *(_WORD *)(v20 + 2) != 0xFFFF )
    goto LABEL_26;
LABEL_27:
  v29 = (unsigned int *)(v21 + v28);
  if ( (unsigned __int64)v29 >= 0xFFFFFFFFFFFFFFFCLL
    || (v20 = v21 + *(_QWORD *)(a2 + 24), (unsigned __int64)(v29 + 1) > v20)
    || v21 > (unsigned __int64)v29 )
  {
    v30 = sub_2195B10(a1, v19, v20, v21);
    sub_2220500(v42, 4, v30);
    v17 = v42[0];
    if ( v42[0] )
      goto LABEL_7;
  }
  v31 = *v29;
  v33 = *(_QWORD *)(a2 + 24);
  v34 = *(_QWORD *)(a2 + 32);
  v35 = *(_QWORD *)(a2 + 40);
  v42[0] = *(_QWORD *)(a2 + 16);
  v32 = v42[0];
  v42[1] = v33;
  v42[2] = v34;
  v42[3] = v35;
  *(_DWORD *)(a2 + 120) = v31;
  sub_215ED20(&v41, (unsigned __int64)v29, v31, v21, a5, v34, v32, v33);
  v17 = v41;
  if ( v41 )
    goto LABEL_7;
  v38 = *(_DWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = v29;
  if ( v38 > 3 )
  {
    if ( v38 != 4 && *((_BYTE *)v29 + v38 - 1) )
    {
      v40 = sub_2195B10(&v41, v29, v36, v37);
      sub_A09EA0((__int64)v5, 3u, v40, "string table missing null terminator");
      return v5;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 120) = 4;
  }
  *v5 = 0;
  return v5;
}
