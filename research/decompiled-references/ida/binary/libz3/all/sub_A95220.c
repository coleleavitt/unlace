__int64 __fastcall sub_A95220(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rbx
  void *v5; // r15
  int v6; // eax
  int v7; // ebx
  int v8; // r8d
  __int64 v9; // rax
  int v10; // r8d
  _DWORD *v11; // rbx
  unsigned int v12; // edx
  _DWORD *v13; // r15
  __int64 v14; // rdx
  _DWORD *v15; // r12
  int v16; // eax
  void *v17; // rdi
  bool v18; // al
  _DWORD *v19; // rdx
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdx
  char *v32; // rbx
  void *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rax
  void *v37; // rbp
  __int64 v38; // rbx
  __int64 result; // rax
  int v40; // eax
  bool v41; // al
  int v42; // [rsp+8h] [rbp-90h]
  unsigned int v43; // [rsp+8h] [rbp-90h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  int v47; // [rsp+8h] [rbp-90h]
  char *v49; // [rsp+20h] [rbp-78h]
  __int64 v50; // [rsp+28h] [rbp-70h]
  _QWORD v51[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v52[11]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0x1FFFFFFFE0LL;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 728);
  if ( v3 )
    v1 = 32LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
  v4 = v1 + v3;
  v51[0] = 0;
  v51[1] = 0;
  v52[0] = 1;
  v5 = qword_1C7F2C0;
  v52[1] = 0;
  v52[2] = 0;
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v51, v4);
  else
    LODWORD(v51[0]) = *(_DWORD *)v4;
  if ( (*(_BYTE *)(v4 + 20) & 1) != 0 )
  {
    sub_182C690(v5, v52, v4 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(v4 + 16);
    BYTE4(v52[0]) &= ~1u;
    LODWORD(v52[0]) = v6;
  }
  v7 = sub_182DB30(v51);
  v8 = 3 * sub_182DB30(v52);
  v9 = *(unsigned int *)(v2 + 744);
  v10 = v7 + v8;
  v11 = *(_DWORD **)(v2 + 736);
  v12 = v9 - 1;
  v9 *= 48;
  v13 = (_DWORD *)((char *)v11 + v9);
  v14 = 48LL * (v10 & v12);
  v15 = &v11[(unsigned __int64)v14 / 4];
  if ( v14 != v9 )
  {
    v11 = (_DWORD *)((char *)v11 + v14);
    while ( 1 )
    {
      v16 = v11[1];
      if ( v16 == 2 )
      {
        if ( *v11 == v10 )
        {
          v17 = qword_1C7F2C0;
          v42 = v10;
          v18 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v11 + 2), (__int64)v51);
          v10 = v42;
          if ( v18 )
          {
LABEL_14:
            v19 = v11 + 12;
            if ( v13 == v11 + 12 )
              v19 = *(_DWORD **)(v2 + 736);
            v20 = *(_DWORD *)(v2 + 748) - 1;
            if ( v19[1] )
            {
              v21 = *(_DWORD *)(v2 + 752);
              v11[1] = 1;
              *(_DWORD *)(v2 + 748) = v20;
              *(_DWORD *)(v2 + 752) = v21 + 1;
              if ( v20 < 0x40 )
                v20 = 64;
              if ( v20 < v21 + 1 && !(unsigned __int8)sub_186AF10(v17) )
              {
                v43 = *(_DWORD *)(v2 + 744);
                v22 = sub_186B270(48LL * v43);
                if ( v43 )
                {
                  v23 = v22;
                  v24 = v22 + 48LL * v43;
                  do
                  {
                    *(_BYTE *)(v23 + 12) &= 0xFCu;
                    *(_BYTE *)(v23 + 28) &= 0xFCu;
                    v23 += 48;
                    *(_QWORD *)(v23 - 48) = 0;
                    *(_QWORD *)(v23 - 32) = 0;
                    *(_QWORD *)(v23 - 16) = 0;
                  }
                  while ( v23 != v24 );
                  v25 = v22;
                  if ( ((48 * (_BYTE)v43) & 0x10) == 0 || (v25 = v22 + 48, *(_DWORD *)(v22 + 8) = 0, v22 + 48 != v24) )
                  {
                    do
                    {
                      *(_DWORD *)(v25 + 8) = 0;
                      v25 += 96;
                      *(_DWORD *)(v25 - 40) = 0;
                    }
                    while ( v25 != v24 );
                  }
                  v26 = v22;
                  if ( ((48 * (_BYTE)v43) & 0x10) == 0 || (v26 = v22 + 48, *(_DWORD *)(v22 + 24) = 1, v22 + 48 != v24) )
                  {
                    do
                    {
                      *(_DWORD *)(v26 + 24) = 1;
                      v26 += 96;
                      *(_DWORD *)(v26 - 24) = 1;
                    }
                    while ( v26 != v24 );
                  }
                }
                v44 = v22;
                sub_A95040(*(_DWORD **)(v2 + 736), *(_DWORD *)(v2 + 744), v22, *(_DWORD *)(v2 + 744));
                v27 = *(char **)(v2 + 736);
                v28 = v44;
                if ( v27 )
                {
                  v29 = *(unsigned int *)(v2 + 744);
                  if ( (_DWORD)v29 )
                  {
                    v30 = 3 * v29;
                    v31 = *(_QWORD *)(v2 + 736);
                    v32 = &v27[16 * v30];
                    do
                    {
                      v50 = v28;
                      v49 = v27;
                      v45 = v31;
                      sub_25A130((char *)(v31 + 8));
                      v27 = v49;
                      v28 = v50;
                      v31 = v45 + 48;
                    }
                    while ( (char *)(v45 + 48) != v32 );
                  }
                  v46 = v28;
                  sub_186B220(v27);
                  v28 = v46;
                }
                *(_QWORD *)(v2 + 736) = v28;
                *(_DWORD *)(v2 + 752) = 0;
              }
            }
            else
            {
              v11[1] = 0;
              *(_DWORD *)(v2 + 748) = v20;
            }
            goto LABEL_36;
          }
        }
      }
      else if ( !v16 )
      {
        goto LABEL_36;
      }
      v11 += 12;
      if ( v13 == v11 )
      {
        v11 = *(_DWORD **)(v2 + 736);
        break;
      }
    }
  }
  while ( v15 != v11 )
  {
    v40 = v11[1];
    if ( v40 == 2 )
    {
      if ( *v11 == v10 )
      {
        v17 = qword_1C7F2C0;
        v47 = v10;
        v41 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v11 + 2), (__int64)v51);
        v10 = v47;
        if ( v41 )
          goto LABEL_14;
      }
    }
    else if ( !v40 )
    {
      break;
    }
    v11 += 12;
  }
LABEL_36:
  v33 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v51);
  sub_182CBA0(v33, v52);
  v34 = 0x1FFFFFFFE0LL;
  v35 = *(_QWORD *)(a1 + 8);
  v36 = *(_QWORD *)(v35 + 728);
  if ( v36 )
    v34 = 32LL * (unsigned int)(*(_DWORD *)(v36 - 4) - 1);
  v37 = qword_1C7F2C0;
  v38 = v36 + v34;
  sub_182CBA0(qword_1C7F2C0, v36 + v34);
  sub_182CBA0(v37, v38 + 16);
  result = *(_QWORD *)(v35 + 728);
  --*(_DWORD *)(result - 4);
  return result;
}

