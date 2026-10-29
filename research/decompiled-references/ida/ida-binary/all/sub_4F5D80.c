__int64 __fastcall sub_4F5D80(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rdx
  size_t v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  __int64 v18; // rbp
  _QWORD *v19; // rbp
  __int64 v20; // r15
  __int128 v21; // xmm0
  size_t v22; // r13
  __int64 v23; // rdi
  void *v24; // rax
  __int64 v26; // rax
  __int64 (__fastcall **v27)(); // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v28; // [rsp+8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v1 = (_QWORD *)a1[7];
  v29 = __readfsqword(0x28u);
  v3 = v1[6];
  v4 = v3 + 8LL * v1[7];
  if ( v4 != v3 )
  {
    v5 = v1[6];
    while ( 1 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 32LL) + 8LL);
      if ( v7 != 8 )
        break;
      v8 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 24LL))(QT::QCoreApplication::self + 2);
      if ( v8 )
      {
        v5 += 8;
        v27 = forms_ui::dialog_t::import_actions;
        v28 = a1 + 8;
        sub_531030(v8, &v27);
        if ( v4 == v5 )
        {
LABEL_10:
          v1 = (_QWORD *)a1[7];
          goto LABEL_11;
        }
      }
      else
      {
LABEL_6:
        v5 += 8;
        if ( v4 == v5 )
          goto LABEL_10;
      }
    }
    if ( v7 == 9 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 24LL))(QT::QCoreApplication::self + 2);
      if ( v6 )
      {
        v28 = a1 + 8;
        v27 = forms_ui::dialog_t::import_actions;
        sub_531030(v6, &v27);
      }
    }
    goto LABEL_6;
  }
LABEL_11:
  v9 = v1[5];
  v10 = 24LL * *(_QWORD *)(v9 + 240);
  v11 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 3);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v9 + 232);
    v13 = a1[9];
    v14 = 0;
    v15 = a1[8];
    v16 = 3 * v13;
    v17 = v11 + v13;
    v18 = 8 * v16;
    if ( a1[10] < v17 )
    {
      v26 = qvector_reserve(a1 + 8, v15, v17, 24);
      a1[8] = v26;
      v15 = v26;
      v14 = 24LL * a1[9] - v18;
    }
    v19 = (_QWORD *)(v15 + v18);
    v20 = v12 + v10;
    memmove(&v19[(unsigned __int64)v10 / 8], v19, v14);
    v21 = 0;
    if ( v12 != v12 + v10 )
    {
      do
      {
        while ( 1 )
        {
          *v19 = 0;
          *(_OWORD *)(v19 + 1) = v21;
          v22 = *(_QWORD *)(v12 + 8);
          if ( v22 )
            break;
          v12 += 24;
          v19 += 3;
          if ( v20 == v12 )
            goto LABEL_19;
        }
        v23 = *(_QWORD *)(v12 + 8);
        v12 += 24;
        v19 += 3;
        v24 = (void *)qalloc_or_throw(v23);
        *(v19 - 1) = v22;
        *(v19 - 3) = v24;
        memcpy(v24, *(const void **)(v12 - 24), v22);
        *(v19 - 2) = v22;
        v21 = 0;
      }
      while ( v20 != v12 );
    }
LABEL_19:
    a1[9] += v11;
  }
  return sub_53A8F0(a1);
}
