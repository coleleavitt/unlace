__int64 __fastcall sub_3AE3E0(
        __int64 a1,
        __int64 *a2,
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
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  _QWORD *v23; // r14
  _QWORD *v24; // r15
  __int64 v25; // r13
  char v26; // r8
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  char v29; // bp
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-88h]
  char v36; // [rsp+Fh] [rbp-79h]
  __int64 v37; // [rsp+18h] [rbp-70h] BYREF
  __int64 v38; // [rsp+20h] [rbp-68h] BYREF
  int v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v13 = *(_DWORD *)(a1 + 8);
  if ( v13 == 58 || (result = 3, v13 == 25) )
  {
    v15 = *(_QWORD *)a1;
    result = 3;
    if ( *(_QWORD *)a1 )
    {
      v16 = *(_QWORD *)a1;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v17 = (unsigned int)sub_1F07A0(v16, (__int64)&v38, (__int64)&v40, nullptr);
      result = 1;
      if ( (_BYTE)v17 )
      {
        v23 = (_QWORD *)v40;
        v24 = (_QWORD *)v38;
        if ( *(_DWORD *)(v38 + 12) != *(_DWORD *)(v40 + 12) )
        {
          sub_169630(
            (int)"ICON ERROR\nAUTOHIDE NONE\nSorry, the selection should not cross the structure boundaries",
            (__int64)&v38,
            v17,
            v18,
            v19,
            v20,
            a4,
            a5,
            a6,
            a7,
            v21,
            v22,
            a10,
            a11,
            v35);
          return 2;
        }
        v25 = *(_QWORD *)(v15 + 1000);
        if ( *(_QWORD *)(v38 + 16) == -2 )
          goto LABEL_12;
        v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 192LL))(v38, v25);
        v27 = v24[2];
        if ( v27 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          v36 = v26;
          v37 = -1;
          v28 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *, _QWORD))(*v24 + 176LL))(v24, v25, &v37, 0);
          if ( v36 != 13 )
          {
            v28 = v37;
            if ( v36 != 29 )
              goto LABEL_12;
          }
LABEL_13:
          *a2 = v28;
          if ( v23[2] != -2 )
          {
            v29 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v23 + 192LL))(v23, v25);
            v30 = v23[2];
            if ( v30 > 0xFFFFFFFFFFFFFFFDLL )
            {
              if ( v30 == -1 )
              {
                v34 = *(_QWORD *)(a1 + 208);
                if ( v29 == 13 )
                {
                  v31 = 8LL * *(_QWORD *)(v34 + 192);
                  goto LABEL_18;
                }
                if ( v29 == 29 )
                {
                  v31 = *(_QWORD *)(v34 + 40);
                  goto LABEL_18;
                }
              }
            }
            else
            {
              v37 = -1;
              v31 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *, _QWORD))(*v23 + 176LL))(v23, v25, &v37, 0);
              if ( v29 == 13 || (v31 = v37, v29 == 29) )
              {
LABEL_18:
                v32 = v41;
                *a3 = v31;
                if ( !v32 )
                  *a3 = v31 - 1;
                return 0;
              }
            }
          }
          v31 = 0;
          goto LABEL_18;
        }
        if ( v27 == -1 )
        {
          v33 = *(_QWORD *)(a1 + 208);
          if ( v26 == 13 )
          {
            v28 = 8LL * *(_QWORD *)(v33 + 192);
            goto LABEL_13;
          }
          if ( v26 == 29 )
          {
            v28 = *(_QWORD *)(v33 + 40);
            goto LABEL_13;
          }
        }
LABEL_12:
        v28 = 0;
        goto LABEL_13;
      }
    }
  }
  return result;
}
