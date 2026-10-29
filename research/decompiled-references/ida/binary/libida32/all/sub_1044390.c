__int64 __fastcall sub_1044390(__int64 a1, _BYTE *a2, size_t a3, int a4, bool *a5)
{
  __int64 v5; // r9
  size_t v8; // r13
  _BYTE *v9; // r12
  __int64 v11; // rbp
  void *v12; // r13
  __int64 v13; // r12
  unsigned int v14; // eax
  int v15; // eax
  __int64 *v16; // rsi
  __int64 *v17; // r13
  __int64 result; // rax
  size_t v19; // rax
  int v20; // eax
  unsigned __int8 v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+8h] [rbp-A0h]
  __int64 *v23; // [rsp+18h] [rbp-90h] BYREF
  void *v24; // [rsp+20h] [rbp-88h] BYREF
  __int64 v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v27[4]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v28; // [rsp+60h] [rbp-48h]

  v5 = a1;
  v8 = a3;
  v9 = a2;
  if ( a3 == 2 )
  {
    if ( *(_WORD *)a2 == 28787 )
    {
      result = 1;
      *a5 = a4 != 64;
      return result;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_14;
  }
  if ( *a2 == 119 )
  {
    *a5 = a4 != 32;
    goto LABEL_5;
  }
LABEL_14:
  v19 = j__strlen("x");
  v5 = a1;
  if ( a3 < v19 )
    return 0;
  if ( v19 )
  {
    v20 = memcmp(a2, "x", v19);
    v5 = a1;
    if ( v20 )
      return 0;
  }
  *a5 = a4 != 64;
  if ( !a3 )
    goto LABEL_7;
LABEL_5:
  v8 = a3 - 1;
  v9 = a2 + 1;
  if ( a3 == 2 )
  {
    if ( a2[1] != 48 )
      goto LABEL_7;
    return 1;
  }
  if ( a3 == 3 && *(_WORD *)(a2 + 1) == 14385 )
  {
    v22 = v5;
    if ( !(unsigned __int8)sub_2274C90(v5 + 216) )
    {
      v5 = v22;
      goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  v11 = *(_QWORD *)(v5 + 208);
  v28 = 1283;
  v27[0] = "reserve-x";
  v27[2] = v9;
  v27[3] = v8;
  sub_222F820(&v24, v27);
  v12 = v24;
  v13 = v25;
  v14 = sub_2220DF0(v24, v25);
  v15 = sub_2221120(v11 + 280, v12, v13, v14);
  if ( v15 == -1 )
    v16 = (__int64 *)(*(_QWORD *)(v11 + 280) + 8LL * *(unsigned int *)(v11 + 288));
  else
    v16 = (__int64 *)(*(_QWORD *)(v11 + 280) + 8LL * v15);
  sub_E9D250(&v23, v16, 1);
  v17 = v23;
  sub_E9D250(&v23, (__int64 *)(*(_QWORD *)(v11 + 280) + 8LL * *(unsigned int *)(v11 + 288)), 1);
  result = 0;
  if ( v23 != v17 )
    result = *(unsigned __int8 *)(*v17 + 8);
  if ( v24 != &v26 )
  {
    v21 = result;
    operator delete(v24);
    return v21;
  }
  return result;
}

