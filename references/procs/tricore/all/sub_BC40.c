__int64 __fastcall sub_BC40(unsigned __int16 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r13d
  __int64 *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int dtype_size; // eax
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx
  _DWORD *v16; // r12
  unsigned __int16 *v17; // rbx
  unsigned __int64 v18; // r13
  unsigned int v19; // [rsp+Ch] [rbp-3Ch]

  v3 = 0;
  v4 = 0;
  v5 = a2;
  if ( a2[1] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = 40 * v3;
        v7 = 40 * v3 + *v5;
        if ( *(_BYTE *)(v7 + 1) == 1 )
          break;
        a3 = v5[1];
LABEL_4:
        v3 = ++v4;
        if ( v4 >= a3 )
          goto LABEL_14;
      }
      dtype_size = get_dtype_size(*(unsigned __int8 *)(v7 + 5), a2, a3);
      a2 = (__int64 *)*(unsigned __int16 *)(*v5 + v6 + 6);
      v9 = sub_BA90((__int64)(a1 + 8), (int)a2, dtype_size);
      a3 = v5[1];
      if ( !v9 )
        goto LABEL_4;
      v10 = *v5;
      v11 = *v5 + v6;
      if ( a3 )
      {
        v12 = 0;
        while ( 1 )
        {
          a2 = (__int64 *)(40 * v12 + v10);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int16 *, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(
                 a1,
                 a2,
                 v11) )
          {
            *(_BYTE *)(*v5 + 40 * v12 + 1) = 0;
          }
          a3 = v5[1];
          if ( ++v12 >= a3 )
            break;
          v10 = *v5;
        }
        v3 = ++v4;
        if ( v4 < a3 )
          continue;
      }
      break;
    }
  }
LABEL_14:
  result = get_ph();
  v14 = a1[20];
  v15 = *(_DWORD *)(result + 104);
  if ( v14 >= v15 && v14 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v14 - v15) + 8);
    v19 = result;
    if ( (_DWORD)result )
    {
      v16 = &unk_15FC0;
      v17 = a1 + 28;
      do
      {
        result = *v16 & v19;
        if ( (*v16 & v19) != 0 && *((_BYTE *)v17 + 1) > 1u && v5[1] )
        {
          v18 = 0;
          do
          {
            result = (*(__int64 (__fastcall **)(unsigned __int16 *, unsigned __int64, unsigned __int16 *))(*(_QWORD *)a1 + 8LL))(
                       a1,
                       *v5 + 40 * v18,
                       v17);
            if ( (_BYTE)result )
            {
              result = *v5;
              *(_BYTE *)(*v5 + 40 * v18 + 1) = 0;
            }
            ++v18;
          }
          while ( v18 < v5[1] );
        }
        v17 += 20;
        ++v16;
      }
      while ( v17 != a1 + 128 );
    }
  }
  return result;
}
