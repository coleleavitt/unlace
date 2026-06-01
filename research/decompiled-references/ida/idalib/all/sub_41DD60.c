unsigned __int64 __fastcall sub_41DD60(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int16 v4; // cx
  __int16 v5; // r15
  unsigned __int8 v6; // dl
  __int64 v7; // rax
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // al
  __m128 v10; // xmm0
  __int64 v11; // rax
  __int16 v12; // ax
  __int16 v13; // [rsp+0h] [rbp-D8h]
  unsigned __int8 v14; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v15; // [rsp+11h] [rbp-C7h] BYREF
  __int64 v16; // [rsp+21h] [rbp-B7h]
  __int64 v17; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v18[24]; // [rsp+38h] [rbp-A0h]
  __int64 v19; // [rsp+50h] [rbp-88h]
  _BYTE v20[56]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 1672);
  v21 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_7BE6E0(a1, v1 + 2464) )
  {
    v17 = 0;
    *(_QWORD *)&v18[16] = 0;
    v19 = 0;
    *(__m128i *)v18 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    v3 = sub_7BEB80(v1 + 2464, a1, 83);
    if ( v3 != -1 )
    {
      while ( sub_7BE950(v1 + 2464, a1, v3, &v14, 25, 83) != 25 )
      {
LABEL_9:
        v3 = sub_7BEBF0(v1 + 2464, a1, v3, 83);
        if ( v3 == -1 )
          return v21 - __readfsqword(0x28u);
      }
      v8 = v14;
      v9 = v14 & 0xF;
      if ( (v14 & 0xF) == 0xF )
      {
        v12 = sub_7BE710(v1 + 2464, a1, v3, 67);
        if ( v12 <= 0 )
        {
          node2ea(v3);
          sub_368890();
        }
        v4 = v12 | 0x8000;
        v8 = v14;
        v5 = v12 | 0x8000;
      }
      else
      {
        if ( !v9 )
        {
          v5 = 13;
          v4 = 13;
          HIDWORD(v17) = v14 >> 4;
          if ( (v14 & 0x10) == 0 )
          {
LABEL_7:
            LOWORD(v17) = v4;
            *(__m128i *)&v18[8] = _mm_loadu_si128(&v15);
            v19 = v16;
            v7 = sub_41C230((__int64)v20, 48, (unsigned __int16 *)&v17);
            sub_7BE7C0(v1 + 2464, a1, v3, v20, v7, 83);
            if ( v5 < 0 )
              sub_7BE850(v1 + 2464, a1, v3, 67);
            goto LABEL_9;
          }
          goto LABEL_14;
        }
        v4 = v9;
        v5 = v9;
      }
      v6 = v8 >> 4;
      HIDWORD(v17) = v6;
      if ( (v6 & 1) == 0 )
        goto LABEL_7;
LABEL_14:
      v13 = v4;
      netnode_altval(*(_QWORD *)(v1 + 2464), v3, 65);
      LOWORD(v17) = v13;
      v10 = _mm_loadh_ps((const double *)v15.m128i_i64);
      *(_QWORD *)&v18[16] = v15.m128i_i64[1];
      v19 = v16;
      *(__m128 *)v18 = v10;
      v11 = sub_41C230((__int64)v20, 48, (unsigned __int16 *)&v17);
      sub_7BE7C0(v1 + 2464, a1, v3, v20, v11, 83);
      if ( v5 < 0 )
        sub_7BE850(v1 + 2464, a1, v3, 67);
      sub_7BE850(v1 + 2464, a1, v3, 65);
      goto LABEL_9;
    }
  }
  return v21 - __readfsqword(0x28u);
}
