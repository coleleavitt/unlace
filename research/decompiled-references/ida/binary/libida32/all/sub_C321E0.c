__int64 __fastcall sub_C321E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rax
  void **v10; // rsi
  unsigned int *v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  char *v24; // r12
  char v25; // al
  unsigned __int8 v26; // al
  _QWORD *v27; // [rsp+0h] [rbp-4F8h] BYREF
  char *v28; // [rsp+8h] [rbp-4F0h]
  void **v29; // [rsp+10h] [rbp-4E8h]
  unsigned __int8 v30; // [rsp+1Eh] [rbp-4DAh]
  char v31; // [rsp+1Fh] [rbp-4D9h]
  __m128 *v32; // [rsp+20h] [rbp-4D8h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-4D0h]
  void *v34; // [rsp+30h] [rbp-4C8h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-4C0h]
  char v36; // [rsp+3Ch] [rbp-4BCh]
  void *v37; // [rsp+40h] [rbp-4B8h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-4B0h]
  char v39; // [rsp+4Ch] [rbp-4ACh]
  __m128 v40; // [rsp+50h] [rbp-4A8h] BYREF
  char v41; // [rsp+60h] [rbp-498h]
  _QWORD v42[3]; // [rsp+90h] [rbp-468h] BYREF
  char v43; // [rsp+A8h] [rbp-450h]
  __int64 v44; // [rsp+B8h] [rbp-440h]
  void *ptr; // [rsp+C0h] [rbp-438h]
  __int64 v46; // [rsp+C8h] [rbp-430h]
  _BYTE v47[80]; // [rsp+D0h] [rbp-428h] BYREF
  __m128 v48; // [rsp+120h] [rbp-3D8h] BYREF
  __int64 v49; // [rsp+130h] [rbp-3C8h]
  unsigned int *v50; // [rsp+140h] [rbp-3B8h]
  unsigned __int8 v51; // [rsp+154h] [rbp-3A4h]
  unsigned int v52; // [rsp+230h] [rbp-2C8h]
  __int64 v53; // [rsp+498h] [rbp-60h]

  sub_BEEB30(&v48, a4, a5, 0);
  v48.m128_i8[8] = 1;
  v30 = v51;
  if ( v51 )
  {
    v9 = sub_A3B7E0(v49);
    v10 = (void **)&v48;
    v30 = sub_CC3420(v9, &v48, a2, a3, a1);
  }
  else
  {
    v12 = v50;
    memset(v42, 0, sizeof(v42));
    v43 |= 1u;
    ptr = v47;
    v13 = v50[36];
    v46 = 0x800000000LL;
    v14 = v50[37];
    v33 = v52;
    v15 = v50[40] + 1;
    v47[65] = 0;
    v44 = 0;
    v32 = &v48;
    v50[40] = v15;
    if ( v13 + 1 > v14 )
    {
      LODWORD(v27) = v15;
      sub_22134E0(v12 + 34, v12 + 38, v13 + 1, 4);
      v13 = v12[36];
      v15 = (int)v27;
    }
    v10 = &v34;
    *(_DWORD *)(*((_QWORD *)v12 + 17) + 4 * v13) = v15;
    ++v12[36];
    v35 = 1;
    v34 = nullptr;
    v36 = 0;
    if ( (unsigned __int8)sub_C23520(a2, (__int64)&v34, (__int64)&v48, v13, v7, v8) )
    {
      v19 = (char *)v34;
      if ( v35 > 0x40 )
        v19 = *(char **)v34;
      v28 = v19;
      v40.m128_i8[4] &= ~1u;
      v40.m128_i32[0] = 0;
      sub_A2D6C0((__int64)&v40, (int)v19, (int)v19);
      sub_A2BFE0(a1, (__int64)&v40);
      if ( v40.m128_i32[0] > 1u )
        sub_A2BBA0((int *)&v40);
      v10 = (void **)a3;
      v27 = v42;
      v41 = 0;
      v40 = _mm_loadh_ps((const double *)&v27);
      if ( (unsigned __int8)sub_C24FB0((__m128i *)&v40, a3, v20, v21, v22, v23) )
      {
        v27 = (_QWORD *)sub_F44710(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), a3, v16, v17, v18);
        if ( v28 )
        {
          v24 = nullptr;
          v29 = &v37;
          while ( 1 )
          {
            v10 = (void **)a3;
            v40.m128_i8[4] &= ~1u;
            v40.m128_i32[0] = 0;
            if ( !(unsigned __int8)sub_C12830((__int64)&v48, (_DWORD *)a3, (__int64)v27, (__int64)v42, (__int64)&v40, 0) )
              break;
            sub_A2BFE0(*(_QWORD *)(a1 + 8) + 56LL * (unsigned int)v24, (__int64)&v40);
            v10 = (void **)a3;
            v38 = 64;
            v37 = &dword_0 + 1;
            v39 = 0;
            v25 = sub_BF65F0((__int64)&v48, a3, (__int64)v42, (__int64)v27, (__int64)v29);
            if ( v38 > 0x40 && v37 )
            {
              v31 = v25;
              operator delete[](v37);
              v25 = v31;
            }
            v16 = v40.m128_u32[0];
            if ( !v25 )
              goto LABEL_32;
            if ( v40.m128_i32[0] > 1u )
            {
              ++v24;
              sub_A2BBA0((int *)&v40);
              if ( v28 == v24 )
                goto LABEL_26;
            }
            else if ( v28 == ++v24 )
            {
              goto LABEL_26;
            }
          }
          v16 = v40.m128_u32[0];
LABEL_32:
          if ( (unsigned int)v16 > 1 )
            sub_A2BBA0((int *)&v40);
        }
        else
        {
LABEL_26:
          v10 = (void **)(&dword_0 + 1);
          v26 = sub_C316B0((__int64)v32, 1, v33, v17, v18);
          v33 = -1;
          if ( v26 )
          {
            v30 = v26;
            if ( v53 )
              sub_BEFC80((__int64)&v48);
          }
        }
      }
    }
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    sub_C31C60((__int64)&v32, (__int64)v10, v16, v17, v18);
    if ( ptr != v47 )
      free(ptr);
  }
  sub_C00040((__int64)&v48, (__int64)v10);
  return v30;
}

