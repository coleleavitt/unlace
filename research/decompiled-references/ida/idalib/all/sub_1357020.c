void __fastcall sub_1357020(__int64 a1, _BYTE *a2, __int64 a3, int a4)
{
  unsigned __int8 *v6; // rdi
  __int64 v7; // rbp
  __int64 i; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  _BYTE *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int8 *v14; // rcx
  unsigned int j; // r14d
  _BYTE *v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // rdx
  void *v19[2]; // [rsp+0h] [rbp-198h] BYREF
  _BYTE v20[16]; // [rsp+10h] [rbp-188h] BYREF
  _QWORD v21[4]; // [rsp+20h] [rbp-178h] BYREF
  __int16 v22; // [rsp+40h] [rbp-158h]
  void *ptr; // [rsp+50h] [rbp-148h] BYREF
  __m128i si128; // [rsp+58h] [rbp-140h]
  _BYTE v25[304]; // [rsp+68h] [rbp-130h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v25;
  v19[0] = v20;
  if ( a2 )
  {
    sub_1356F60(v19, a2, (__int64)&a2[a3]);
  }
  else
  {
    v19[1] = nullptr;
    v20[0] = 0;
  }
  v21[0] = v19;
  v22 = 260;
  sub_228FF50(v21, &ptr, 0);
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v6 = (unsigned __int8 *)ptr;
  if ( a4 == 1 )
  {
    v21[0] = ptr;
    v21[1] = si128.m128i_i64[0];
    if ( sub_2246EC0(v21, " #${}^!", 7, 0) == -1 )
    {
      sub_227BF10(a1, ptr, si128.m128i_i64[0]);
    }
    else
    {
      v16 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v16 >= *(_QWORD *)(a1 + 24) )
      {
        a1 = sub_227BA10(a1, 34);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v16 + 1;
        *v16 = 34;
      }
      v17 = sub_227BF10(a1, ptr, si128.m128i_i64[0]);
      v18 = *(_BYTE **)(v17 + 32);
      if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
      {
        sub_227BA10(v17, 34);
      }
      else
      {
        *(_QWORD *)(v17 + 32) = v18 + 1;
        *v18 = 34;
      }
    }
    v6 = (unsigned __int8 *)ptr;
    if ( ptr != v25 )
LABEL_18:
      free(v6);
  }
  else
  {
    if ( si128.m128i_i32[0] )
    {
      v7 = (unsigned int)(si128.m128i_i32[0] - 1);
      for ( i = 0; ; i = v9 )
      {
        v10 = v6[i];
        v11 = *(_BYTE **)(a1 + 32);
        v12 = *(_QWORD *)(a1 + 24);
        if ( (_BYTE)v10 != 35 )
          break;
        v13 = 92;
        if ( v12 <= (unsigned __int64)v11 )
          goto LABEL_23;
        *(_QWORD *)(a1 + 32) = v11 + 1;
        *v11 = 92;
        v10 = *((unsigned __int8 *)ptr + i);
        v11 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v11 < *(_QWORD *)(a1 + 24) )
        {
LABEL_11:
          *(_QWORD *)(a1 + 32) = v11 + 1;
          *v11 = v10;
          v9 = i + 1;
          v6 = (unsigned __int8 *)ptr;
          if ( i == v7 )
            goto LABEL_17;
          continue;
        }
LABEL_16:
        sub_227BA10(a1, v10);
        v6 = (unsigned __int8 *)ptr;
        v9 = i + 1;
        if ( i == v7 )
          goto LABEL_17;
      }
      if ( (_BYTE)v10 == 32 )
      {
        if ( v12 <= (unsigned __int64)v11 )
        {
          sub_227BA10(a1, 92);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v11 + 1;
          *v11 = 92;
        }
        v14 = (unsigned __int8 *)ptr;
        v11 = *(_BYTE **)(a1 + 32);
        v12 = *(_QWORD *)(a1 + 24);
        if ( i )
        {
          for ( j = i - 1; *((_BYTE *)ptr + j) == 92; --j )
          {
            if ( (unsigned __int64)v11 < v12 )
            {
              *(_QWORD *)(a1 + 32) = v11 + 1;
              *v11 = 92;
            }
            else
            {
              sub_227BA10(a1, 92);
            }
            v14 = (unsigned __int8 *)ptr;
            v11 = *(_BYTE **)(a1 + 32);
            v12 = *(_QWORD *)(a1 + 24);
            if ( !j )
              break;
          }
          v10 = v14[i];
        }
        else
        {
          v10 = *(unsigned __int8 *)ptr;
        }
      }
      else if ( (_BYTE)v10 == 36 )
      {
        if ( v12 <= (unsigned __int64)v11 )
        {
          v13 = 36;
LABEL_23:
          sub_227BA10(a1, v13);
          v12 = *(_QWORD *)(a1 + 24);
          v10 = *((unsigned __int8 *)ptr + i);
          v11 = *(_BYTE **)(a1 + 32);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v11 + 1;
          *v11 = 36;
          v12 = *(_QWORD *)(a1 + 24);
          v10 = *((unsigned __int8 *)ptr + i);
          v11 = *(_BYTE **)(a1 + 32);
        }
      }
      if ( (unsigned __int64)v11 < v12 )
        goto LABEL_11;
      goto LABEL_16;
    }
LABEL_17:
    if ( v6 != v25 )
      goto LABEL_18;
  }
}
