__int16 __fastcall sub_17E8F0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 license_manager; // rax
  __int64 v13; // r8
  int v14; // r9d
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  time_t v20; // rax
  time_t v21; // rdx
  time_t v22; // rdx
  const QT::QObject *v23; // rsi
  int v24; // eax
  __int64 v25; // rax
  bool v26; // zf
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rbp
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  const QT::QObject *v37; // rsi
  __int64 v38; // rax
  unsigned __int8 v39; // dl

  sub_52F270();
  v11 = sub_426230(a1, a2);
  if ( (unsigned __int8)sub_4175A0(v11) )
    *(_QWORD *)(a2 + 352) |= 0x20000uLL;
  license_manager = get_license_manager();
  if ( license_manager )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(
            license_manager,
            0,
            0);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 56);
      v19 = v18 + 40LL * *(_QWORD *)(v17 + 64);
      if ( v18 != v19 )
      {
        while ( *(_DWORD *)(v18 + 8) != 26 )
        {
          v18 += 40;
          if ( v19 == v18 )
            goto LABEL_18;
        }
        if ( v18 )
        {
          v20 = time(nullptr);
          v21 = *(_QWORD *)(v18 + 24);
          if ( v20 >= v21 || v21 == -1 )
          {
            v22 = *(_QWORD *)(v18 + 32);
            if ( !v22
              || v20 < v22 - 2592000
              || v20 < v22 - 1296000
              || v20 < v22
              || v20 < v22 + 1296000
              || v20 < v22 + 2592000 )
            {
              *(_QWORD *)(a2 + 352) |= 0x100000uLL;
            }
          }
        }
      }
    }
  }
LABEL_18:
  v23 = *(const QT::QObject **)(a2 + 328);
  if ( v23 )
  {
    v24 = *(_DWORD *)(a2 + 8);
    if ( (unsigned int)(v24 - 63) > 9 )
    {
      v30 = QT::QMetaObject::cast((QT::QMetaObject *)&off_887C80, v23);
      if ( v30 )
        sub_2DC620(v30, a2, 0);
    }
    else if ( (unsigned int)(v24 - 65) <= 1 || v24 == 63 )
    {
      *(_QWORD *)(a2 + 344) |= 0x10000uLL;
    }
  }
  sub_17E750(a2 + 680, (__int64 *)a2, 0, 1, a3, a4, a5, a6, v15, v16, a9, a10, v13, v14);
  if ( (unsigned __int8)netnode_inited() )
    *(_QWORD *)(a2 + 352) |= 0x10uLL;
  if ( (get_merge_state() & 3) != 0 )
  {
    v38 = -(__int64)((unsigned __int8)is_diff_merge_mode() == 0);
    LOBYTE(v38) = 0;
    v25 = *(_QWORD *)(a2 + 352) | (v38 + 512);
  }
  else
  {
    v25 = *(_QWORD *)(a2 + 352);
    BYTE1(v25) |= 4u;
  }
  v26 = *(_QWORD *)(a2 + 120) == 0;
  v27 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 352) = v25;
  v28 = *(_QWORD *)(a2 + 104);
  if ( v26 )
  {
    if ( v28 )
    {
      v25 |= 0x40uLL;
      *(_QWORD *)(a2 + 352) = v25;
    }
    if ( v27 != 27 )
    {
      if ( v27 != 10 )
        goto LABEL_32;
      goto LABEL_61;
    }
    goto LABEL_40;
  }
  if ( v27 == 27 )
  {
    if ( !v28 )
    {
      v25 |= 0x20uLL;
LABEL_41:
      BYTE1(v25) |= 0x80u;
      *(_QWORD *)(a2 + 352) = v25;
      if ( (*(_BYTE *)(a2 + 344) & 8) == 0 )
        goto LABEL_33;
      goto LABEL_42;
    }
    *(_QWORD *)(a2 + 352) = v25 | 0x60;
LABEL_40:
    v25 = *(_QWORD *)(a2 + 352);
    goto LABEL_41;
  }
  if ( v28 )
  {
    v25 |= 0x40uLL;
    *(_QWORD *)(a2 + 352) = v25;
  }
  if ( v27 == 10 )
  {
LABEL_61:
    v25 = *(_QWORD *)(sub_3C5BB0(a2) + 2488);
    if ( (*(_BYTE *)(v25 + 112) & 1) != 0 )
      *(_QWORD *)(a2 + 352) |= 0x8000uLL;
  }
