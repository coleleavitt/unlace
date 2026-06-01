__int64 __fastcall sub_5A66F0(__int64 a1, _QWORD *a2, int a3, unsigned int *a4)
{
  __int64 v6; // r12
  unsigned int *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int *v11; // rbp
  int v12; // ecx
  _DWORD *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  int *v16; // rbx
  unsigned int v17; // edx
  int *v18; // rax
  int v19; // eax
  __int64 v20; // rbx
  void (***v21)(void); // rdi
  __int64 v23; // rax
  void (***v24)(void); // rdi
  __int64 v25; // rbp
  int v26; // [rsp+8h] [rbp-40h] BYREF
  _DWORD v27[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  if ( a2[1] != a1 )
    return 0;
  v6 = sub_186B270(0x30u);
  *(_QWORD *)v6 = &off_1C52260;
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  if ( a3 )
  {
    v7 = &a4[a3];
    do
    {
      while ( 1 )
      {
        v10 = 4LL * *a4;
        v11 = (int *)(v10 + a2[7]);
        v12 = *v11;
        if ( *v11 != -1 )
          break;
        v13 = (_DWORD *)(a2[10] + v10);
        v14 = *(_QWORD *)(v6 + 16);
        if ( !v14 || (v15 = *(unsigned int *)(v14 - 4), (_DWORD)v15 == *(_DWORD *)(v14 - 8)) )
        {
          sub_2FD3F0((unsigned int **)(v6 + 16));
          v14 = *(_QWORD *)(v6 + 16);
          v15 = *(unsigned int *)(v14 - 4);
        }
        ++a4;
        *(_DWORD *)(v14 + 4 * v15) = *v13;
        ++*(_DWORD *)(v14 - 4);
        if ( v7 == a4 )
          goto LABEL_11;
      }
      v8 = *(_QWORD *)(v6 + 8);
      if ( !v8 || (v9 = *(unsigned int *)(v8 - 4), (_DWORD)v9 == *(_DWORD *)(v8 - 8)) )
      {
        sub_2FD3F0((unsigned int **)(v6 + 8));
        v8 = *(_QWORD *)(v6 + 8);
        v12 = *v11;
        v9 = *(unsigned int *)(v8 - 4);
      }
      ++a4;
      *(_DWORD *)(v8 + 4 * v9) = v12;
      ++*(_DWORD *)(v8 - 4);
    }
    while ( v7 != a4 );
LABEL_11:
    v16 = *(int **)(v6 + 8);
    if ( v16 )
    {
      v17 = *(v16 - 1);
      if ( v17 > 1 )
      {
        v23 = sub_4C5780(*(_QWORD *)(a2[1] + 24LL), a2[13], v17, *(unsigned int **)(v6 + 8));
        v24 = *(void (****)(void))(v6 + 24);
        v25 = v23;
        if ( (void (***)(void))v23 != v24 )
        {
          sub_568170(v24);
          *(_QWORD *)(v6 + 24) = v25;
        }
        v17 = *(v16 - 1);
      }
      if ( v17 )
      {
        v18 = *(int **)(v6 + 16);
        if ( v18 )
        {
          if ( *(v18 - 1) )
          {
            v19 = *v18;
            v26 = *v16;
            v27[0] = v19;
            v20 = sub_186B270(0x38u);
            sub_5B0C30(v20, a2, 1, &v26, v27);
            v21 = *(void (****)(void))(v6 + 40);
            if ( (void (***)(void))v20 != v21 )
            {
              sub_4CF1F0(v21);
              *(_QWORD *)(v6 + 40) = v20;
            }
          }
        }
      }
    }
  }
  return v6;
}

