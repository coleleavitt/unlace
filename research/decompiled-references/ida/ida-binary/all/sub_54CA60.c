void __fastcall sub_54CA60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  void (__fastcall *v15)(_QWORD, __int64); // rax
  unsigned int v16; // ebp
  __int64 v17; // rdx
  void (*v18)(void); // rdx
  __int64 v19; // rbp
  void (__fastcall *v20)(_QWORD, __int64); // rax
  void (__fastcall *v21)(__int64, __int64); // rdx
  __int64 v22; // rsi
  __int64 v23; // rsi

  switch ( a2 )
  {
    case 0LL:
      sub_5021E0(
        (__int64 *)a1,
        *(double *)a7.m128_u64,
        a8,
        a9,
        a10,
        *(double *)a11.m128_u64,
        *(double *)a12.m128_u64,
        a13,
        a14);
      break;
    case 1LL:
      sub_501FD0(
        (__int64 *)a1,
        **(__int64 (__fastcall ***)(_QWORD, __int64))(a3 + 8),
        *(double *)a7.m128_u64,
        a8,
        a9,
        a10,
        *(double *)a11.m128_u64,
        *(double *)a12.m128_u64,
        a13,
        a14);
      break;
    case 2LL:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 408LL))(a1, **(unsigned __int8 **)(a3 + 8));
      break;
    case 5LL:
      v22 = **(_QWORD **)(a3 + 8);
      v21 = *(void (__fastcall **)(__int64, __int64))(a1 + 168);
      if ( v21 )
        v21(v22, a1);
      else
        nullsub_345();
      break;
    case 6LL:
      sub_4FD560((QT::QObject *)a1);
      break;
    case 7LL:
      v23 = **(unsigned int **)(a3 + 8);
      if ( (unsigned __int64)(int)v23 >= *(_QWORD *)(a1 + 48) )
      {
        sub_169630(
          (int)"ICON ERROR\nAUTOHIDE NONE\nbutton %d not found",
          v23,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15);
      }
      else
      {
        v19 = *(_QWORD *)(a1 + 40) + 72LL * (int)v23;
        v20 = *(void (__fastcall **)(_QWORD, __int64))(v19 + 32);
        if ( v20 )
          v20(*(unsigned int *)(v19 + 48), a1 + 88);
        sub_4F9A60((__int64 *)a1, *(_DWORD *)(v19 + 56));
      }
      break;
    case 8LL:
      sub_502210(
        (__int64 *)a1,
        **(_DWORD **)(a3 + 8),
        a7,
        a8,
        a9,
        a10,
        *(double *)a11.m128_u64,
        *(double *)a12.m128_u64,
        a13,
        a14,
        a3,
        a4);
      break;
    case 9LL:
      v15 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 160);
      if ( v15 )
      {
        if ( *(_DWORD *)(a1 + 176) == 1 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 72LL * **(int **)(a3 + 8) + 56);
          v17 = *(_QWORD *)a1;
          *(_DWORD *)(a1 + 176) = 2;
          v18 = *(void (**)(void))(v17 + 424);
          if ( v18 == nullsub_293 )
          {
            v15(v16, a1 + 88);
          }
          else
          {
            v18();
            (*(void (__fastcall **)(_QWORD, __int64))(a1 + 160))(v16, a1 + 88);
          }
          *(_DWORD *)(a1 + 176) = 1;
        }
      }
      else
      {
        nullsub_346();
      }
      break;
    case 10LL:
      if ( **(_BYTE **)(a3 + 8) )
        sub_4FA470((QT::QObject *)a1);
      break;
    case 11LL:
      sub_4F9B60((QT::QObject *)a1);
      break;
    case 12LL:
      sub_4FD580((QT::QObject *)a1);
      break;
    default:
      return;
  }
}
