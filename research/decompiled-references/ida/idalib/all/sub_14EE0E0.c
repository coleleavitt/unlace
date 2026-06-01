__int64 __fastcall sub_14EE0E0(__int64 a1)
{
  int *v1; // rsi
  int v2; // r13d
  const void **v3; // r12
  _QWORD *v4; // rbp
  int v5; // eax
  unsigned __int8 *v6; // r14
  __int64 v7; // r15
  const void *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 result; // rax
  __int64 v21; // rdx
  void *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  unsigned int v25; // [rsp+1Ch] [rbp-6Ch] BYREF
  void *v26; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-60h]
  char v28; // [rsp+2Ch] [rbp-5Ch]
  void *v29; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-50h]
  char v31; // [rsp+3Ch] [rbp-4Ch]
  void *v32; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-40h]

  v1 = (int *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(const void ***)(a1 + 24);
  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 96) + 248LL);
  v5 = *(_DWORD *)(a1 + 20);
  if ( !v5 )
    v5 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v5;
  sub_14634E0(*(__int64 **)(a1 + 8), v1);
  v6 = (unsigned __int8 *)v3[1];
  v25 = v2;
  if ( v6 == (_BYTE *)&dword_0 + 1 )
  {
    v21 = v4[2344];
    v22 = (void *)*(unsigned __int8 *)*v3;
    v33 = 8;
    v32 = v22;
    result = sub_C0C5D0(v4, (__int64)&v32, v21, v2);
    if ( v33 > 0x40 && v32 )
    {
      v24 = result;
      operator delete[](v32);
      return v24;
    }
  }
  else
  {
    v7 = v4[2344];
    v8 = *v3;
    v23 = sub_A63CE0(v4);
    v13 = sub_F65240(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v1, v9, v10, v11, v12);
    v30 = 64;
    v29 = v6;
    v31 = !v13;
    v17 = sub_AAC1F0((__int64)v4, v23, v14, v15, v16);
    if ( v17 == 64 )
    {
      v27 = 64;
      v26 = v29;
      v28 = v31;
    }
    else
    {
      if ( v31 )
      {
        sub_2206D90(&v32, &v29, v17);
        v28 = 1;
      }
      else
      {
        sub_2206DE0(&v32, &v29, v17);
        v28 = 0;
      }
      v27 = v33;
      v26 = v32;
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
    }
    v18 = sub_A70F70((__int64)v4, v7, (__int64)&v26, nullptr, 0, 0);
    v19 = sub_C09810(v4, v8, (size_t)v6, 6u, 0, v18, (__int64)&v25, 1);
    if ( v27 > 0x40 )
    {
      if ( v26 )
        operator delete[](v26);
    }
    return sub_18C6490(*(_QWORD *)(a1 + 96), v25, v19, v3[2], v3[3]);
  }
  return result;
}
