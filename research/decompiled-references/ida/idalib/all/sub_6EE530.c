__int64 __fastcall sub_6EE530(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v18; // rax
  char v19; // al
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  double v27; // xmm4_8
  double v28; // xmm5_8
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  _DWORD *v34; // rdx
  _DWORD *v35; // r15
  __int64 v36; // rdi
  int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // [rsp+0h] [rbp-58h]
  __int64 v42[9]; // [rsp+10h] [rbp-48h] BYREF

  v42[1] = __readfsqword(0x28u);
  v42[0] = 0;
  if ( (unsigned __int8)sub_6DDDA0((__int64)a1, v42, a3) )
  {
    v18 = *(_QWORD *)(a3 + 128);
    if ( v18 && (*(_BYTE *)(v18 + 10) & 0x20) != 0 )
      v19 = sub_6E0240(a1, v42, a3);
    else
      v19 = sub_6E3040(a1, v42, a3, a4, a5, a6, *(double *)a7.m128_u64, v13, v14, a10, a11);
    if ( !v19 )
    {
LABEL_30:
      v16 = 0;
      goto LABEL_5;
    }
    if ( a3 )
    {
      v20 = *(_QWORD *)(a3 + 80);
      if ( v20 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x47 )
          {
            v21 = sub_BC39F0(v20);
            v22 = *(_QWORD *)(v21 + 16) + 8LL * *(unsigned int *)(v21 + 24);
            v26 = *(_QWORD *)(sub_BC39F0(v20) + 16);
            if ( v26 != v22 )
              break;
          }
LABEL_33:
          v39 = *(_QWORD *)(v20 + 8);
          v20 = v39 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v39 <= 7 )
            goto LABEL_2;
        }
        while ( 1 )
        {
          v31 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v26 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
          v32 = *(_QWORD *)(v31 + 104);
          v33 = v32 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v32 & 1) == 0 )
          {
            if ( v33 <= 3 )
              goto LABEL_19;
            v29 = v32 & 0xFFFFFFFFFFFFFFFCLL;
            v30 = v29;
            if ( (v33 & 2) == 0 )
            {
              if ( (*(_BYTE *)(v29 + 28) & 0x7Fu) - 35 <= 3 )
                goto LABEL_18;
              goto LABEL_19;
            }
            v40 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v26 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
            v38 = sub_6E2500((_QWORD *)v29, v31, v29, v23, v24, v25);
            v33 = v38 & 0xFFFFFFFFFFFFFFFELL;
            v32 = v38 | 1;
            *(_QWORD *)(v40 + 104) = v32;
          }
          if ( v33 )
          {
            v34 = (_DWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
            v35 = v34;
            v30 = (__int64)v34;
            if ( (v33 & 4) != 0 )
            {
              if ( !v34 )
                goto LABEL_19;
              v36 = *(_QWORD *)v34;
              v37 = *(_DWORD *)(*(_QWORD *)v34 + 12LL);
              if ( v34[2] != v37 )
              {
                v34[2] = v37;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 152LL))(v36);
              }
              v30 = *((_QWORD *)v35 + 2);
            }
            if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 35 <= 3 && v30 )
            {
LABEL_18:
              if ( !(unsigned __int8)sub_6E8780(a1, v30, v42, a4, a5, a6, a7, v27, v28, a10, a11) )
                goto LABEL_30;
            }
          }
LABEL_19:
          v26 += 8;
          if ( v22 == v26 )
            goto LABEL_33;
        }
      }
    }
  }
LABEL_2:
  if ( a2 )
  {
    v15 = *a2;
    *a2 = v42[0];
    v42[0] = v15;
  }
  v16 = 1;
LABEL_5:
  clear_tinfo_t(v42);
  return v16;
}
