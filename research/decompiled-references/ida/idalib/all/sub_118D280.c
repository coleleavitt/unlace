void __fastcall sub_118D280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  const char *v5; // r12
  unsigned __int8 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  const char **v12; // rax
  size_t v13; // r14
  char *v14; // r12
  __int64 v15; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v16; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v17[4]; // [rsp+10h] [rbp-78h] BYREF
  __int16 v18; // [rsp+30h] [rbp-58h]

  v4 = sub_10DCD30(a2, 0x913u);
  if ( v4 )
  {
    v5 = **(const char ***)(v4 + 48);
    v6 = nullptr;
    if ( v5 )
      v6 = (unsigned __int8 *)strlen(v5);
    v7 = *(unsigned int *)(a3 + 8);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v16 = v6;
      sub_2237220(a3, a3 + 16, v7 + 1, 8);
      v7 = *(unsigned int *)(a3 + 8);
      v6 = v16;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = "-target-cpu";
    ++*(_DWORD *)(a3 + 8);
    v18 = 261;
    v17[0] = (unsigned __int8 *)v5;
    v17[1] = v6;
    v8 = sub_10DA6C0(a2, (__int64)v17);
    v9 = *(unsigned int *)(a3 + 8);
    if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v15 = v8;
      sub_2237220(a3, a3 + 16, v9 + 1, 8);
      v9 = *(unsigned int *)(a3 + 8);
      v8 = v15;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = v8;
    ++*(_DWORD *)(a3 + 8);
  }
  v10 = sub_10DCD30(a2, 0xB11u);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(const char ***)(v10 + 48);
    v13 = 0;
    v14 = (char *)*v12;
    if ( *v12 )
      v13 = strlen(*v12);
    if ( (unsigned __int8)sub_2247A50(v14, v13, 10, v17) || v17[0] != (unsigned __int8 *)SLODWORD(v17[0]) )
    {
      sub_FC70B0((__int64)v17, **(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL), 0, 497);
      sub_AEC220(v17, *(_BYTE **)(v11 + 24), *(_QWORD *)(v11 + 32));
      sub_AEC220(v17, v14, v13);
      sub_AEA040((__int64)v17);
    }
  }
}
