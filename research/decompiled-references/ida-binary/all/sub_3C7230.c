__int64 __fastcall sub_3C7230(
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
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __m128i si128; // xmm0
  __int64 v13; // rbp
  QT::QAbstractItemView *v15; // rdi
  const QT::QObject *v16; // rsi
  unsigned int v17; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 std_dirtree; // r13
  __int64 v22; // rax
  unsigned int *v23; // rax
  int v24; // eax
  _QWORD *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned int v29; // [rsp+Ch] [rbp-8Ch] BYREF
  __m128i v30; // [rsp+10h] [rbp-88h] BYREF
  unsigned int *v31; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  _BYTE v33[24]; // [rsp+40h] [rbp-58h] BYREF
  __m128i v34; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v10 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v10 > 0x3A )
    return 0;
  v11 = 0x400000002000400LL;
  if ( !_bittest64(&v11, v10) )
    return 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v13 = *(_QWORD *)a1;
  v30 = si128;
  if ( (_DWORD)v10 != 58 && (_DWORD)v10 != 25 )
  {
    v15 = *(QT::QAbstractItemView **)(a1 + 328);
    if ( !v15 )
      goto LABEL_8;
    memset(v33, 0, sizeof(v33));
    v34 = (__m128i)-1LL;
    sub_48FF00(v15);
    v30 = _mm_loadu_si128(&v34);
    goto LABEL_7;
  }
  if ( !v13 )
    return 0;
  std_dirtree = get_std_dirtree(0);
  if ( !std_dirtree
    || (v22 = sub_3ACC10(v13, a2, v19, v20, *(double *)si128.m128i_i64)) == 0
    || (v23 = (unsigned int *)*(unsigned int *)(v22 + 12), !(_DWORD)v23) )
  {
LABEL_7:
    LODWORD(v10) = *(_DWORD *)(a1 + 8);
    goto LABEL_8;
  }
  *(_OWORD *)v33 = -1;
  v31 = v23;
  LOBYTE(v32) = 0;
  dirtree_find_entry(v33, std_dirtree, &v31);
  LODWORD(v10) = *(_DWORD *)(a1 + 8);
  v30 = _mm_load_si128((const __m128i *)v33);
LABEL_8:
  v16 = (const QT::QObject *)&v29;
  v31 = nullptr;
  v32 = 0;
  if ( !(unsigned __int8)sub_3A90C0((__int64 *)&v31, &v29, &v30, (_DWORD)v10 == 10, 0.0, a4, a5, a6, a7, a8, a9, a10)
    || !(_QWORD)v32 )
  {
    goto LABEL_9;
  }
  v24 = *(_DWORD *)(a1 + 8);
  if ( v24 == 10 )
  {
    v25 = *(_QWORD **)(a1 + 328);
LABEL_22:
    if ( v25 )
    {
      v26 = v25[311];
      memset(v33, 0, sizeof(v33));
      v34 = (__m128i)-1LL;
      sub_3C5CD0((__int64)v33, v26, &v31, v29);
      v16 = (const QT::QObject *)v33;
      (*(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD, __int64, __int64))(*v25 + 792LL))(v25, v33, 0, 4119, 1);
      if ( *(_QWORD *)v33 )
      {
        *(_QWORD *)&v33[8] = 0;
        qfree(*(_QWORD *)v33, v33);
      }
    }
    goto LABEL_9;
  }
  if ( v24 != 25 && v24 != 58 )
  {
LABEL_9:
    v17 = 1;
    goto LABEL_10;
  }
  v27 = *(_QWORD *)(v13 + 8);
  v28 = *(_QWORD *)(v27 + 16);
  if ( v28 )
  {
    v16 = *(const QT::QObject **)(v27 + 16);
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_890D60, v16) )
    {
      if ( !*(_BYTE *)(v28 + 80) )
      {
        v25 = *(_QWORD **)(v28 + 72);
        goto LABEL_22;
      }
      goto LABEL_9;
    }
  }
  v17 = 0;
LABEL_10:
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, (const char *)v16);
  }
  return v17;
}
