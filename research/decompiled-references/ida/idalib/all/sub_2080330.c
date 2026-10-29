__int64 __fastcall sub_2080330(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int8 v7; // cl
  __int64 v8; // r8
  __int64 v9; // rdi
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  _QWORD *v19; // rdi
  __int64 *v20; // rcx
  __int64 v21; // [rsp+8h] [rbp-40h] BYREF
  int v22[14]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    v8 = *a2;
    if ( (v7 & 2) != 0 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 8LL);
      if ( *(_BYTE *)v5 != 16 )
        v8 = **(_QWORD **)(v5 - 32);
    }
    else
    {
      v20 = (__int64 *)(v5 - 8LL * ((v7 >> 2) & 0xF) - 16);
      v9 = v20[1];
      if ( *(_BYTE *)v5 != 16 )
        v8 = *v20;
    }
    v21 = v8;
    v12 = v3 - 1;
    v22[0] = *(_DWORD *)(v5 + 4);
    v13 = sub_206F1A0(v9, &v21, v22);
    v14 = *a2;
    v15 = v12 & v13;
    v16 = (_QWORD *)(v6 + 8LL * v15);
    v17 = *v16;
    if ( *a2 == *v16 )
    {
LABEL_17:
      *a3 = v16;
      return 1;
    }
    else
    {
      if ( v17 != -4096 )
      {
        v18 = 1;
        v19 = nullptr;
        while ( 1 )
        {
          if ( v17 != -8192 || v19 )
            v16 = v19;
          v15 = v12 & (v18 + v15);
          v17 = *(_QWORD *)(v6 + 8LL * v15);
          if ( v17 == v14 )
          {
            v16 = (_QWORD *)(v6 + 8LL * v15);
            goto LABEL_17;
          }
          if ( v17 == -4096 )
            break;
          ++v18;
          v19 = v16;
          v16 = (_QWORD *)(v6 + 8LL * v15);
        }
        if ( !v16 )
          v16 = (_QWORD *)(v6 + 8LL * v15);
      }
      *a3 = v16;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
