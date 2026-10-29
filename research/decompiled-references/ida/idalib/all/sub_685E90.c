__int64 __fastcall sub_685E90(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __m128 a5,
        double a6,
        double a7)
{
  __int64 v8; // r12
  unsigned __int64 *v10; // rax
  char *v11; // rbx
  char v13; // al
  __int64 v14; // r8
  int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // [rsp+0h] [rbp-78h]
  unsigned int v26; // [rsp+8h] [rbp-70h]
  char v27; // [rsp+Ch] [rbp-6Ch]
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  void *v30; // [rsp+18h] [rbp-60h]
  int v31[4]; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+30h] [rbp-48h]
  int v33[2]; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]

  v8 = (__int64)(a1 + 203);
  *(_QWORD *)v33 = __readfsqword(0x28u);
  v10 = sub_505D70((__int64)(a1 + 203), a2);
  if ( v10 )
  {
    if ( *(_DWORD *)(a1[3] + 24) != 8 && a3 > 0x100000000LL )
      a3 = 0x100000000LL;
    v11 = (char *)v10[1];
    if ( (char *)a3 == v11 )
      return 1;
    if ( *v10 >= a3 )
      return sub_685C90(a1, a2, a4, *(double *)a5.m128_u64, a6, a7);
    v25 = (__int64)v10;
    v26 = sub_503EE0(v8, a2);
    v13 = sub_503FB0(v8, v26, a3);
    v14 = v25;
    if ( !v13 )
      sub_378D50();
    v27 = 2 * ((*(_BYTE *)(v25 + 44) & 8) == 0);
    if ( (a4 & 0x40) != 0 )
    {
      v27 |= 4u;
      if ( (unsigned __int64)v11 < a3 )
      {
        v15 = 1;
        goto LABEL_12;
      }
    }
    else
    {
      v15 = -1;
      if ( (unsigned __int64)v11 < a3 )
      {
LABEL_12:
        a6 = *(double *)&a3;
        a5 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)a3);
        *(__m128 *)v31 = a5;
        v16 = sub_3C0380((__int64)a1, (unsigned __int64 *)v31, v15, v25);
        v14 = v25;
        if ( v16 )
          sub_378D50();
      }
    }
    v28 = v14;
    sub_39ADA0(0x17u, v14, a3, a4);
    v19 = v28;
    LODWORD(v25) = a4 & 2;
    if ( (a4 & 2) != 0 )
    {
      LODWORD(v25) = 2;
    }
    else
    {
      v30 = a1 + 203;
      while ( (unsigned __int8)sub_684B60(a1, (unsigned __int64)v11, a3) )
      {
        if ( (a4 & 4) == 0 )
          sub_378E50();
        sub_684820(a1, v11, (char *)a3, 0, 0, *(double *)a5.m128_u64, a6, a7);
      }
      v19 = v28;
    }
    v20 = 0x100000000LL;
    v21 = a1[3];
    if ( *(_DWORD *)(v21 + 24) == 8 )
      v20 = -1;
    if ( a3 < v20 )
    {
      sub_6849A0(a1, a3, v21, v17, v19, v18, v25, v26, v19, v30, *(__int64 *)v31, v31[2], v32, v33[0], v34);
      v19 = v29;
    }
    if ( (unsigned __int64)v11 >= a3 )
    {
      if ( !(_DWORD)v25 )
        sub_684820(a1, (char *)a3, v11, a4 & 1, 0, *(double *)a5.m128_u64, a6, a7);
LABEL_27:
      sub_5061A0(v8, v26, a3, *(double *)a5.m128_u64, a6, a7);
      sub_51A370(*a1, (unsigned __int64)v11, a3, (unsigned int)v25 >> 1);
      callui(1, (int)v11, (int)&callui, v22, v23, v24);
    }
    if ( (unsigned __int8)sub_684690(a1, (unsigned __int64)v11, a3, v27, v19, *(double *)a5.m128_u64, a6, a7) )
      goto LABEL_27;
  }
  return 0;
}
