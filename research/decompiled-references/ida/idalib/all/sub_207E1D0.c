__int64 __fastcall sub_207E1D0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // cl
  __int64 *v8; // r8
  int v9; // edi
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  _QWORD *v19; // rdi
  int v20; // [rsp+24h] [rbp-34h] BYREF
  __int64 v21[6]; // [rsp+28h] [rbp-30h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    if ( (v7 & 2) != 0 )
      v8 = *(__int64 **)(v5 - 32);
    else
      v8 = (__int64 *)(v5 - 8LL * ((v7 >> 2) & 0xF) - 16);
    v9 = *(_DWORD *)(v5 + 4);
    v20 = *(unsigned __int16 *)(v5 + 2);
    v12 = v3 - 1;
    v21[0] = *v8;
    v13 = sub_20793C0(v9, &v20, v21);
    v14 = *a2;
    v15 = v12 & v13;
    v16 = (_QWORD *)(v6 + 8LL * v15);
    v17 = *v16;
    if ( *a2 == *v16 )
    {
LABEL_15:
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
            goto LABEL_15;
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
