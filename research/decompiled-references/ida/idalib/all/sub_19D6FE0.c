__int64 __fastcall sub_19D6FE0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  char v8; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  __int64 v25; // rax
  _QWORD *v26; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v28[200]; // [rsp+10h] [rbp-C8h] BYREF

  v4 = *(_DWORD *)(a2 + 128);
  v5 = sub_15F1670(*a1);
  if ( !v5 )
    return 0;
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 56);
  v8 = BYTE2(v7) & 2;
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( !v8 || *(_DWORD *)a2 != 2 )
    {
LABEL_5:
      if ( (v7 & 0x20000) != 0 )
      {
        v18 = sub_BA85D0(v6);
        v22 = (_QWORD *)v18;
        if ( v18 )
        {
          v23 = sub_BAE3D0(v18, a3, (__int64 *)&v26, v19, v20, v21);
          v24 = v23;
          if ( v23 )
          {
            if ( (*(_BYTE *)(v23 + 88) & 7) != 1 || v26 && (v22 == v26 || sub_19CD850(v22, v26)) )
            {
              sub_168B9F0((__int64)v28, a1, v4, 0x1B9Au, 0);
              v27 = *(_QWORD *)(v24 + 40);
              sub_15894B0((__int64)v28, &v27);
              sub_15F7200(v28);
            }
          }
        }
      }
      else if ( *(_DWORD *)a2 == 2 )
      {
        v17 = sub_16C47B0(**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !sub_B8C200(v17, 0) )
        {
          v16 = sub_16C47B0(**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_BYTE *)(v16 + 28) & 0x7F) == 0x32 )
            goto LABEL_15;
        }
      }
      return 0;
    }
    v25 = sub_16C47B0(**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    if ( sub_B8C200(v25, 0) )
    {
      v7 = *(_QWORD *)(v6 + 56);
      goto LABEL_5;
    }
  }
  v10 = sub_BA85D0(v6);
  v14 = (_QWORD *)v10;
  if ( !v10 )
    return 0;
  v15 = sub_BAE3D0(v10, a3, (__int64 *)&v26, v11, v12, v13);
  v16 = v15;
  if ( !v15 )
    return 0;
  if ( !v8 )
  {
LABEL_15:
    sub_168B9F0((__int64)v28, a1, v4, 0xFF2u, 0);
    v27 = *(_QWORD *)(v16 + 40);
    sub_15894B0((__int64)v28, &v27);
    sub_15F7200(v28);
    return 0;
  }
  if ( (*(_BYTE *)(v15 + 88) & 7) == 1
    && (!v26 || v14 != v26 && !sub_19CD850(v26, v14))
    && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 105) & 0x40) == 0 )
  {
    sub_168B9F0((__int64)v28, a1, v4, 0x12E9u, 0);
    v27 = *(_QWORD *)(v16 + 40);
    sub_15894B0((__int64)v28, &v27);
    sub_15F7200(v28);
  }
  return v16;
}
