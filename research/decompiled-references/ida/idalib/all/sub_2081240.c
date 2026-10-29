__int64 __fastcall sub_2081240(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // r13
  unsigned __int8 v7; // al
  __int64 *v8; // rax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  _QWORD *v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-38h]
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

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
    v10 = v3 - 1;
    v18 = *v8;
    v19[0] = v8[1];
    v11 = sub_2070640(v18, v19);
    v12 = *a2;
    v13 = v10 & v11;
    v14 = (_QWORD *)(v6 + 8LL * v13);
    v15 = *v14;
    if ( v12 == *v14 )
    {
LABEL_15:
      *a3 = v14;
      return 1;
    }
    else
    {
      if ( v15 != -4096 )
      {
        v16 = 1;
        v17 = nullptr;
        while ( 1 )
        {
          if ( v15 != -8192 || v17 )
            v14 = v17;
          v13 = v10 & (v16 + v13);
          v15 = *(_QWORD *)(v6 + 8LL * v13);
          if ( v15 == v12 )
          {
            v14 = (_QWORD *)(v6 + 8LL * v13);
            goto LABEL_15;
          }
          if ( v15 == -4096 )
            break;
          ++v16;
          v17 = v14;
          v14 = (_QWORD *)(v6 + 8LL * v13);
        }
        if ( !v14 )
          v14 = (_QWORD *)(v6 + 8LL * v13);
      }
      *a3 = v14;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
