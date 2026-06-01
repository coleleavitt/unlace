void __fastcall sub_4F8110(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // r14
  char *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  unsigned int *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // rax
  char *v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned int *v15; // rax
  int v16; // ebp
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r12d
  unsigned int v22; // r9d
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // r10d
  unsigned int v26; // ecx
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v32; // [rsp+Ch] [rbp-4Ch]
  unsigned int v33; // [rsp+Ch] [rbp-4Ch]
  unsigned int v34; // [rsp+10h] [rbp-48h]
  unsigned int v35; // [rsp+14h] [rbp-44h]
  char *v36; // [rsp+18h] [rbp-40h]

  v1 = *a1;
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 1568) + 24LL);
  if ( v2 )
  {
    v36 = (char *)operator new[](10 * v2);
    v3 = &v36[10 * v2];
    if ( v2 > 0x1387 )
    {
      v11 = (char *)pack_dw(v36, v3, 0xFFFF);
      v12 = v11;
      if ( v11 < v3 )
      {
        *v11 = 2;
        v12 = v11 + 1;
      }
      v13 = 1;
      v14 = pack_dd(v12, v3, (unsigned int)v2);
      v15 = *(unsigned int **)(*(_QWORD *)(*a1 + 1568) + 16LL);
      v16 = *v15;
      v17 = v15[1];
      v18 = pack_dd(v14, v3, *v15);
      v19 = pack_dd(v18, v3, v17);
      v20 = *a1;
      v4 = v19;
      do
      {
        v21 = v17;
        v22 = 0;
        v23 = *(_QWORD *)(*(_QWORD *)(v20 + 1568) + 16LL);
        while ( 1 )
        {
          v24 = v16;
          v16 = *(_DWORD *)(v23 + 8 * v13);
          v25 = v16 - v24;
          if ( v16 - v24 < 0 )
          {
            if ( !under_debugger )
              interr(2137);
            BUG();
          }
          v17 = *(_DWORD *)(v23 + 8 * v13 + 4);
          v26 = v17 - v21;
          v27 = v13 + 1;
          if ( v25 != 1 || v26 )
            break;
          ++v22;
          if ( v27 >= v2 )
          {
            if ( v22 <= 1 )
            {
              v27 = v13 + 2;
              goto LABEL_20;
            }
            ++v13;
            v26 = 0;
            ++v27;
            v25 = 1;
            goto LABEL_27;
          }
          ++v13;
          v21 = v17;
        }
        if ( v22 <= 1 )
          goto LABEL_23;
LABEL_27:
        v34 = v26;
        v33 = v25;
        v35 = v22;
        v29 = pack_dd(v4, v3, 0);
        v30 = pack_dd(v29, v3, v35);
        v26 = v34;
        v25 = v33;
        v4 = v30;
LABEL_23:
        if ( v13 < v2 )
        {
          v32 = v26;
          v28 = pack_dd(v4, v3, v25);
          v4 = pack_dd(v28, v3, v32);
        }
        v20 = *a1;
LABEL_20:
        v13 = v27;
      }
      while ( v27 < v2 );
      v5 = v20;
    }
    else
    {
      v4 = pack_dw(v36, v3, (unsigned int)v2);
      v5 = *a1;
      v6 = *(_QWORD *)(*a1 + 1568);
      v7 = *(unsigned int **)(v6 + 16);
      v8 = &v7[2 * *(_QWORD *)(v6 + 24)];
      if ( v7 != v8 )
      {
        do
        {
          v9 = *v7;
          v7 += 2;
          v10 = pack_dd(v4, v3, v9);
          v4 = pack_dd(v10, v3, *(v7 - 1));
        }
        while ( v8 != v7 );
        v5 = *a1;
      }
    }
    sub_6160D0(v5, 84, v36, v4 - (_QWORD)v36);
    if ( v36 )
      operator delete[](v36);
  }
  else
  {
    sub_6136B0(v1, 84);
  }
}

