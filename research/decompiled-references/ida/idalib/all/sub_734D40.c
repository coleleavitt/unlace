__int64 __fastcall sub_734D40(__m128i *a1)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  char *v7; // rax
  unsigned int v8; // r15d
  unsigned int v10; // ebx
  int v11; // eax
  unsigned __int16 v12; // r13
  char *v13; // rax
  char *v14; // rbx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ebp
  unsigned __int16 v18; // dx
  char *v19; // rax
  char *v20; // r9
  unsigned __int16 v21; // r10
  char *v22; // rax
  char *v23; // rax
  char *v24; // [rsp+8h] [rbp-50h]
  unsigned __int16 v25; // [rsp+14h] [rbp-44h]
  char *dest; // [rsp+18h] [rbp-40h]

  v2 = a1[1].m128i_u16[4];
  LOWORD(v3) = a1[2].m128i_i16[0];
  while ( (_WORD)v3 )
  {
    v6 = a1->m128i_u64[1];
    v7 = sub_733BE0((__m128i *)v6, v3, 0);
    if ( !v7 )
      return 0;
    v4 = a1->m128i_u32[0];
    v3 = *(unsigned __int16 *)v7;
    v5 = ((unsigned __int32)a1->m128i_i32[0] >> 1) - 4;
    if ( (unsigned int)v5 >= (unsigned int)v3 )
    {
      v2 += v3 + 1;
      v3 = *((unsigned __int16 *)v7 + 1);
      v6 = (unsigned __int16)v2;
      v5 = *(_QWORD *)(a1->m128i_i64[1] + 560) % v4;
      if ( (unsigned __int16)v2 < *(_QWORD *)(a1->m128i_i64[1] + 560) / v4 )
        continue;
    }
    goto LABEL_39;
  }
  if ( (_WORD)v2 )
  {
    v10 = (unsigned __int16)v2;
    while ( 1 )
    {
      v3 = v10;
      v6 = (unsigned __int64)a1;
      if ( !(unsigned __int8)sub_734CB0((__int64)a1, v10) )
        break;
      v8 = --v10;
      if ( !(_WORD)v10 )
        goto LABEL_13;
    }
    v8 = v10;
    if ( (_WORD)v2 != (_WORD)v10 )
    {
LABEL_13:
      v11 = a1[1].m128i_u16[4];
      if ( (_WORD)v11 )
      {
        v5 = (unsigned __int16)v8;
        if ( (unsigned __int16)v8 < v11 - 1 )
LABEL_39:
          sub_737820(v6, v3, v5);
      }
      v12 = a1[2].m128i_u16[0];
      if ( v12 )
      {
        v24 = nullptr;
        while ( 1 )
        {
          v6 = a1->m128i_u64[1];
          v3 = v12;
          v13 = sub_733BE0((__m128i *)v6, v12, 0);
          v14 = v13;
          if ( !v13 )
            return v2;
          v5 = *(unsigned __int16 *)v13;
          if ( ((unsigned __int32)a1->m128i_i32[0] >> 1) - 4 < (unsigned int)v5 )
            goto LABEL_39;
          sub_7338A0(a1->m128i_i64[1], (__int64)v13);
          v15 = *(unsigned __int16 *)v14;
          if ( !(_WORD)v15 )
            break;
          v16 = 0;
          v17 = 0;
          do
          {
            v18 = *(_WORD *)&v14[2 * v16 + 4];
            if ( (unsigned __int16)v8 >= v18 )
            {
              if ( v17 != (_DWORD)v16 )
                *(_WORD *)&v14[2 * v17 + 4] = v18;
              ++v17;
            }
            ++v16;
          }
          while ( v15 > (int)v16 );
          *(_WORD *)v14 = v17;
          if ( (unsigned __int16)v8 >= v12 )
          {
LABEL_34:
            v24 = v14;
            v12 = *((_WORD *)v14 + 1);
            goto LABEL_31;
          }
          if ( !(_WORD)v17 )
            goto LABEL_28;
          v25 = *(_WORD *)&v14[2 * (unsigned __int16)v17 + 2];
          v22 = sub_733BE0((__m128i *)a1->m128i_i64[1], v25, 0);
          if ( !v22 )
            return v2;
          dest = v22;
          sub_7338A0(a1->m128i_i64[1], (__int64)v22);
          v23 = (char *)memcpy(dest, v14, 2LL * ((unsigned __int16)v17 + 2));
          v21 = v25;
          *(_WORD *)v23 = v17 - 1;
          v20 = v23;
          v19 = v24;
          v12 = *((_WORD *)v14 + 1);
          if ( !v24 )
          {
LABEL_37:
            a1[2].m128i_i16[0] = v21;
            goto LABEL_30;
          }
LABEL_29:
          *((_WORD *)v19 + 1) = v21;
LABEL_30:
          v24 = v20;
LABEL_31:
          if ( !v12 )
            return v8;
        }
        if ( (unsigned __int16)v8 >= v12 )
          goto LABEL_34;
LABEL_28:
        v12 = *((_WORD *)v14 + 1);
        v19 = v24;
        v20 = v24;
        v21 = v12;
        if ( !v24 )
          goto LABEL_37;
        goto LABEL_29;
      }
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
