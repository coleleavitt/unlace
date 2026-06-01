__int64 __fastcall sub_14977F0(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 *a5,
        int *a6,
        __m128i a7,
        __m128 a8)
{
  __int16 v10; // bp
  int v11; // r12d
  __int64 v12; // rax
  char v13; // r13
  __int64 v14; // r14
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // ecx
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rdi
  int v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]

  v10 = *(_WORD *)(a1 + 92);
  v11 = *(_DWORD *)(a1 + 88);
  v12 = sub_18957D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL));
  v13 = *(_BYTE *)(a1 + 2065);
  v14 = v12;
  *(_BYTE *)(a1 + 2065) = v12 != 0;
  if ( v12 )
    sub_1A865F0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v12);
  v15 = *(_WORD *)(a1 + 32);
  if ( v15 != 153 )
  {
    if ( v15 > 0x99u )
    {
      if ( v15 == 166 )
        goto LABEL_28;
      if ( v15 <= 0xA6u )
      {
        if ( v15 == 157 )
        {
          v24 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(*(_QWORD *)(v24 + 56) + 1LL) & 8) != 0 )
          {
            v25 = *(_QWORD *)(v24 + 2944);
            v26 = v25 >= *(unsigned int *)(v24 + 2912) ? sub_14180A0(v24, 1u) : *(_QWORD *)(v24 + 2904) + 24 * v25;
            if ( *(_WORD *)(v26 + 16) == 138 )
            {
              sub_1481E50(a1, a4, 0);
              sub_1481E50(a1, (__int64)a5, 0);
              v27 = *(__int64 **)(a1 + 8);
              *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
              sub_14634E0(v27, (int *)(a1 + 16));
              v16 = *(unsigned int *)(a1 + 40);
              goto LABEL_9;
            }
          }
        }
      }
      else if ( (unsigned __int16)(v15 - 356) <= 1u )
      {
        v22 = sub_14DA750(a1, a3);
        v17 = sub_17A2530(*(_QWORD *)(a1 + 96), v22, 0);
        goto LABEL_10;
      }
    }
    else
    {
      if ( v15 == 134 )
      {
LABEL_26:
        sub_1481E50(a1, a4, 0);
        sub_1481E50(a1, (__int64)a5, 0);
        v17 = sub_155BFA0(a1, a2, a3, a4);
        goto LABEL_10;
      }
      if ( v15 > 0x86u )
      {
        if ( v15 == 138 )
        {
          sub_1481E50(a1, a4, 0);
          sub_1481E50(a1, (__int64)a5, 0);
          v16 = 0;
LABEL_9:
          v17 = sub_14AB8E0(a1, a2, a3, v16);
          goto LABEL_10;
        }
        if ( v15 == 146 )
          goto LABEL_26;
        goto LABEL_34;
      }
      if ( v15 == 119 )
      {
LABEL_28:
        sub_1481E50(a1, a4, 0);
        sub_1481E50(a1, (__int64)a5, 0);
        v23 = sub_14A4C70(a1, a3);
        v17 = sub_17A2530(*(_QWORD *)(a1 + 96), v23, 0);
        goto LABEL_10;
      }
    }
LABEL_34:
    v17 = sub_14972B0((__m128i *)a1, a2, a3, a4, a5, 1, a7, a8, 0, a6);
    goto LABEL_10;
  }
  sub_15D8C80(a4, a5);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v17 = sub_14AEAE0(a1, a2, &v31, a3, a4);
LABEL_10:
  if ( v14 )
    sub_1A86610(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v14);
  v18 = *(_DWORD *)(a1 + 2792);
  *(_BYTE *)(a1 + 2065) = v13;
  if ( v18 )
  {
    v19 = *(_WORD *)(a1 + 88);
    v20 = *(_QWORD *)(a1 + 2784) + 24LL * v18 - 24;
    do
    {
      if ( v19 == *(_WORD *)(v20 + 14) )
      {
        if ( *(_DWORD *)(v20 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_15;
      }
      else if ( v19 > *(_WORD *)(v20 + 14) )
      {
        goto LABEL_15;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v20 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v20 + 18) )
        break;
LABEL_15:
      --v18;
      v20 -= 24;
      *(_DWORD *)(a1 + 2792) = v18;
    }
    while ( v18 );
  }
  *(_DWORD *)(a1 + 88) = v11;
  *(_WORD *)(a1 + 92) = v10;
  return v17;
}
