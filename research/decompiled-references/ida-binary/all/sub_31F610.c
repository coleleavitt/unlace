__int64 __fastcall sub_31F610(
        _QWORD *a1,
        int a2,
        __int64 *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  void (__fastcall **v13)(__int64 *, __int64, _QWORD **); // rax
  double v14; // xmm0_8
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  _QWORD *v19; // rdi
  __int64 v20; // r14
  int v21; // r13d
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // [rsp+0h] [rbp-48h] BYREF
  __int128 v34; // [rsp+8h] [rbp-40h]
  unsigned __int64 v35; // [rsp+18h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  if ( (unsigned int)(a2 - 21) > 2 )
  {
    switch ( a2 )
    {
      case -1:
        a1[1073] = a3;
        v31 = a1[1072];
        if ( v31 != -1 )
        {
          v33 = nullptr;
          v34 = 0;
          v33 = (_QWORD *)qvector_reserve(&v33, 0, 1, 8);
          v33[(_QWORD)v34] = v31;
          v32 = *a3;
          *(_QWORD *)&v34 = v34 + 1;
          (*(void (__fastcall **)(__int64 *, __int64, _QWORD **))(v32 + 8))(a3, 1, &v33);
          v19 = v33;
          if ( v33 )
            goto LABEL_13;
        }
        break;
      case 20:
        v24 = sub_31E850((__int64)a1, 0, nullptr, nullptr, a4, a5, a6, a7, a8, a9, a10, a11);
        if ( v24 == -1 )
        {
          sub_169630(
            (int)"ICON ERROR\nFailed to create database snapshot!",
            0,
            v25,
            v26,
            v27,
            v28,
            a4,
            a5,
            a6,
            a7,
            v29,
            v30,
            a10,
            a11,
            (char)v33);
        }
        else if ( v24 == 1 )
        {
          sub_31E550(a1, nullptr);
          goto LABEL_10;
        }
        break;
      case 24:
        (*(void (__fastcall **)(__int64 *, __int64))(*a3 + 64))(a3, 1);
        break;
      case 25:
        sub_31F040((__int64)a1, a4, a5, a6, a7, a8, a9, a10, a11);
        break;
      default:
        return 1;
    }
  }
  else
  {
    v13 = (void (__fastcall **)(__int64 *, __int64, _QWORD **))*a3;
    v14 = 0.0;
    v33 = nullptr;
    v34 = 0;
    (*v13)(a3, 1, &v33);
    v19 = v33;
    if ( (_QWORD)v34 && (v20 = *v33, *v33 < a1[1069]) )
    {
      v21 = *v33;
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        v14 = qfree(v33, (_BYTE *)&dword_0 + 1);
      }
      switch ( a2 )
      {
        case 22:
          v23 = a1[1068] + 16LL * (int)v20;
          if ( (unsigned int)sub_31F2A0(
                               (__int64)a1,
                               *(_QWORD *)v23 + 138LL,
                               (const char *)(*(_QWORD *)v23 + 10LL),
                               128,
                               v15,
                               v16,
                               v14,
                               a5,
                               a6,
                               a7,
                               v17,
                               v18,
                               a10,
                               a11) == 1 )
            goto LABEL_10;
          break;
        case 23:
          sub_31F1F0(a1, v20);
          goto LABEL_10;
        default:
          sub_31F500((__int64)a1, *(_QWORD *)(a1[1068] + 16LL * (int)v20), 0, 0);
          (*(void (__fastcall **)(__int64 *, __int64))(*a3 + 64))(a3, 1);
          break;
      }
      if ( v21 == -1 )
LABEL_10:
        (*(void (__fastcall **)(__int64 *, __int64))(*a3 + 56))(a3, 1);
    }
    else if ( v33 )
    {
LABEL_13:
      *(_QWORD *)&v34 = 0;
      qfree(v19, (_BYTE *)&dword_0 + 1);
    }
  }
  return 1;
}
