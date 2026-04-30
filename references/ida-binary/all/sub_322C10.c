__int64 *__fastcall sub_322C10(__int64 *a1, int a2, __int64 (__fastcall *a3)(__int64))
{
  int default_radix; // ebp
  __int64 *result; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  int v8; // edx
  int v9; // eax
  __int64 v10; // r9
  int v11; // r14d
  unsigned __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  default_radix = get_default_radix();
  result = &qword_8CC800;
  v6 = xmmword_8CC810;
  if ( a2 > 0 )
  {
    v7 = xmmword_8CC810 + a2;
    v8 = a3(xmmword_8CC810);
    if ( default_radix == 8 )
      goto LABEL_9;
LABEL_3:
    result = default_radix == 10 ? sub_16FAA0(a1, (__int64)"%3u", v8) : sub_16FAA0(a1, (__int64)"%02X", v8);
    if ( ++v6 != v7 )
    {
      do
      {
        v9 = a3(v6);
        v10 = a1[1];
        v11 = v9;
        if ( v10 )
        {
          v12 = v10 + 1;
          v13 = a1[1];
          v14 = *a1;
          --v10;
          if ( a1[2] < v12 )
            goto LABEL_12;
        }
        else
        {
          v14 = *a1;
          v13 = 1;
          v12 = 2;
          if ( (unsigned __int64)a1[2] < 2 )
          {
LABEL_12:
            v18 = v13;
            v17 = v10;
            v16 = v12;
            v15 = qvector_reserve(a1, v14, v12, 1);
            v13 = v18;
            v10 = v17;
            *a1 = v15;
            v12 = v16;
            v14 = v15;
          }
        }
        a1[1] = v12;
        v8 = v11;
        *(_BYTE *)(v14 + v10) = 32;
        *(_BYTE *)(*a1 + v13) = 0;
        if ( default_radix != 8 )
          goto LABEL_3;
LABEL_9:
        ++v6;
        result = sub_16FAA0(a1, (__int64)"%03o", v8);
      }
      while ( v6 != v7 );
    }
  }
  return result;
}
