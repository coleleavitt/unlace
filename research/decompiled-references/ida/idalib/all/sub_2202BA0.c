__int64 __fastcall sub_2202BA0(void **a1, __int64 a2, int a3, _BYTE *a4)
{
  int v5; // r9d
  _BYTE *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned __int64 v9; // rax
  char *v10; // rdi
  unsigned __int64 v11; // r12
  unsigned __int64 *v12; // r14
  char *v13; // rax
  unsigned __int8 v14; // r8
  unsigned int v15; // r12d
  _BYTE *v16; // rdi
  int v18; // [rsp+4h] [rbp-84h]
  _BYTE *v20; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+10h] [rbp-78h] BYREF
  int v23; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  _BYTE v26[88]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a3;
  v6 = a4;
  v7 = *(unsigned int *)(a2 + 8);
  v25 = 0x400000000LL;
  v8 = v7;
  v9 = v7 + 63;
  v10 = v26;
  ptr = v26;
  v11 = v9 >> 6;
  if ( v9 == 63 )
  {
    v11 = 0;
    v12 = (unsigned __int64 *)v26;
  }
  else
  {
    v12 = (unsigned __int64 *)v26;
    if ( v11 > 4 )
    {
      sub_2237220(&ptr, v26, v9 >> 6, 8);
      v12 = (unsigned __int64 *)ptr;
      v6 = a4;
      v5 = a3;
      v10 = (char *)ptr + 8 * (unsigned int)v25;
    }
    v13 = (char *)&v12[v11];
    if ( v13 != v10 )
    {
      v20 = v6;
      v18 = v5;
      memset(v10, 0, 8 * ((unsigned __int64)(v13 - v10 - 8) >> 3) + 8);
      v5 = v18;
      v6 = v20;
    }
    LODWORD(v25) = v11;
  }
  v14 = *(_BYTE *)(a2 + 12) ^ 1;
  if ( *a1 == &unk_26F7B20 )
    v15 = sub_2201DA0((__int64)a1, v12, v11, v8, v14, v5, v6);
  else
    v15 = sub_21FA750((__int64)a1, v12, v11, v8, v14, v5, v6);
  sub_2205600(&v22, v8, ptr, (unsigned int)v25);
  if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
    operator delete[](*(void **)a2);
  v16 = ptr;
  *(_QWORD *)a2 = v22;
  *(_DWORD *)(a2 + 8) = v23;
  if ( v16 != v26 )
    free(v16);
  return v15;
}
