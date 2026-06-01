char __fastcall sub_B1D130(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int8 *v2; // rcx
  unsigned __int8 *v3; // r8
  __int64 v4; // rbx
  int v5; // ebp
  int v6; // r12d
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int8 *v13; // rsi

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(unsigned __int8 **)(a1 + 48);
  v3 = (unsigned __int8 *)(v1 + 2);
  v4 = v1 + 1;
  if ( v2 != (unsigned __int8 *)(v1 + 2) && (byte_23ED5E0[2 * *(unsigned __int8 *)(v1 + 2)] & 0x68) != 0 )
  {
    do
      ++v3;
    while ( v2 != v3 && (byte_23ED5E0[2 * *v3] & 0x68) != 0 );
    v5 = (_DWORD)v3 - v4;
    v6 = (_DWORD)v3 - v1;
    v7 = (__int64)&v3[-v4];
  }
  else
  {
    v6 = 2;
    v7 = 1;
    v5 = 1;
  }
  LOBYTE(v8) = sub_B1AD80((char *)(v1 + 1), v7);
  *(_DWORD *)v12 = *(_DWORD *)(v10 + 56) + v11 - *(_DWORD *)(v10 + 24);
  if ( !(_BYTE)v8 )
  {
    *(_DWORD *)(v12 + 12) = v6;
    *(_DWORD *)(v12 + 4) = 2;
    *(_QWORD *)(v10 + 40) = v9;
    *(_DWORD *)(v12 + 8) = v6;
    *(_QWORD *)(v12 + 16) = v11;
    return v8;
  }
  *(_DWORD *)(v12 + 4) = 11;
  *(_DWORD *)(v12 + 12) = v6;
  *(_QWORD *)(v10 + 40) = v9;
  *(_QWORD *)(v12 + 16) = v4;
  *(_DWORD *)(v12 + 8) = v5;
  v13 = *(unsigned __int8 **)(v10 + 48);
  v8 = *(_QWORD *)(v10 + 40);
  if ( v13 == (unsigned __int8 *)v8 )
    goto LABEL_13;
  if ( (byte_23ED5E0[2 * *(unsigned __int8 *)v8] & 5) != 0 )
  {
    while ( v13 != (unsigned __int8 *)++v8 )
    {
      if ( (byte_23ED5E0[2 * *(unsigned __int8 *)v8] & 5) == 0 )
        goto LABEL_15;
    }
LABEL_13:
    *(_QWORD *)(v10 + 40) = v13;
LABEL_14:
    *(_BYTE *)(v10 + 62) = 4;
    return v8;
  }
LABEL_15:
  *(_QWORD *)(v10 + 40) = v8;
  v8 = *(unsigned __int8 *)v8;
  if ( (_BYTE)v8 == 62 || (_BYTE)v8 == 47 || (byte_23ED5E0[2 * v8] & 0x62) != 0 )
    goto LABEL_14;
  return v8;
}

