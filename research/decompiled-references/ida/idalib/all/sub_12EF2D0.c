__int64 __fastcall sub_12EF2D0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _BYTE *v3; // r13
  size_t v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 *v12; // rcx
  _QWORD *v13; // r12
  unsigned int v14; // eax
  __int64 result; // rax
  __int64 v16; // rsi
  unsigned int v17; // [rsp+4h] [rbp-94h]
  __int64 *v18; // [rsp+8h] [rbp-90h]
  __int64 *v19[17]; // [rsp+10h] [rbp-88h] BYREF

  v1 = a1[24];
  v2 = *(_QWORD *)(a1[2] + 48LL);
  v3 = *(_BYTE **)(v2 + 248);
  v4 = *(_QWORD *)(v2 + 256);
  v5 = sub_2244B30(v3, v4);
  v6 = (unsigned int)sub_2244CB0(v1 + 24, v3, v4, v5);
  v8 = (__int64 *)(*(_QWORD *)(v1 + 24) + 8 * v6);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_12DAAD0(v19, v8, 0);
      v9 = v19[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(v1 + 40);
  }
  v18 = v8;
  v17 = v6;
  v10 = sub_22300B0(v4 + 17, 8, v6, v8, v6, v7);
  v11 = v17;
  v12 = v18;
  v13 = (_QWORD *)v10;
  if ( v4 )
  {
    memcpy((void *)(v10 + 16), v3, v4);
    v12 = v18;
    v11 = v17;
  }
  *((_BYTE *)v13 + v4 + 16) = 0;
  *v13 = v4;
  v13[1] = 0;
  *v12 = (__int64)v13;
  ++*(_DWORD *)(v1 + 36);
  v14 = sub_22450D0(v1 + 24, v11);
  sub_12DAAD0(v19, (__int64 *)(*(_QWORD *)(v1 + 24) + 8LL * v14), 0);
  v9 = v19[0];
LABEL_8:
  result = *(_QWORD *)(*v9 + 8);
  if ( !result )
  {
    v16 = a1[4];
    if ( v16 )
    {
      sub_FC70B0((__int64)v19, v16, 0, 35);
      sub_AEC220((unsigned __int8 **)v19, v3, v4);
      sub_AEA040((__int64)v19);
    }
    sub_2221C70("unknown module format", 1);
  }
  return result;
}
