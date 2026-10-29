__int64 __fastcall sub_125B950(__int64 a1, _BYTE *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // r13d
  int v6; // eax
  char v7; // bl
  _BYTE *v8; // rax
  void *v10; // rdi
  unsigned __int8 *v11; // [rsp+8h] [rbp-90h] BYREF
  __m128 v12; // [rsp+10h] [rbp-88h] BYREF
  __int64 *v13; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+30h] [rbp-68h] BYREF
  void *v16; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+48h] [rbp-50h]
  _BYTE v18[72]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 152);
  if ( v3 == 11 )
  {
    v5 = 0;
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    return v5;
  }
  v11 = (unsigned __int8 *)a3;
  v12 = _mm_loadh_ps((const double *)&v11);
  switch ( v3 )
  {
    case 16:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      sub_1258400(
        (__int64)&v16,
        *(_QWORD *)(a3 + 112),
        *(unsigned __int8 **)(a1 + 272),
        (unsigned __int8 *)(*(_QWORD *)(a1 + 272) + *(_QWORD *)(a1 + 280)));
      if ( !v17 )
        goto LABEL_45;
      LOBYTE(v13) = *(_BYTE *)v16;
      sub_1258740(a3, &v13);
      if ( v17 == 1 )
      {
        sub_12588A0((__int64)&v12, *(_BYTE *)v16);
      }
      else
      {
        if ( *a2 == 1 )
        {
          LOBYTE(v13) = a2[1];
          sub_1258740(a3, &v13);
        }
        *a2 = 2;
      }
      v10 = v16;
      if ( v16 == v18 )
        return 1;
      goto LABEL_22;
    case 17:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *a2 == 1 )
      {
        LOBYTE(v16) = a2[1];
        sub_1258740(a3, &v16);
      }
      *a2 = 2;
      sub_1258400(
        (__int64)&v13,
        *(_QWORD *)(a3 + 112),
        *(unsigned __int8 **)(a1 + 272),
        (unsigned __int8 *)(*(_QWORD *)(a1 + 272) + *(_QWORD *)(a1 + 280)));
      if ( !v14 )
        goto LABEL_45;
      sub_1258660((__int64)&v16, *(_QWORD *)(a3 + 112), v13, (__int64)v13 + v14);
      sub_A0AAD0((__int64)&v13, &v16);
      if ( v16 != v18 )
        operator delete(v16);
      sub_1259B10(a3 + 24, (__int64)&v13);
      v10 = v13;
      if ( v13 == &v15 )
        return 1;
LABEL_22:
      operator delete(v10);
      return 1;
    case 15:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *a2 == 1 )
      {
        LOBYTE(v16) = a2[1];
        sub_1258740(a3, &v16);
      }
      *a2 = 2;
      v5 = 1;
      sub_1256100(a3, a1 + 272, 0);
      break;
    default:
      v5 = sub_1251410(a1);
      if ( !(_BYTE)v5 )
      {
        v6 = *(_DWORD *)(a1 + 152);
        if ( v6 == 28 )
        {
          v11 = (unsigned __int8 *)(a1 + 8);
          sub_9EE8A0(a1 + 272, a1 + 208);
          sub_12510C0((unsigned __int8 *)(a1 + 8));
          if ( *(_DWORD *)(a1 + 152) == 11 )
          {
            sub_9EE8A0(a1 + 272, a1 + 208);
            sub_12510C0(v11);
            sub_12588A0((__int64)&v12, 45);
            return v5;
          }
          if ( *a2 != 2 )
          {
            if ( *a2 == 1 )
            {
              v5 = sub_1251410(a1);
              if ( (_BYTE)v5 )
              {
                sub_125B7D0(a3, a2[1], **(_BYTE **)(a1 + 272));
                *a2 = 0;
                return v5;
              }
              if ( *(_DWORD *)(a1 + 152) == 28 )
              {
                v5 = 1;
                sub_9EE8A0(a1 + 272, a1 + 208);
                sub_12510C0(v11);
                sub_125B7D0(a3, a2[1], 45);
                *a2 = 0;
                return v5;
              }
            }
            else if ( (*(_BYTE *)a1 & 0x10) != 0 )
            {
              v5 = 1;
              sub_12588A0((__int64)&v12, 45);
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
            LOBYTE(v16) = a2[1];
            sub_1258740(a3, &v16);
          }
          *a2 = 2;
          sub_1256100(
            a3,
            a1 + 272,
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 392) + 48LL) + 2LL * **(unsigned __int8 **)(a1 + 272) + 1) & 1);
          return 1;
        }
LABEL_45:
        abort();
      }
      v7 = **(_BYTE **)(a1 + 272);
      v8 = (_BYTE *)v12.m128_u64[0];
      if ( *(_BYTE *)v12.m128_u64[0] == 1 )
      {
        LOBYTE(v16) = *(_BYTE *)(v12.m128_u64[0] + 1);
        sub_1258740(v12.m128_i64[1], &v16);
        v8 = (_BYTE *)v12.m128_u64[0];
      }
      *v8 = 1;
      v8[1] = v7;
      break;
  }
  return v5;
}
