void __fastcall sub_3A6F00(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // r12
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int *v8; // rdi
  int v9; // edx
  unsigned int *v10; // r10
  unsigned int *v11; // r11
  unsigned int v12; // edx
  __int64 v13; // r8
  unsigned int **v14; // rdi
  unsigned int *v15; // r8
  unsigned int v16; // edi
  int v17; // r13d
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v24; // rdi
  int v25; // r8d
  bool v26; // zf
  __int64 v27; // [rsp+8h] [rbp-40h]

  v2 = &a1[a2];
  v3 = *(_QWORD *)(qword_2CA1698 + 1384);
  if ( v2 != a1 )
  {
    v4 = a1;
    v5 = qword_2CA1698;
    do
    {
      v6 = *v4;
      v7 = *(_DWORD *)(*v4 + 52);
      if ( *(_DWORD *)(*v4 + 40) == 3 )
      {
        v13 = *(_QWORD *)(v5 + 1384);
        if ( (unsigned __int64)v7 >= *(_QWORD *)(v13 + 56) )
        {
          if ( !under_debugger )
            interr(40028);
          BUG();
        }
        v14 = (unsigned int **)(*(_QWORD *)(v13 + 48) + 32LL * v7);
        v15 = v14[1];
        v8 = *v14;
        v9 = (int)v15;
        if ( (int)v15 <= 0 )
          goto LABEL_8;
      }
      else
      {
        if ( v7 == -1 )
          goto LABEL_8;
        v8 = (unsigned int *)(v6 + 52);
        v9 = 1;
      }
      v10 = v8;
      v11 = &v8[v9];
      if ( *(_QWORD *)(v3 + 88) )
      {
        v16 = *v8;
        v17 = 0;
        v18 = v5;
        while ( 1 )
        {
          v27 = v18;
          v19 = v3 + 80;
          v20 = *(_QWORD *)(v3 + 88);
          do
          {
            while ( 1 )
            {
              v21 = *(_QWORD *)(v20 + 16);
              v22 = *(_QWORD *)(v20 + 24);
              if ( *(_DWORD *)(v20 + 32) < v16 )
                break;
              v19 = v20;
              v20 = *(_QWORD *)(v20 + 16);
              if ( !v21 )
                goto LABEL_19;
            }
            v20 = *(_QWORD *)(v20 + 24);
          }
          while ( v22 );
LABEL_19:
          v18 = v27;
          if ( v3 + 80 != v19 )
            break;
LABEL_33:
          if ( v11 == ++v10 )
            goto LABEL_29;
LABEL_22:
          v16 = *v10;
        }
        if ( v16 < *(_DWORD *)(v19 + 32) )
          goto LABEL_21;
        v23 = *(_QWORD **)(v19 + 40);
        v24 = &v23[*(_QWORD *)(v19 + 48)];
        if ( v23 == v24 )
          goto LABEL_21;
        while ( v6 != *v23 )
        {
          if ( v24 == ++v23 )
            goto LABEL_33;
        }
        if ( v23 == v24 )
        {
LABEL_21:
          if ( ++v10 != v11 )
            goto LABEL_22;
        }
        else
        {
          ++v10;
          ++v17;
          if ( v10 != v11 )
            goto LABEL_22;
        }
LABEL_29:
        v5 = v27;
        if ( v17 )
        {
          v25 = *(_DWORD *)(v6 + 68);
          v26 = v17 == v9;
          v12 = v25 | 0x18;
          if ( v26 )
            v12 = v25 & 0xFFFFFFA6 | 8;
          goto LABEL_9;
        }
      }
      else
      {
        do
          ++v10;
        while ( v11 != v10 );
      }
LABEL_8:
      v12 = *(_DWORD *)(v6 + 68) & 0xFFFFFFE7;
LABEL_9:
      ++v4;
      *(_DWORD *)(v6 + 68) = v12;
    }
    while ( v2 != v4 );
  }
}

