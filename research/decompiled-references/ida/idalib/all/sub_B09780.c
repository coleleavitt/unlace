__int64 __fastcall sub_B09780(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  _BYTE v17[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v17[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = v2 >> 4;
  if ( v3 == 1 )
  {
    sub_995540(a2, "[[clang::annotate");
    sub_AFB8E0(a2, v17);
    v13 = sub_995540(a2, "\"");
    v14 = sub_9954E0(v13, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_995540(v14, "\"");
    sub_995540(a2, &byte_22F0C30);
    v15 = *(_QWORD *)(a1 + 64);
    v16 = v15 + 8LL * *(unsigned int *)(a1 + 56);
    while ( v16 != v15 )
    {
      v15 += 8;
      sub_AFB8E0(a2, v17);
      sub_227B9B0(a2, *(_QWORD *)(v15 - 8));
    }
  }
  else
  {
    if ( !v3 )
    {
      sub_995540(a2, "__attribute__((annotate");
      sub_AFB8E0(a2, v17);
      v4 = sub_995540(a2, "\"");
      v5 = sub_9954E0(v4, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      sub_995540(v5, "\"");
      sub_995540(a2, &byte_22F0C30);
      v6 = *(_QWORD *)(a1 + 64);
      v7 = v6 + 8LL * *(unsigned int *)(a1 + 56);
      while ( v7 != v6 )
      {
        v6 += 8;
        sub_AFB8E0(a2, v17);
        sub_227B9B0(a2, *(_QWORD *)(v6 - 8));
      }
      sub_995540(a2, &byte_22F0C30);
      if ( !v17[0] )
        sub_995540(a2, ")");
      return sub_995540(a2, "))");
    }
    sub_995540(a2, "[[clang::annotate");
    sub_AFB8E0(a2, v17);
    v9 = sub_995540(a2, "\"");
    v10 = sub_9954E0(v9, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_995540(v10, "\"");
    sub_995540(a2, &byte_22F0C30);
    v11 = *(_QWORD *)(a1 + 64);
    v12 = v11 + 8LL * *(unsigned int *)(a1 + 56);
    while ( v12 != v11 )
    {
      v11 += 8;
      sub_AFB8E0(a2, v17);
      sub_227B9B0(a2, *(_QWORD *)(v11 - 8));
    }
  }
  sub_995540(a2, &byte_22F0C30);
  if ( !v17[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "]]");
}
