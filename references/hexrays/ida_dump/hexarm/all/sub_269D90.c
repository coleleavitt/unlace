__int64 sub_269D90(__int64 a1, int a2, __int64 a3, ...)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v7; // rbx
  __int64 v8; // r12
  int v9; // r13d
  __int64 *v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r12
  int v13; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-110h]
  gcc_va_list va; // [rsp+10h] [rbp-108h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-F0h]
  __int64 v23; // [rsp+48h] [rbp-D0h]
  __int64 v24; // [rsp+50h] [rbp-C8h]
  __int64 v25; // [rsp+58h] [rbp-C0h]

  va_start(va, a3);
  v23 = va_arg(va, _QWORD);
  v3 = v23;
  v24 = va_arg(va, _QWORD);
  v4 = v24;
  v25 = va_arg(va, _QWORD);
  v5 = v25;
  va_end(va);
  v22 = __readfsqword(0x28u);
  v7 = *(__int64 **)(a1 + 56);
  v8 = v7[1];
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( a2 != 1 )
      goto LABEL_3;
    v17 = v8 + 1;
    v4 = v7[1];
    --v8;
  }
  else
  {
    v9 = 0;
    if ( a2 != 1 )
      goto LABEL_3;
    v4 = 1;
    v17 = 2;
  }
  v18 = *v7;
  if ( v7[2] < v17 )
  {
    v20 = v4;
    v19 = qvector_reserve(*(_QWORD *)(a1 + 56), v18, v17, 1);
    v4 = v20;
    *v7 = v19;
    v18 = v19;
  }
  v7[1] = v17;
  *(_BYTE *)(v18 + v8) = 32;
  *(_BYTE *)(*v7 + v4) = 0;
  v7 = *(__int64 **)(a1 + 56);
LABEL_3:
  va_start(va, a3);
  sub_FA450(v7, a3, (const __m128i *)va, v3, v4, v5);
  v10 = *(__int64 **)(a1 + 56);
  v11 = v10[1];
  if ( v11 > 1 )
  {
    while ( 1 )
    {
      v16 = *v10;
      if ( *(_BYTE *)(*v10 + v11 - 2) != 10 )
        goto LABEL_21;
      v12 = v11 - 1;
      if ( (__int64)(v11 - 1) > 1 )
        break;
      if ( v16 )
      {
        v10[1] = 0;
        qfree(v16);
        *v10 = 0;
        v10[2] = 0;
        v10 = *(__int64 **)(a1 + 56);
        v11 = v10[1];
        if ( v11 <= 1 )
          goto LABEL_13;
      }
      else
      {
LABEL_8:
        v11 = v10[1];
        if ( v11 <= 1 )
          goto LABEL_13;
      }
    }
    if ( v10[2] < v12 )
    {
      v15 = qvector_reserve(v10, v16, v11 - 1, 1);
      *v10 = v15;
      v16 = v15;
    }
    v10[1] = v12;
    *(_BYTE *)(v16 + v11 - 2) = 0;
    v10 = *(__int64 **)(a1 + 56);
    goto LABEL_8;
  }
LABEL_13:
  if ( v11 )
LABEL_21:
    v13 = v11 - 1;
  else
    v13 = 0;
  return (unsigned int)(v13 - v9);
}
