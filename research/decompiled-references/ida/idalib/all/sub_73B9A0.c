__int64 __fastcall sub_73B9A0(__m128i *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  unsigned int v7; // ebp
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  char *v10; // rax
  unsigned int v11; // r15d
  unsigned int v13; // eax
  unsigned __int32 v14; // r13d
  unsigned __int64 v15; // r12
  char *v16; // rbx
  int v17; // esi
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r13
  char *v21; // rax
  _DWORD *v22; // rax
  int v23; // [rsp+0h] [rbp-48h]
  unsigned __int32 v24; // [rsp+4h] [rbp-44h]
  char *dest; // [rsp+8h] [rbp-40h]

  v7 = a1[1].m128i_u32[2];
  LODWORD(v8) = a1[2].m128i_i32[0];
  while ( (_DWORD)v8 )
  {
    v9 = a1->m128i_u64[1];
    v10 = sub_738E20((__m128i *)v9, v8, 0, a4, a5, a6);
    if ( !v10 )
      return 0;
    a4 = a1->m128i_u32[0];
    v8 = *(unsigned int *)v10;
    a3 = ((unsigned __int32)a1->m128i_i32[0] >> 2) - 4;
    if ( (unsigned int)a3 >= (unsigned int)v8 )
    {
      v9 = v7 + (unsigned int)v8 + 1;
      v8 = *((unsigned int *)v10 + 1);
      v7 = v9;
      a3 = *(_QWORD *)(a1->m128i_i64[1] + 560) % a4;
      if ( v9 < *(_QWORD *)(a1->m128i_i64[1] + 560) / a4 )
        continue;
    }
    goto LABEL_39;
  }
  if ( v7 )
  {
    v11 = v7;
    while ( 1 )
    {
      v8 = v11;
      v9 = (unsigned __int64)a1;
      if ( !(unsigned __int8)sub_73B930((__int64)a1, v11, a3, a4, a5, a6) )
        break;
      if ( !--v11 )
        goto LABEL_13;
    }
    if ( v7 != v11 )
    {
LABEL_13:
      v13 = a1[1].m128i_u32[2];
      if ( v13 && v11 < v13 - 1 )
LABEL_39:
        sub_743130(v9, v8, a3);
      v14 = a1[2].m128i_u32[0];
      if ( v14 )
      {
        v15 = 0;
        while ( 1 )
        {
          v9 = a1->m128i_u64[1];
          v8 = v14;
          v16 = sub_738E20((__m128i *)v9, v14, 0, a4, a5, a6);
          if ( !v16 )
            return v7;
          if ( ((unsigned __int32)a1->m128i_i32[0] >> 2) - 4 < *(_DWORD *)v16 )
            goto LABEL_39;
          sub_738AD0(a1->m128i_i64[1], (__int64)v16);
          v17 = *(_DWORD *)v16;
          if ( !*(_DWORD *)v16 )
            break;
          v18 = 0;
          a4 = 0;
          do
          {
            v19 = *(_DWORD *)&v16[4 * v18 + 8];
            if ( v11 >= v19 )
            {
              if ( (_DWORD)a4 != v18 )
                *(_DWORD *)&v16[4 * (int)a4 + 8] = v19;
              a4 = (unsigned int)(a4 + 1);
            }
            ++v18;
          }
          while ( v17 != v18 );
          *(_DWORD *)v16 = a4;
          if ( v11 >= v14 )
          {
LABEL_34:
            v14 = *((_DWORD *)v16 + 1);
            v15 = (unsigned __int64)v16;
            goto LABEL_31;
          }
          if ( !(_DWORD)a4 )
            goto LABEL_28;
          v20 = (int)a4 - 1;
          v23 = a4 - 1;
          v24 = *(_DWORD *)&v16[4 * v20 + 8];
          v21 = sub_738E20((__m128i *)a1->m128i_i64[1], v24, 0, a4, a5, v24);
          if ( !v21 )
            return v7;
          dest = v21;
          sub_738AD0(a1->m128i_i64[1], (__int64)v21);
          v22 = memcpy(dest, v16, 4 * v20 + 12);
          a6 = v24;
          a4 = (unsigned __int64)v22;
          *v22 = v23;
          v14 = *((_DWORD *)v16 + 1);
          if ( !v15 )
          {
LABEL_37:
            a1[2].m128i_i32[0] = a6;
            goto LABEL_30;
          }
LABEL_29:
          *(_DWORD *)(v15 + 4) = a6;
LABEL_30:
          v15 = a4;
LABEL_31:
          if ( !v14 )
            return v11;
        }
        if ( v11 >= v14 )
          goto LABEL_34;
LABEL_28:
        v14 = *((_DWORD *)v16 + 1);
        a4 = v15;
        a6 = v14;
        if ( !v15 )
          goto LABEL_37;
        goto LABEL_29;
      }
    }
  }
  else
  {
    return 0;
  }
  return v11;
}
