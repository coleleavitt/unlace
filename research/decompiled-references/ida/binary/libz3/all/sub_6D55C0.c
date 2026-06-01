__int64 __fastcall sub_6D55C0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 *v6; // r12
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  _QWORD **v10; // rbp
  __int64 v11; // rax
  __int64 *v13; // rax
  char v14; // al
  __int64 v16; // rcx
  __int64 v17; // rdi
  char v18; // al
  _DWORD *v19; // rax
  __int64 *v20; // rdi
  char v21; // al
  __int64 v22; // rax
  _QWORD *v23; // rcx
  char v24; // al
  _QWORD *v25; // rdi
  char v26; // al
  int v27[2]; // [rsp+8h] [rbp-130h]
  unsigned __int8 v28; // [rsp+8h] [rbp-130h]
  __int64 v31; // [rsp+28h] [rbp-110h]
  __int64 v32; // [rsp+30h] [rbp-108h]
  __int64 v33; // [rsp+38h] [rbp-100h]
  __int64 v34; // [rsp+40h] [rbp-F8h]
  __int64 v35; // [rsp+48h] [rbp-F0h]
  __int64 v36; // [rsp+50h] [rbp-E8h]
  __int64 v37; // [rsp+60h] [rbp-D8h]
  _QWORD *v38; // [rsp+78h] [rbp-C0h]
  __int64 v39; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-98h] BYREF
  int v44[2]; // [rsp+A8h] [rbp-90h]
  __int64 v45; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-80h]
  __int64 v47[4]; // [rsp+C0h] [rbp-78h] BYREF
  int v48[2]; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-50h]
  __int64 v50; // [rsp+F0h] [rbp-48h]
  __int64 v51; // [rsp+F8h] [rbp-40h]

  v6 = *(__int64 **)a4;
  v31 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8);
  if ( *(_QWORD *)a4 == v7 )
    goto LABEL_34;
  while ( (unsigned __int64)*v6 <= 1 )
  {
    if ( (__int64 *)v7 == ++v6 )
      goto LABEL_34;
  }
  if ( (__int64 *)v7 == v6 )
  {
LABEL_34:
    v9 = 0;
    v14 = 1;
    goto LABEL_24;
  }
  v8 = *v6;
  v9 = 0;
  *(_QWORD *)v27 = a3 + 4;
  v10 = (_QWORD **)(a2 + 1);
  do
  {
    if ( (unsigned __int8)sub_168D740(*(_QWORD *)v27, v8) )
    {
      if ( !a5 )
      {
        v11 = sub_15E1A70(*(_QWORD *)(a1 + 8));
        v8 = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        if ( v9 )
        {
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            sub_15D7BC0(v31, v9);
        }
        v9 = v8;
      }
      if ( (unsigned __int8)sub_15D37A0(v10, v8)
        || (unsigned __int8)sub_6D5110((_QWORD **)a2, a3, v8)
        || (unsigned __int8)sub_6D4AB0((_QWORD **)a2, a3, v8) )
      {
        goto LABEL_17;
      }
      v43 = 0;
      v16 = *(_QWORD *)*a2;
      v17 = *a2 + 16;
      v47[0] = 0;
      v47[1] = 0;
      v33 = v16;
      *(_QWORD *)v44 = v16;
      v47[2] = 1;
      v47[3] = 0;
      *(_QWORD *)v48 = 0;
      v49 = 0;
      v50 = 1;
      v51 = 0;
      v18 = sub_6BFF70(v17, v8, v47, &v43);
      v36 = v43;
      v37 = *(_QWORD *)v44;
      if ( v18 )
      {
        v45 = 0;
        v20 = (__int64 *)*a2;
        v46 = v33;
        v21 = sub_6D3AC0(v20, a3, v43, v48, &v45);
        v34 = v45;
        v35 = v46;
        if ( v21 )
        {
          v42 = v45;
          if ( v45 )
            ++*(_DWORD *)(v45 + 8);
          sub_6C01B0(a2 + 29, &v42);
          sub_6C09A0(a2 + 31, (__int64)v47);
          sub_6C09A0(a2 + 30, (__int64)v48);
          v41 = v8;
          if ( v8 )
            ++*(_DWORD *)(v8 + 8);
          sub_6C00F0(a2 + 33, &v41);
          v32 = 0;
          goto LABEL_41;
        }
      }
      else
      {
        v34 = 0;
        v35 = v33;
      }
      if ( *(_WORD *)(v8 + 4) )
        goto LABEL_31;
      v19 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
      v32 = (__int64)v19;
      if ( !v19 )
        goto LABEL_32;
      if ( *v19 || v19[1] != 8 || (v22 = *(_QWORD *)(v8 + 32), v32 = v22, *(_WORD *)(v22 + 4)) )
      {
LABEL_31:
        v32 = 0;
      }
      else
      {
        v23 = (_QWORD *)*a2;
        ++*(_DWORD *)(v22 + 8);
        v38 = v23;
        sub_6BFE10(0, v33);
        v24 = sub_6BFF70((__int64)(v38 + 2), v32, v47, &v43);
        v36 = v43;
        v37 = *(_QWORD *)v44;
        if ( v24 )
        {
          v25 = (_QWORD *)*a2;
          v45 = v34;
          v46 = v35;
          v26 = sub_6D3AC0(v25, a3, v43, v48, &v45);
          v34 = v45;
          v35 = v46;
          if ( v26 )
          {
            v40 = v45;
            if ( v45 )
              ++*(_DWORD *)(v45 + 8);
            sub_6C01B0(a2 + 29, &v40);
            sub_6C09A0(a2 + 31, (__int64)v47);
            sub_6C09A0(a2 + 30, (__int64)v48);
            ++*(_DWORD *)(v32 + 8);
            v39 = v32;
            sub_6C00F0(a2 + 33, &v39);
LABEL_41:
            sub_25A130((char *)v48);
            sub_25A130((char *)v47);
            sub_6BFE10(v32, v33);
            sub_6BFE30(v34, v35);
            sub_6BFE30(v36, v37);
LABEL_17:
            sub_15D0A90(v10, v8, 1);
            goto LABEL_18;
          }
        }
      }
LABEL_32:
      sub_25A130((char *)v48);
      sub_25A130((char *)v47);
      sub_6BFE10(v32, v33);
      sub_6BFE30(v34, v35);
      sub_6BFE30(v36, v37);
      v14 = sub_6D4600((__int64 **)a2, a3, v8);
      if ( !v14 )
        goto LABEL_24;
      goto LABEL_17;
    }
LABEL_18:
    v13 = v6 + 1;
    if ( (__int64 *)v7 == v6 + 1 )
      break;
    while ( 1 )
    {
      v8 = *v13;
      v6 = v13;
      if ( (unsigned __int64)*v13 > 1 )
        break;
      if ( (__int64 *)v7 == ++v13 )
        goto LABEL_23;
    }
  }
  while ( (__int64 *)v7 != v13 );
LABEL_23:
  v14 = 1;
LABEL_24:
  v28 = v14;
  sub_6BFE10(v9, v31);
  return v28;
}

