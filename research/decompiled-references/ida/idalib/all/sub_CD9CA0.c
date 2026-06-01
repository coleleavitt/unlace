__int64 __fastcall sub_CD9CA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rsi
  __int64 *v12; // r13
  __m128 v13; // xmm0
  __int64 (__fastcall **v14)(__int64); // r14
  __int64 (__fastcall *v15)(__int64); // rdi
  __int64 (__fastcall *v16)(__int64); // rax
  _QWORD *v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  __int64 (__fastcall **v21)(__int64); // rdx
  __int64 (__fastcall *v22)(__int64); // rdi
  char v23; // al
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(__int64); // rax
  _QWORD *v26; // rdi
  char v27; // al
  __int64 v28; // [rsp+0h] [rbp-B0h]
  __int64 v29; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+10h] [rbp-A0h]
  __m128 v31; // [rsp+18h] [rbp-98h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-88h]
  __int64 *v33; // [rsp+30h] [rbp-80h]
  __m128 v34; // [rsp+38h] [rbp-78h]
  __int64 (__fastcall *v35)(__int64); // [rsp+48h] [rbp-68h] BYREF
  __int64 v36; // [rsp+50h] [rbp-60h]
  __int64 (__fastcall *v37)(__int64); // [rsp+58h] [rbp-58h]
  __int64 v38; // [rsp+60h] [rbp-50h]
  __int64 (__fastcall *v39)(__int64 *); // [rsp+68h] [rbp-48h]
  __int64 v40; // [rsp+70h] [rbp-40h]

  if ( !a2 )
    return 1;
  result = 1;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2E )
  {
    v35 = (__int64 (__fastcall *)(__int64))(a2 + 104);
    v3 = *(unsigned int *)(a2 + 100);
    v30 = a1;
    v36 = v3;
    v4 = sub_CAEB30((__int64)&v35);
    v5 = (__int64 *)v35;
    v6 = v4;
    v7 = (char *)v4 - (char *)v35;
    v35 = (__int64 (__fastcall *)(__int64))v6;
    v8 = v36 - (v7 >> 3);
    v36 = v8;
    if ( v8 )
    {
      v9 = *(_QWORD *)(*v6 + 64);
      if ( v9 )
      {
        v9 = sub_B9AE60(*v6);
        v8 = v36 - 1;
        v11 = (__int64 *)((char *)v35 + 8);
        v28 = v9 + 8 * v10;
      }
      else
      {
        v28 = 0;
        v11 = v6;
      }
    }
    else
    {
      v28 = 0;
      v11 = v6;
      v9 = 0;
    }
    v12 = &v11[v8];
    v29 = v9;
    v32 = v5;
    v33 = v12;
    v13 = _mm_loadh_ps((const double *)&v29);
    v29 = (__int64)v6;
    v31 = v13;
    v34 = _mm_loadh_ps((const double *)&v29);
LABEL_9:
    if ( v6 == v5
      && *(_OWORD *)&v31 == __PAIR128__(v28, (unsigned __int64)v12)
      && __PAIR128__((unsigned __int64)v6, v28) == *(_OWORD *)&v34
      && v12 == v33 )
    {
      return 1;
    }
    else
    {
      v35 = sub_A56010;
      v14 = &v35;
      v15 = nullptr;
      v36 = 0;
      v37 = sub_A56030;
      v38 = 0;
      v39 = sub_A56050;
      v40 = 0;
      while ( 1 )
      {
        v16 = *v14;
        v17 = (unsigned __int64 *)((char *)v31.m128_u64 + (_QWORD)v15);
        if ( ((unsigned __int8)*v14 & 1) != 0 )
          v16 = *(__int64 (__fastcall **)(__int64))((char *)v16 + *v17 - 1);
        v18 = (__int64 *)v16((__int64)v17);
        if ( v18 )
          break;
        v14 += 2;
        v15 = v14[1];
      }
      v19 = sub_B9AE20(*v18);
      if ( !v19 || (v20 = sub_CD7B80(v30, v19, 0, 0), HIBYTE(v20)) && (_BYTE)v20 )
      {
        v21 = &v35;
        v22 = nullptr;
        v36 = 0;
        v35 = sub_A55F80;
        v37 = sub_A55FB0;
        v38 = 0;
        v39 = sub_A55FE0;
        v40 = 0;
        while ( 1 )
        {
          v25 = *v21;
          v26 = (unsigned __int64 *)((char *)v31.m128_u64 + (_QWORD)v22);
          v29 = (__int64)v21;
          if ( ((unsigned __int8)v25 & 1) != 0 )
          {
            v23 = (*(__int64 (**)(void))((char *)v25 + *v26 - 1))();
            v24 = v29;
            if ( v23 )
              goto LABEL_23;
          }
          else
          {
            v27 = v25((__int64)v26);
            v24 = v29;
            if ( v27 )
            {
LABEL_23:
              v5 = v32;
              goto LABEL_9;
            }
          }
          v21 = (__int64 (__fastcall **)(__int64))(v24 + 16);
          v22 = v21[1];
        }
      }
      return 0;
    }
  }
  return result;
}
