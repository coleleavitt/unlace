__int64 __fastcall sub_211E080(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        unsigned __int64 a8)
{
  __int8 v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  _QWORD **v16; // rcx
  _QWORD *v17; // r10
  unsigned __int64 v18; // r9
  _QWORD *v19; // rdi
  char *v20; // rdi
  __int64 v22; // rax
  unsigned int v23; // [rsp+0h] [rbp-68h]
  __int8 v24; // [rsp+8h] [rbp-60h]
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]

  v8 = a4;
  v9 = a3;
  v10 = a1[1];
  v24 = a5;
  v23 = a6;
  v11 = sub_2108670(v10, a2, a3, a4, a5, a6);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 208LL))(a1, v11, 0);
  v25.m128i_i64[0] = __PAIR64__(v23, v9);
  v25.m128i_i8[9] = v8;
  v25.m128i_i8[8] = v24;
  v12 = *(_QWORD *)(v10 + 1904);
  v26 = a2;
  v13 = *(_QWORD *)(v10 + 1896);
  v27 = v11;
  v14 = *(_QWORD *)(v13 + 8 * (a8 % v12));
  v15 = a8 % v12;
  if ( !v14 )
    goto LABEL_13;
  v16 = *(_QWORD ***)v14;
  if ( a8 != *(_QWORD *)(*(_QWORD *)v14 + 8LL) )
  {
    v17 = *v16;
    if ( *v16 )
    {
      v18 = v17[1];
      if ( v15 == v18 % v12 )
      {
        while ( a8 != v18 )
        {
          if ( !*v17 )
            goto LABEL_13;
          v18 = *(_QWORD *)(*v17 + 8LL);
          v16 = (_QWORD **)v17;
          if ( v15 != v18 % v12 )
            goto LABEL_13;
          v17 = (_QWORD *)*v17;
        }
        v19 = *v16;
        if ( *v16 )
          goto LABEL_11;
      }
    }
LABEL_13:
    v22 = operator new(0x70u);
    *(_QWORD *)v22 = 0;
    *(_QWORD *)(v22 + 16) = v22 + 64;
    *(_QWORD *)(v22 + 8) = a8;
    *(_QWORD *)(v22 + 24) = 1;
    *(_QWORD *)(v22 + 32) = 0;
    *(_QWORD *)(v22 + 40) = 0;
    *(_DWORD *)(v22 + 48) = 1065353216;
    *(_QWORD *)(v22 + 56) = 0;
    *(_QWORD *)(v22 + 64) = 0;
    *(_QWORD *)(v22 + 72) = 0;
    *(_QWORD *)(v22 + 80) = 0;
    *(_QWORD *)(v22 + 88) = 0;
    *(_QWORD *)(v22 + 96) = 0;
    *(_QWORD *)(v22 + 104) = 0;
    v20 = sub_211DEC0((char **)(v10 + 1896), v15, a8, (char *)v22, 1u) + 16;
    return sub_21133D0((__int64)v20, &v25, a7);
  }
  v19 = *(_QWORD **)v14;
LABEL_11:
  v20 = (char *)(v19 + 2);
  return sub_21133D0((__int64)v20, &v25, a7);
}
