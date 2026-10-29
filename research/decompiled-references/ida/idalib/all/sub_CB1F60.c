__int64 __fastcall sub_CB1F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // eax
  int v27; // [rsp+0h] [rbp-38h] BYREF
  int v28; // [rsp+4h] [rbp-34h] BYREF
  __int64 v29[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) != 14 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) != 14 )
      BUG();
    v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v16, a4);
  }
  v5 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v4 + 32));
  v29[0] = a2 | 4;
  if ( !(unsigned __int8)sub_CA3E40(a1, v5, 0, v29) )
    return 0;
  v29[0] = a2 | 4;
  if ( v5 == 12 )
  {
    v14 = sub_CE6170(*(_QWORD *)(a1 + 488));
    v15 = sub_BFE5A0(a2, v14);
    if ( !(unsigned __int8)sub_CA42B0(a1, 10, v15, v29) )
      return 0;
  }
  else if ( !(unsigned __int8)sub_CA0510(a1, v5, 10, v29) )
  {
    return 0;
  }
  v6 = *(_DWORD *)(a1 + 384) + 1;
  *(_DWORD *)(a1 + 384) = v6;
  v27 = v6;
  if ( !(unsigned __int8)sub_CAD000(a1, &v27) )
    return 0;
  v29[0] = a2 | 4;
  if ( !(unsigned __int8)sub_CA3F50(a1, v5, 1u, v29) )
    return 0;
  v29[0] = a2 | 4;
  if ( v5 == 12 )
  {
    v25 = sub_CE6170(*(_QWORD *)(a1 + 488));
    v26 = sub_BFE5A0(a2, v25);
    if ( !(unsigned __int8)sub_CA42B0(a1, 10, v26, v29) )
      return 0;
  }
  else if ( !(unsigned __int8)sub_CA0510(a1, v5, 10, v29) )
  {
    return 0;
  }
  v7 = *(_DWORD *)(a1 + 384) + 1;
  *(_DWORD *)(a1 + 384) = v7;
  v28 = v7;
  sub_CACDE0(a1, &v28);
  sub_CAE070(a1, v27, v8, v9, v10, v11);
  v29[0] = a2 | 4;
  if ( (unsigned __int8)sub_CA2800(a1, v29) )
  {
    v29[0] = a2 | 4;
    v12 = sub_CA5E60(a1, 1, v29);
    if ( (_BYTE)v12 )
    {
      sub_CAE450(a1, &v28, v17, v18, v19, v20);
      sub_CAE070(a1, v28, v21, v22, v23, v24);
      return v12;
    }
  }
  return 0;
}
