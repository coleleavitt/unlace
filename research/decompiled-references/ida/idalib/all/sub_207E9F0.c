__int64 __fastcall sub_207E9F0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // r12
  __int64 v8; // r14
  unsigned __int8 v9; // al
  __int64 *v10; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rsi
  unsigned int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  int v17; // r8d
  _QWORD *v18; // rdi
  int v19; // [rsp+8h] [rbp-60h]
  void *v20; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-50h]
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  bool v23; // [rsp+28h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v8 = *a1;
    v21 = *(_DWORD *)(*a2 + 24);
    if ( v21 > 0x40 )
      sub_2205510(&v20);
    else
      v20 = *(void **)(v5 + 16);
    v9 = *(_BYTE *)(v5 - 16);
    if ( (v9 & 2) != 0 )
      v10 = *(__int64 **)(v5 - 32);
    else
      v10 = (__int64 *)(v5 - 8LL * ((v9 >> 2) & 0xF) - 16);
    v22 = *v10;
    v23 = *(_DWORD *)(v5 + 4) != 0;
    v11 = sub_2078D30((__int64)&v20, &v22);
    if ( v21 > 0x40 && v20 )
    {
      v19 = v11;
      operator delete[](v20);
      v11 = v19;
    }
    v12 = v3 - 1;
    v13 = *a2;
    v14 = v12 & v11;
    v15 = (_QWORD *)(v8 + 8LL * v14);
    v16 = *v15;
    if ( *v15 == *a2 )
    {
LABEL_21:
      *a3 = v15;
      return 1;
    }
    else
    {
      if ( v16 != -4096 )
      {
        v17 = 1;
        v18 = nullptr;
        while ( 1 )
        {
          if ( v16 != -8192 || v18 )
            v15 = v18;
          v14 = v12 & (v17 + v14);
          v16 = *(_QWORD *)(v8 + 8LL * v14);
          if ( v16 == v13 )
          {
            v15 = (_QWORD *)(v8 + 8LL * v14);
            goto LABEL_21;
          }
          if ( v16 == -4096 )
            break;
          ++v17;
          v18 = v15;
          v15 = (_QWORD *)(v8 + 8LL * v14);
        }
        if ( !v15 )
          v15 = (_QWORD *)(v8 + 8LL * v14);
      }
      *a3 = v15;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
