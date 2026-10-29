__int64 __fastcall sub_1EFA7B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // esi
  _DWORD *v6; // r8
  __int64 v7; // rsi
  _DWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  _DWORD *v12; // rax

  v1 = *(unsigned int *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) = v1 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v1);
  v5 = v4;
  if ( (_DWORD)v4 )
  {
    if ( *(_QWORD *)(v3 + 856) )
      sub_1EDF870(v2, v3);
    v6 = *(_DWORD **)(v3 + 2656);
    v7 = 8LL * *(unsigned int *)(v3 + 2664);
    v8 = v6;
    v9 = v7 >> 3;
    if ( v7 )
    {
      do
      {
        while ( 1 )
        {
          v10 = v9 >> 1;
          v11 = &v8[2 * (v9 >> 1)];
          if ( (unsigned int)(v4 - 1) < *v11 )
            break;
          v8 = v11 + 2;
          v9 = v9 - v10 - 1;
          if ( v9 <= 0 )
          {
            v12 = v11;
            if ( v6 == v8 )
              goto LABEL_12;
            goto LABEL_8;
          }
        }
        v9 >>= 1;
      }
      while ( v10 );
      v12 = v8 - 2;
      if ( v6 != v8 )
        goto LABEL_8;
    }
LABEL_12:
    v12 = &v8[(unsigned __int64)v7 / 4];
LABEL_8:
    v5 = v4 + v12[1];
  }
  return sub_1EE3360(v2, v5);
}
