__int64 __fastcall sub_6D4AB0(_QWORD **a1, __int64 *a2, __int64 a3)
{
  __int64 *v5; // r15
  bool v6; // zf
  __int64 v7; // r13
  _DWORD *v8; // rax
  __int64 v9; // r14
  char v10; // al
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // r8d
  int v17; // r9d
  int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 *v21; // r9
  __int64 v22; // rax
  __int64 v23; // r10
  _DWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 *v28; // rcx
  char v29; // al
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rax
  unsigned __int8 v34; // [rsp+0h] [rbp-D8h]
  __int64 *v35; // [rsp+0h] [rbp-D8h]
  __int64 v36; // [rsp+8h] [rbp-D0h]
  __int64 *v37; // [rsp+8h] [rbp-D0h]
  __int64 v38; // [rsp+10h] [rbp-C8h]
  __int64 v39; // [rsp+10h] [rbp-C8h]
  __int64 v40; // [rsp+10h] [rbp-C8h]
  __int64 v41; // [rsp+10h] [rbp-C8h]
  __int64 v42; // [rsp+18h] [rbp-C0h]
  __int64 v43; // [rsp+18h] [rbp-C0h]
  __int64 v44; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+40h] [rbp-98h] BYREF
  __int64 v48; // [rsp+48h] [rbp-90h]
  __int64 v49; // [rsp+50h] [rbp-88h] BYREF
  __int64 v50; // [rsp+58h] [rbp-80h]
  _QWORD v51[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v52; // [rsp+80h] [rbp-58h] BYREF
  __int64 v53; // [rsp+88h] [rbp-50h]
  __int64 v54; // [rsp+90h] [rbp-48h]
  __int64 v55; // [rsp+98h] [rbp-40h]

  v5 = *a1;
  v6 = *(_WORD *)(a3 + 4) == 0;
  v7 = **a1;
  v47 = 0;
  v49 = 0;
  v48 = v7;
  v50 = v7;
  v51[0] = 0;
  v51[1] = 0;
  v51[2] = 1;
  v51[3] = 0;
  v52 = 0;
  v53 = 0;
  v54 = 1;
  v55 = 0;
  if ( !v6 )
    goto LABEL_4;
  v8 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v8 || *v8 != 5 )
    goto LABEL_4;
  v12 = v8[1];
  if ( v12 == 4 )
  {
    if ( *(_DWORD *)(a3 + 24) == 2 )
    {
      v13 = *(_QWORD *)(a3 + 32);
      v36 = *(_QWORD *)(a3 + 40);
LABEL_15:
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      sub_6BFE30(0, v7);
      v47 = v13;
      if ( !(unsigned __int8)sub_1666AE0(v5 + 2, v36, &v52, &v46) || (_DWORD)v52 )
      {
        v14 = sub_15E1B70(v5[2]);
        v15 = v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        sub_6BFE30(v47, v48);
        v47 = v15;
        sub_14B9B80(v5 + 4, &v47);
      }
      sub_25A130((char *)&v52);
      if ( (unsigned __int8)sub_6D3AC0(*a1, a2, v47, (int *)v51, &v49) )
      {
        v9 = 0;
LABEL_24:
        v35 = *a1;
        sub_3EC020((__int64)&v52, (__int64)v51);
        v18 = v49;
        v19 = v35[3];
        if ( !v19 )
        {
          sub_16669E0(v35 + 2);
          v19 = v35[3];
        }
        sub_166A700(v19, (unsigned int)&v52, 0, v18, v16, v17);
        v20 = sub_15E1B70(v35[2]);
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        v38 = v20;
        sub_6BFE30(v49, v50);
        v49 = v38;
        sub_14B9B80(v35 + 4, &v49);
        sub_25A130((char *)&v52);
        if ( SLODWORD(v51[0]) < 0 )
        {
          v44 = v49;
          if ( v49 )
            ++*(_DWORD *)(v49 + 8);
          sub_6C01B0(a1 + 13, &v44);
          sub_6C09A0((__int64 *)a1 + 18, (__int64)&qword_1C7F260);
          ++*(_DWORD *)(a3 + 8);
          v45 = a3;
          sub_6C00F0(a1 + 25, &v45);
        }
        else
        {
          v46 = v49;
          if ( v49 )
            ++*(_DWORD *)(v49 + 8);
          sub_6C01B0(a1 + 15, &v46);
          sub_6C09A0((__int64 *)a1 + 19, (__int64)&qword_1C7F280);
          ++*(_DWORD *)(a3 + 8);
          v52 = a3;
          sub_6C00F0(a1 + 27, &v52);
        }
        v10 = 1;
        goto LABEL_10;
      }
      goto LABEL_5;
    }
  }
  else if ( v12 == 5 && *(_DWORD *)(a3 + 24) == 2 )
  {
    v13 = *(_QWORD *)(a3 + 40);
    v36 = *(_QWORD *)(a3 + 32);
    goto LABEL_15;
  }
LABEL_4:
  sub_25A130((char *)&v52);
LABEL_5:
  if ( *(_WORD *)(a3 + 4) )
    goto LABEL_8;
  v9 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v9 )
  {
LABEL_9:
    v10 = 0;
    goto LABEL_10;
  }
  if ( *(_DWORD *)v9 || *(_DWORD *)(v9 + 4) != 8 )
  {
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  v9 = *(_QWORD *)(a3 + 32);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_6BFE30(0, v7);
  v10 = 0;
  if ( !*(_WORD *)(v9 + 4) )
  {
    v52 = 0;
    v21 = *a1;
    v54 = 1;
    v22 = *(_QWORD *)(v9 + 16);
    v53 = 0;
    v23 = *v21;
    v55 = 0;
    v24 = *(_DWORD **)(v22 + 24);
    if ( !v24 || *v24 != 5 )
      goto LABEL_39;
    v25 = v24[1];
    if ( v25 == 2 )
    {
      v33 = *(_QWORD *)(v9 + 40);
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      v41 = v33;
      v42 = v23;
      v37 = v21;
      sub_6BFE30(v47, v48);
      v27 = *(_QWORD *)(v9 + 32);
      v28 = &v46;
      v47 = v41;
    }
    else
    {
      if ( v25 != 3 )
      {
LABEL_39:
        sub_6BFE30(0, v23);
        sub_25A130((char *)&v52);
        goto LABEL_9;
      }
      v26 = *(_QWORD *)(v9 + 32);
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v39 = v26;
      v42 = v23;
      v37 = v21;
      sub_6BFE30(v47, v48);
      v27 = *(_QWORD *)(v9 + 40);
      v28 = &v45;
      v47 = v39;
    }
    v29 = sub_1666AE0(v37 + 2, v27, &v52, v28);
    v30 = v42;
    if ( !v29 || (_DWORD)v52 )
    {
      v31 = sub_15E1B70(v37[2]);
      v32 = v42;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v43 = v31;
      v40 = v32;
      sub_6BFE30(v47, v48);
      v47 = v43;
      sub_14B9B80(v37 + 4, &v47);
      v30 = v40;
    }
    sub_6BFE30(0, v30);
    sub_25A130((char *)&v52);
    if ( !(unsigned __int8)sub_6D3AC0(*a1, a2, v47, (int *)v51, &v49) )
      goto LABEL_9;
    goto LABEL_24;
  }
LABEL_10:
  v34 = v10;
  sub_25A130((char *)v51);
  sub_6BFE30(v9, v7);
  sub_6BFE30(v49, v50);
  sub_6BFE30(v47, v48);
  return v34;
}

