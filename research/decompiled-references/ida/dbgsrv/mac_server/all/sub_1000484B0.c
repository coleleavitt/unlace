/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000484B0
// Address: 0x00000001000484B0

//----- (00000001000484B0) ----------------------------------------------------
__int64 __fastcall sub_1000484B0(__int64 a1, int a2, __int64 a3)
{
  char v4; // cl
  __int64 result; // rax
  int v6; // ecx
  const char *v7; // r15
  char *v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  bool v12; // cf
  __int64 v13; // rax
  _BYTE *v14; // rax
  char *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r12
  _BYTE *v18; // rax
  size_t v19; // rax
  size_t v20; // r12
  char *v21; // r13
  size_t v22; // r15
  __int64 **v23; // r14
  __int16 v24; // ax
  const char *v25; // [rsp+0h] [rbp-50h]
  _QWORD __dst[2]; // [rsp+8h] [rbp-48h] BYREF
  void *__p; // [rsp+18h] [rbp-38h]

  if ( !a2 )
  {
    *(_QWORD *)(a3 + 8) = 0;
    if ( *(_QWORD *)(a3 + 16) <= 0x3FFu )
      *(_QWORD *)a3 = qvector_reserve(a3, *(void **)a3, 0x400u, 1u);
    v8 = (char *)(*(_QWORD *)(a1 + 8) - 1LL);
    *(_QWORD *)(a1 + 8) = v8;
    v9 = *v8;
    if ( v9 >= 0 && (_DefaultRuneLocale.__runetype[v9] & 0x500) != 0
      || (unsigned __int8)v9 == 95
      || (unsigned __int8)v9 == 36 )
    {
      v10 = *(_QWORD *)(a3 + 8);
      v11 = 0;
      v12 = v10 == 0;
      v13 = v10 - 1;
      if ( !v12 )
        v11 = v13;
      v14 = *(_BYTE **)a3;
      if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v11 + 2) )
      {
        v14 = qvector_reserve(a3, *(void **)a3, v11 + 2, 1u);
        *(_QWORD *)a3 = v14;
      }
      *(_QWORD *)(a3 + 8) = v11 + 2;
      v14[v11] = v9;
      while ( 1 )
      {
        *(_BYTE *)(*(_QWORD *)a3 + v11 + 1) = 0;
        v15 = (char *)(*(_QWORD *)(a1 + 8) + 1LL);
        *(_QWORD *)(a1 + 8) = v15;
        v16 = *v15;
        if ( (v16 < 0 || (_DefaultRuneLocale.__runetype[v16] & 0x500) == 0)
          && (unsigned __int8)v16 != 95
          && (unsigned __int8)v16 != 36 )
        {
          break;
        }
        v17 = *(_QWORD *)(a3 + 8);
        v12 = v17 == 0;
        v11 = v17 - 1;
        if ( v12 )
          v11 = 0;
        v18 = *(_BYTE **)a3;
        if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v11 + 2) )
        {
          v18 = qvector_reserve(a3, *(void **)a3, v11 + 2, 1u);
          *(_QWORD *)a3 = v18;
        }
        *(_QWORD *)(a3 + 8) = v11 + 2;
        v18[v11] = v16;
      }
    }
  }
  v4 = sub_100047950(a1, a3);
  result = 0;
  if ( !v4 )
  {
    v6 = sub_100047680(a1, a3, __dst);
    result = 0xFFFFFFFFLL;
    if ( !v6 )
    {
      result = 1;
      if ( !LOBYTE(__dst[0]) )
      {
        if ( *(_QWORD *)(a3 + 8) )
          v7 = *(const char **)a3;
        else
          v7 = _s1;
        v19 = strlen(v7);
        if ( v19 >= 0xFFFFFFFFFFFFFFF8LL )
          sub_10004CF00();
        v20 = v19;
        if ( v19 >= 0x17 )
        {
          v25 = v7;
          v22 = 26;
          if ( (v19 | 7) != 0x17 )
            v22 = (v19 | 7) + 1;
          v21 = (char *)operator new(v22);
          __p = v21;
          __dst[0] = v22 + 1;
          v7 = v25;
          __dst[1] = v20;
        }
        else
        {
          LOBYTE(__dst[0]) = 2 * v19;
          v21 = (char *)__dst + 1;
          if ( !v19 )
            goto LABEL_36;
        }
        memmove(v21, v7, v20);
LABEL_36:
        v21[v20] = 0;
        v23 = sub_10004F2E0((_QWORD *)(a1 + 88), (unsigned __int8 *)__dst);
        if ( (__dst[0] & 1) != 0 )
          operator delete(__p);
        if ( v23 )
          v24 = *((_WORD *)v23 + 20);
        else
          v24 = 2;
        *(_WORD *)(a3 + 24) = v24;
        return 0;
      }
    }
  }
  return result;
}
