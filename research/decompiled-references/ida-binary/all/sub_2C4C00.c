_BOOL8 __fastcall sub_2C4C00(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  const char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  const char *v24; // rdx
  double v25; // xmm4_8
  double v26; // xmm5_8
  _BOOL4 v27; // ebx
  unsigned int *v29; // [rsp+0h] [rbp-58h] BYREF
  __int128 v30; // [rsp+8h] [rbp-50h]
  const void *v31; // [rsp+20h] [rbp-38h] BYREF
  __int128 v32; // [rsp+28h] [rbp-30h]
  unsigned __int64 v33; // [rsp+38h] [rbp-20h]

  v33 = __readfsqword(0x28u);
  v10 = (_QWORD *)sub_2B27A0(a1, a2, a3);
  if ( !v10 )
    return 0;
  v11 = v10[55];
  v29 = nullptr;
  v12 = (__int64)v10;
  v30 = 0;
  if ( v11 )
    v11 = *(_QWORD *)(v11 + 8);
  v13 = (const char *)&v29;
  if ( (unsigned __int8)sub_2BD970(v10, (__int64 *)&v29, v11) )
  {
    if ( (_QWORD)v30 )
    {
      v32 = 0;
      v31 = nullptr;
      (*(void (__fastcall **)(__int64, const void **, _QWORD, __int64))(*(_QWORD *)v12 + 656LL))(v12, &v31, *v29, 1);
      v24 = &s1;
      if ( (_QWORD)v32 )
        LODWORD(v24) = (_DWORD)v31;
      v13 = nullptr;
      if ( (unsigned __int8)sub_2B3730(
                              (int)&v31,
                              0,
                              (int)v24,
                              (int)"Please enter new node text",
                              v20,
                              v21,
                              (__m128)0LL,
                              a4,
                              a5,
                              a6,
                              v22,
                              v23,
                              a9,
                              a10,
                              (char)v29) )
      {
        if ( (unsigned __int64)v32 <= 1 )
        {
          v27 = 0;
        }
        else
        {
          v13 = (const char *)&v29;
          v27 = sub_2C48D0(v12, (__int64)&v29, v31, 0.0, a4, a5, a6, v25, v26, a9, a10) != -1;
        }
      }
      else
      {
        v27 = 1;
      }
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31, v13);
      }
      goto LABEL_15;
    }
  }
  else
  {
    sub_169630(
      (int)"Some selected nodes belong to existing groups",
      (__int64)&v29,
      v14,
      v15,
      v16,
      v17,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v18,
      v19,
      a9,
      a10,
      (char)v29);
  }
  v27 = 0;
LABEL_15:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, v13);
  }
  return v27;
}
