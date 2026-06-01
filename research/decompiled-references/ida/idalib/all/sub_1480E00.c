_BYTE *__fastcall sub_1480E00(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  char v5; // al
  __int64 *v6; // rdi
  unsigned int v7; // r12d
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  void *v16; // rdx
  void *v17; // rdi
  _BYTE *result; // rax
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-150h]
  unsigned __int64 v22; // [rsp+18h] [rbp-140h]
  _BYTE *v23; // [rsp+20h] [rbp-138h] BYREF
  char v24; // [rsp+28h] [rbp-130h]
  __int64 v25; // [rsp+30h] [rbp-128h]
  int v26; // [rsp+38h] [rbp-120h]
  __int16 v27; // [rsp+3Ch] [rbp-11Ch]
  __int64 (__fastcall *v28)(__int64); // [rsp+40h] [rbp-118h]
  __int64 v29; // [rsp+48h] [rbp-110h]
  __int64 v30; // [rsp+50h] [rbp-108h]
  _BYTE v31[80]; // [rsp+60h] [rbp-F8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-A0h]
  _BYTE v34[152]; // [rsp+C0h] [rbp-98h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 32);
  v5 = sub_141A630(v4);
  if ( (_WORD)v4 == 1 || v5 )
    v21 = 0;
  else
    v21 = *(_QWORD *)(a1 + 24);
  v6 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v6, (int *)(a1 + 16));
  v7 = *(_DWORD *)(a1 + 40);
  v25 = a1;
  v23 = (_BYTE *)(a1 + 1952);
  v8 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v24 = v8;
  v27 = 63;
  v26 = 1507350;
  v28 = sub_146A990;
  v29 = 0;
  v30 = 0;
  if ( (unsigned __int8)sub_156A040(&v23, 14, &byte_22F0C30, 0) )
    goto LABEL_13;
  v33 = 0xC00000000LL;
  ptr = v34;
  while ( 1 )
  {
    v9 = sub_14BDAD0(a1, 0);
    if ( v9 == 1 )
    {
      sub_156E210(&v23);
      goto LABEL_11;
    }
    v12 = (unsigned int)v33;
    v13 = (__int64 *)HIDWORD(v33);
    v14 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    v15 = (unsigned int)v33 + 1LL;
    if ( v15 > HIDWORD(v33) )
      break;
    v16 = ptr;
    *((_QWORD *)ptr + (unsigned int)v33) = v14;
    LODWORD(v33) = v33 + 1;
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_9;
LABEL_17:
    v20 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v20, (int *)(a1 + 16));
  }
  v13 = (__int64 *)v34;
  v22 = v14;
  sub_2237220(&ptr, v34, v15, 8);
  v12 = (unsigned int)v33;
  v16 = ptr;
  *((_QWORD *)ptr + (unsigned int)v33) = v22;
  LODWORD(v33) = v33 + 1;
  if ( *(_WORD *)(a1 + 32) == 66 )
    goto LABEL_17;
LABEL_9:
  sub_14808E0((__int64)&v23, v13, (__int64)v16, v12, v10, v11);
  if ( (unsigned int)(v33 - 1) > 2 )
  {
    sub_1564820(v31, a1, v7, 1874);
    sub_AEA040((__int64)v31);
LABEL_11:
    v17 = ptr;
    if ( ptr == v34 )
      goto LABEL_13;
LABEL_12:
    free(v17);
    goto LABEL_13;
  }
  v19 = sub_147A2E0(a2 + 40, v21, ((unsigned __int64)HIDWORD(v30) << 32) | v7, 0, 0, ptr, v33, 246, 0);
  sub_147F4B0(a2 + 8, v19);
  v17 = ptr;
  if ( ptr != v34 )
    goto LABEL_12;
LABEL_13:
  result = v23;
  *v23 = v24;
  return result;
}
