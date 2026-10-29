unsigned __int64 __fastcall sub_21B7580(__int64 *a1, __int64 a2, unsigned int a3, const char *a4, char a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  unsigned __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r12
  size_t v14; // rax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64 *, void *, __int64); // rax
  __int64 v17; // rcx
  _QWORD *v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r12
  __int64 (__fastcall *v23)(__int64 *, void *, __int64); // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v24; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v25; // [rsp+10h] [rbp-1B8h]
  __int64 v27; // [rsp+38h] [rbp-190h]
  _QWORD v28[4]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v29; // [rsp+60h] [rbp-168h]
  void *ptr; // [rsp+70h] [rbp-158h] BYREF
  __m128i si128; // [rsp+78h] [rbp-150h]
  _BYTE v32[320]; // [rsp+88h] [rbp-140h] BYREF

  LODWORD(ptr) = a3;
  v6 = sub_21B6DA0((__int64)a1, (int *)&ptr, 1);
  v7 = a1[1];
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 != v9 )
  {
    if ( a3 )
    {
      do
      {
        if ( *v8 && (unsigned __int8)sub_21B9810(*v8, a3) )
          break;
        ++v8;
      }
      while ( v9 != v8 );
    }
    else
    {
      v8 += ((unsigned __int64)((char *)(v9 - 1) - (char *)v8) >> 3) + 1;
    }
  }
  result = (unsigned __int64)(v9 - 2);
LABEL_7:
  if ( v9 != v8 )
  {
    v27 = a2 + 16;
    do
    {
      v11 = *v8;
      v12 = *(_QWORD *)(*v8 + 16LL);
      if ( !v12 )
        v12 = *v8;
      *(_BYTE *)(v12 + 44) |= 1u;
      if ( a5 )
      {
        v13 = **(_QWORD **)(v11 + 48);
        v14 = 0;
        if ( a4 )
          v14 = strlen(a4);
        v28[1] = v14;
        v15 = *a1;
        v28[2] = v13;
        v29 = 773;
        ptr = v32;
        v16 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v15 + 16);
        v28[0] = a4;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v23 = v16;
        sub_22538C0(v28, &ptr);
        result = v23(a1, ptr, si128.m128i_i64[0]);
        if ( ptr != v32 )
        {
          v24 = result;
          free(ptr);
          result = v24;
        }
        v17 = *(unsigned int *)(a2 + 8);
        if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v25 = result;
          sub_2237220(a2, v27, v17 + 1, 8);
          v17 = *(unsigned int *)(a2 + 8);
          result = v25;
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v17) = result;
        ++*(_DWORD *)(a2 + 8);
      }
      else
      {
        v19 = *(unsigned int *)(a2 + 8);
        if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, v27, v19 + 1, 8);
          v19 = *(unsigned int *)(a2 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v19) = a4;
        v20 = *(unsigned int *)(a2 + 12);
        result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        v21 = **(_QWORD **)(v11 + 48);
        *(_DWORD *)(a2 + 8) = result;
        if ( result + 1 > v20 )
        {
          sub_2237220(a2, v27, result + 1, 8);
          result = *(unsigned int *)(a2 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = v21;
        ++*(_DWORD *)(a2 + 8);
      }
      v18 = v8 + 1;
      if ( v8 + 1 == v9 )
        break;
      if ( a3 )
      {
        while ( 1 )
        {
          if ( *v18 )
          {
            result = sub_21B9810(*v18, a3);
            if ( (_BYTE)result )
              break;
          }
          if ( v9 == ++v18 )
            return result;
        }
        v8 = v18;
        goto LABEL_7;
      }
      result = (unsigned __int64)((char *)(v9 - 2) - (char *)v8) >> 3;
      v8 = &v18[result + 1];
    }
    while ( v9 != v8 );
  }
  return result;
}
