__int64 __fastcall sub_1390980(__int64 a1, _QWORD *a2, size_t a3)
{
  _QWORD *v3; // rbp
  size_t v4; // rbx
  size_t *v5; // r12
  size_t i; // rax
  unsigned __int64 v7; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+18h] [rbp-40h] BYREF
  _QWORD *v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v4 = a3;
  sub_FD9C70((__int64)&v12, *(_QWORD *)(a1 + 16), a2, a3, 0, 1, 1);
  if ( (v13 & 1) != 0 )
  {
    v9 = v12;
    v12 = nullptr;
    v10 = v9;
    sub_A05760(&v11, &v10);
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
    sub_A04D90((__int64 *)&v12);
  }
  else
  {
    v5 = v12;
    sub_A04D90((__int64 *)&v12);
    if ( v5 )
    {
      for ( i = v5[1]; i; i = *(_QWORD *)(v7 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v7 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v7 )
          break;
        v5 = (size_t *)v7;
      }
      v4 = *v5;
      v3 = v5 + 4;
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD *, size_t, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(
    *(_QWORD *)(a1 + 8),
    v3,
    v4,
    0,
    0);
  return 1;
}
