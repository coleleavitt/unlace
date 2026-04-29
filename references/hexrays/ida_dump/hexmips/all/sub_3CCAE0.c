__int64 __fastcall sub_3CCAE0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, const __m128i *a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  unsigned __int8 v12; // r10
  int v13; // ecx
  const char *v14; // rdi
  int v15; // eax
  __int64 v16; // r8
  const char *v18; // rdx
  const char *v19; // rsi
  unsigned __int8 v20; // [rsp+17h] [rbp-B1h]
  unsigned __int8 v21; // [rsp+17h] [rbp-B1h]
  __int64 v24; // [rsp+28h] [rbp-A0h]
  __int16 v25; // [rsp+3Eh] [rbp-8Ah]
  _QWORD v26[2]; // [rsp+40h] [rbp-88h] BYREF
  const char *v27; // [rsp+50h] [rbp-78h] BYREF
  __int128 v28; // [rsp+58h] [rbp-70h]
  const char *v29; // [rsp+70h] [rbp-58h] BYREF
  __int128 v30; // [rsp+78h] [rbp-50h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  a5[6].m128i_i32[2] = 0;
  v20 = sub_133C00(a2, (__int64)a5, 9u);
  if ( v20 )
    return v20;
  v27 = nullptr;
  v28 = 0;
  if ( !a4 )
    goto LABEL_8;
  v8 = *a4;
  if ( (unsigned __int8)v8 <= 0xEu )
  {
    v9 = 16994;
    if ( _bittest64(&v9, v8) )
    {
      sub_1AE320((unsigned __int64)a4, (__int64)&v27, 6u);
      if ( (unsigned __int64)v28 > 1 )
        tag_remove(&v27, v27, 0);
    }
  }
  if ( sub_11A6C0((unsigned int *)a3) )
    v10 = (unsigned __int8)sub_121960((unsigned __int8 *)(a3 + 64), (__int64)a4, 1u);
  else
LABEL_8:
    v10 = 0;
  v25 = v10;
  v26[0] = 0xFFFFFFFF00000000LL;
  v26[1] = 0;
  v24 = *(_QWORD *)(a1 + 48);
  while ( (unsigned int)sub_337FF0(
                          (__int64)"Insert an assertion\n"
                                   "%A\n"
                                   "<~V~alue       :L::16::>\n"
                                   "<#A register or stack variable, including the size suffix#~O~perand     :q::40::>\n"
                                   "<~I~nsert after:C>>\n"
                                   "\n",
                          0.0) )
  {
    if ( (unsigned __int64)v28 <= 1 )
    {
      sub_2B05F0((__int64)"Please enter the operand", "Example: mov #-1.4, r12.4");
    }
    else
    {
      v30 = 0;
      v29 = nullptr;
      if ( !(unsigned __int8)sub_3E4990(a2, v26, v27, &v29) )
      {
        v18 = s1;
        if ( (_QWORD)v30 )
          v18 = v29;
        v19 = s1;
        if ( (_QWORD)v28 )
          v19 = v27;
        sub_2B05F0((__int64)"%s: %s", v19, v18);
        goto LABEL_28;
      }
      if ( LOBYTE(v26[0]) <= 0xEu && (v11 = 16994, (v12 = _bittest64(&v11, LOBYTE(v26[0]))) != 0) )
      {
        v13 = HIDWORD(v26[0]);
        if ( HIDWORD(v26[0]) != -1 )
        {
          if ( v29 )
          {
            v21 = v12;
            *(_QWORD *)&v30 = 0;
            qfree(v29);
            v13 = HIDWORD(v26[0]);
            v12 = v21;
          }
          v15 = 1;
          if ( v25 )
            v15 = 2;
          v20 = v12;
          a5[6].m128i_i32[2] = v15;
          v16 = a5->m128i_i64[0];
          a5[1].m128i_i32[2] = 4;
          a5[3].m128i_i64[0] = v16;
          sub_11C810(
            (__int64)&a5[3].m128i_i64[1],
            *(_QWORD *)(**(_QWORD **)(a1 + 48) + 112LL),
            *(_QWORD *)(v24 + 2120),
            v13,
            v16,
            0);
          sub_118810(&a5[5].m128i_i8[8], (char *)v26);
          a5[1].m128i_i32[3] |= 0x80u;
          sub_133640(a2, a5, 9u);
          sub_1B1800(&a5[1].m128i_i32[2]);
          sub_68EA0((__int64)"added user minsn %a(%d): %s\n", 0.0, a5->m128i_i64[0], (const char *)a5->m128i_u32[3]);
          break;
        }
        sub_2B05F0((__int64)"Please specify the operand size");
        v14 = v29;
        if ( v29 )
        {
LABEL_17:
          *(_QWORD *)&v30 = 0;
          qfree(v14);
        }
      }
      else
      {
        sub_2B05F0((__int64)"Unacceptable operand type");
LABEL_28:
        v14 = v29;
        if ( v29 )
          goto LABEL_17;
      }
    }
  }
  sub_118BA0((__int64)v26);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  return v20;
}
