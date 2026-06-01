__int64 __fastcall sub_2ECF10(
        int a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  void (__fastcall **v11)(__int64 *, __int64, unsigned __int16 *); // rax
  char v12; // dl
  void (__fastcall **v13)(__int64 *, __int64, unsigned __int16 *); // rax
  unsigned int v14; // ecx
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rdx
  char v24; // dl
  __int64 v25; // rax
  __int64 v26; // [rsp-8h] [rbp-60h]
  char v27; // [rsp+0h] [rbp-58h]
  unsigned __int16 v28; // [rsp+4h] [rbp-54h] BYREF
  unsigned __int16 v29; // [rsp+6h] [rbp-52h] BYREF
  unsigned __int64 v30; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+18h] [rbp-40h] BYREF
  __int64 v33; // [rsp+20h] [rbp-38h] BYREF
  __int64 v34; // [rsp+28h] [rbp-30h] BYREF
  __int64 v35[5]; // [rsp+30h] [rbp-28h] BYREF

  v35[1] = __readfsqword(0x28u);
  if ( a1 == -2 )
  {
    v11 = (void (__fastcall **)(__int64 *, __int64, unsigned __int16 *))*a2;
    v28 = 0;
    v29 = 0;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = 0;
    v34 = 0;
    v35[0] = 0;
    (*v11)(a2, 1, &v29);
    (*(void (__fastcall **)(__int64 *, __int64, unsigned __int16 *))*a2)(a2, 4, &v28);
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64 *))*a2)(a2, 7, &v30);
    v13 = (void (__fastcall **)(__int64 *, __int64, unsigned __int16 *))*a2;
    if ( !v12 )
    {
      ((void (__fastcall *)(__int64 *, __int64))v13[6])(a2, 7);
      return 0;
    }
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64, __int64 *))*v13)(a2, 9, &v33) )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, 9);
      return 0;
    }
    if ( v29 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64 *))*a2)(a2, 2, &v32);
      v25 = *a2;
      if ( !v24 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(v25 + 48))(a2, 2);
        return 0;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64 *))v25)(a2, 3, &v34) )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, 3);
        return 0;
      }
    }
    v14 = v28;
    if ( v28 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64 *))*a2)(a2, 5, &v31);
      v16 = *a2;
      if ( !v15 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(v16 + 48))(a2, 5);
        return 0;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64 *))v16)(a2, 6, v35) )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, 6);
        return 0;
      }
      v14 = v28;
    }
    v18 = (int)sub_2ECCD0(v29, v32, v34, v14, v31, v35[0], v30, v33);
    result = 1;
    v23 = v26;
    if ( (_DWORD)v18 != 8 )
    {
      if ( (_DWORD)v18 == 5 )
        *(double *)a3.m128_u64 = (*(double (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 48))(a2, 7, v26);
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\n%s",
        (__int64)off_8624C0[v18],
        v23,
        v17,
        v19,
        v20,
        a3,
        a4,
        a5,
        a6,
        v21,
        v22,
        a9,
        a10,
        v27);
      return 0;
    }
  }
  else
  {
    if ( a1 == 8
      && (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64 *))*a2)(a2, 8, &v34)
      && (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64 *))*a2)(a2, 9, v35)
      && (unsigned int)dword_8CD494 < (unsigned __int64)(v34 + v35[0]) )
    {
      v35[0] = (unsigned int)dword_8CD494 - v34;
      (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(*a2 + 8))(a2, 9, v35);
    }
    return 1;
  }
  return result;
}
