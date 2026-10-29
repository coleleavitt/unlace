__int64 __fastcall sub_3C7450(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, const __m128i *a5)
{
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int16 v12; // ax
  int v13; // r12d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  unsigned __int8 v22; // r10
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r8
  const __m128i *v26; // rsi
  const char *v28; // rdx
  const char *v29; // rsi
  char v30; // [rsp+0h] [rbp-B8h]
  unsigned __int8 v31; // [rsp+7h] [rbp-B1h]
  unsigned __int8 v32; // [rsp+7h] [rbp-B1h]
  __int64 v34; // [rsp+18h] [rbp-A0h]
  __int16 v35; // [rsp+2Eh] [rbp-8Ah] BYREF
  _QWORD v36[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v37; // [rsp+40h] [rbp-78h] BYREF
  __int128 v38; // [rsp+48h] [rbp-70h]
  __int64 v39; // [rsp+60h] [rbp-58h] BYREF
  __int128 v40; // [rsp+68h] [rbp-50h]
  unsigned __int64 v41; // [rsp+78h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  a5[6].m128i_i32[2] = 0;
  v31 = sub_135900(a2, (__int64)a5, 9u);
  if ( v31 )
    return v31;
  v37 = 0;
  v38 = 0;
  if ( !a4 )
    goto LABEL_8;
  v10 = *a4;
  if ( (unsigned __int8)v10 <= 0xEu )
  {
    v11 = 16994;
    if ( _bittest64(&v11, v10) )
    {
      sub_1AFDE0(a4, &v37, 6);
      if ( (unsigned __int64)v38 > 1 )
        tag_remove();
    }
  }
  if ( sub_11C480((unsigned int *)a3) )
    v12 = (unsigned __int8)sub_123660((unsigned __int8 *)(a3 + 64), (__int64)a4, 1u);
  else
LABEL_8:
    v12 = 0;
  v35 = v12;
  v36[0] = 0xFFFFFFFF00000000LL;
  v36[1] = 0;
  v34 = *(_QWORD *)(a1 + 48);
  v13 = v34 + 904;
  while ( (unsigned int)sub_339AC0(
                          (unsigned int)"Insert an assertion\n"
                                        "<~V~alue       :L::16::>\n"
                                        "<#Operand can be a register, stack variable, etc#~O~perand     :q::40::>\n"
                                        "<~I~nsert after:C>>\n"
                                        "\n",
                          v13,
                          (unsigned int)&v37,
                          (unsigned int)&v35,
                          v8,
                          v9,
                          v30) )
  {
    if ( (unsigned __int64)v38 <= 1 )
    {
      sub_2B1D90((unsigned int)"Please enter the operand", v13, v14, v15, v16, v17);
    }
    else
    {
      v40 = 0;
      v39 = 0;
      if ( !(unsigned __int8)sub_3DEC20(a2, v36, v37, &v39) )
      {
        v28 = s1;
        if ( (_QWORD)v40 )
          LODWORD(v28) = v39;
        v29 = s1;
        if ( (_QWORD)v38 )
          LODWORD(v29) = v37;
        sub_2B1D90((unsigned int)"%s: %s", (_DWORD)v29, (_DWORD)v28, v19, v20, v21);
        goto LABEL_28;
      }
      if ( LOBYTE(v36[0]) <= 0xEu && (v18 = 16994, (v22 = _bittest64(&v18, LOBYTE(v36[0]))) != 0) )
      {
        v23 = HIDWORD(v36[0]);
        if ( HIDWORD(v36[0]) != -1 )
        {
          if ( v39 )
          {
            v32 = v22;
            *(_QWORD *)&v40 = 0;
            qfree();
            v23 = HIDWORD(v36[0]);
            v22 = v32;
          }
          v24 = 1;
          if ( v35 )
            v24 = 2;
          v31 = v22;
          a5[6].m128i_i32[2] = v24;
          v25 = a5->m128i_i64[0];
          a5[1].m128i_i32[2] = 4;
          a5[3].m128i_i64[0] = v25;
          sub_11E5D0(
            (__int64)&a5[3].m128i_i64[1],
            *(_QWORD *)(**(_QWORD **)(a1 + 48) + 112LL),
            *(_QWORD *)(v34 + 904),
            v23,
            v25,
            0);
          sub_11A5D0(&a5[5].m128i_i8[8], (char *)v36);
          a5[1].m128i_i32[3] |= 0x80u;
          v26 = a5;
          sub_135340(a2, a5, 9u);
          sub_1B3250(&v26[1].m128i_u64[1], v26);
          sub_6C720((__int64)"added user minsn %a(%d): %s\n", 0.0, v26->m128i_i64[0], (const char *)v26->m128i_u32[3]);
          break;
        }
        sub_2B1D90((unsigned int)"Please specify the operand size", (unsigned int)v36, 16994, -1, v20, v21);
        if ( v39 )
        {
LABEL_17:
          *(_QWORD *)&v40 = 0;
          qfree();
        }
      }
      else
      {
        sub_2B1D90((unsigned int)"Unacceptable operand type", (unsigned int)v36, v18, v19, v20, v21);
LABEL_28:
        if ( v39 )
          goto LABEL_17;
      }
    }
  }
  sub_11A960((__int64)v36);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return v31;
}
