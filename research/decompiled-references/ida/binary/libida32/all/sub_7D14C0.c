__int64 *__fastcall sub_7D14C0(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 *v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  v8 = operator new(0x18u);
  *(_QWORD *)v8 = 0;
  v9 = (__int64 *)v8;
  *(_OWORD *)(v8 + 8) = 0;
  if ( a5 < 0 )
    a5 = a2[1];
  if ( a4 < a5 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v11 < v12 + 1 )
      {
        v16 = qvector_reserve(v9, v10, v12 + 1, 16);
        *v9 = v16;
        v10 = v16;
        v12 = v9[1];
      }
      v13 = (_QWORD *)(v10 + 16 * v12);
      *v13 = 0;
      v13[1] = 0;
      v14 = *a2;
      ++v9[1];
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 16LL))(
              a1,
              v14 + 56 * a4,
              a3);
      if ( *(_DWORD *)v13 )
      {
        v19 = v15;
        jvalue_t_clear(v13);
        v15 = v19;
      }
      ++a4;
      *(_DWORD *)v13 = 3;
      v13[1] = v15;
      if ( a5 == a4 )
        break;
      v12 = v9[1];
      v11 = v9[2];
      v10 = *v9;
    }
  }
  return v9;
}

