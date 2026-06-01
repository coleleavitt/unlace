__int64 __fastcall sub_19D6A80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  char v9; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  _QWORD *v27; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v29[200]; // [rsp+10h] [rbp-C8h] BYREF

  v5 = *(_DWORD *)(a2 + 128);
  v6 = sub_15F1670(*a1);
  if ( !v6 )
    return 0;
  v7 = v6;
  v8 = *(_QWORD *)(v6 + 56);
  v9 = BYTE2(v8) & 2;
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( !v9 || *(_DWORD *)a2 != 2 )
    {
LABEL_5:
      if ( (v8 & 0x20000) != 0 )
      {
        v19 = sub_BA85D0(v7);
        v23 = (_QWORD *)v19;
        if ( v19 )
        {
          v24 = sub_BAE3D0(v19, a4, (__int64 *)&v27, v20, v21, v22);
          v25 = v24;
          if ( v24 )
          {
            if ( (*(_BYTE *)(v24 + 88) & 7) != 1 || v27 && (v27 == v23 || sub_19CD850(v23, v27)) )
            {
              sub_168B9F0((__int64)v29, a1, v5, 0x1B9Au, 0);
              v28 = *(_QWORD *)(v25 + 40);
              sub_15894B0((__int64)v29, &v28);
              sub_15F7200(v29);
            }
          }
        }
      }
      else if ( *(_DWORD *)a2 == 2 )
      {
        v18 = sub_16C47B0(**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !sub_B8C200(v18, 0) )
        {
          v17 = sub_16C47B0(**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x32 )
            goto LABEL_15;
        }
      }
      return 0;
    }
    v26 = sub_16C47B0(**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    if ( sub_B8C200(v26, 0) )
    {
      v8 = *(_QWORD *)(v7 + 56);
      goto LABEL_5;
    }
  }
  v11 = sub_BA85D0(v7);
  v15 = (_QWORD *)v11;
  if ( !v11 )
    return 0;
  v16 = sub_BAE3D0(v11, a4, (__int64 *)&v27, v12, v13, v14);
  v17 = v16;
  if ( !v16 )
    return 0;
  if ( !v9 )
  {
LABEL_15:
    sub_168B9F0((__int64)v29, a1, v5, 0xFF2u, 0);
    v28 = *(_QWORD *)(v17 + 40);
    sub_15894B0((__int64)v29, &v28);
    sub_15F7200(v29);
    return 0;
  }
  if ( (*(_BYTE *)(v16 + 88) & 7) == 1
    && (!v27 || v27 != v15 && !sub_19CD850(v27, v15))
    && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 105) & 0x40) == 0 )
  {
    sub_168B9F0((__int64)v29, a1, v5, 0x12E9u, 0);
    v28 = *(_QWORD *)(v17 + 40);
    sub_15894B0((__int64)v29, &v28);
    sub_15F7200(v29);
  }
  return v17;
}
