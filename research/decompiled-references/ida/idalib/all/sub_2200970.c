__int64 __fastcall sub_2200970(__int64 *a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // rbx
  _DWORD *v5; // rdx
  char v6; // al
  __int64 v7; // rdx
  char v8; // al
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // [rsp+8h] [rbp-30h]
  unsigned int v20; // [rsp+8h] [rbp-30h]

  v4 = a1[1];
  v5 = *(_DWORD **)v4;
  if ( *(_UNKNOWN **)v4 == &unk_26F7B20 )
  {
    sub_2011A60(*(_QWORD **)(v4 + 8), (__int64)a2, (__int64)v5);
    sub_2011A60((_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL), (__int64)a2, v18);
    v4 = a1[1];
  }
  else
  {
    v6 = *(_BYTE *)(v4 + 20);
    if ( v5[5] == 2 && (v6 & 5) == 1 )
    {
      v7 = *(_QWORD *)(v4 + 24);
      if ( (_UNKNOWN *)v7 == &unk_26F7B20 )
        goto LABEL_15;
      goto LABEL_5;
    }
    *(_BYTE *)(v4 + 20) = *(_BYTE *)(v4 + 20) & 0xF7 | ~v6 & 8;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( (_UNKNOWN *)v7 == &unk_26F7B20 )
  {
LABEL_15:
    sub_2011A60(*(_QWORD **)(v4 + 32), (__int64)a2, v7);
    sub_2011A60((_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL), (__int64)a2, v15);
    goto LABEL_7;
  }
LABEL_5:
  v8 = *(_BYTE *)(v4 + 44);
  if ( *(_DWORD *)(v7 + 20) != 2 || (v8 & 5) != 1 )
    *(_BYTE *)(v4 + 44) = *(_BYTE *)(v4 + 44) & 0xF7 | ~v8 & 8;
LABEL_7:
  result = sub_22007B0(a1, a2, (__int64)a1, a3);
  v11 = a1[1];
  if ( *(_UNKNOWN **)v11 == &unk_26F7B20 )
  {
    v20 = result;
    sub_2011A60(*(_QWORD **)(v11 + 8), (__int64)a2, v10);
    sub_2011A60((_QWORD *)(*(_QWORD *)(v11 + 8) + 24LL), (__int64)a2, v17);
    v11 = a1[1];
    result = v20;
  }
  else
  {
    v12 = *(unsigned __int8 *)(v11 + 20);
    if ( *(_DWORD *)(*(_QWORD *)v11 + 20LL) == 2 && (v12 & 5) == 1 )
    {
      v13 = *(_QWORD *)(v11 + 24);
      if ( (_UNKNOWN *)v13 == &unk_26F7B20 )
        goto LABEL_20;
      goto LABEL_11;
    }
    v12 = *(_BYTE *)(v11 + 20) & 0xF7 | ~(_BYTE)v12 & 8u;
    *(_BYTE *)(v11 + 20) = v12;
  }
  v13 = *(_QWORD *)(v11 + 24);
  if ( (_UNKNOWN *)v13 == &unk_26F7B20 )
  {
LABEL_20:
    v19 = result;
    sub_2011A60(*(_QWORD **)(v11 + 32), (__int64)a2, v12);
    sub_2011A60((_QWORD *)(*(_QWORD *)(v11 + 32) + 24LL), (__int64)a2, v16);
    return v19;
  }
LABEL_11:
  v14 = *(_BYTE *)(v11 + 44);
  if ( *(_DWORD *)(v13 + 20) != 2 || (v14 & 5) != 1 )
    *(_BYTE *)(v11 + 44) = *(_BYTE *)(v11 + 44) & 0xF7 | ~v14 & 8;
  return result;
}
