__int64 __fastcall sub_1EDB740(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // ebx
  _QWORD *v10; // r12
  _QWORD *v11; // rdx
  __int64 v12; // r12
  __int64 v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rdi
  int v19; // eax
  int v20; // esi
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  size_t v26; // rax
  __int64 v27; // [rsp+8h] [rbp-40h] BYREF
  __int64 v28; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v29[6]; // [rsp+18h] [rbp-30h] BYREF

  v7 = a2;
  if ( a2 <= 0x13 )
  {
    v14 = sub_1ECF620(a1, a2, a3, a4, a5, a6);
    v12 = v14;
    if ( !v14 )
      return v12;
    v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
    if ( (unsigned __int8)sub_1EB3D80((__int64 *)(a1 + 12968), &v27, &v28) )
    {
      v16 = (_QWORD *)(v28 + 8);
      if ( *(_DWORD *)(v28 + 16) )
        return v12;
      goto LABEL_18;
    }
    v17 = *(unsigned int *)(a1 + 12984);
    v18 = (_QWORD *)v28;
    v19 = *(_DWORD *)(a1 + 12976) + 1;
    v20 = 2 * v17;
    v21 = (unsigned int)(4 * v19);
    v22 = (unsigned int)(3 * v17);
    v29[0] = v28;
    if ( (unsigned int)v21 < (unsigned int)v22 )
    {
      v22 = (unsigned int)(v17 - *(_DWORD *)(a1 + 12980) - v19);
      if ( (unsigned int)v22 > (unsigned int)v17 >> 3 )
      {
LABEL_15:
        v23 = *v18 == -4096;
        *(_DWORD *)(a1 + 12976) = v19;
        if ( !v23 )
          --*(_DWORD *)(a1 + 12980);
        *v18 = v27;
        v24 = v18 + 3;
        v16 = v18 + 1;
        *v16 = v24;
        v16[1] = 0x200000000LL;
LABEL_18:
        sub_1EADF30((__int64)v16, v7);
        return v12;
      }
      v20 = v17;
    }
    sub_1EDB4F0((__int64 **)(a1 + 12968), v20, v17, v22, v21, v15);
    sub_1EB3D80((__int64 *)(a1 + 12968), &v27, v29);
    v18 = (_QWORD *)v29[0];
    v19 = *(_DWORD *)(a1 + 12976) + 1;
    goto LABEL_15;
  }
  v29[0] = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * (unsigned int)(HIDWORD(a2) - 1));
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 3072);
    LODWORD(v7) = sub_B8F2E0((__int64)v29) + v9;
  }
  if ( (unsigned __int64)(unsigned int)v7 < *(_QWORD *)(a1 + 2720) )
  {
    v10 = (_QWORD *)(*(_QWORD *)(a1 + 2728) + 8 * ((unsigned __int64)(unsigned int)v7 >> 7));
    v11 = (_QWORD *)*v10;
    if ( !*v10 )
    {
      v25 = (_QWORD *)sub_1EC2080((__int64 *)(*(_QWORD *)(a1 + 2744) & 0xFFFFFFFFFFFFFFF8LL), 1024, 3u);
      *v10 = v25;
      v11 = v25;
      *v25 = 0;
      v25[127] = 0;
      memset(
        (void *)((unsigned __int64)(v25 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v25 - (((_DWORD)v25 + 8) & 0xFFFFFFF8) + 1024) >> 3));
    }
    return v11[v7 & 0x7F];
  }
  v26 = j__strlen("declaration ID out-of-range for AST file");
  sub_1EAD680(a1, "declaration ID out-of-range for AST file", v26);
  return 0;
}
