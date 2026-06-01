__int64 __fastcall sub_20B79C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  int v5; // r12d
  int v6; // r14d
  unsigned int i; // r15d
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  __int64 *v11; // rsi
  unsigned int v12; // ecx
  __int64 *v13; // r13
  __int64 result; // rax
  __int64 v15; // r9
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // r10
  __int64 v24; // r11
  __int64 v25; // rax
  unsigned __int8 v26; // al
  _QWORD *v27; // rax
  int v28; // esi
  int v29; // [rsp+0h] [rbp-128h]
  __int32 v30; // [rsp+8h] [rbp-120h]
  _DWORD *v31; // [rsp+8h] [rbp-120h]
  _BYTE *v32; // [rsp+10h] [rbp-118h]
  __int64 v33; // [rsp+18h] [rbp-110h] BYREF
  __m128 v34; // [rsp+20h] [rbp-108h] BYREF
  __m128 v35; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-E8h] BYREF
  int v37; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v39[3]; // [rsp+58h] [rbp-D0h] BYREF
  int v40; // [rsp+70h] [rbp-B8h]
  int v41; // [rsp+74h] [rbp-B4h]
  __int64 v42; // [rsp+78h] [rbp-B0h] BYREF
  int v43; // [rsp+80h] [rbp-A8h]
  __int64 v44; // [rsp+88h] [rbp-A0h]
  __int64 v45[7]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v46[2]; // [rsp+C8h] [rbp-60h] BYREF
  int v47; // [rsp+D8h] [rbp-50h]
  __int64 v48; // [rsp+E0h] [rbp-48h]

  v33 = a1;
  sub_209FB80((__int64)&v35, a1);
  v3 = *(unsigned int *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  if ( (_DWORD)v3 )
  {
    v5 = v3 - 1;
    v6 = 1;
    for ( i = v5 & sub_20A70E0(v35.m128_i64[1], &v36, &v37, v39, &v38, &v42, v45, v46); ; i = v5 & v12 )
    {
      v8 = *(_QWORD *)(v4 + 8LL * i);
      if ( v8 != -8192 && v8 != -4096 )
      {
        v32 = *(_BYTE **)(v4 + 8LL * i);
        v30 = v35.m128_i32[0];
        v9 = sub_206CE80(v8);
        v10 = (__int64)v32;
        v11 = (__int64 *)(v4 + 8LL * i);
        if ( v30 == v9 )
        {
          v23 = (*(v32 - 16) & 2) != 0 ? *((_QWORD **)v32 - 4) : &v32[-16 - 8LL * ((*(v32 - 16) >> 2) & 0xF)];
          if ( v35.m128_u64[1] == v23[2] )
          {
            v24 = v36;
            v25 = (__int64)v32;
            if ( *v32 != 16 )
            {
              v25 = sub_209E6C0((__int64)v32);
              v11 = (__int64 *)(v4 + 8LL * i);
              v10 = (__int64)v32;
            }
            if ( v24 == v25 && v37 == *(_DWORD *)(v10 + 16) && v38 == v23[1] && v23[5] == v39[0] && v39[1] == v23[3] )
            {
              v31 = (_DWORD *)v10;
              v29 = v40;
              if ( v29 == (unsigned int)sub_206CE70(v10) )
              {
                v26 = *((_BYTE *)v31 - 16);
                v27 = (v26 & 2) != 0 ? *((_QWORD **)v31 - 4) : (_QWORD *)((char *)v31 - 16 - 8LL * ((v26 >> 2) & 0xF));
                if ( v39[2] == v27[4]
                  && v41 == v31[5]
                  && v42 == v27[6]
                  && v43 == v31[7]
                  && v44 == v27[7]
                  && v45[0] == v27[8]
                  && v45[1] == v27[9]
                  && v45[2] == v27[10]
                  && v45[3] == v27[11]
                  && v45[4] == v27[12]
                  && v45[5] == v27[13]
                  && v45[6] == v27[14]
                  && v46[0] == v27[15]
                  && v46[1] == v27[16]
                  && v47 == v31[6]
                  && v48 == v27[17] )
                {
                  sub_2081EC0(&v34, v11, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
                  v13 = (__int64 *)v34.m128_u64[0];
                  goto LABEL_11;
                }
              }
            }
          }
        }
        v8 = *v11;
      }
      if ( v8 == -4096 )
      {
        v4 = *(_QWORD *)a2;
        v3 = *(unsigned int *)(a2 + 16);
        break;
      }
      v12 = i + v6++;
    }
  }
  sub_2081EC0(&v34, (_QWORD *)(v4 + 8 * v3), (_QWORD *)(v4 + 8 * v3), a2, 1);
  v13 = (__int64 *)v34.m128_u64[0];
LABEL_11:
  sub_2081EC0(
    &v34,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v34.m128_u64[0] == v13 || (result = *v13) == 0 )
  {
    if ( (unsigned __int8)sub_207F4D0((__int64 *)a2, &v33, &v34) )
    {
      sub_2081EC0(&v35, v34.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v33;
    }
    v16 = (_QWORD *)v34.m128_u64[0];
    v17 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v18 = *(unsigned int *)(a2 + 16);
    v35.m128_u64[0] = v34.m128_u64[0];
    v19 = (unsigned int)(4 * v17);
    v20 = (unsigned int)(2 * v18);
    if ( (unsigned int)v19 >= 3 * (int)v18 )
    {
      v28 = 2 * v18;
    }
    else
    {
      v20 = (unsigned int)(v18 - *(_DWORD *)(a2 + 12) - v17);
      if ( (unsigned int)v20 > (unsigned int)v18 >> 3 )
      {
LABEL_16:
        v21 = *v16 == -4096;
        *(_DWORD *)(a2 + 8) = v17;
        if ( !v21 )
          --*(_DWORD *)(a2 + 12);
        *v16 = v33;
        v22 = *(_QWORD *)a2;
        v34.m128_u64[0] = (unsigned __int64)v16;
        sub_2081EC0(&v35, v16, (_QWORD *)(v22 + 8 * v18), a2, 1);
        return v33;
      }
      v28 = v18;
    }
    sub_20857E0(a2, v28, v17, v20, v19, v15);
    sub_207F4D0((__int64 *)a2, &v33, &v35);
    v18 = *(unsigned int *)(a2 + 16);
    v16 = (_QWORD *)v35.m128_u64[0];
    LODWORD(v17) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_16;
  }
  return result;
}
