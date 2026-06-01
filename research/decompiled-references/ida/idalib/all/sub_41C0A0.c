__int64 __fastcall sub_41C0A0(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // eax
  char v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rdx
  bool v22; // zf
  char v23; // al

  v4 = unpack_dw(a2, *(_QWORD *)(a2 + 8));
  v5 = a2;
  *(_WORD *)a1 = rotate_left(v4, 15, 16, 0);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = unpack_dd(v5);
  v8 = v7;
  *(_DWORD *)(a1 + 4) = v7 >> 1;
  v9 = (v7 >> 1) & 1;
  if ( ((v7 >> 1) & 1) != 0 )
  {
    v23 = is_cvt64(v5, v6, v9);
    v6 = *(_QWORD *)(a2 + 8);
    if ( v23 )
    {
      v5 = (unsigned int)unpack_dd(a2);
      if ( v5 == 0xFFFFFFFFLL )
        v5 = -1;
    }
    else
    {
      v5 = unpack_dq(a2);
    }
    v10 = node2ea(v5);
  }
  else
  {
    v10 = 0;
  }
  *(_QWORD *)(a1 + 8) = v10;
  v11 = is_cvt64(v5, v6, v9);
  v12 = *(_QWORD *)(a2 + 8);
  if ( v11 )
  {
    v21 = (unsigned int)unpack_dd(a2);
    v13 = v21 - 1;
    v22 = v21 == 0xFFFFFFFFLL;
    v14 = -2;
    if ( v22 )
      v13 = -2;
  }
  else
  {
    v13 = unpack_dq(a2) - 1;
  }
  *(_QWORD *)(a1 + 16) = v13;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v15 = is_cvt64(a2, v12, v14);
    v16 = *(_QWORD *)(a2 + 8);
    v17 = a2;
    if ( v15 )
    {
      result = (int)unpack_dd(a2);
LABEL_8:
      *(_QWORD *)(a1 + 24) = result;
      if ( (v8 & 1) == 0 )
        return result;
      goto LABEL_14;
    }
LABEL_7:
    result = unpack_dq(v17);
    goto LABEL_8;
  }
  v20 = is_cvt64(a2, v12, v14);
  v16 = *(_QWORD *)(a2 + 8);
  v17 = a2;
  if ( !v20 )
    goto LABEL_7;
  result = (unsigned int)unpack_dd(a2);
  v19 = -1;
  if ( (unsigned int)result == 0xFFFFFFFFLL )
    result = -1;
  *(_QWORD *)(a1 + 24) = result;
  if ( (v8 & 1) != 0 )
  {
LABEL_14:
    if ( (unsigned __int8)is_cvt64(v17, v16, v19) )
      result = (int)unpack_dd(a2);
    else
      result = unpack_dq(a2);
    *(_QWORD *)(a1 + 32) = result;
  }
  return result;
}
