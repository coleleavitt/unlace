__int64 __fastcall sub_4E20A0(_BYTE *a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // r14
  _BYTE *v6; // rbx
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // edx
  _BYTE *v13; // rcx
  __int64 v15; // rax

  v3 = &a1[a2];
  v6 = a1 + 1;
  v7 = *(_BYTE *)(a3 + 24) & 0x8F;
  if ( *(_QWORD *)a3 != -1 )
  {
    v8 = ea2node(*(_QWORD *)a3);
    v7 |= 0x10u;
    v6 = (_BYTE *)pack_dq(v6, v3, v8);
  }
  v9 = *(_QWORD *)(a3 + 8);
  if ( v9 && (*(_WORD *)(a3 + 24) & 0x1010) == 0 )
  {
    v15 = ea2node(v9);
    v7 |= 0x20u;
    v6 = (_BYTE *)pack_dq(v6, v3, v15);
  }
  v10 = *(_QWORD *)(a3 + 16);
  if ( v10 )
  {
    v7 |= 0x40u;
    v6 = (_BYTE *)pack_dq(v6, v3, v10);
  }
  *a1 = v7;
  v11 = *(_DWORD *)(a3 + 24) >> 4;
  if ( (v11 & 0x3F7) == 0 || v6 >= v3 )
    return v6 - a1;
  v12 = ((*(_DWORD *)(a3 + 24) >> 4) & 0x3F7u) >> 8;
  v13 = v6 + 1;
  *v6 = v11 & 0xF7;
  if ( v12 && v13 < v3 )
  {
    v6[1] = v12;
    v6 += 2;
    return v6 - a1;
  }
  return v13 - a1;
}
