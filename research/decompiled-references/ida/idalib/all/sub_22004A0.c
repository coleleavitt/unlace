__int64 __fastcall sub_22004A0(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rdx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r12

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD **)v3;
  if ( *(_UNKNOWN **)v3 == &unk_26F7B20 )
  {
    sub_22004A0(v3, a2);
    v10 = *(_QWORD *)(a1 + 8);
    if ( *(_UNKNOWN **)(v10 + 24) != &unk_26F7B20 )
      return sub_21FB9A0((__int64 *)(v10 + 24), 0);
  }
  else
  {
    *(_BYTE *)(v3 + 20) = (8 * (a2 & 1)) | *(_BYTE *)(v3 + 20) & 0xF0 | 2;
    v5 = v4[1];
    v6 = v4[2];
    *(_DWORD *)(v3 + 16) = v5;
    v7 = v6 + 64;
    if ( v7 > 0x7F )
    {
      v9 = v7 >> 6;
      v8 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v8 = v3 + 8;
      v9 = 1;
    }
    sub_22096E0(v8, 1, v9);
    v10 = *(_QWORD *)(a1 + 8);
    if ( *(_UNKNOWN **)(v10 + 24) != &unk_26F7B20 )
      return sub_21FB9A0((__int64 *)(v10 + 24), 0);
  }
  v12 = *(_QWORD *)(v10 + 32);
  if ( *(_UNKNOWN **)v12 == &unk_26F7B20 )
  {
    v14 = *(_QWORD *)(v12 + 8);
    if ( *(_UNKNOWN **)v14 == &unk_26F7B20 )
    {
      sub_C16C60(*(_QWORD **)(v14 + 8), 0);
      sub_C16C60((_QWORD *)(*(_QWORD *)(v14 + 8) + 24LL), 0);
    }
    else
    {
      sub_21FB9A0(*(__int64 **)(v12 + 8), 0);
    }
    v15 = *(_QWORD *)(v12 + 8);
    if ( *(_UNKNOWN **)(v15 + 24) == &unk_26F7B20 )
    {
      sub_C16C60(*(_QWORD **)(v15 + 32), 0);
      sub_C16C60((_QWORD *)(*(_QWORD *)(v15 + 32) + 24LL), 0);
    }
    else
    {
      sub_21FB9A0((__int64 *)(v15 + 24), 0);
    }
  }
  else
  {
    sub_21FB9A0(*(__int64 **)(v10 + 32), 0);
  }
  v10 = *(_QWORD *)(v10 + 32);
  if ( *(_UNKNOWN **)(v10 + 24) != &unk_26F7B20 )
    return sub_21FB9A0((__int64 *)(v10 + 24), 0);
  v13 = *(_QWORD *)(v10 + 32);
  if ( *(_UNKNOWN **)v13 == &unk_26F7B20 )
  {
    sub_C16C60(*(_QWORD **)(v13 + 8), 0);
    sub_C16C60((_QWORD *)(*(_QWORD *)(v13 + 8) + 24LL), 0);
  }
  else
  {
    sub_21FB9A0(*(__int64 **)(v10 + 32), 0);
  }
  v10 = *(_QWORD *)(v10 + 32);
  if ( *(_UNKNOWN **)(v10 + 24) != &unk_26F7B20 )
    return sub_21FB9A0((__int64 *)(v10 + 24), 0);
  sub_C16C60(*(_QWORD **)(v10 + 32), 0);
  return sub_C16C60((_QWORD *)(*(_QWORD *)(v10 + 32) + 24LL), 0);
}
