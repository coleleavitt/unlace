void __fastcall sub_20BD370(__int64 a1, __int64 a2)
{
  __int64 **v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // r12
  _QWORD *v5; // r15
  _QWORD *v6; // rdx
  _BYTE *v7; // r13
  __int64 v8; // r9
  __m128i *v9; // rsi
  _QWORD *v10; // rax
  __m128i *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // esi
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21[2]; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-50h] BYREF
  __m128 v23[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(__int64 ***)(a1 + 8);
  v21[0] = a2;
  v3 = **v2;
  v4 = (__int64 *)(v3 + 496);
  v5 = (_QWORD *)sub_20AC080(v3 + 496, a1);
  v6 = (_QWORD *)(*(_QWORD *)(v3 + 496) + 16LL * *(unsigned int *)(v3 + 512));
  sub_2093920(v23, v6, v6, v3 + 496, 1);
  if ( (_QWORD *)v23[0].m128_u64[0] != v5 )
  {
    *(_BYTE *)(a1 + 7) &= ~8u;
    v7 = (_BYTE *)v5[1];
    *v5 = -8192;
    --*(_DWORD *)(v3 + 504);
    ++*(_DWORD *)(v3 + 508);
    if ( *v7 == 2 )
    {
      if ( *(_BYTE *)v21[0] <= 0x15u )
      {
        v11 = (__m128i *)sub_20AFB20(v21[0]);
        if ( *((_DWORD *)v7 + 6) >> 1 )
          sub_20BCEC0((__int64)(v7 + 8), v11);
        goto LABEL_8;
      }
      if ( !sub_20AF7E0(a1) || !sub_20AF7E0(v21[0]) || (v20 = sub_20AF7E0(a1), v20 == sub_20AF7E0(v21[0])) )
      {
LABEL_4:
        if ( (unsigned __int8)sub_20A14E0(v4, v21, &v22) )
        {
          v9 = *(__m128i **)(v22 + 8);
          v10 = (_QWORD *)(v22 + 8);
          if ( v9 )
          {
            if ( *((_DWORD *)v7 + 6) >> 1 )
              sub_20BCEC0((__int64)(v7 + 8), v9);
LABEL_8:
            sub_20A0EC0((__int64)(v7 + 24));
            operator delete(v7, 0x88u);
            return;
          }
LABEL_18:
          v19 = v21[0];
          *(_BYTE *)(v21[0] + 7) |= 8u;
          *((_QWORD *)v7 + 16) = v19;
          *v10 = v7;
          return;
        }
        v12 = (_QWORD *)v22;
        v13 = (unsigned int)(*(_DWORD *)(v3 + 504) + 1);
        v14 = *(unsigned int *)(v3 + 512);
        v23[0].m128_u64[0] = v22;
        v15 = (unsigned int)(4 * v13);
        v16 = 2 * v14;
        if ( (unsigned int)v15 < 3 * (int)v14 )
        {
          if ( (int)v14 - *(_DWORD *)(v3 + 508) - (int)v13 > (unsigned int)v14 >> 3 )
          {
LABEL_15:
            v17 = *v12 == -4096;
            *(_DWORD *)(v3 + 504) = v13;
            if ( !v17 )
              --*(_DWORD *)(v3 + 508);
            v18 = v21[0];
            v12[1] = 0;
            v10 = v12 + 1;
            *(v10 - 1) = v18;
            goto LABEL_18;
          }
          v16 = v14;
        }
        sub_20AF9A0((__int64)v4, v16, v13, v14, v15, v8);
        sub_20A14E0(v4, v21, v23);
        LODWORD(v13) = *(_DWORD *)(v3 + 504) + 1;
        v12 = (_QWORD *)v23[0].m128_u64[0];
        goto LABEL_15;
      }
    }
    else if ( *(_BYTE *)v21[0] <= 0x15u )
    {
      goto LABEL_4;
    }
    if ( *((_DWORD *)v7 + 6) >> 1 )
      sub_20BCEC0((__int64)(v7 + 8), nullptr);
    goto LABEL_8;
  }
}
