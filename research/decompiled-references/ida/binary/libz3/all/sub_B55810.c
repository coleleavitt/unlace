__int64 __fastcall sub_B55810(__int64 *a1)
{
  __int64 (__fastcall *v2)(__int64, int); // rdx
  unsigned int *v3; // rax
  unsigned int v4; // r12d
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  int i; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int *v16; // rax
  int v17; // r12d
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rdx
  int j; // ebp
  void (__fastcall ***v27)(__int64); // rbp

  v2 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
  v3 = (unsigned int *)a1[166];
  if ( v3 )
  {
    v4 = *(v3 - 1);
    if ( v2 == sub_B51600 )
    {
      if ( v4 )
      {
        v5 = a1[165];
        v6 = *v3;
        v7 = 8 * v6;
        v8 = v5 + 8 * v6;
        if ( v5 )
        {
          v9 = 8LL * *(unsigned int *)(v5 - 4);
          v10 = v5 + v9;
          if ( v7 != v9 )
            goto LABEL_6;
          *(_DWORD *)(v5 - 4) = v6;
        }
        else
        {
          v10 = 0;
          if ( v7 )
          {
            do
            {
LABEL_6:
              v11 = *(_QWORD *)(v10 - 8);
              v10 -= 8;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            while ( v8 != v10 );
            v12 = a1[165];
            v3 = (unsigned int *)a1[166];
            if ( v12 )
              *(_DWORD *)(v12 - 4) = v6;
            if ( !v3 )
              goto LABEL_11;
          }
        }
        *(v3 - 1) = 0;
LABEL_11:
        for ( i = 0; i != v4; ++i )
          sub_180C2E0(a1 + 167);
      }
LABEL_13:
      sub_965AE0((__int64)a1, v4);
      goto LABEL_14;
    }
  }
  else
  {
    v4 = 0;
    if ( v2 == sub_B51600 )
      goto LABEL_13;
  }
  v2((__int64)a1, v4);
LABEL_14:
  sub_D814A0(a1 + 9);
  sub_1584740(a1 + 90);
  v14 = a1[110];
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v15 = a1[156];
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  sub_1584740(a1 + 111);
  sub_1584740(a1 + 131);
  sub_14B6450(a1 + 7);
  v16 = (unsigned int *)a1[166];
  if ( v16 )
  {
    v17 = *(v16 - 1);
    if ( v17 )
    {
      v18 = a1[165];
      v19 = *v16;
      v20 = 8 * v19;
      v21 = v18 + 8 * v19;
      if ( v18 )
      {
        v22 = 8LL * *(unsigned int *)(v18 - 4);
        v23 = v18 + v22;
        if ( v20 != v22 )
          goto LABEL_22;
        *(_DWORD *)(v18 - 4) = v19;
      }
      else
      {
        v23 = 0;
        if ( v20 )
        {
          do
          {
LABEL_22:
            v24 = *(_QWORD *)(v23 - 8);
            v23 -= 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          while ( v21 != v23 );
          v25 = a1[165];
          v16 = (unsigned int *)a1[166];
          if ( v25 )
            *(_DWORD *)(v25 - 4) = v19;
          if ( !v16 )
            goto LABEL_27;
        }
      }
      *(v16 - 1) = 0;
LABEL_27:
      for ( j = 0; j != v17; ++j )
        sub_180C2E0(a1 + 167);
    }
  }
  v27 = (void (__fastcall ***)(__int64))a1[172];
  if ( v27 )
  {
    (**v27)(a1[172]);
    sub_186B220(v27);
    a1[172] = 0;
  }
  sub_7E3FE0(a1[3], a1[3], (__int64)(a1 + 176));
  sub_A72220(a1[3], (__int64)(a1 + 180));
  return sub_965AC0((__int64)a1);
}

