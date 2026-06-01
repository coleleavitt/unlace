_BOOL8 __fastcall sub_814BA0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  int v3; // r10d
  __int64 v4; // rdx
  unsigned int v5; // r13d
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  int *v9; // r12
  __int64 v10; // rdi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ebp
  __int64 v18; // r8
  unsigned int v19; // ecx
  int v20; // r14d
  __int64 v21; // rdi
  unsigned int v22; // r13d
  char v23; // al
  __int64 v24; // r12
  unsigned int v25; // esi
  __int64 v26; // rsi
  unsigned int *v27; // r9
  __int64 v28; // rsi
  unsigned int v29; // r8d
  int v30; // r10d
  __int64 v32; // rdx
  unsigned int v33; // r12d
  _QWORD *v34; // rax
  __int64 v35; // r8
  int v36; // ebx
  unsigned int v37; // ecx
  __int64 v38; // rdi
  __int64 v39; // r9
  _QWORD *v40; // r13
  char v41; // al
  __int64 v42; // r14
  unsigned int v43; // esi
  _QWORD *v44; // rax
  __int64 v45; // rsi
  unsigned int v46; // r9d
  int v47; // r11d
  _QWORD *v48; // rax
  bool v49; // [rsp+0h] [rbp-58h]
  unsigned int v50; // [rsp+0h] [rbp-58h]
  int v51; // [rsp+0h] [rbp-58h]
  int v52[2]; // [rsp+8h] [rbp-50h]
  unsigned int v53; // [rsp+10h] [rbp-48h]
  unsigned int v54; // [rsp+14h] [rbp-44h]
  char *v55; // [rsp+18h] [rbp-40h]

  v2 = (unsigned int)a2;
  v3 = a2;
  v4 = 4LL * (unsigned int)a2;
  v5 = a2;
  v6 = HIDWORD(a2);
  v7 = a1;
  v8 = a1[75];
  v53 = v6;
  v9 = (int *)(v4 + a1[76]);
  *(_QWORD *)v52 = v2;
  v10 = *(_QWORD *)(v8 + 8 * v2);
  v11 = *v9;
  v55 = (char *)v4;
  if ( *v9 == (_DWORD)v6 )
  {
    if ( v10 && (v46 = *(_DWORD *)(v10 - 4)) != 0 )
    {
      v47 = v11 + v46;
      v12 = *(_QWORD *)(v7[3] + 3288LL);
      while ( *(_DWORD *)(v12 + 4LL * *(unsigned int *)(v10 + 4LL * (v11 % v46))) )
      {
        if ( v47 == ++v11 )
          goto LABEL_41;
      }
      *v9 = v11 % v46;
    }
    else
    {
LABEL_41:
      v51 = v3;
      sub_812250((__int64)v7, v5);
      v8 = v7[75];
      v3 = v51;
      v10 = *(_QWORD *)(v8 + 8LL * *(_QWORD *)v52);
      v12 = *(_QWORD *)(v7[3] + 3288LL);
    }
  }
  else
  {
    v12 = *(_QWORD *)(v7[3] + 3288LL);
  }
  v49 = 0;
  v13 = 4 * v6;
  v14 = *(unsigned int *)(v10 + 4 * v6);
  v15 = *(_DWORD *)(v12 + 4 * v14);
  if ( v15 )
  {
    if ( v15 == -1 )
    {
      v32 = v7[72];
      v17 = 0;
      v33 = 0;
      v54 = v14 ^ 1;
      if ( v3 != *(_DWORD *)(v32 + 4LL * *(_QWORD *)v52) )
      {
        v34 = v7;
        v35 = v12;
        v36 = v5;
        v37 = *(_DWORD *)(v32 + 4LL * *(_QWORD *)v52);
        v38 = v8;
        v39 = v32;
        v40 = v34;
        while ( 1 )
        {
          v42 = v37;
          ++v33;
          v43 = *(_DWORD *)(*(_QWORD *)(v38 + 8LL * v37) + v13) ^ 1;
          if ( v33 > 3 && !v17 )
            break;
          if ( *(_DWORD *)(v35 + 4LL * v43) != 1 )
          {
            ++v17;
            v41 = sub_813EE0((__int64)v40, v43, v36, v37, v53, v54, 0);
            v38 = v40[75];
            v35 = *(_QWORD *)(v40[3] + 3288LL);
            if ( !v41 )
              goto LABEL_42;
            v39 = v40[72];
          }
          v37 = *(_DWORD *)(v39 + 4 * v42);
          if ( v36 == v37 )
          {
LABEL_42:
            v48 = v40;
            v12 = v35;
            v5 = v36;
            v45 = v38;
            v7 = v48;
            goto LABEL_33;
          }
        }
        v44 = v40;
        v12 = v35;
        v5 = v36;
        v26 = v38;
        v7 = v44;
LABEL_14:
        v49 = 0;
        v10 = *(_QWORD *)(v26 + 8LL * *(_QWORD *)v52);
      }
    }
    else
    {
      v16 = v7[72];
      v17 = 0;
      if ( v3 != *(_DWORD *)(v16 + 4LL * *(_QWORD *)v52) )
      {
        v18 = v12;
        v19 = *(_DWORD *)(v16 + 4LL * *(_QWORD *)v52);
        v50 = v14;
        v20 = v5;
        v21 = v8;
        v22 = 0;
        do
        {
          v24 = v19;
          ++v22;
          v25 = *(_DWORD *)(*(_QWORD *)(v21 + 8LL * v19) + v13);
          if ( !v17 && v22 > 3 )
          {
            v5 = v20;
            v12 = v18;
            v26 = v21;
            goto LABEL_14;
          }
          if ( *(_DWORD *)(v18 + 4LL * v25) != 1 )
          {
            ++v17;
            v23 = sub_813EE0((__int64)v7, v25, v20, v19, v53, v50, 0);
            v21 = v7[75];
            v18 = *(_QWORD *)(v7[3] + 3288LL);
            if ( !v23 )
              break;
            v16 = v7[72];
          }
          v19 = *(_DWORD *)(v16 + 4 * v24);
        }
        while ( v20 != v19 );
        v5 = v20;
        v12 = v18;
        v45 = v21;
LABEL_33:
        v10 = *(_QWORD *)(v45 + 8LL * *(_QWORD *)v52);
        v49 = v17 != 0;
      }
    }
    v27 = (unsigned int *)&v55[v7[76]];
    v28 = *v27;
    if ( *(_DWORD *)(v12 + 4LL * *(unsigned int *)(v10 + 4 * v28)) )
    {
      if ( v10 && (v29 = *(_DWORD *)(v10 - 4)) != 0 )
      {
        v30 = v28 + v29;
        while ( *(_DWORD *)(v12 + 4LL * *(unsigned int *)(v10 + 4LL * ((unsigned int)v28 % v29))) )
        {
          LODWORD(v28) = v28 + 1;
          if ( (_DWORD)v28 == v30 )
            goto LABEL_40;
        }
        *v27 = (unsigned int)v28 % v29;
      }
      else
      {
LABEL_40:
        sub_812250((__int64)v7, v5);
      }
    }
  }
  return v49;
}

