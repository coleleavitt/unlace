__int64 __fastcall sub_1F96FE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rsi
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdi
  int i; // edx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // [rsp+8h] [rbp-460h]
  __int64 v27; // [rsp+18h] [rbp-450h] BYREF
  void *ptr; // [rsp+20h] [rbp-448h] BYREF
  __int64 v29; // [rsp+28h] [rbp-440h]
  _BYTE v30[1080]; // [rsp+30h] [rbp-438h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL);
  v5 = sub_A1F730(v3) + v4;
  v6 = *(unsigned int *)(v3 + 48);
  ptr = v30;
  v7 = v6 + 8 * v5;
  v29 = 0x8000000000LL;
  v8 = sub_B8E970(a2);
  if ( v8 )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)(a1 + 155) || *(char *)(v8 + 29) < 0 )
        goto LABEL_13;
      v15 = *(_DWORD *)(a1 + 440);
      v16 = *(_QWORD *)(a1 + 424);
      if ( v15 )
      {
        v17 = v15 - 1;
        v18 = (v15 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v19 = *(_QWORD *)(v16 + 16LL * v18);
        if ( v19 == v8 )
          goto LABEL_13;
        if ( v19 != -4096 )
          break;
      }
LABEL_8:
      v8 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 )
        goto LABEL_17;
    }
    for ( i = 1; ; i = v24 )
    {
      v24 = i + 1;
      v18 = v17 & (i + v18);
      v25 = *(_QWORD *)(v16 + 16LL * v18);
      if ( v25 == v8 )
        break;
      if ( v25 == -4096 )
        goto LABEL_8;
    }
LABEL_13:
    if ( !*(_BYTE *)(a1 + 157) || sub_B8D850(v8) || !sub_1F6AD70(v8) )
    {
      v9 = (unsigned int)v29;
      v10 = (unsigned int)v29 + 1LL;
      v11 = *(_BYTE *)(v8 + 28) & 0x7F;
      if ( v10 > HIDWORD(v29) )
      {
        sub_2237220(&ptr, v30, v10, 8);
        v9 = (unsigned int)v29;
      }
      *((_QWORD *)ptr + v9) = v11;
      LODWORD(v29) = v29 + 1;
      v12 = sub_1F92240(a1, v8);
      v13 = (unsigned int)v29;
      v14 = (unsigned int)v29 + 1LL;
      if ( v14 > HIDWORD(v29) )
      {
        v26 = v12;
        sub_2237220(&ptr, v30, v14, 8);
        v13 = (unsigned int)v29;
        v12 = v26;
      }
      *((_QWORD *)ptr + v13) = v12;
      LODWORD(v29) = v29 + 1;
    }
    goto LABEL_8;
  }
LABEL_17:
  v20 = (unsigned int)v29;
  v21 = *(_QWORD *)(a1 + 16);
  v27 = 82;
  ++*(_DWORD *)(a1 + 3080);
  sub_1F76000(v21, *(_DWORD *)(a1 + 3456), (unsigned __int8 *)&v27, 1, (unsigned __int64)ptr, 8 * v20);
  if ( ptr != v30 )
    free(ptr);
  return v7;
}
