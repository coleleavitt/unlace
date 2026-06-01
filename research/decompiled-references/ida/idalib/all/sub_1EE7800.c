unsigned __int64 __fastcall sub_1EE7800(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // r14d
  _QWORD *v5; // r15
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // rax
  unsigned __int64 v18; // rbx
  int v20; // [rsp+4h] [rbp-E4h]
  int v21; // [rsp+8h] [rbp-E0h]
  unsigned int v22; // [rsp+Ch] [rbp-DCh]
  int v23; // [rsp+10h] [rbp-D8h]
  __int64 v24; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-C0h]
  _BYTE v27[184]; // [rsp+30h] [rbp-B8h] BYREF

  v20 = sub_1EE7490(a1);
  v21 = sub_1EE7490(a1);
  v22 = sub_1EE7490(a1);
  v2 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v2 + 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
  ptr = v27;
  v26 = 0x1000000000LL;
  if ( (unsigned int)v3 > 0x10uLL )
  {
    v23 = v3;
    sub_2237220(&ptr, v27, (unsigned int)v3, 8);
    LODWORD(v3) = v23;
  }
  v4 = v3 - 1;
  if ( (_DWORD)v3 )
  {
    do
    {
      v5 = *(_QWORD **)(a1 + 8);
      v6 = sub_1EE13A0((__int64)v5, *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
      v11 = sub_1EDB980(v5, v6, v7, v8, v9, v10);
      v12 = (unsigned int)v26;
      v13 = (unsigned int)v26 + 1LL;
      if ( v13 > HIDWORD(v26) )
      {
        v24 = v11;
        sub_2237220(&ptr, v27, v13, 8);
        v12 = (unsigned int)v26;
        v14 = ptr;
        v11 = v24;
      }
      else
      {
        v14 = ptr;
      }
      --v4;
      v14[v12] = v11;
      LODWORD(v26) = v26 + 1;
    }
    while ( v4 != -1 );
  }
  v15 = *(unsigned int *)(a1 + 24);
  v16 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 24) = v15 + 1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v15) )
  {
    v17 = (_DWORD *)sub_1F6A0A0(v16, *(_QWORD *)(a1 + 16));
    v16 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v17 = nullptr;
  }
  v18 = sub_BC21A0(*(_QWORD **)(v16 + 144), v20, v21, (__int64)ptr, (unsigned int)v26, v22, v17);
  if ( ptr != v27 )
    free(ptr);
  return v18;
}
