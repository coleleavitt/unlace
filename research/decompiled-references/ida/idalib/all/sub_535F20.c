__int64 __fastcall sub_535F20(__int64 *a1, unsigned __int8 a2, int a3, _QWORD *a4, char a5)
{
  unsigned int v7; // edx
  size_t v8; // r14
  int v9; // ebx
  char v10; // al
  unsigned int v11; // eax
  char *v12; // rdx
  char v13; // cl
  unsigned int i; // eax
  __int64 v15; // r13
  size_t v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-58h]
  size_t v21; // [rsp+8h] [rbp-50h]
  char src; // [rsp+10h] [rbp-48h] BYREF
  char v23; // [rsp+11h] [rbp-47h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a3 || a2 )
  {
    if ( !a4 )
      goto LABEL_7;
  }
  else if ( !a4 )
  {
    return 1;
  }
  if ( !a4[1] )
  {
LABEL_7:
    v7 = a3 & 0xFFFFFFEF;
    if ( !a2 && !v7 )
      return 1;
    if ( a5 )
    {
      if ( a2 <= 7u && !v7 )
      {
        v8 = 1;
        v9 = 0;
        src = (a2 - 1) & 1 | (8 * (a2 - 1)) & 0x30 | 0xC0;
        goto LABEL_17;
      }
      goto LABEL_25;
    }
    v9 = 0;
    goto LABEL_14;
  }
  v7 = a3 | 0x10;
  v9 = 16;
  if ( a5 )
  {
LABEL_25:
    if ( a2 > 0xFu || (v7 & 0xF) != 0 )
    {
      if ( !under_debugger )
        interr(828);
      BUG();
    }
    v10 = -15;
    v9 = v7 & 0x10;
    goto LABEL_15;
  }
LABEL_14:
  v10 = -2;
LABEL_15:
  src = v10;
  v11 = v7 | a2;
  v12 = &v23;
  v13 = v11;
  for ( i = v11 >> 7; i; i >>= 7 )
  {
    *v12++ = v13 | 0x80;
    v13 = i;
  }
  *v12 = v13;
  v8 = v12 + 1 - &src;
LABEL_17:
  v15 = a1[1];
  v16 = v8;
  if ( v15 )
    v16 = --v15 + v8;
  v17 = *a1;
  v18 = v16 + 1;
  if ( a1[2] < v16 + 1 )
  {
    v21 = v16;
    v20 = v16 + 1;
    v19 = qvector_reserve(a1, v17, v18, 1);
    v16 = v21;
    v18 = v20;
    *a1 = v19;
    v17 = v19;
  }
  a1[1] = v18;
  *(_BYTE *)(v17 + v16) = 0;
  memcpy((void *)(v15 + *a1), &src, v8);
  if ( !v9 )
    return 1;
  return sub_535D50(a1, a4);
}
