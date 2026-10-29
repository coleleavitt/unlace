/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BC1C
// Address: 0x0007BC1C

//----- (0007BC1C) --------------------------------------------------------
int __fastcall sub_7BC1C(int a1, unsigned int a2, int a3, unsigned int a4)
{
  int v5; // r2
  void *v6; // r1
  int v7; // r6
  unsigned int v8; // r0
  signed int v9; // r5
  int v10; // r4
  int v11; // r0
  int v12; // r0
  bool v13; // zf
  _DWORD *exception; // r0
  unsigned int v17; // [sp+8h] [bp-24h]
  int v19; // [sp+10h] [bp-1Ch]
  void *ptr; // [sp+14h] [bp-18h] BYREF
  unsigned int v21; // [sp+18h] [bp-14h]
  int v22; // [sp+1Ch] [bp-10h]
  int v23; // [sp+20h] [bp-Ch] BYREF
  void *v24; // [sp+24h] [bp-8h] BYREF

  v5 = a1;
  v6 = nullptr;
  v21 = 0;
  ptr = nullptr;
  v22 = 0;
  v19 = 0;
  v17 = a4;
  if ( a4 )
  {
    v6 = qvector_reserve((int)&ptr, nullptr, a4, 1u);
    ptr = v6;
    a4 = v17;
    v5 = a1;
  }
  v21 = a4;
  if ( a2 )
  {
    v7 = 0;
    v19 = -1;
    v8 = v17;
    while ( 1 )
    {
      v9 = a2;
      if ( a2 >= v8 )
        v9 = v8;
      v10 = -1;
      if ( v5 )
      {
        if ( *(int *)v5 < 2 )
          v11 = qfread(*(FILE **)(v5 + 8), v6, v9);
        else
          v11 = sub_7B4E0(v5, v6, v9);
        v10 = v11;
        v5 = a1;
        if ( v11 < 1 )
        {
          v8 = v17;
        }
        else
        {
          v23 = v11;
          v24 = ptr;
          v12 = *(_DWORD *)(a3 + 16);
          if ( !v12 )
          {
            exception = _cxa_allocate_exception(4u);
            *exception = &off_DB25C;
            _cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_function_call,
              (void (*)(void *))std::exception::~exception);
          }
          v13 = (*(int (__fastcall **)(int, void **, int *))(*(_DWORD *)v12 + 24))(v12, &v24, &v23) == 0;
          v8 = v17;
          v5 = a1;
          if ( v13 )
            goto LABEL_23;
        }
      }
      v7 += v10;
      if ( v10 != v9 )
        break;
      a2 -= v9;
      if ( !a2 )
      {
        v19 = v7;
        goto LABEL_23;
      }
      v6 = ptr;
    }
    if ( v10 >= 0 )
      v19 = v7;
  }
LABEL_23:
  if ( ptr )
  {
    v21 = 0;
    qfree(ptr);
    v22 = 0;
    ptr = nullptr;
  }
  return v19;
}
// DB248: using guessed type _UNKNOWN *`typeinfo for'std::bad_function_call;
// DB25C: using guessed type _UNKNOWN *;
