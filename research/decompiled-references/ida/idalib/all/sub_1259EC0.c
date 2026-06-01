__int64 __fastcall sub_1259EC0(__int64 a1, _BYTE *a2, __m128 *a3)
{
  int v3; // eax
  unsigned int v5; // r13d
  int v6; // eax
  char v7; // bl
  _BYTE *v8; // rax
  void *v10; // rdi
  char v11; // al
  __m128 *v12; // [rsp+8h] [rbp-90h] BYREF
  __m128 v13; // [rsp+10h] [rbp-88h] BYREF
  __int64 *v14; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  void *v17; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+48h] [rbp-50h]
  _BYTE v19[72]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 152);
  if ( v3 == 11 )
  {
    v5 = 0;
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    return v5;
  }
  v12 = a3;
  v13 = _mm_loadh_ps((const double *)&v12);
  switch ( v3 )
  {
    case 16:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      sub_1258400(
        (__int64)&v17,
        a3[6].m128_i64[1],
        *(unsigned __int8 **)(a1 + 272),
        (unsigned __int8 *)(*(_QWORD *)(a1 + 272) + *(_QWORD *)(a1 + 280)));
      if ( !v18 )
        goto LABEL_47;
      LOBYTE(v14) = *(_BYTE *)v17;
      sub_1258740((__int64)a3, &v14);
      if ( v18 == 1 )
      {
        sub_1258850((__int64)&v13, *(_BYTE *)v17);
      }
      else
      {
        if ( *a2 == 1 )
        {
          LOBYTE(v14) = a2[1];
          sub_1258740((__int64)a3, &v14);
        }
        *a2 = 2;
      }
      v10 = v17;
      if ( v17 == v19 )
        return 1;
      goto LABEL_22;
    case 17:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *a2 == 1 )
      {
        LOBYTE(v17) = a2[1];
        sub_1258740((__int64)a3, &v17);
      }
      *a2 = 2;
      sub_1258400(
        (__int64)&v14,
        a3[6].m128_i64[1],
        *(unsigned __int8 **)(a1 + 272),
        (unsigned __int8 *)(*(_QWORD *)(a1 + 272) + *(_QWORD *)(a1 + 280)));
      if ( !v15 )
        goto LABEL_47;
      sub_1258660((__int64)&v17, a3[6].m128_i64[1], v14, (__int64)v14 + v15);
      sub_A0AAD0((__int64)&v14, &v17);
      if ( v17 != v19 )
        operator delete(v17);
      sub_1259B10((__int64)&a3[1].m128_i64[1], (__int64)&v14);
      v10 = v14;
      if ( v14 == &v16 )
        return 1;
LABEL_22:
      operator delete(v10);
      return 1;
    case 15:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *a2 == 1 )
      {
        LOBYTE(v17) = a2[1];
        sub_1258740((__int64)a3, &v17);
      }
      *a2 = 2;
      v5 = 1;
      sub_1256190((__int64)a3, a1 + 272, 0);
      break;
    default:
      v5 = sub_1251410(a1);
      if ( !(_BYTE)v5 )
      {
        v6 = *(_DWORD *)(a1 + 152);
        if ( v6 == 28 )
        {
          v12 = (__m128 *)(a1 + 8);
          sub_9EE8A0(a1 + 272, a1 + 208);
          sub_12510C0((unsigned __int8 *)(a1 + 8));
          if ( *(_DWORD *)(a1 + 152) == 11 )
          {
            sub_9EE8A0(a1 + 272, a1 + 208);
            sub_12510C0((unsigned __int8 *)v12);
            sub_1258850((__int64)&v13, 45);
            return v5;
          }
          if ( *a2 != 2 )
          {
            if ( *a2 == 1 )
            {
              v5 = sub_1251410(a1);
              if ( (_BYTE)v5 )
              {
                v11 = **(_BYTE **)(a1 + 272);
                if ( v11 >= (char)a2[1] )
                {
                  LOBYTE(v17) = a2[1];
                  BYTE1(v17) = v11;
                  sub_1259E80(a3 + 3, &v17);
                  *a2 = 0;
                  return v5;
                }
              }
              else if ( *(_DWORD *)(a1 + 152) == 28 )
              {
                sub_9EE8A0(a1 + 272, a1 + 208);
                sub_12510C0((unsigned __int8 *)v12);
                if ( (char)a2[1] <= 45 )
                {
                  LOBYTE(v17) = a2[1];
                  v5 = 1;
                  BYTE1(v17) = 45;
                  sub_1259E80(a3 + 3, &v17);
                  *a2 = 0;
                  return v5;
                }
              }
            }
            else if ( (*(_BYTE *)a1 & 0x10) != 0 )
            {
              v5 = 1;
              sub_1258850((__int64)&v13, 45);
              return v5;
            }
          }
        }
        else if ( v6 == 14 )
        {
          sub_9EE8A0(a1 + 272, a1 + 208);
          sub_12510C0((unsigned __int8 *)(a1 + 8));
          if ( *a2 == 1 )
          {
            LOBYTE(v17) = a2[1];
            sub_1258740((__int64)a3, &v17);
          }
          *a2 = 2;
          sub_1256190(
            (__int64)a3,
            a1 + 272,
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 392) + 48LL) + 2LL * **(unsigned __int8 **)(a1 + 272) + 1) & 1);
          return 1;
        }
LABEL_47:
        abort();
      }
      v7 = **(_BYTE **)(a1 + 272);
      v8 = (_BYTE *)v13.m128_u64[0];
      if ( *(_BYTE *)v13.m128_u64[0] == 1 )
      {
        LOBYTE(v17) = *(_BYTE *)(v13.m128_u64[0] + 1);
        sub_1258740(v13.m128_i64[1], &v17);
        v8 = (_BYTE *)v13.m128_u64[0];
      }
      *v8 = 1;
      v8[1] = v7;
      break;
  }
  return v5;
}
