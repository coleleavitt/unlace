__int64 __fastcall sub_130BC0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v9; // r14
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // r11
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // r10
  char v21; // al
  char v22; // al
  int v23; // [rsp+8h] [rbp-108h]
  unsigned __int64 v24; // [rsp+8h] [rbp-108h]
  unsigned __int64 v25; // [rsp+8h] [rbp-108h]
  __int64 v26; // [rsp+10h] [rbp-100h]
  __int64 v27; // [rsp+18h] [rbp-F8h]
  const __m128i *v28; // [rsp+20h] [rbp-F0h]
  int *v29; // [rsp+28h] [rbp-E8h]
  unsigned __int64 *v30; // [rsp+30h] [rbp-E0h]
  __int64 v32; // [rsp+40h] [rbp-D0h]
  __int64 v33; // [rsp+40h] [rbp-D0h]
  __int64 v35; // [rsp+48h] [rbp-C8h]
  __int16 v36; // [rsp+50h] [rbp-C0h] BYREF
  int v37; // [rsp+58h] [rbp-B8h]
  __m128 v38; // [rsp+60h] [rbp-B0h] BYREF
  int *v39; // [rsp+70h] [rbp-A0h]
  __int64 v40; // [rsp+78h] [rbp-98h]
  __int64 v41; // [rsp+80h] [rbp-90h]
  __int64 v42; // [rsp+88h] [rbp-88h]
  int v43; // [rsp+90h] [rbp-80h]
  __m128 v44; // [rsp+A0h] [rbp-70h] BYREF
  int *v45; // [rsp+B0h] [rbp-60h]
  __int64 v46; // [rsp+B8h] [rbp-58h]
  __int64 v47; // [rsp+C0h] [rbp-50h]
  __int64 v48; // [rsp+C8h] [rbp-48h]
  int v49; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v50; // [rsp+D8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a5 + 4) == *(_DWORD *)(a3 + 4) )
  {
    v9 = (unsigned __int64)a1;
    v11 = sub_339CA0();
    LOBYTE(v12) = sub_1255D0((unsigned __int8 *)a3, v11, a5, 0);
    v6 = v12;
    if ( !(_BYTE)v12 )
    {
      v30 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
      sub_123A40((__int64)&v36, (unsigned __int8 *)a5, v13, v14);
      if ( (unsigned __int8)sub_12CD10(&v36, v30, 0)
        && (unsigned __int8)sub_12EA80((__int64)v30, a1, a2, a3, a4, (__int64)&v36, 2) )
      {
        if ( a6 && *(_BYTE *)a3 == 1 && *(_BYTE *)a5 == 1 && (_BYTE)v36 == 1 && *(_DWORD *)(a3 + 8) == v37 )
        {
          v18 = sub_A92A0(a1[4].m128i_i64[0], (_BYTE *)a3, (_BYTE *)a5);
          goto LABEL_23;
        }
      }
      else
      {
        v15 = a1[4].m128i_i64[0];
        v40 = a5;
        v41 = 0;
        v42 = 0;
        v46 = a3;
        v47 = 0;
        v48 = 0;
        v38.m128_u64[0] = v9;
        v38.m128_u64[1] = a4;
        v39 = nullptr;
        v43 = 0;
        v16 = sub_12A160(v15, &v38, 1);
        v27 = a2;
        v17 = 0;
        v26 = v38.m128_i64[1];
        v28 = (const __m128i *)v38.m128_u64[0];
        v29 = v39;
        if ( v16 )
        {
          v19 = *(_QWORD *)(v9 + 64);
          v44.m128_u64[0] = v9;
          v23 = v43;
          v44.m128_u64[1] = a2;
          v45 = nullptr;
          v49 = 0;
          sub_12A160(v19, &v44, 1);
          v20 = v44.m128_u64[0];
          v17 = (__int64)v45;
          v27 = v44.m128_i64[1];
          if ( v29 == v45
            && v29[17] == *(_DWORD *)(a3 + 4) + *(_DWORD *)(a5 + 4)
            && v49 == 2
            && v23 == 3
            && (*(_BYTE *)a3 != 4 || (unsigned int)(**(_DWORD **)(a3 + 8) - 8) > 1) )
          {
            goto LABEL_11;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)a5 == 1 )
            {
              v25 = v44.m128_u64[0];
              v33 = (__int64)v45;
              v22 = sub_A92A0(*(_QWORD *)(v9 + 64), &v36, (_BYTE *)a5);
              v17 = v33;
              v20 = v25;
              if ( !v22 )
                goto LABEL_12;
            }
          }
          if ( (const __m128i *)v9 == v28 )
          {
            v24 = v20;
            v32 = v17;
            v21 = sub_30D8F0(v30, v28, v26, v29, a2, a3);
            v17 = v32;
            v20 = v24;
            if ( v21 )
              goto LABEL_11;
          }
          v9 = v20;
        }
        if ( *(_BYTE *)a5 == 4 )
        {
          v26 = a4;
          v29 = *(int **)(a5 + 8);
        }
        if ( *(_BYTE *)a3 == 4 )
        {
          v27 = a2;
          v17 = *(_QWORD *)(a3 + 8);
        }
        if ( !v29 || !v17 || (const __m128i *)v9 != v28 )
          goto LABEL_12;
        v35 = v17;
        if ( !(unsigned __int8)sub_130320(v28, v27, v17, v26, v29) )
        {
          v18 = sub_1307A0(v28, v27, v35, v26, v29);
LABEL_23:
          v6 = v18;
          goto LABEL_12;
        }
      }
LABEL_11:
      v6 = 1;
LABEL_12:
      sub_11CDA0((__int64)&v36);
      return v6;
    }
  }
  return 0;
}
