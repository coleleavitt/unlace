__int64 __fastcall sub_13585A0(__int64 a1, _BYTE *a2, size_t a3, unsigned __int8 a4, char a5, char a6)
{
  _BYTE *v7; // rbp
  size_t v8; // rbx
  size_t *v9; // r14
  size_t i; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 (__fastcall *v13)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8); // r10
  _QWORD *v15; // rax
  _QWORD *v16; // [rsp+2h] [rbp-58h] BYREF
  __int64 v17; // [rsp+Ah] [rbp-50h] BYREF
  _QWORD *v18; // [rsp+12h] [rbp-48h] BYREF
  char v19; // [rsp+1Ah] [rbp-40h]

  if ( a5 || a6 )
    return 1;
  v7 = a2;
  v8 = a3;
  sub_FD9C70((__int64)&v18, *(_QWORD *)(a1 + 16), a2, a3, 0, 1, 1);
  if ( (v19 & 1) != 0 )
  {
    v15 = v18;
    v18 = nullptr;
    v16 = v15;
    sub_A05760(&v17, &v16);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
    sub_A04D90((__int64 *)&v18);
  }
  else
  {
    v9 = v18;
    sub_A04D90((__int64 *)&v18);
    if ( v9 )
    {
      for ( i = v9[1]; i; i = *(_QWORD *)(v11 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v11 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v11 )
          break;
        v9 = (size_t *)v11;
      }
      v8 = *v9;
      v7 = v9 + 4;
    }
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(__int64 (__fastcall **)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8))(*(_QWORD *)v12 + 56LL);
  if ( v13 == sub_1358050 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, size_t, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 32LL))(
           v12,
           v7,
           v8,
           1,
           a4,
           0,
           0) )
    {
      sub_1357C20(v12, v7, v8);
    }
  }
  else
  {
    v13(v12, v7, v8, 1u, a4, 0, 0);
  }
  return 1;
}
