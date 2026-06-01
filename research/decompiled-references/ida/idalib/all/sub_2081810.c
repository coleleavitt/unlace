__int64 __fastcall sub_2081810(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // edi
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // [rsp+4h] [rbp-44h] BYREF
  __int64 v23; // [rsp+8h] [rbp-40h] BYREF
  __int64 v24[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(unsigned __int16 *)(*a2 + 2);
    v22 = *(_DWORD *)(*a2 + 4);
    v8 = *(_BYTE *)(v5 - 16);
    if ( (v8 & 2) != 0 )
    {
      v23 = **(_QWORD **)(v5 - 32);
      v9 = *(_QWORD *)(v5 - 32);
    }
    else
    {
      v20 = v5 - 8LL * ((v8 >> 2) & 0xF);
      v21 = *(_QWORD *)(v20 - 16);
      v9 = v20 - 16;
      v23 = v21;
    }
    v12 = v3 - 1;
    v24[0] = *(_QWORD *)(v9 + 8);
    v13 = sub_20721D0(v7, &v22, &v23, v24);
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
