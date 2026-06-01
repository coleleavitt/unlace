void __fastcall sub_1E64770(__int64 a1, __int64 *a2, char a3, char a4, unsigned int a5)
{
  __int64 v8; // r13
  unsigned int v9; // r8d
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 i; // rbx
  _QWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbp
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned int v25; // [rsp+8h] [rbp-130h]
  __int64 v26; // [rsp+8h] [rbp-130h]
  int v28; // [rsp+18h] [rbp-120h]
  int v30; // [rsp+2Ch] [rbp-10Ch] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v32; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-F0h]
  void *ptr; // [rsp+50h] [rbp-E8h]
  __int64 v35; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE v36[200]; // [rsp+70h] [rbp-C8h] BYREF

  sub_1E5FE50((__int64)&v32, *a2);
  v8 = v33;
  v9 = 0;
  if ( *(_BYTE *)(v33 + 16) == 26 )
    v9 = *(_DWORD *)(v33 + 16) >> 31;
  v25 = v9;
  v10 = (*(_WORD *)(v33 + 20) >> 2) & 0x3F;
  v28 = sub_A64670(*(_QWORD *)(a1 + 248), v9, a3, 0);
  if ( v28 == v10 )
  {
LABEL_7:
    v14 = (__int64 *)ptr;
    if ( ptr == &v35 )
      return;
    goto LABEL_8;
  }
  v11 = *(_QWORD *)(a1 + 248);
  if ( *(_DWORD *)(*(_QWORD *)(v11 + 17448) + 340LL) == 10 && a4 )
  {
    if ( v10 != 1 )
    {
      sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), a5, 0x1A09u, 0);
      v19 = sub_F5C3D0(v10);
      v31[1] = v20;
      v31[0] = v19;
      v21 = sub_166BAF0((__int64)v36, (__int64)v31);
      v30 = 2;
      sub_1587D10(v21, &v30);
      sub_15F7200(v36);
      v11 = *(_QWORD *)(a1 + 248);
    }
  }
  else
  {
    v12 = v25;
    if ( (unsigned int)sub_A64670(v11, v25, a3 ^ 1u, 0) != v10 )
      goto LABEL_7;
    for ( i = *a2; ; i = *(_QWORD *)(v18 + 40) )
    {
      v16 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
      v17 = sub_F6A5F0(*v16, v12, v13);
      v18 = v17;
      if ( !v17 )
        break;
      v26 = sub_F6AC00(v17);
      if ( v26 != sub_F6AC00(*v16) )
        break;
      if ( sub_F5E2E0(v18) )
        goto LABEL_7;
    }
    v11 = *(_QWORD *)(a1 + 248);
  }
  v22 = sub_A74120(v11, v8, v28 | (*(_WORD *)(v8 + 20) >> 2) & 0x3FC0u);
  if ( v22 == v33 )
  {
    v23 = v32;
  }
  else
  {
    v33 = v22;
    v23 = sub_1E5E740((__int64)&v32, *(_QWORD *)(a1 + 248), v32, 0);
  }
  v24 = sub_A75F00(*(_QWORD *)(a1 + 248), *a2, v23);
  v14 = (__int64 *)ptr;
  *a2 = v24;
  if ( v14 != &v35 )
LABEL_8:
    free(v14);
}