LABEL_32:
  if ( (*(_BYTE *)(a2 + 344) & 8) == 0 )
    goto LABEL_33;
LABEL_42:
  v25 = QT::QMetaObject::cast((QT::QMetaObject *)&off_887C80, *(const QT::QObject **)a2);
  if ( v25 )
    *(_QWORD *)(a2 + 344) |= 0x10000uLL;
LABEL_33:
  v29 = *(_QWORD *)(a2 + 232);
  if ( v29 )
  {
    v25 = *(_QWORD *)(a2 + 168);
    if ( v29 == v25 || !v25 )
    {
      *(_QWORD *)(a2 + 352) |= 0x400000000uLL;
      if ( v29 != *(_QWORD *)a2 )
        return v25;
    }
    else if ( v29 != *(_QWORD *)a2 )
    {
      return v25;
    }
    *(_QWORD *)(a2 + 344) |= 1uLL;
    *(_QWORD *)(a2 + 352) &= 0xFFFFFFFFFFFFFFF8LL;
    if ( (unsigned int)sub_1EB590(v29) == 2 && *(_QWORD *)(v29 + 896) )
    {
      v34 = *(_QWORD *)(a2 + 352) | 2LL;
    }
    else
    {
      v31 = *(_QWORD *)(a2 + 232);
      v32 = sub_1EB590(v31);
      v33 = *(_QWORD *)(a2 + 352);
      if ( v32 != 3 || (v34 = v33 | 4, !*(_QWORD *)(v31 + 904)) )
        v34 = v33 | 1;
    }
    v35 = *(_QWORD *)(a2 + 232);
    *(_QWORD *)(a2 + 352) = v34;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v35 + 672LL))(v35) )
      *(_QWORD *)(a2 + 352) |= 0x80000uLL;
    v36 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87BDA0, *(const QT::QObject **)(a2 + 232));
    v37 = *(const QT::QObject **)(a2 + 232);
    if ( v36 )
    {
      *(_QWORD *)(a2 + 344) |= 2uLL;
      v25 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87CC60, v37);
      if ( v25 )
        *(_QWORD *)(a2 + 352) |= 0x80uLL;
    }
    else
    {
      v25 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87DE00, v37);
      if ( v25 )
      {
        v25 = *(_QWORD *)(a2 + 208);
        if ( *(_BYTE *)(v25 + 28) )
          *(_QWORD *)(a2 + 352) |= 0x8000uLL;
        v39 = *(_BYTE *)(v25 + 31);
        if ( v39 == 45 )
        {
          *(_QWORD *)(a2 + 352) |= 0x2000uLL;
        }
        else if ( v39 > 0x2Du )
        {
          if ( v39 == 61 )
            *(_QWORD *)(a2 + 352) |= 0x4000uLL;
        }
        else if ( (v39 & 0xEF) == 0xD )
        {
          *(_QWORD *)(a2 + 352) |= 0x1000uLL;
        }
        else if ( v39 == 12 )
        {
          *(_QWORD *)(a2 + 352) |= 0x10000uLL;
        }
        if ( *(_QWORD *)(v25 + 16) <= 0xFFFFFFFFFFFFFFFDLL )
          *(_QWORD *)(a2 + 352) |= 0x80uLL;
        if ( *(_DWORD *)(v25 + 224) == -1 )
          *(_QWORD *)(a2 + 352) |= 0x800uLL;
      }
    }
  }
  return v25;
}
