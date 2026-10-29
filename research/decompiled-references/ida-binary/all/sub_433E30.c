__int64 __fastcall sub_433E30(
        int a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int8 (__fastcall **v10)(_QWORD *, __int64, char **); // rax
  __int64 (__fastcall *v12)(__int64); // rax
  int *v13; // r12
  void (__fastcall **v14)(_QWORD *, __int64, char **); // rax
  unsigned __int8 (__fastcall **v16)(_QWORD *, __int64, char **); // rax
  double v17; // xmm0_8
  char *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  int v25; // ebp
  int v26; // ebx
  char *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  char v34; // [rsp+0h] [rbp-78h]
  unsigned __int16 v35; // [rsp+Ch] [rbp-6Ch] BYREF
  __int16 v36; // [rsp+Eh] [rbp-6Ah] BYREF
  int v37; // [rsp+10h] [rbp-68h] BYREF
  int v38; // [rsp+18h] [rbp-60h] BYREF
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v40; // [rsp+28h] [rbp-50h]
  char *s2; // [rsp+40h] [rbp-38h] BYREF
  __int128 v42; // [rsp+48h] [rbp-30h]
  unsigned __int64 v43; // [rsp+58h] [rbp-20h]

  v10 = (unsigned __int8 (__fastcall **)(_QWORD *, __int64, char **))*a2;
  v43 = __readfsqword(0x28u);
  v12 = (__int64 (__fastcall *)(__int64))v10[9];
  if ( v12 == form_actions_impl_t__::vfunc_9 )
    v13 = (int *)a2[4];
  else
    v13 = (int *)v12((__int64)a2);
  switch ( a1 )
  {
    case -7:
    case -3:
      return 1;
    case -2:
      v16 = (unsigned __int8 (__fastcall **)(_QWORD *, __int64, char **))*a2;
      v17 = 0.0;
      s1 = nullptr;
      v19 = (_BYTE *)(&dword_0 + 3);
      s2 = nullptr;
      v40 = 0;
      v42 = 0;
      if ( !(*v16)(a2, 3, (char **)&v35) )
        goto LABEL_10;
      v19 = &byte_6;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int16 *))*a2)(a2, 6, &v36) )
        goto LABEL_10;
      v19 = (_BYTE *)(&dword_0 + 2);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, int *))*a2)(a2, 2, &v37) )
        goto LABEL_10;
      v19 = &byte_5;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, int *))*a2)(a2, 5, &v38) )
        goto LABEL_10;
      v19 = (_BYTE *)(&dword_0 + 1);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, char **))*a2)(a2, 1, &s1) )
        goto LABEL_10;
      v19 = &byte_4;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, char **))*a2)(a2, 4, &s2) )
        goto LABEL_10;
      if ( v35 == 2 )
      {
        v25 = -4;
        v26 = -4;
        if ( v36 == 2 )
          goto LABEL_29;
        goto LABEL_25;
      }
      if ( v35 )
        v25 = v37;
      else
        v25 = *v13;
      v26 = -4;
      if ( v36 != 2 )
      {
LABEL_25:
        if ( v36 )
          v26 = v38;
        else
          v26 = *v13;
      }
      if ( !v25 || !v26 )
      {
        sub_169630(
          (int)"There is no current revision of this file.",
          4,
          v35,
          v20,
          v21,
          v22,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v23,
          v24,
          a9,
          a10,
          v34);
        goto LABEL_36;
      }
LABEL_29:
      v19 = (char *)&::s1;
      if ( (_QWORD)v42 )
        v19 = s2;
      v27 = (char *)&::s1;
      if ( (_QWORD)v40 )
        v27 = s1;
      if ( strcmp(v27, v19) || v25 != v26 )
      {
LABEL_10:
        if ( s2 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(s2, v19);
        }
        if ( s1 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(s1, v19);
        }
        return 1;
      }
      sub_169630(
        (int)"Please choose two different options to compare.",
        (__int64)v19,
        v28,
        v29,
        v30,
        v31,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v32,
        v33,
        a9,
        a10,
        v34);
LABEL_36:
      if ( s2 )
      {
        v19 = nullptr;
        *(_QWORD *)&v42 = 0;
        v17 = qfree(s2, nullptr);
      }
      if ( s1 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(s1, v19, v17);
      }
      return 0;
    case -1:
      (*(void (__fastcall **)(_QWORD *, __int64, char **))*a2)(a2, 3, &s2);
      (*(void (__fastcall **)(_QWORD *, __int64, bool))(*a2 + 16LL))(a2, 2, (_WORD)s2 == 1);
      v14 = (void (__fastcall **)(_QWORD *, __int64, char **))*a2;
      goto LABEL_5;
    case 3:
      (*(void (__fastcall **)(_QWORD *, __int64, char **))*a2)(a2, 3, &s2);
      (*(void (__fastcall **)(_QWORD *, __int64, bool))(*a2 + 16LL))(a2, 2, (_WORD)s2 == 1);
      return 0;
    case 6:
      v14 = (void (__fastcall **)(_QWORD *, __int64, char **))*a2;
LABEL_5:
      (*v14)(a2, 6, &s2);
      (*(void (__fastcall **)(_QWORD *, __int64, bool))(*a2 + 16LL))(a2, 5, (_WORD)s2 == 1);
      return 0;
    default:
      return 0;
  }
}
