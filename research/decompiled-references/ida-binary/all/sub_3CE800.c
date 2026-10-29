unsigned __int64 __fastcall sub_3CE800(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v6; // r13
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  _DWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  unsigned __int8 v14; // dl
  __int64 v16; // rdx
  __int64 v19; // [rsp+18h] [rbp-50h]
  int v20; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v6 = (a3 - 1) / 2;
  v21 = __readfsqword(0x28u);
  v19 = a3 & 1;
  if ( a2 >= v6 )
  {
    v11 = (_DWORD *)(a1 + 4 * a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_11;
    v8 = a2;
    goto LABEL_13;
  }
  v8 = a2;
  do
  {
    v9 = v8;
    v8 = 2 * (v8 + 1) - a5(a1 + 8 * (v8 + 1), a1 + 8 * (v8 + 1) - 4);
    v10 = 4 * v8;
    v11 = (_DWORD *)(a1 + 4 * v8);
    *(_DWORD *)(a1 + 4 * v9) = *v11;
  }
  while ( v8 < v6 );
  if ( !v19 && (a3 - 2) / 2 == v8 )
  {
LABEL_13:
    v16 = 2 * v8 + 2;
    v8 = 2 * v8 + 1;
    v10 = 4 * v8;
    *v11 = *(_DWORD *)(a1 + 4 * v16 - 4);
    v11 = (_DWORD *)(a1 + 4 * v8);
  }
  v20 = a4;
  v12 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v14 = a5(a1 + 4 * v12, (__int64)&v20);
      v11 = (_DWORD *)(a1 + v10);
      if ( !v14 )
      {
        a4 = v20;
        goto LABEL_11;
      }
      v13 = v12;
      *v11 = *(_DWORD *)(a1 + 4 * v12);
      if ( a2 >= v12 )
        break;
      v12 = (v12 - 1) / 2;
      v10 = 4 * v13;
    }
    a4 = v20;
    v11 = (_DWORD *)(a1 + 4 * v12);
  }
LABEL_11:
  *v11 = a4;
  return v21 - __readfsqword(0x28u);
}
