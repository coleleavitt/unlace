__int64 __fastcall sub_125A8E0(__int64 a1, _BYTE *a2, __m128 *a3)
{
  int v3; // eax
  unsigned int v5; // r12d
  int v6; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  void *v10; // rdi
  __int64 v11; // rsi
  char v12; // al
  __m128 *v14; // [rsp+8h] [rbp-90h] BYREF
  __m128 v15; // [rsp+10h] [rbp-88h] BYREF
  __int64 *v16; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  void *v19; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h]
  _BYTE v21[72]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 152);
  if ( v3 == 11 )
  {
    v5 = 0;
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    return v5;
  }
  v14 = a3;
  v15 = _mm_loadh_ps((const double *)&v14);
  switch ( v3 )
  {
    case 16:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      sub_1258400(
        (__int64)&v19,
        a3[7].m128_i64[0],
        *(unsigned __int8 **)(a1 + 272),
        (unsigned __int8 *)(*(_QWORD *)(a1 + 272) + *(_QWORD *)(a1 + 280)));
      if ( !v20 )
        goto LABEL_45;
      v8 = *(char *)v19;
      v9 = std::use_facet<std::ctype<char>>(a3[6].m128_u64[1]);
      LOBYTE(v16) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, v8);
      sub_1258740((__int64)a3, &v16);
      if ( v20 == 1 )
      {
        sub_12589E0((__int64)&v15, *(_BYTE *)v19);
      }
      else
      {
        if ( *a2 == 1 )
          sub_12588F0((__int64)a3, a2[1]);
        *a2 = 2;
      }
      v10 = v19;
      if ( v19 == v21 )
        return 1;
      goto LABEL_20;
    case 17:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *a2 == 1 )
        sub_12588F0((__int64)a3, a2[1]);
      v11 = a3[7].m128_i64[0];
      *a2 = 2;
      sub_1258400(
        (__int64)&v16,
        v11,
        *(unsigned __int8 **)(a1 + 272),
        (unsigned __int8 *)(*(_QWORD *)(a1 + 272) + *(_QWORD *)(a1 + 280)));
      if ( !v17 )
        goto LABEL_45;
      sub_1258660((__int64)&v19, a3[7].m128_i64[0], v16, (__int64)v16 + v17);
      sub_A0AAD0((__int64)&v16, &v19);
      if ( v19 != v21 )
        operator delete(v19);
      sub_1259B10((__int64)&a3[1].m128_i64[1], (__int64)&v16);
      v10 = v16;
      if ( v16 == &v18 )
        return 1;
LABEL_20:
      operator delete(v10);
      return 1;
    case 15:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *a2 == 1 )
        sub_12588F0((__int64)a3, a2[1]);
      v5 = 1;
      *a2 = 2;
      sub_1256070((__int64)a3, a1 + 272, 0);
      break;
    default:
      v5 = sub_1251410(a1);
      if ( !(_BYTE)v5 )
      {
        v6 = *(_DWORD *)(a1 + 152);
        if ( v6 == 28 )
        {
          sub_9EE8A0(a1 + 272, a1 + 208);
          sub_12510C0((unsigned __int8 *)(a1 + 8));
          if ( *(_DWORD *)(a1 + 152) == 11 )
          {
            sub_9EE8A0(a1 + 272, a1 + 208);
            sub_12510C0((unsigned __int8 *)(a1 + 8));
            sub_12589E0((__int64)&v15, 45);
            return v5;
          }
          if ( *a2 != 2 )
          {
            if ( *a2 == 1 )
            {
              v5 = sub_1251410(a1);
              if ( (_BYTE)v5 )
              {
                v12 = **(_BYTE **)(a1 + 272);
                if ( v12 >= (char)a2[1] )
                {
                  LOBYTE(v19) = a2[1];
                  BYTE1(v19) = v12;
                  sub_1259E80(a3 + 3, &v19);
                  *a2 = 0;
                  return v5;
                }
              }
              else if ( *(_DWORD *)(a1 + 152) == 28 )
              {
                sub_9EE8A0(a1 + 272, a1 + 208);
                sub_12510C0((unsigned __int8 *)(a1 + 8));
                if ( (char)a2[1] <= 45 )
                {
                  LOBYTE(v19) = a2[1];
                  v5 = 1;
                  BYTE1(v19) = 45;
                  sub_1259E80(a3 + 3, &v19);
                  *a2 = 0;
                  return v5;
                }
              }
            }
            else if ( (*(_BYTE *)a1 & 0x10) != 0 )
            {
              v5 = 1;
              sub_12589E0((__int64)&v15, 45);
              return v5;
            }
          }
        }
        else if ( v6 == 14 )
        {
          sub_9EE8A0(a1 + 272, a1 + 208);
          sub_12510C0((unsigned __int8 *)(a1 + 8));
          if ( *a2 == 1 )
            sub_12588F0((__int64)a3, a2[1]);
          *a2 = 2;
          sub_1256070(
            (__int64)a3,
            a1 + 272,
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 392) + 48LL) + 2LL * **(unsigned __int8 **)(a1 + 272) + 1) & 1);
          return 1;
        }
LABEL_45:
        abort();
      }
      sub_12589E0((__int64)&v15, **(_BYTE **)(a1 + 272));
      break;
  }
  return v5;
}
