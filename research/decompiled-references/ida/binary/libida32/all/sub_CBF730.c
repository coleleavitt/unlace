__int64 __fastcall sub_CBF730(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rcx
  unsigned int v7; // r12d
  char v9; // r14
  int v10; // [rsp+0h] [rbp-78h]
  unsigned int v11; // [rsp+8h] [rbp-70h]
  int v12[26]; // [rsp+10h] [rbp-68h] BYREF

  v2 = sub_CC2440(*(_QWORD *)(a1 + 1264), a2[1]);
  v6 = HIDWORD(v2);
  if ( !BYTE4(v2) )
    return (unsigned int)sub_CBBC10(a1, a2[2], v3, v6, v4);
  v7 = HIDWORD(v2);
  v6 = *a2 >> 16;
  if ( (v6 & 0x1E0) == 0 )
    return (unsigned int)sub_CBBC10(a1, a2[2], v3, v6, v4);
  if ( !*(_BYTE *)(a1 + 1360) )
  {
    sub_BD3DC0((__int64)v12, (__int64)a2, v3, v6, v4, v5, v10, v2, v12[0]);
    v9 = sub_CB5550(a1, (__int64)v12, v11, (__int64)a2);
    if ( v12[0] > 1u )
      sub_A2BBA0(v12);
    if ( !v9 )
      return (unsigned int)sub_CBBC10(a1, a2[2], v3, v6, v4);
  }
  return v7;
}

