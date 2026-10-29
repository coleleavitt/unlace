__int64 __fastcall sub_125C4F0(__int64 a1, _BYTE *a2, __int64 a3)
{
  int v3; // eax
  unsigned __int8 v5; // al
  int v6; // edx
  unsigned int v8; // ebx
  __int64 v9; // rax
  void *v10; // rdi
  __int64 v11; // rsi
  char v12; // al
  unsigned __int8 v14; // [rsp+0h] [rbp-88h]
  unsigned __int8 v15; // [rsp+0h] [rbp-88h]
  __int64 v16; // [rsp+8h] [rbp-80h] BYREF
  __m128 v17; // [rsp+10h] [rbp-78h] BYREF
  __int64 *v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  void *v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]
  _BYTE v23[56]; // [rsp+50h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a1 + 152);
  if ( v3 == 11 )
  {
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    return 0;
  }
  v16 = a3;
  v17 = _mm_loadh_ps((const double *)&v16);
  switch ( v3 )
  {
    case 16:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      sub_1258400(
        (__int64)&v21,
        *(_QWORD *)(a3 + 112),
        *(unsigned __int8 **)(a1 + 272),
        (unsigned __int8 *)(*(_QWORD *)(a1 + 272) + *(_QWORD *)(a1 + 280)));
      if ( !v22 )
        goto LABEL_42;
      v8 = *(char *)v21;
      v9 = std::use_facet<std::ctype<char>>(*(_QWORD *)(a3 + 104));
      LOBYTE(v18) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, v8);
      sub_1258740(a3, &v18);
      if ( v22 == 1 )
      {
        sub_1258970((__int64)&v17, *(_BYTE *)v21);
      }
      else
      {
        if ( *a2 == 1 )
          sub_1258930(a3, a2[1]);
        *a2 = 2;
      }
      v10 = v21;
      if ( v21 == v23 )
        return 1;
      goto LABEL_19;
    case 17:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *a2 == 1 )
        sub_1258930(a3, a2[1]);
      v11 = *(_QWORD *)(a3 + 112);
      *a2 = 2;
      sub_1258400(
        (__int64)&v18,
        v11,
        *(unsigned __int8 **)(a1 + 272),
        (unsigned __int8 *)(*(_QWORD *)(a1 + 272) + *(_QWORD *)(a1 + 280)));
      if ( !v19 )
        goto LABEL_42;
      sub_1258660((__int64)&v21, *(_QWORD *)(a3 + 112), v18, (__int64)v18 + v19);
      sub_A0AAD0((__int64)&v18, &v21);
      if ( v21 != v23 )
        operator delete(v21);
      sub_1259B10(a3 + 24, (__int64)&v18);
      v10 = v18;
      if ( v18 == &v20 )
        return 1;
LABEL_19:
      operator delete(v10);
      return 1;
    case 15:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *a2 == 1 )
        sub_1258930(a3, a2[1]);
      *a2 = 2;
      sub_1256220(a3, a1 + 272, 0);
      return 1;
    default:
      v5 = sub_1251410(a1);
      if ( v5 )
      {
        v14 = v5;
        sub_1258970((__int64)&v17, **(_BYTE **)(a1 + 272));
        return v14;
      }
      v6 = *(_DWORD *)(a1 + 152);
      if ( v6 != 28 )
      {
        if ( v6 == 14 )
        {
          sub_9EE8A0(a1 + 272, a1 + 208);
          sub_12510C0((unsigned __int8 *)(a1 + 8));
          if ( *a2 == 1 )
            sub_1258930(a3, a2[1]);
          *a2 = 2;
          sub_1256220(
            a3,
            a1 + 272,
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 392) + 48LL) + 2LL * **(unsigned __int8 **)(a1 + 272) + 1) & 1);
          return 1;
        }
LABEL_42:
        abort();
      }
      LOBYTE(v16) = 0;
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      if ( *(_DWORD *)(a1 + 152) == 11 )
      {
        v15 = v16;
        sub_9EE8A0(a1 + 272, a1 + 208);
        sub_12510C0((unsigned __int8 *)(a1 + 8));
        sub_1258970((__int64)&v17, 45);
        return v15;
      }
      else
      {
        if ( *a2 == 2 )
          goto LABEL_42;
        if ( *a2 == 1 )
        {
          v12 = sub_1251410(a1);
          if ( v12 )
          {
            LOBYTE(v16) = v12;
            sub_125C370(a3, a2[1], **(_BYTE **)(a1 + 272));
            *a2 = 0;
            return (unsigned __int8)v16;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 152) != 28 )
              goto LABEL_42;
            sub_9EE8A0(a1 + 272, a1 + 208);
            sub_12510C0((unsigned __int8 *)(a1 + 8));
            sub_125C370(a3, a2[1], 45);
            *a2 = 0;
            return 1;
          }
        }
        else
        {
          if ( (*(_BYTE *)a1 & 0x10) == 0 )
            goto LABEL_42;
          sub_1258970((__int64)&v17, 45);
          return 1;
        }
      }
  }
}
