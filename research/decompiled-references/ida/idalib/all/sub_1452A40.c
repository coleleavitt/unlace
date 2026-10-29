void __fastcall sub_1452A40(__int64 a1, char a2)
{
  __int64 v4; // rbx
  void **v5; // rdi
  __int64 *v6; // r15
  unsigned __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rax
  _BYTE *v15; // rdx
  __int64 v16; // rax
  _BYTE *v17; // rdx
  unsigned __int64 *v18; // rbp
  unsigned __int64 *i; // rbx
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  char *v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned int v27; // [rsp+2Ch] [rbp-5Ch] BYREF
  void *v28[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  sub_12EEE10((__int64 **)v28, *(__int64 **)(v4 + 888), *(_DWORD *)(v4 + 896) == 0);
  v5 = v28;
  v6 = (__int64 *)v28[0];
  v7 = *(_QWORD *)(v4 + 888) + 8LL * *(unsigned int *)(v4 + 896);
  sub_12EEE10((__int64 **)v28, (__int64 *)v7, 1);
  v8 = (__int64 *)v28[0];
  if ( v6 != v28[0] )
  {
    v9 = *v6;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10
        && (v7 = *(unsigned int *)(v10 + 416),
            v11 = *(_QWORD *)(*(_QWORD *)a1 + 1704LL),
            v12 = *(_QWORD *)(v11 + 24),
            v7 < (*(_QWORD *)(v11 + 32) - v12) >> 2) )
      {
        v27 = *(_DWORD *)(v12 + 4 * v7);
        if ( v27 || a2 != 1 )
        {
LABEL_7:
          v13 = sub_227D6D0(v5, v7);
          sub_FEEE60((__int64)v28, (__int64 *)v10, 0);
          v7 = (unsigned __int64)v28[0];
          v14 = sub_227BF10(v13, v28[0], v28[1]);
          v15 = *(_BYTE **)(v14 + 32);
          if ( *(_BYTE **)(v14 + 24) == v15 )
          {
            v7 = (unsigned __int64)" ";
            sub_227BF10(v14, " ", 1);
          }
          else
          {
            *v15 = 32;
            ++*(_QWORD *)(v14 + 32);
          }
          v5 = (void **)v28[0];
          if ( v28[0] != &v29 )
            operator delete(v28[0]);
          if ( v27 )
          {
            v22 = sub_227D6D0(v5, v7);
            v23 = sub_227B9B0(v22, v10);
            v24 = *(char **)(v23 + 32);
            if ( *(_QWORD *)(v23 + 24) - (_QWORD)v24 > 8u )
            {
              v24[8] = 32;
              *(_QWORD *)v24 = 0x656C626973697620LL;
              *(_QWORD *)(v23 + 32) += 9LL;
            }
            else
            {
              v24 = " visible ";
              v22 = v23;
              sub_227BF10(v23, " visible ", 9);
            }
            v25 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
            v26 = sub_227D6D0(v22, v24);
            v5 = (void **)&v27;
            v7 = v26;
            sub_101AC40(&v27, v26, v25);
            v16 = sub_227D6D0(&v27, v7);
            v17 = *(_BYTE **)(v16 + 32);
            if ( *(_BYTE **)(v16 + 24) != v17 )
              goto LABEL_34;
LABEL_13:
            v7 = (unsigned __int64)"\n";
            v5 = (void **)v16;
            sub_227BF10(v16, "\n", 1);
          }
          else
          {
            v16 = sub_227D6D0(v5, v7);
            v17 = *(_BYTE **)(v16 + 32);
            if ( *(_BYTE **)(v16 + 24) == v17 )
              goto LABEL_13;
LABEL_34:
            *v17 = 10;
            ++*(_QWORD *)(v16 + 32);
          }
          v18 = *(unsigned __int64 **)(v10 + 264);
          i = *(unsigned __int64 **)(v10 + 256);
          if ( v18 != i )
          {
            if ( a2 )
              goto LABEL_26;
            do
            {
              v7 = *i;
              v5 = (void **)a1;
              ++i;
              sub_144F260(a1, v7, 0);
            }
            while ( v18 != i );
          }
          goto LABEL_17;
        }
      }
      else
      {
        v27 = 0;
        if ( !a2 )
          goto LABEL_7;
      }
      v18 = *(unsigned __int64 **)(v10 + 264);
      for ( i = *(unsigned __int64 **)(v10 + 256); v18 != i; ++i )
      {
LABEL_26:
        v7 = *i;
        if ( !v27 || (*(_BYTE *)(v7 + 904) & 0x20) != 0 )
        {
          v5 = (void **)a1;
          sub_144F260(a1, v7, 1);
        }
      }
LABEL_17:
      v9 = v6[1];
      v20 = v6 + 1;
      if ( v9 && v9 != -8 )
      {
        ++v6;
        if ( v8 == v20 )
          return;
      }
      else
      {
        v21 = v6 + 2;
        do
        {
          do
          {
            v9 = *v21;
            v6 = v21++;
          }
          while ( v9 == -8 );
        }
        while ( !v9 );
        if ( v8 == v6 )
          return;
      }
    }
  }
}
