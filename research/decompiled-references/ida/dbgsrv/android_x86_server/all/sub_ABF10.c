/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABF10
// Address: 0x000ABF10

//----- (000ABF10) --------------------------------------------------------
int __cdecl sub_ABF10(int a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  int v5; // ecx
  void *v6; // eax
  unsigned int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  char v12; // al
  int v13; // esi
  _DWORD *exception; // eax
  int v16; // [esp+8h] [ebp-34h]
  unsigned int v17; // [esp+Ch] [ebp-30h]
  int v18; // [esp+10h] [ebp-2Ch] BYREF
  unsigned int v19; // [esp+14h] [ebp-28h]
  int v20; // [esp+18h] [ebp-24h]
  int v21; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD v22[6]; // [esp+24h] [ebp-18h] BYREF

  v4 = a4;
  v22[1] = __readgsdword(0x14u);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v5 = 0;
  v6 = nullptr;
  if ( a4 )
  {
    v6 = qvector_reserve((int)&v18, nullptr, a4, 1u);
    v18 = (int)v6;
    v5 = 0;
  }
  v7 = a2;
  v19 = a4;
  if ( a2 )
  {
    v8 = a1;
    v5 = 0;
    while ( 1 )
    {
      if ( v7 < v4 )
        v4 = v7;
      v17 = v4;
      if ( v8 )
      {
        v16 = v5;
        if ( *(int *)v8 < 2 )
          v9 = qfread(*(FILE **)(v8 + 4), v6, v4);
        else
          v9 = sub_AB320(__SPAIR64__((unsigned int)v6, v8), v4);
        v10 = v9;
        v5 = v16;
        v8 = a1;
        if ( v9 > 0 )
        {
          v22[0] = v18;
          v21 = v9;
          v11 = *(_DWORD *)(a3 + 16);
          if ( !v11 )
          {
            exception = _cxa_allocate_exception(4u);
            *exception = &off_13936C;
            _cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_function_call,
              (void (*)(void *))std::exception::~exception);
          }
          v12 = (*(int (__cdecl **)(int, _DWORD *, int *))(*(_DWORD *)v11 + 24))(v11, v22, &v21);
          v5 = v16;
          v8 = a1;
          if ( !v12 )
          {
            v5 = -1;
            goto LABEL_23;
          }
        }
      }
      else
      {
        v10 = -1;
      }
      v5 += v10;
      if ( v10 != v17 )
        break;
      v7 -= v17;
      if ( !v7 )
        goto LABEL_23;
      v6 = (void *)v18;
      v4 = a4;
    }
    if ( v10 < 0 )
      v5 = -1;
  }
LABEL_23:
  if ( v18 )
  {
    v13 = v5;
    v19 = 0;
    qfree((void *)v18);
    v18 = 0;
    v20 = 0;
    return v13;
  }
  return v5;
}
// 139358: using guessed type int (__cdecl *`typeinfo for'std::bad_function_call)(std::type_info *);
// 13936C: using guessed type void (__cdecl *)(std::exception *__hidden this);
