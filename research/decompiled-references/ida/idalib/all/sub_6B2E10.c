__int64 __fastcall sub_6B2E10(__int64 *a1, unsigned int a2)
{
  char *v3; // rbp
  _BYTE *v4; // rbp
  __int64 v5; // r12
  size_t v6; // rbp
  size_t v7; // r14
  __int64 v8; // rsi
  char *v10; // rcx
  char *v11; // rsi
  char *v12; // rcx
  __int64 v13; // rax
  char v14; // [rsp+0h] [rbp-48h] BYREF
  char v15; // [rsp+1h] [rbp-47h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  if ( a2 > 0x7FFFFFF )
  {
    v10 = &v15;
    v14 = (a2 >> 27) | 0x80;
LABEL_12:
    v11 = v10 + 1;
    *v10 = (a2 >> 20) | 0x80;
LABEL_13:
    v12 = v11 + 1;
    *v11 = (a2 >> 13) | 0x80;
LABEL_14:
    v3 = v12 + 1;
    *v12 = (a2 >> 6) | 0x80;
    goto LABEL_6;
  }
  if ( (a2 & 0x7F00000) != 0 )
  {
    v10 = &v14;
    goto LABEL_12;
  }
  if ( (a2 & 0xFE000) != 0 )
  {
    v11 = &v14;
    goto LABEL_13;
  }
  v3 = &v14;
  if ( (a2 & 0x1FC0) != 0 )
  {
    v12 = &v14;
    goto LABEL_14;
  }
LABEL_6:
  v4 = v3 + 1;
  v5 = a1[1];
  *(v4 - 1) = a2 & 0x3F | 0x40;
  v6 = v4 - &v14;
  v7 = v6;
  if ( v5 )
  {
    --v5;
    v7 = v6 + v5;
  }
  v8 = *a1;
  if ( a1[2] < v7 + 1 )
  {
    v13 = qvector_reserve(a1, v8, v7 + 1, 1);
    *a1 = v13;
    v8 = v13;
  }
  a1[1] = v7 + 1;
  *(_BYTE *)(v8 + v7) = 0;
  memcpy((void *)(v5 + *a1), &v14, v6);
  return 1;
}
