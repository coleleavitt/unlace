void __fastcall sub_12FC0D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  signed __int64 v4; // rax
  __int64 v5; // r12
  size_t v6; // r15
  size_t v7; // r14
  _OWORD *v8; // r13
  size_t v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  _BYTE *v14; // rax
  _QWORD *v15; // rax
  _BYTE *v16; // rdi
  size_t v17; // rdx
  _BYTE *v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm1
  size_t v21; // r15
  _BYTE *v22; // rdi
  __int64 v23; // [rsp+10h] [rbp-60h] BYREF
  void *v24; // [rsp+18h] [rbp-58h]
  size_t v25; // [rsp+20h] [rbp-50h]
  _OWORD v26[4]; // [rsp+28h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v2 = a1 + 32;
    if ( a2 != a1 + 32 )
    {
LABEL_8:
      v6 = *(_QWORD *)(v2 + 8);
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(_OWORD **)v2;
      v9 = v7;
      if ( v6 <= v7 )
        v9 = *(_QWORD *)(v2 + 8);
      if ( v9 )
      {
        LODWORD(v4) = memcmp(*(const void **)v2, *(const void **)a1, v9);
        if ( (_DWORD)v4 )
          goto LABEL_5;
      }
      v4 = v6 - v7;
      if ( (__int64)(v6 - v7) > 0x7FFFFFFF )
      {
LABEL_6:
        v5 = v2 + 32;
        sub_12FBE20((__m128i *)v2);
        goto LABEL_7;
      }
      if ( v4 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_5:
        if ( (int)v4 >= 0 )
          goto LABEL_6;
      }
      v24 = v26;
      if ( (_OWORD *)(v2 + 16) == v8 )
      {
        v20 = _mm_loadu_si128((const __m128i *)(v2 + 16));
        *(_QWORD *)v2 = v8;
        v5 = v2 + 32;
        v25 = v6;
        v26[0] = v20;
        *(_QWORD *)(v2 + 8) = 0;
        v11 = (v2 - a1) >> 5;
        *(_BYTE *)(v2 + 16) = 0;
        if ( v2 - a1 <= 0 )
        {
          v18 = *(_BYTE **)a1;
LABEL_39:
          if ( v6 )
          {
            if ( v6 == 1 )
            {
              *v18 = v26[0];
              v21 = v25;
              v22 = *(_BYTE **)a1;
              *(_QWORD *)(a1 + 8) = v25;
              v22[v21] = 0;
              v18 = v24;
              goto LABEL_33;
            }
            memcpy(v18, v26, v6);
            v6 = v25;
            v18 = *(_BYTE **)a1;
          }
          *(_QWORD *)(a1 + 8) = v6;
          v18[v6] = 0;
          v18 = v24;
          goto LABEL_33;
        }
      }
      else
      {
        *(_QWORD *)v2 = v2 + 16;
        v10 = *(_QWORD *)(v2 + 16);
        v5 = v2 + 32;
        v24 = v8;
        *(_QWORD *)&v26[0] = v10;
        v25 = v6;
        v11 = (v2 - a1) >> 5;
        *(_QWORD *)(v2 + 8) = 0;
        *(_BYTE *)(v2 + 16) = 0;
        if ( v2 - a1 <= 0 )
          goto LABEL_29;
      }
      v12 = (_QWORD *)(v2 - 16);
      while ( 1 )
      {
        v15 = (_QWORD *)*(v12 - 2);
        v16 = (_BYTE *)v12[2];
        if ( v15 == v12 )
        {
          v17 = *(v12 - 1);
          if ( v17 )
          {
            if ( v17 == 1 )
              *v16 = *(_BYTE *)v12;
            else
              memcpy(v16, v12, v17);
            v16 = (_BYTE *)v12[2];
            v17 = *(v12 - 1);
          }
          v12[3] = v17;
          v16[v17] = 0;
          goto LABEL_19;
        }
        if ( v16 == (_BYTE *)(v12 + 4) )
          break;
        v12[2] = v15;
        v13 = v12[4];
        v12[3] = *(v12 - 1);
        v12[4] = *v12;
        if ( !v16 )
          goto LABEL_27;
        *(v12 - 2) = v16;
        *v12 = v13;
LABEL_19:
        v14 = (_BYTE *)*(v12 - 2);
        *(v12 - 1) = 0;
        v12 -= 4;
        *v14 = 0;
        if ( !--v11 )
        {
          v6 = v25;
          v8 = v24;
LABEL_29:
          v18 = *(_BYTE **)a1;
          if ( v8 == v26 )
            goto LABEL_39;
          if ( v18 == (_BYTE *)(a1 + 16) )
          {
            v23 = *(_QWORD *)&v26[0];
            *(_QWORD *)a1 = v8;
            *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v23);
          }
          else
          {
            v23 = *(_QWORD *)&v26[0];
            v19 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)a1 = v8;
            *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v23);
            if ( v18 )
            {
              v24 = v18;
              *(_QWORD *)&v26[0] = v19;
              goto LABEL_33;
            }
          }
          v18 = v26;
          v24 = v26;
LABEL_33:
          v25 = 0;
          *v18 = 0;
          if ( v24 == v26 )
          {
LABEL_7:
            v2 = v5;
            if ( a2 == v5 )
              return;
          }
          else
          {
            operator delete(v24);
            v2 = v5;
            if ( a2 == v5 )
              return;
          }
          goto LABEL_8;
        }
      }
      v12[2] = v15;
      v12[3] = *(v12 - 1);
      v12[4] = *v12;
LABEL_27:
      *(v12 - 2) = v12;
      goto LABEL_19;
    }
  }
}
