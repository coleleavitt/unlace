void __fastcall sub_1F59880(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // rbp
  int v11; // edx
  unsigned __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  int v16; // r10d
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r9d
  _BYTE *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+10h] [rbp-88h]
  int v26; // [rsp+18h] [rbp-80h]
  int v27; // [rsp+1Ch] [rbp-7Ch]
  void *v28; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+38h] [rbp-60h]
  _BYTE v32[88]; // [rsp+40h] [rbp-58h] BYREF

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 16);
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = (unsigned int)(v4 + 1);
  v9 = *(_QWORD *)(v5 + 856) == 0;
  *(_DWORD *)(*a1 + 24) = v8;
  v10 = *(_QWORD *)(v6 + 8 * v4);
  if ( !v9 )
  {
    sub_1EDF870(v7, v5);
    v3 = *a1;
    v8 = *(unsigned int *)(*a1 + 24);
    v6 = *(_QWORD *)(*a1 + 32);
  }
  v11 = __ROR4__(v10, 1);
  v12 = HIDWORD(v10);
  if ( v12 )
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 3320) + 8LL * (unsigned int)(v12 - 1));
  if ( v11 )
    v11 = v11 + *(_DWORD *)(v5 + 1648) - 2;
  v13 = *(_QWORD *)(v6 + 8 * v8);
  *(_DWORD *)(a2 + 28) = v11;
  v14 = (unsigned int)(v8 + 1);
  *(_DWORD *)(v3 + 24) = v14;
  ptr = v32;
  v31 = 0x400000000LL;
  v15 = ((unsigned __int64)(unsigned int)v13 + 63) >> 6;
  v16 = v15;
  if ( v15 )
  {
    v17 = 4;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      *(_DWORD *)(v3 + 24) = v14 + 1;
      if ( v18 + 1 <= v17 )
      {
        ++v19;
        *((_QWORD *)ptr + v18) = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v14);
        v18 = (unsigned int)(v31 + 1);
        LODWORD(v31) = v31 + 1;
        if ( v16 == v19 )
          goto LABEL_13;
      }
      else
      {
        v27 = v19;
        v25 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v14);
        v26 = v16;
        v24 = v13;
        sub_2237220(&ptr, v32, v18 + 1, 8);
        v16 = v26;
        v13 = v24;
        *((_QWORD *)ptr + (unsigned int)v31) = v25;
        v19 = v27 + 1;
        v18 = (unsigned int)(v31 + 1);
        LODWORD(v31) = v31 + 1;
        if ( v26 == v27 + 1 )
        {
LABEL_13:
          v20 = ptr;
          goto LABEL_14;
        }
      }
      v14 = *(unsigned int *)(v3 + 24);
      v17 = HIDWORD(v31);
    }
  }
  v20 = v32;
LABEL_14:
  sub_2205610(&v28, (unsigned int)v13, (unsigned int)v15, v20);
  if ( ptr != v32 )
    free(ptr);
  sub_C0CB30(a2 + 16, *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL), (__int64)&v28, v21, v22, v23);
  if ( v29 > 0x40 )
  {
    if ( v28 )
      operator delete[](v28);
  }
}
