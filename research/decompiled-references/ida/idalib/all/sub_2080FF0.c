__int64 __fastcall sub_2080FF0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // cl
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22[2]; // [rsp+8h] [rbp-50h] BYREF
  int v23; // [rsp+18h] [rbp-40h] BYREF
  int v24; // [rsp+1Ch] [rbp-3Ch] BYREF
  char v25[4]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v26[6]; // [rsp+24h] [rbp-34h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    if ( (v7 & 2) != 0 )
    {
      v8 = **(_QWORD **)(v5 - 32);
      v22[0] = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 8LL);
      v9 = *(_QWORD *)(v5 - 32);
    }
    else
    {
      v20 = v5 - 8LL * ((v7 >> 2) & 0xF);
      v8 = *(_QWORD *)(v20 - 16);
      v21 = *(_QWORD *)(v20 - 8);
      v9 = v20 - 16;
      v22[0] = v21;
    }
    v12 = v3 - 1;
    v22[1] = *(_QWORD *)(v9 + 16);
    v23 = *(_DWORD *)(v5 + 4);
    v24 = *(_DWORD *)(v5 + 16);
    v25[0] = *(_BYTE *)(v5 + 28);
    v26[0] = *(_QWORD *)(v5 + 20);
    v13 = sub_207C060(v8, v22, &v23, &v24, v25, (__int64)v26);
    v14 = *a2;
    v15 = v12 & v13;
    v16 = (_QWORD *)(v6 + 8LL * v15);
    v17 = *v16;
    if ( *v16 == *a2 )
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
