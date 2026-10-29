__int64 __fastcall sub_1872480(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 **a6,
        __int64 a7,
        __int64 (__fastcall *a8)(__int64, _QWORD, unsigned __int64, _QWORD),
        __int64 a9)
{
  unsigned int v13; // r15d
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // r9
  unsigned int v16; // r12d
  int v18; // eax
  __int64 *v19; // rax
  __int64 *v20; // r14
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rsi
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  __int64 (__fastcall *v29)(__int64); // rdi
  __int64 (__fastcall **v30)(__int64); // r15
  __int64 (__fastcall *v31)(__int64); // rax
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 (__fastcall *v37)(__int64); // rdi
  __int64 (__fastcall **v38)(__int64); // r15
  __int64 (__fastcall *v39)(__int64); // rax
  _QWORD *v40; // rdi
  __int64 v42; // [rsp+8h] [rbp-D0h]
  __int64 v43; // [rsp+28h] [rbp-B0h] BYREF
  __int64 *v44; // [rsp+30h] [rbp-A8h]
  unsigned int v45; // [rsp+3Ch] [rbp-9Ch]
  __m128 v46; // [rsp+40h] [rbp-98h] BYREF
  __int64 *v47; // [rsp+50h] [rbp-88h]
  __int64 *v48; // [rsp+58h] [rbp-80h]
  __m128 v49; // [rsp+60h] [rbp-78h]
  __int64 (__fastcall *v50)(__int64); // [rsp+70h] [rbp-68h] BYREF
  __int64 v51; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall *v52)(__int64); // [rsp+80h] [rbp-58h]
  __int64 v53; // [rsp+88h] [rbp-50h]
  __int64 (__fastcall *v54)(__int64 *); // [rsp+90h] [rbp-48h]
  __int64 v55; // [rsp+98h] [rbp-40h]

  v13 = *((_DWORD *)a6 + 2);
  if ( v13 > 0x40 )
  {
    v18 = sub_2206780(a6);
    LODWORD(v15) = -1;
    if ( v13 - v18 <= 0x40 )
    {
      LODWORD(v15) = -1;
      if ( **a6 <= 0xFFFFFFFF )
        v15 = **a6;
    }
  }
  else
  {
    LODWORD(v14) = -1;
    if ( (unsigned __int64)*a6 <= 0xFFFFFFFF )
      v14 = *a6;
    LODWORD(v15) = (_DWORD)v14;
  }
  v16 = sub_1872040(a1, a4, a5, a2, a3, v15);
  if ( !(_BYTE)v16 )
  {
    v50 = (__int64 (__fastcall *)(__int64))(a4 + 104);
    v51 = *(unsigned int *)(a4 + 100);
    v19 = sub_18385F0((__int64)&v50);
    v20 = (__int64 *)v50;
    v21 = v19;
    v22 = (char *)v19 - (char *)v50;
    v50 = (__int64 (__fastcall *)(__int64))v21;
    v23 = v51 - (v22 >> 3);
    v51 = v23;
    if ( v23 )
    {
      v24 = *(_QWORD *)(*v21 + 64);
      if ( v24 )
      {
        v24 = sub_B9AE60(*v21);
        v23 = v51 - 1;
        v42 = v24 + 8 * v25;
        v26 = (__int64 *)((char *)v50 + 8);
      }
      else
      {
        v42 = 0;
        v26 = v21;
      }
    }
    else
    {
      v42 = 0;
      v26 = v21;
      v24 = 0;
    }
    v43 = v24;
    v47 = v20;
    v44 = &v26[v23];
    v27 = _mm_loadh_ps((const double *)&v43);
    v43 = (__int64)v21;
    v46 = v27;
    v48 = v44;
    v28 = _mm_loadh_ps((const double *)&v43);
    LODWORD(v43) = 0;
    v49 = v28;
LABEL_16:
    if ( v20 != v21
      || __PAIR128__(v42, (unsigned __int64)v44) != *(_OWORD *)&v46
      || __PAIR128__((unsigned __int64)v21, v42) != *(_OWORD *)&v49
      || v44 != v48 )
    {
      v29 = nullptr;
      v51 = 0;
      v30 = &v50;
      v50 = sub_A56010;
      v52 = sub_A56030;
      v53 = 0;
      v54 = sub_A56050;
      v55 = 0;
      while ( 1 )
      {
        v31 = *v30;
        v32 = (unsigned __int64 *)((char *)v46.m128_u64 + (_QWORD)v29);
        if ( ((unsigned __int8)*v30 & 1) != 0 )
          v31 = *(__int64 (__fastcall **)(__int64))((char *)v31 + *v32 - 1);
        v33 = v31((__int64)v32);
        if ( v33 )
          break;
        v30 += 2;
        v29 = v30[1];
      }
      v34 = *(_QWORD *)v33;
      v45 = *(_DWORD *)(*(_QWORD *)v33 + 24LL);
      v35 = sub_190BDA0(a1, a4, a5, 1, v45, 0);
      if ( v35 != 1 )
      {
        v36 = a8(a9, v45, v35 & 0xFFFFFFFFFFFFFFFELL, (unsigned int)v43);
        if ( v36 != 1 )
        {
          v37 = nullptr;
          *(_QWORD *)(v34 + 64) = v36 & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)(v34 + 48) = a7;
          v38 = &v50;
          v50 = sub_A55F80;
          v52 = sub_A55FB0;
          v51 = 0;
          v53 = 0;
          v54 = sub_A55FE0;
          v55 = 0;
          while ( 1 )
          {
            v39 = *v38;
            v40 = (unsigned __int64 *)((char *)v46.m128_u64 + (_QWORD)v37);
            if ( ((unsigned __int8)*v38 & 1) != 0 )
            {
              if ( (*(unsigned __int8 (**)(void))((char *)v39 + *v40 - 1))() )
                goto LABEL_29;
            }
            else if ( (unsigned __int8)v39((__int64)v40) )
            {
LABEL_29:
              LODWORD(v43) = v43 + 1;
              v20 = v47;
              goto LABEL_16;
            }
            v38 += 2;
            v37 = v38[1];
          }
        }
      }
      return 1;
    }
  }
  return v16;
}
