__int64 __fastcall sub_A071B0(__int64 a1, __int64 a2, char a3, _QWORD *a4, __int64 a5)
{
  __int64 *v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // r12
  __int64 *v10; // r14
  __int64 i; // rdx
  unsigned __int64 v12; // rdx
  void *v13; // rsi
  __int64 v14; // r9
  _QWORD *v15; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // ebx
  size_t v20; // rdx
  _QWORD *v21; // rax
  size_t n; // [rsp+20h] [rbp-88h] BYREF
  void *src; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+40h] [rbp-68h] BYREF
  void *v27; // [rsp+50h] [rbp-58h] BYREF
  size_t v28; // [rsp+58h] [rbp-50h]
  _QWORD v29[9]; // [rsp+60h] [rbp-48h] BYREF

  sub_A05E40((__int64)&ptr, a1, a2, a3, a4, a5);
  v7 = (__int64 *)ptr;
  v8 = (__int64 *)((char *)ptr + 8 * v25);
  if ( ptr != v8 )
  {
    v9 = 1;
    while ( 1 )
    {
      v10 = (__int64 *)*v7;
      sub_A06BB0((__int64 (__fastcall ***)())&v27, (_QWORD *)a1, *v7);
      *(_QWORD *)(a1 + 8 * v9 + 24) = v27;
      if ( *(_OWORD *)(a1 + 32) != 0 )
        break;
LABEL_18:
      ++v7;
      ++v9;
      if ( v8 == v7 )
      {
        v8 = (__int64 *)ptr;
        v18 = 1;
        goto LABEL_20;
      }
    }
    for ( i = v10[1]; i; i = *(_QWORD *)(v12 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v12 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        break;
      v10 = (__int64 *)v12;
    }
    v13 = v10 + 4;
    if ( v10 == (__int64 *)-32LL )
    {
      v16 = *(_BYTE **)(a2 + 224);
      LOBYTE(v29[0]) = 0;
      v20 = 0;
      v27 = v29;
      goto LABEL_24;
    }
    v14 = *v10;
    v15 = v29;
    v27 = v29;
    if ( (unsigned __int64)v14 > 0xF )
    {
      if ( v14 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      src = v10 + 4;
      n = v14;
      v21 = (_QWORD *)operator new(v14 + 1);
      v14 = n;
      v13 = src;
      v27 = v21;
      v29[0] = n;
    }
    else
    {
      if ( v14 == 1 )
      {
        LOBYTE(v29[0]) = *((_BYTE *)v10 + 32);
        v15 = v29;
LABEL_12:
        v28 = v14;
        *((_BYTE *)v15 + v14) = 0;
        v16 = *(_BYTE **)(a2 + 224);
        if ( v27 != v29 )
        {
          if ( v16 == (_BYTE *)(a2 + 240) )
          {
            n = v29[0];
            *(_QWORD *)(a2 + 224) = v27;
            *(__m128 *)(a2 + 232) = _mm_loadh_ps((const double *)&n);
          }
          else
          {
            n = v29[0];
            v17 = *(_QWORD *)(a2 + 240);
            *(_QWORD *)(a2 + 224) = v27;
            *(__m128 *)(a2 + 232) = _mm_loadh_ps((const double *)&n);
            if ( v16 )
            {
              v27 = v16;
              v29[0] = v17;
              goto LABEL_16;
            }
          }
          v27 = v29;
          v16 = v29;
LABEL_16:
          v28 = 0;
          *v16 = 0;
          if ( v27 != v29 )
            operator delete(v27);
          goto LABEL_18;
        }
        v20 = v28;
        if ( v28 )
        {
          if ( v28 == 1 )
            *v16 = v29[0];
          else
            memcpy(v16, v29, v28);
          v20 = v28;
          v16 = *(_BYTE **)(a2 + 224);
        }
LABEL_24:
        *(_QWORD *)(a2 + 232) = v20;
        v16[v20] = 0;
        v16 = v27;
        goto LABEL_16;
      }
      if ( !v14 )
        goto LABEL_12;
      v21 = v29;
    }
    n = v14;
    memcpy(v21, v13, v14);
    v15 = v27;
    v14 = n;
    goto LABEL_12;
  }
  v18 = 0;
LABEL_20:
  if ( v8 != &v26 )
    free(v8);
  return v18;
}
