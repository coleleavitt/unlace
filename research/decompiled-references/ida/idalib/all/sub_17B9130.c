__int64 __fastcall sub_17B9130(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r12d
  _BYTE *v6; // rdi
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdi
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _BYTE *v21; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v22[184]; // [rsp+10h] [rbp-B8h] BYREF

  v21 = a3;
  v4 = sub_1E61520(a1, a2, v22, 0);
  if ( (_BYTE)v4 )
  {
LABEL_20:
    v6 = v21;
    goto LABEL_21;
  }
  v5 = v4;
  v6 = v21;
  if ( (unsigned __int8)sub_B844D0(v21) == 2 )
    goto LABEL_6;
  v7 = v21[28] & 0x7F;
  if ( v7 != 43 && ((v21[97] & 0x20) != 0 || (unsigned int)v7 - 41 <= 1) )
    goto LABEL_6;
  v6 = v21;
  if ( sub_B73BE0((__int64)v21) )
    goto LABEL_6;
  v10 = *((_QWORD *)v21 + 7);
  if ( (v10 & 4) != 0 )
  {
    if ( *(_DWORD *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
      goto LABEL_6;
  }
  v11 = (_QWORD *)(*((_QWORD *)v21 + 2) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*((_QWORD *)v21 + 2) & 4) != 0 )
    v11 = (_QWORD *)*v11;
  v12 = sub_B8E180((unsigned __int64)v11);
  v6 = v21;
  if ( v12 )
    goto LABEL_6;
  if ( (v21[29] & 1) == 0 )
  {
LABEL_21:
    v5 = 1;
    sub_168B9F0((__int64)v22, (__int64 *)(a1 + 8), *((_DWORD *)v6 + 6), 0x1326u, 0);
    sub_17B9080((__int64)v22, (__int64 *)&v21);
    sub_15F7200(v22);
    sub_17AE800(a1, a2, *((_DWORD *)v21 + 6));
    sub_B88650((__int64)v21, 1);
    return v5;
  }
  v17 = sub_B8C3D0((__int64)v21, a2, v13, v14, v15, v16);
  v18 = *v17;
  v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( *v17 >= v19 )
  {
    v6 = v21;
    if ( v18 != v19 )
    {
      while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 357 )
      {
        v19 += 8LL;
        if ( v18 == v19 )
          goto LABEL_21;
      }
      goto LABEL_6;
    }
    goto LABEL_21;
  }
  v20 = *v17;
  while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 357 )
  {
    v20 += 8LL;
    if ( v19 == v20 )
      goto LABEL_20;
  }
  v6 = v21;
  if ( v19 == v20 )
    goto LABEL_21;
LABEL_6:
  v6[97] |= 1u;
  v8 = sub_B73BE0(a2);
  if ( v8 )
    sub_1A39AF0(a1, v8);
  sub_1A39AF0(a1, a2);
  return v5;
}
