__int64 __fastcall sub_2139E60(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 (*v12)(); // rax
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r8d
  char v19; // al
  char v20; // al
  __int64 v21; // r15
  unsigned __int8 v22; // r8
  __int64 v24; // rax
  unsigned __int8 v26; // [rsp+8h] [rbp-1F0h]
  unsigned __int8 v27; // [rsp+8h] [rbp-1F0h]
  unsigned __int64 v28; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v29; // [rsp+20h] [rbp-1D8h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-1D0h] BYREF
  __m128i v31; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-1B8h]
  __int64 v33; // [rsp+48h] [rbp-1B0h]
  __int16 v34; // [rsp+50h] [rbp-1A8h]
  __m128i v35[2]; // [rsp+60h] [rbp-198h] BYREF
  __int64 v36; // [rsp+80h] [rbp-178h]
  char v37; // [rsp+88h] [rbp-170h]
  int v38; // [rsp+8Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+90h] [rbp-168h]
  void *ptr; // [rsp+A0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-150h]
  _WORD v42[160]; // [rsp+B8h] [rbp-140h] BYREF

  v6 = sub_2153C00(a1);
  v7 = sub_2124B50(v6);
  ptr = nullptr;
  v8 = v7;
  if ( sub_2133530(a1, &v29, (__int64)&ptr) )
    return 1;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = v29;
  v11 = nullptr;
  v12 = *(__int64 (**)())(*(_QWORD *)v9 + 80LL);
  if ( v12 != sub_210EC60 )
  {
    v28 = v29;
    v24 = ((__int64 (__fastcall *)(__int64, __int64 (*)(), _QWORD))v12)(v9, sub_210EC60, 0);
    v10 = v28;
    v11 = (_BYTE *)v24;
  }
  v13 = sub_210E270(v10, &v30, v11);
  if ( !v13 )
  {
    v32 = a3;
    LOWORD(v36) = 259;
    v35[0].m128i_i64[0] = (__int64)"' directive";
    v31.m128i_i64[0] = (__int64)"unexpected token in '";
    v34 = 1283;
    v33 = a4;
    sub_A41580((__m128i *)&ptr, &v31, v35, v14, v15, v16);
    return (unsigned int)sub_2153E90(a1, v8, &ptr, 0, 0);
  }
  v26 = v13;
  v42[4] = 259;
  ptr = "Count is negative";
  v19 = sub_2154450(a1, v30 >> 63, v8, &ptr);
  v17 = v26;
  if ( !v19 )
  {
    v20 = sub_21544B0(a1);
    v17 = v26;
    if ( !v20 )
    {
      v21 = sub_2139590(a1, a2);
      if ( v21 )
      {
        ptr = v42;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v35[1] = 0;
        v35[0].m128i_i32[2] = 2;
        v37 = 0;
        v38 = 1;
        v36 = 0;
        v35[0].m128i_i64[0] = (__int64)&off_2BEBEE0;
        p_ptr = &ptr;
        sub_227B8B0(v35, 0, 0, 0);
        while ( v30-- )
        {
          v22 = sub_212F510(a1, (__int64)v35, v21, 0, 0, 0, 0, 0);
          if ( v22 )
            goto LABEL_14;
        }
        sub_2139C60(a1, a2, v35);
        v22 = 0;
LABEL_14:
        v27 = v22;
        v35[0].m128i_i64[0] = (__int64)&unk_2C76288;
        sub_227B7A0(v35);
        v17 = v27;
        if ( ptr != v42 )
        {
          free(ptr);
          return v27;
        }
        return v17;
      }
      return 1;
    }
  }
  return v17;
}
