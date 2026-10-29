__int64 __fastcall sub_207ECF0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebp
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int8 v7; // al
  unsigned int v10; // ebx
  int v11; // ebp
  __int64 v12; // rsi
  unsigned int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  _QWORD *v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-80h]
  int v19; // [rsp+20h] [rbp-68h] BYREF
  int v20; // [rsp+24h] [rbp-64h] BYREF
  __int32 v21; // [rsp+28h] [rbp-60h] BYREF
  void *v22; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-50h]
  void *v24; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    if ( (v7 & 2) != 0 )
      v18 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
    else
      v18 = *(_QWORD *)(v5 - 8LL * ((v7 >> 2) & 0xF));
    v19 = *(_DWORD *)(v5 + 20);
    v20 = *(_DWORD *)(v5 + 32);
    v21 = *(_DWORD *)(v5 + 36);
    v23 = *(_DWORD *)(v5 + 48);
    if ( v23 > 0x40 )
      sub_2205510(&v22);
    else
      v22 = *(void **)(v5 + 40);
    v25 = *(_DWORD *)(v5 + 64);
    if ( v25 > 0x40 )
      sub_2205510(&v24);
    else
      v24 = *(void **)(v5 + 56);
    v10 = sub_2074D40(v18, &v19, &v20, &v21, (__int64)&v22, (__int64)&v24);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    if ( v23 > 0x40 && v22 )
      operator delete[](v22);
    v11 = v3 - 1;
    v12 = *a2;
    v13 = v11 & v10;
    v14 = (_QWORD *)(v6 + 8LL * (v11 & v10));
    v15 = *v14;
    if ( *v14 == *a2 )
    {
LABEL_27:
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
          v13 = v11 & (v16 + v13);
          v15 = *(_QWORD *)(v6 + 8LL * v13);
          if ( v15 == v12 )
          {
            v14 = (_QWORD *)(v6 + 8LL * v13);
            goto LABEL_27;
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
