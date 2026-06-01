void __fastcall sub_1E88A90(unsigned int **a1, int a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rax
  int v12; // [rsp+0h] [rbp-C4h] BYREF
  __int64 v13; // [rsp+4h] [rbp-C0h] BYREF
  _BYTE v14[184]; // [rsp+Ch] [rbp-B8h] BYREF

  if ( a3 )
  {
    sub_168B9F0((__int64)v14, (__int64 *)*a1 + 1, *a1[1], 0x192Eu, 0);
    v12 = 28;
    v3 = sub_1E889E0((__int64)v14, &v12);
    v4 = v3;
    if ( *(_BYTE *)(v3 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v3 + 32), a2, 2u);
    }
    else if ( *(_BYTE *)(v3 + 132) )
    {
      v9 = sub_168B9E0((_QWORD *)v3);
      v10 = *(_QWORD *)(v4 + 16);
      if ( v10 )
        v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 32LL))(*(_QWORD *)(v4 + 16));
      v13 = v10;
      v11 = sub_1587BC0(v9, &v13, v5, v6, v7, v8);
      sub_AE9DF0((unsigned __int8 **)(*v11 + 32LL * *(unsigned int *)(v4 + 128) + 8), a2, 2u);
    }
    sub_15F7200(v14);
  }
}
