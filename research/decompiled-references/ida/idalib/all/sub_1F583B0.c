void __fastcall sub_1F583B0(__int64 *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ebp
  int v10; // r15d
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned int v20; // edx
  unsigned __int64 v21; // rax
  _BYTE *v22; // rdi
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-C0h]
  _BYTE v32[184]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = sub_1EE7490(*a1);
  v4 = *a1;
  *(_DWORD *)(a2 + 16) = v3;
  *(_DWORD *)(a2 + 20) = sub_1EE7490(v4);
  v7 = *a1;
  v8 = *(unsigned int *)(*a1 + 24);
  if ( *(unsigned int *)(*a1 + 40) - v8 == 1 )
  {
    v23 = *(_QWORD **)(v7 + 8);
    v24 = sub_1EE13A0((__int64)v23, *(_QWORD *)(v7 + 16), (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
    *(_QWORD *)(a2 + 8) = sub_1EDB980(v23, v24, v25, v26, v27, v28);
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 40) - *(_DWORD *)(v7 + 24);
    v31 = 0x1000000000LL;
    ptr = v32;
    if ( (unsigned __int64)v9 > 0x10 )
    {
      sub_2237220(&ptr, v32, v9, 8);
      v7 = *a1;
    }
    if ( v9 <= 0 )
    {
      v20 = v31;
    }
    else
    {
      v10 = 0;
      do
      {
        v11 = *(_QWORD **)(v7 + 8);
        v12 = sub_1EE13A0((__int64)v11, *(_QWORD *)(v7 + 16), (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
        v17 = sub_1EDB980(v11, v12, v13, v14, v15, v16);
        v8 = (unsigned int)v31;
        v18 = (unsigned int)v31 + 1LL;
        if ( v18 > HIDWORD(v31) )
        {
          v29 = v17;
          sub_2237220(&ptr, v32, v18, 8);
          v8 = (unsigned int)v31;
          v19 = ptr;
          v17 = v29;
        }
        else
        {
          v19 = ptr;
        }
        v19[v8] = v17;
        ++v10;
        v20 = v31 + 1;
        v7 = *a1;
        LODWORD(v31) = v31 + 1;
      }
      while ( v9 != v10 );
    }
    v21 = (unsigned __int64)sub_BA6010(*(_QWORD **)(*(_QWORD *)(v7 + 8) + 144LL), ptr, v20, v8, v5, v6);
    v22 = ptr;
    *(_QWORD *)(a2 + 8) = v21 | 1;
    if ( v22 != v32 )
      free(v22);
  }
}
