void __fastcall sub_1F59A70(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // r12
  int v11; // edx
  unsigned __int64 v12; // r12
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  int v19; // r10d
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r8d
  _BYTE *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+8h] [rbp-90h]
  __int64 v28; // [rsp+10h] [rbp-88h]
  int v29; // [rsp+18h] [rbp-80h]
  int v30; // [rsp+1Ch] [rbp-7Ch]
  void *v31; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+38h] [rbp-60h]
  _BYTE v35[88]; // [rsp+40h] [rbp-58h] BYREF

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
  *(_DWORD *)(a2 + 28) = v11;
  v13 = v8 + 1;
  v14 = *(_QWORD *)(v6 + 8 * v8);
  *(_DWORD *)(v3 + 24) = v13;
  *(_DWORD *)(a2 + 32) = v14;
  v15 = *(unsigned int *)(v3 + 24);
  v16 = *(_QWORD *)(v6 + 8 * v15);
  v17 = (unsigned int)(v15 + 1);
  ptr = v35;
  *(_DWORD *)(v3 + 24) = v17;
  v34 = 0x400000000LL;
  v18 = ((unsigned __int64)(unsigned int)v16 + 63) >> 6;
  v19 = v18;
  if ( v18 )
  {
    v20 = 4;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      *(_DWORD *)(v3 + 24) = v17 + 1;
      if ( v21 + 1 <= v20 )
      {
        ++v22;
        *((_QWORD *)ptr + v21) = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v17);
        v21 = (unsigned int)(v34 + 1);
        LODWORD(v34) = v34 + 1;
        if ( v19 == v22 )
          goto LABEL_13;
      }
      else
      {
        v30 = v22;
        v28 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v17);
        v29 = v19;
        v27 = v16;
        sub_2237220(&ptr, v35, v21 + 1, 8);
        v19 = v29;
        v16 = v27;
        *((_QWORD *)ptr + (unsigned int)v34) = v28;
        v22 = v30 + 1;
        v21 = (unsigned int)(v34 + 1);
        LODWORD(v34) = v34 + 1;
        if ( v29 == v30 + 1 )
        {
LABEL_13:
          v23 = ptr;
          goto LABEL_14;
        }
      }
      v17 = *(unsigned int *)(v3 + 24);
      v20 = HIDWORD(v34);
    }
  }
  v23 = v35;
LABEL_14:
  sub_2205610(&v31, (unsigned int)v16, (unsigned int)v18, v23);
  if ( ptr != v35 )
    free(ptr);
  sub_C0CB30(a2 + 16, *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL), (__int64)&v31, v24, v25, v26);
  if ( v32 > 0x40 )
  {
    if ( v31 )
      operator delete[](v31);
  }
}
