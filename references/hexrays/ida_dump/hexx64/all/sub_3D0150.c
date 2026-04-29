unsigned __int64 __fastcall sub_3D0150(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 v5; // rsi
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rsi
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rsi
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[5]; // [rsp+Eh] [rbp-4Ah] BYREF
  _BYTE v24[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v25[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a2[1];
  v3 = *(_DWORD *)(a1 + 12);
  v25[0] = __readfsqword(0x28u);
  v5 = *a2;
  if ( a2[2] < (unsigned __int64)(v2 + 1) )
  {
    v21 = qvector_reserve(a2, v5, v2 + 1, 1);
    *a2 = v21;
    v5 = v21;
    v2 = a2[1];
  }
  *(_BYTE *)(v5 + v2) = v3;
  ++a2[1];
  v6 = pack_dd(v23, v24, *(unsigned int *)(a1 + 28)) - (_QWORD)v23;
  if ( v6 )
    sub_3CFA70(a2, v23, v6);
  v7 = pack_dd(v23, v24, *(unsigned int *)(a1 + 20)) - (_QWORD)v23;
  if ( v7 )
    sub_3CFA70(a2, v23, v7);
  v8 = pack_dd(v23, v24, *(unsigned int *)(a1 + 24)) - (_QWORD)v23;
  if ( v8 )
    sub_3CFA70(a2, v23, v8);
  v9 = pack_dq(v23, v25, *(_QWORD *)(a1 + 40)) - (_QWORD)v23;
  if ( v9 )
    sub_3CFA70(a2, v23, v9);
  v10 = *(_QWORD *)(a1 + 56);
  v11 = a2[1];
  v12 = *a2;
  if ( a2[2] < (unsigned __int64)(v11 + 1) )
  {
    v20 = qvector_reserve(a2, v12, v11 + 1, 1);
    *a2 = v20;
    v12 = v20;
    v11 = a2[1];
  }
  *(_BYTE *)(v12 + v11) = v10 != -1;
  ++a2[1];
  if ( v10 != -1 )
  {
    v14 = pack_dq(v23, v25, *(_QWORD *)(a1 + 56)) - (_QWORD)v23;
    if ( v14 )
      sub_3CFA70(a2, v23, v14);
    v15 = pack_dq(v23, v25, *(_QWORD *)(a1 + 64)) - (_QWORD)v23;
    if ( v15 )
      sub_3CFA70(a2, v23, v15);
    v16 = a2[1];
    v17 = *(_DWORD *)(a1 + 32);
    v18 = *a2;
    if ( a2[2] < (unsigned __int64)(v16 + 1) )
    {
      v22 = qvector_reserve(a2, v18, v16 + 1, 1);
      *a2 = v22;
      v18 = v22;
      v16 = a2[1];
    }
    *(_BYTE *)(v18 + v16) = v17;
    ++a2[1];
    if ( *(int *)(a1 + 32) <= 72 )
    {
      v19 = pack_dq(v23, v25, *(_QWORD *)(a1 + 48)) - (_QWORD)v23;
      if ( v19 )
        sub_3CFA70(a2, v23, v19);
    }
  }
  return v25[0] - __readfsqword(0x28u);
}
