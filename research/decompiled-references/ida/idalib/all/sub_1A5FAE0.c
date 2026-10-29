void __fastcall sub_1A5FAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  unsigned __int8 v8; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  const void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  size_t v17; // r10
  __int64 v18; // r11
  _DWORD *v19; // r8
  unsigned int v20; // ecx
  int v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+8h] [rbp-A0h]
  __int64 v23; // [rsp+10h] [rbp-98h]
  const void *v24; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+28h] [rbp-80h]
  _QWORD v27[15]; // [rsp+30h] [rbp-78h] BYREF

  v6 = a4;
  v8 = a5;
  v10 = sub_1A3D750(a3, a2, a3, a4, a5, a6);
  if ( !v10 )
    v10 = (_QWORD *)a3;
  v11 = v10[1] & 7LL;
  if ( *((char *)v10 + 29) < 0 )
  {
    v12 = 0;
    if ( v11 )
      v12 = sub_B8C660((__int64)v10);
  }
  else if ( v11 )
  {
    v12 = *(v10 - 1);
  }
  else
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)(a1 + 248);
  v27[0] = v12;
  ptr = v27;
  v26 = 0x800000001LL;
  v14 = (const void *)sub_A85080(v13, (__int64)v10);
  v16 = 1;
  v17 = 8 * v15;
  v18 = (8 * v15) >> 3;
  if ( (unsigned __int64)(v18 + 1) > 8 )
  {
    v24 = v14;
    v23 = (8 * v15) >> 3;
    v22 = 8 * v15;
    sub_2237220(&ptr, v27, v18 + 1, 8);
    v16 = (unsigned int)v26;
    v14 = v24;
    LODWORD(v18) = v23;
    v17 = v22;
  }
  v19 = ptr;
  if ( v17 )
  {
    v21 = v18;
    memcpy((char *)ptr + 8 * v16, v14, v17);
    v19 = ptr;
    LODWORD(v16) = v26;
    LODWORD(v18) = v21;
  }
  v20 = *((_DWORD *)v10 + 6);
  LODWORD(v26) = v18 + v16;
  sub_1A5E3E0(a1, a2, (__int64)v10, v20, v19, (unsigned int)(v18 + v16), v6, v8);
  if ( ptr != v27 )
    free(ptr);
}
