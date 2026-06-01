__int64 __fastcall sub_B1CEF0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int8 *v10; // r8
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // rdx
  __int64 result; // rax
  signed __int64 v14; // rdx
  unsigned __int8 *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rdi
  _QWORD v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(unsigned __int8 **)(a1 + 40);
  v5 = *(unsigned __int8 **)(a1 + 48);
  if ( v5 == v4 )
    goto LABEL_15;
LABEL_2:
  v6 = v4;
  if ( (byte_23ED5E0[2 * *v4] & 2) != 0 )
  {
    v14 = 0;
  }
  else
  {
    do
      ++v6;
    while ( v5 != v6 && (byte_23ED5E0[2 * *v6] & 2) == 0 );
    v14 = v6 - v4;
  }
  while ( 1 )
  {
    v19[1] = v14;
    v7 = *(_QWORD *)(a1 + 64);
    v8 = *(_QWORD *)(a1 + 72);
    v19[0] = v4;
    v9 = sub_2222D70(v19, v7, v8, 0);
    if ( v9 == -1 )
    {
      v15 = *(unsigned __int8 **)(a1 + 48);
      v10 = *(unsigned __int8 **)(a1 + 40);
      if ( v15 == v6 )
      {
        v4 = v6;
        v12 = v6;
      }
      else
      {
        v12 = v6 + 1;
        v4 = v6;
        if ( *v6 != 10 && v15 != v12 && v6[1] == 10 )
          v12 = v6 + 2;
      }
      goto LABEL_17;
    }
    v10 = *(unsigned __int8 **)(a1 + 40);
    if ( !v9 )
      break;
    v4 = &v10[v9];
    if ( v4 != v10 )
    {
      if ( (byte_23ED5E0[2 * *v10] & 7) == 0 )
      {
LABEL_16:
        v12 = v4;
LABEL_17:
        result = v4 - v10;
        *(_DWORD *)a2 = *(_DWORD *)(a1 + 56) + (_DWORD)v10 - *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a2 + 4) = 7;
        *(_DWORD *)(a2 + 12) = (_DWORD)v12 - (_DWORD)v10;
        *(_QWORD *)(a1 + 40) = v12;
        *(_QWORD *)(a2 + 16) = v10;
        *(_DWORD *)(a2 + 8) = result;
        *(_BYTE *)(a1 + 62) = 2;
        return result;
      }
      v11 = *(unsigned __int8 **)(a1 + 40);
      while ( v4 != ++v11 )
      {
        if ( (byte_23ED5E0[2 * *v11] & 7) == 0 )
          goto LABEL_16;
      }
    }
    v5 = *(unsigned __int8 **)(a1 + 48);
    *(_QWORD *)(a1 + 40) = v4;
    if ( v5 != v4 )
      goto LABEL_2;
LABEL_15:
    v6 = v4;
    v14 = 0;
  }
  v16 = *(_QWORD *)(a1 + 72);
  v17 = *(_DWORD *)(a1 + 56) + (_DWORD)v10 - *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 4) = 8;
  *(_DWORD *)a2 = v17;
  *(_DWORD *)(a2 + 12) = v16;
  v18 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 40) = &v10[v16];
  result = (_DWORD)sub_B1A8E0(v18, v10 + 1, v16 - 1)[2] & 0xFFFFF;
  *(_DWORD *)(a2 + 8) = result;
  *(_BYTE *)(a1 + 62) = 0;
  return result;
}

