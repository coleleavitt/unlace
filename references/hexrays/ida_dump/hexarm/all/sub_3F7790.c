__int64 __fastcall sub_3F7790(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        unsigned __int8 a6,
        double a7,
        char a8)
{
  unsigned int v8; // r13d
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v13; // ecx
  __int64 v14; // r14
  unsigned __int8 v15; // dl
  int v16; // r10d
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r14
  int v21; // r10d
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // [rsp-8h] [rbp-70h]
  int v28; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 v29; // [rsp+Ch] [rbp-5Ch]
  int v30; // [rsp+10h] [rbp-58h]
  unsigned int dtype_size; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v35; // [rsp+24h] [rbp-44h]
  int v36; // [rsp+28h] [rbp-40h]

  if ( a5 <= 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8E2u, a2, a7);
LABEL_24:
    BUG();
  }
  v8 = a2;
  dtype_size = get_dtype_size(a6);
  v10 = 0;
  do
  {
    v11 = *(_QWORD *)(a1 + 832);
    v12 = a3;
    v13 = *(_DWORD *)(v11 + 632);
    v30 = *(_DWORD *)(v11 + 428);
    if ( v8 != 4 )
    {
      v14 = (int)a4;
      if ( v8 != 62 )
      {
        v15 = a6;
        v16 = a3;
        v17 = a3;
        if ( v8 != 3 )
          goto LABEL_13;
        goto LABEL_6;
      }
      v19 = 62;
      v26 = sub_3F56D0(a1, 0x3Eu, a6, (int)a4, a3, a3, 0);
      v21 = a3;
      v20 = v26;
      goto LABEL_7;
    }
    v15 = a6;
    v17 = 346938453;
LABEL_13:
    while ( 1 )
    {
      v35 = v13;
      v29 = v15;
      v36 = v17;
      v25 = sub_3F6740(a1, a4, v15, v13, 1, a7);
      v16 = a3;
      v13 = v35;
      a3 = v36;
      v15 = v29;
      v14 = v25;
LABEL_6:
      v28 = v16;
      v18 = sub_3F6740(a1, (unsigned int)a3, v15, v13, 1, a7);
      v19 = v27;
      v20 = sub_3F56D0(a1, v8, a6, v14, v18, v12, 0);
      v21 = v28;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 && v12 == v30 )
      {
        sub_3F51B0(a1);
        v21 = v28;
      }
LABEL_7:
      if ( !v20 )
        break;
      if ( a5 == 1 )
        break;
      v22 = *(_DWORD *)(v20 + 4);
      *(_DWORD *)(v20 + 4) = v22 | 0x10000;
      if ( !a8 )
        break;
      if ( v8 != 4 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC8E3u, v19, a7);
        goto LABEL_24;
      }
      ++v10;
      *(_DWORD *)(v20 + 4) = v22 | 0x10010;
      result = dtype_size;
      a3 = dtype_size + v21;
      if ( a5 == v10 )
        return result;
      v24 = *(_QWORD *)(a1 + 832);
      v15 = a6;
      v12 = a3;
      v17 = 346938453;
      v13 = *(_DWORD *)(v24 + 632);
      v30 = *(_DWORD *)(v24 + 428);
    }
    result = dtype_size;
    ++v10;
    a3 = dtype_size + v21;
  }
  while ( a5 != v10 );
  return result;
}
