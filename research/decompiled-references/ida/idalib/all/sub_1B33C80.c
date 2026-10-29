__int64 __fastcall sub_1B33C80(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, double a5, double a6)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int8 v13; // cl
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int8 v18; // [rsp+7h] [rbp-1A1h]
  unsigned __int64 v19; // [rsp+8h] [rbp-1A0h]
  unsigned int v20; // [rsp+18h] [rbp-190h] BYREF
  int v21; // [rsp+1Ch] [rbp-18Ch] BYREF
  unsigned __int64 v22; // [rsp+20h] [rbp-188h] BYREF
  __int64 v23; // [rsp+28h] [rbp-180h] BYREF
  _QWORD v24[4]; // [rsp+30h] [rbp-178h] BYREF
  unsigned __int8 *v25; // [rsp+50h] [rbp-158h] BYREF
  char v26; // [rsp+A8h] [rbp-100h]
  char v27; // [rsp+B4h] [rbp-F4h]
  __int64 v28; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD *v29; // [rsp+C8h] [rbp-E0h]
  __int64 v30; // [rsp+D0h] [rbp-D8h]
  _OWORD v31[5]; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+128h] [rbp-80h]
  __int64 v33; // [rsp+130h] [rbp-78h]
  __int64 v34; // [rsp+138h] [rbp-70h]
  unsigned int v35; // [rsp+140h] [rbp-68h]
  __int64 v36; // [rsp+148h] [rbp-60h] BYREF
  __int128 v37; // [rsp+150h] [rbp-58h]
  __int64 v38; // [rsp+160h] [rbp-48h]

  v22 = a2;
  v20 = 0;
  v23 = 0;
  v7 = sub_1B31D70(a1, &v22, &v20, &v23, (__int64)"omp_interop_t", 13, a5);
  v9 = v8;
  if ( !(_BYTE)v8 && v7 )
  {
    v10 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), "omp_interop_t", 0xDu);
    v30 = 0x800000000LL;
    v29 = v31;
    v31[4] = 0;
    v34 = v10;
    v28 = 0;
    v32 = 0;
    v33 = a1;
    v35 = a3;
    sub_B85890(&v36, v10);
    v37 = 0;
    v38 = 0x101010000LL;
    sub_1A395A0((__int64)&v28);
    v18 = sub_1A49A10(a1, (__int64)&v28, *(__int64 **)(a1 + 608), 0, 0, v11, 0.0, a6);
    if ( v18 )
    {
      v12 = *v29 & 0xFFFFFFFFFFFFFFF8LL;
      v13 = *(_BYTE *)(v12 + 28) & 0x7F;
      v14 = v13;
      if ( (unsigned int)v13 - 53 <= 1 || ((v13 + 52) & 0x7Fu) <= 1 )
      {
        v12 = sub_B72ED0(v12);
        v14 = *(_BYTE *)(v12 + 28) & 0x7F;
      }
      if ( (unsigned int)(v14 - 58) <= 9 )
      {
        v19 = *(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL;
        v24[0] = *(_QWORD *)(a2 + 8);
        v15 = sub_6D5440(v24);
        if ( *(_QWORD *)(v19 + 8) == (*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                    | ((unsigned __int8)*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL]
                                     | (unsigned __int8)v15)
                                    & 7) )
        {
          if ( (a4 == 49 || a4 == 24) && (unsigned __int8)sub_1AF8F00(a1, *(_QWORD *)(a2 + 8), 1, nullptr) )
          {
            sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), a3, 0x11A3u, 0);
            v21 = 1;
            sub_1587D10((__int64)v24, &v21);
LABEL_18:
            sub_15F7200(v24);
            goto LABEL_12;
          }
          v9 = v18;
        }
        else
        {
          sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), a3, 0x11A4u, 0);
          sub_15F7200(v24);
        }
LABEL_12:
        sub_169D230((__int64)&v28);
        return v9;
      }
    }
    sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), a3, 0x1198u, 0);
    if ( v26 )
    {
      sub_AE9DF0(&v25, (__int64)"omp_interop_t", 1u);
    }
    else if ( v27 )
    {
      sub_1B132F0((__int64)v24, (__int64)"omp_interop_t");
    }
    goto LABEL_18;
  }
  return v9;
}
