__int64 __fastcall sub_41C770(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // edx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  int v12; // ecx
  const void *v13; // r14
  __int64 v14; // rsi
  const char *v15; // rdi
  int v16; // edx
  int v17; // r13d
  unsigned int v18; // ebx
  void *v19; // rdi
  __int64 v20; // r12
  int i; // ebx
  int v22; // edi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+8h] [rbp-30h] BYREF
  int v27; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( a3 == 3 )
  {
    v8 = sub_47C180(a2, *(_QWORD *)(a4 + 16), &v27);
    v6 = 1;
    if ( v8 )
      return v6;
    if ( v27 != 1 )
    {
      if ( v27 <= 0 )
        return 0;
      v11 = *(_QWORD *)(a4 + 8);
      if ( *(_QWORD *)(v11 + 8) )
      {
        v12 = *(_DWORD *)(v11 + 16);
        v13 = *(const void **)(v11 + 8);
        v26 = v12;
      }
      else
      {
        v25 = sub_47ACD0(v11, &v26);
        v12 = v26;
        v13 = (const void *)v25;
      }
      if ( v12 <= 0 )
        return 0;
      v14 = 0x7FFFFFFF;
      v15 = "result exceeds max size for a Tcl value (%d bytes)";
      v16 = v27;
      if ( 0x7FFFFFFF / v12 >= v27 )
      {
        v17 = v27 * v12;
        v18 = v27 * v12 + 1;
        v19 = (void *)v18;
        v20 = sub_40FBF0();
        if ( v20 )
        {
          for ( i = 0; i < v27; ++i )
          {
            v22 = i;
            v14 = (__int64)v13;
            v19 = (void *)(v20 + v26 * v22);
            memcpy(v19, v13, v26);
          }
          *(_BYTE *)(v17 + v20) = 0;
          v23 = sub_496740(v19, v14);
          *(_DWORD *)v23 = 0;
          *(_QWORD *)(v23 + 24) = 0;
          *(_QWORD *)(v23 + 8) = v20;
          *(_DWORD *)(v23 + 16) = v17;
          goto LABEL_16;
        }
        v15 = "string size overflow, out of memory allocating %u bytes";
        LODWORD(v14) = v18;
      }
      v24 = sub_48F930((_DWORD)v15, v14, v16, v12, v9, v10);
      sub_48AFD0(a2, v24);
      return 1;
    }
    v23 = *(_QWORD *)(a4 + 8);
LABEL_16:
    sub_48AFD0(a2, v23);
    return 0;
  }
  sub_458930(a2, 1, a4, "string count");
  return 1;
}

