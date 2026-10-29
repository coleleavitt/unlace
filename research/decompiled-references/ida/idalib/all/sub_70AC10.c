__int64 __fastcall sub_70AC10(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // bp
  __int64 v18; // rsi
  _QWORD *v19; // r12
  unsigned __int64 v20; // r13
  unsigned int v21; // eax
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 result; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  _DWORD **v27; // rdi
  _DWORD **v28; // r15
  _DWORD *v29; // rdi
  int v30; // eax
  _QWORD *v31; // rdi
  unsigned __int64 v32; // rdi

  v10 = sub_BC39F0(a2);
  v11 = *(_QWORD *)(v10 + 16) + 8LL * *(unsigned int *)(v10 + 24);
  v14 = *(_QWORD *)(sub_BC39F0(a2) + 16);
  if ( v14 != v11 )
  {
    while ( 1 )
    {
      v17 = 0;
      v18 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
      v19 = sub_7053D0((__int64 *)(v18 + 104), v18, v12, v13, v15, v16);
      v20 = (unsigned __int64)v19;
      if ( v19 )
        break;
LABEL_18:
      v14 += 8;
      if ( v11 == v14 )
        return 1;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = sub_B77D20(v20);
        if ( v21 <= 1 || v21 - 3 <= 1 )
        {
          result = sub_709840(a1, v20, a3, a4, a5, a6, v22, v23, a9, a10);
          if ( !(_BYTE)result )
            return result;
        }
        v25 = *(_QWORD *)(v20 + 104);
        if ( (v25 & 1) == 0 )
          break;
        if ( v17 )
          goto LABEL_18;
        v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v25 & 1) != 0 )
        {
          v17 = 1;
          goto LABEL_10;
        }
LABEL_29:
        if ( v26 <= 3 )
        {
          v17 = 1;
          v20 = v25 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_16:
          if ( v19 == (_QWORD *)v20 || !v20 )
            goto LABEL_18;
        }
        else
        {
          v31 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v26 & 2) != 0 )
          {
            v17 = 1;
LABEL_34:
            v32 = sub_6E2500(v31, v20, v12, v13, v15, v16);
            v26 = v32 & 0xFFFFFFFFFFFFFFFELL;
            v25 = v32 | 1;
            *(_QWORD *)(v20 + 104) = v25;
LABEL_10:
            if ( !v26 )
              goto LABEL_18;
LABEL_11:
            v27 = (_DWORD **)(v25 & 0xFFFFFFFFFFFFFFF8LL);
            v28 = v27;
            if ( (v26 & 4) != 0 )
            {
              if ( !v27 )
                goto LABEL_18;
              v29 = *v27;
              v30 = v29[3];
              if ( *((_DWORD *)v28 + 2) != v30 )
              {
                *((_DWORD *)v28 + 2) = v30;
                (*(void (__fastcall **)(_DWORD *, unsigned __int64))(*(_QWORD *)v29 + 152LL))(v29, v20);
              }
              v20 = (unsigned __int64)v28[2];
            }
            else
            {
              v20 = (unsigned __int64)v27;
            }
            goto LABEL_16;
          }
          if ( v19 == v31 )
            goto LABEL_18;
          v20 = (unsigned __int64)v31;
          v17 = 1;
        }
      }
      if ( (v25 & 2) != 0 )
      {
        if ( v17 )
          goto LABEL_18;
        v17 = 1;
        v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v25 & 1) != 0 )
          goto LABEL_11;
        goto LABEL_29;
      }
      v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v25 & 1) != 0 )
        goto LABEL_10;
      if ( v26 <= 3 )
        goto LABEL_18;
      v31 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v26 & 2) != 0 )
        goto LABEL_34;
      if ( v19 == v31 )
        goto LABEL_18;
      v20 = (unsigned __int64)v31;
    }
  }
  return 1;
}
