void __fastcall sub_40E1F0(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int v9; // r15d
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // [rsp+8h] [rbp-60h]
  int v15; // [rsp+Ch] [rbp-5Ch]
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]

  v6 = a3;
  if ( !a3 )
  {
    sub_407990(a1, a2, 0, a4, a5, a6);
    a3 = a1[2];
  }
  if ( *(_WORD *)(a3 + 4) == 2 )
  {
    v7 = a1[9];
    if ( v7 )
    {
      v14 = *(_DWORD *)(v7 - 4);
      if ( v14 )
      {
        v8 = a1[1];
        v9 = 0;
        v15 = *(_DWORD *)(a3 + 20);
        while ( 1 )
        {
          v17 = v8;
          v16 = 0;
          sub_407EA0(a1, v7 + 8LL * v9, &v16, v6, a5, a6);
          v11 = v16;
          v8 = v17;
          if ( v16 )
            ++*(_DWORD *)(v16 + 8);
          v12 = *(_QWORD *)(a2 + 8);
          if ( !v12 || (v13 = *(_DWORD *)(v12 - 4), v13 == *(_DWORD *)(v12 - 8)) )
          {
            sub_23A6F0((unsigned int **)(a2 + 8));
            v12 = *(_QWORD *)(a2 + 8);
            v13 = *(_DWORD *)(v12 - 4);
          }
          *(_QWORD *)(v12 + 8LL * v13) = v11;
          *(_DWORD *)(v12 - 4) = v13 + 1;
          if ( v11 )
          {
            if ( (*(_DWORD *)(v11 + 8))-- == 1 )
              sub_15D7BC0(v8, v11);
          }
          v9 += v15;
          if ( v9 >= v14 )
            break;
          v7 = a1[9];
        }
        sub_3FCDF0(0, v8);
      }
    }
  }
}

