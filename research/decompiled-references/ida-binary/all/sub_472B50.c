__int64 __fastcall sub_472B50(
        QT::QAbstractItemView *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  _QWORD *v13; // rax
  volatile signed __int32 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  void (*v18)(); // rax
  __int64 *v19; // [rsp+8h] [rbp-30h]
  __m128i ptr; // [rsp+10h] [rbp-28h] BYREF
  __int64 v21; // [rsp+20h] [rbp-18h]
  unsigned __int64 v22; // [rsp+28h] [rbp-10h]

  v22 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 7 )
    {
      v13 = *(_QWORD **)a4;
      if ( (_DWORD)a3 != 8 || **(_DWORD **)(a4 + 8) )
        *v13 = 0;
      else
        *v13 = &unk_8C1460;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v19 = (__int64 *)a4;
        QT::QString::fromUtf8(&ptr, 13, "Tabular views");
        goto LABEL_10;
      case 1LL:
        return sub_3E01D0((__int64)a1, **(_QWORD **)(a4 + 8));
      case 2LL:
        v18 = *(void (**)())(*(_QWORD *)a1 + 824LL);
        if ( v18 == nullsub_248 )
          return v22 - __readfsqword(0x28u);
        return ((__int64 (*)(void))v18)();
      case 3LL:
        v18 = *(void (**)())(*(_QWORD *)a1 + 832LL);
        if ( v18 == nullsub_249 )
          return v22 - __readfsqword(0x28u);
        return ((__int64 (*)(void))v18)();
      case 4LL:
        v19 = (__int64 *)a4;
        sub_3E1A60(&ptr, (__int64)a1);
        goto LABEL_10;
      case 5LL:
        return sub_3E0A90((__int64)a1);
      case 6LL:
        return (*(__int64 (__fastcall **)(QT::QAbstractItemView *, _QWORD, _QWORD))(*(_QWORD *)a1 + 592LL))(
                 a1,
                 *(_QWORD *)(a4 + 8),
                 *(_QWORD *)(a4 + 16));
      case 7LL:
        return sub_3E6650(a1, *(unsigned int **)(a4 + 8), a5, a6, a7, a8, a9, a10, a11, a12);
      case 8LL:
        return sub_3E8060(a1, **(_QWORD **)(a4 + 8), a5, a6, a7, a8, a9, a10, a11, a12);
      case 9LL:
        v19 = (__int64 *)a4;
        sub_3E02C0((__int64)&ptr);
LABEL_10:
        v14 = (volatile signed __int32 *)ptr.m128i_i64[0];
        v15 = *v19;
        if ( *v19 )
        {
          v14 = *(volatile signed __int32 **)v15;
          *(_QWORD *)v15 = ptr.m128i_i64[0];
          ptr.m128i_i64[0] = (__int64)v14;
          v16 = *(_QWORD *)(v15 + 8);
          *(_QWORD *)(v15 + 8) = ptr.m128i_i64[1];
          ptr.m128i_i64[1] = v16;
          v17 = *(_QWORD *)(v15 + 16);
          *(_QWORD *)(v15 + 16) = v21;
          v21 = v17;
        }
        if ( v14 )
        {
          if ( !_InterlockedSub(v14, 1u) )
            free((void *)ptr.m128i_i64[0]);
        }
        break;
      default:
        return v22 - __readfsqword(0x28u);
    }
  }
  return v22 - __readfsqword(0x28u);
}
