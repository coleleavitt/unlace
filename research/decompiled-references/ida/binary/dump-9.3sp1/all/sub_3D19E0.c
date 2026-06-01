__int64 __fastcall sub_3D19E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, const __m128i *a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  unsigned __int8 v12; // r10
  int v13; // ecx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  const char *v19; // rdx
  const char *v20; // rsi
  unsigned __int8 v21; // [rsp+17h] [rbp-B1h]
  unsigned __int8 v22; // [rsp+17h] [rbp-B1h]
  __int64 v25; // [rsp+28h] [rbp-A0h]
  __int16 v26; // [rsp+3Eh] [rbp-8Ah]
  _QWORD v27[2]; // [rsp+40h] [rbp-88h] BYREF
  const char *v28; // [rsp+50h] [rbp-78h] BYREF
  __int128 v29; // [rsp+58h] [rbp-70h]
  const char *v30; // [rsp+70h] [rbp-58h] BYREF
  __int128 v31; // [rsp+78h] [rbp-50h]
  unsigned __int64 v32; // [rsp+88h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  a5[6].m128i_i32[2] = 0;
  v21 = sub_137E00(a2, (__int64)a5, 9u);
  if ( v21 )
    return v21;
  v28 = nullptr;
  v29 = 0;
  if ( !a4 )
    goto LABEL_8;
  v8 = *a4;
  if ( (unsigned __int8)v8 <= 0xEu )
  {
    v9 = 16994;
    if ( _bittest64(&v9, v8) )
    {
      sub_1B2660((unsigned __int64)a4, (char *)&v28, 6u);
      if ( (unsigned __int64)v29 > 1 )
        tag_remove();
    }
  }
  if ( sub_11E8C0((unsigned int *)a3) )
    v10 = (unsigned __int8)sub_125B60((unsigned __int8 *)(a3 + 64), (__int64)a4, 1u);
  else
LABEL_8:
    v10 = 0;
  v26 = v10;
  v27[0] = 0xFFFFFFFF00000000LL;
  v27[1] = 0;
  v25 = *(_QWORD *)(a1 + 48);
  while ( (unsigned int)sub_33CF00(
                          (__int64)"Insert an assertion\n"
                                   "%A\n"
                                   "<~V~alue       :L::16::>\n"
                                   "<#A register or stack variable, including the size suffix#~O~perand     :q::40::>\n"
                                   "<~I~nsert after:C>>\n"
                                   "\n",
                          0.0) )
  {
    if ( (unsigned __int64)v29 <= 1 )
    {
      sub_2B4E70((__int64)"Please enter the operand", "Example: mov #-1.4, r12.4");
    }
    else
    {
      v31 = 0;
      v30 = nullptr;
      if ( !(unsigned __int8)sub_3E9890(a2, v27, v28, &v30) )
      {
        v19 = s1;
        if ( (_QWORD)v31 )
          v19 = v30;
        v20 = s1;
        if ( (_QWORD)v29 )
          v20 = v28;
        sub_2B4E70((__int64)"%s: %s", v20, v19);
        goto LABEL_28;
      }
      if ( LOBYTE(v27[0]) <= 0xEu && (v11 = 16994, (v12 = _bittest64(&v11, LOBYTE(v27[0]))) != 0) )
      {
        v13 = HIDWORD(v27[0]);
        if ( HIDWORD(v27[0]) != -1 )
        {
          if ( v30 )
          {
            v22 = v12;
            *(_QWORD *)&v31 = 0;
            qfree((__int64)v30);
            v13 = HIDWORD(v27[0]);
            v12 = v22;
          }
          v15 = 1;
          if ( v26 )
            v15 = 2;
          v21 = v12;
          a5[6].m128i_i32[2] = v15;
          v16 = a5->m128i_i64[0];
          a5[1].m128i_i32[2] = 4;
          a5[3].m128i_i64[0] = v16;
          sub_120A10(
            (__int64)&a5[3].m128i_i64[1],
            *(_QWORD *)(**(_QWORD **)(a1 + 48) + 112LL),
            *(_QWORD *)(v25 + 2120),
            v13,
            v16,
            0);
          sub_11CA10(&a5[5].m128i_i8[8], (char *)v27);
          a5[1].m128i_i32[3] |= 0x80u;
          sub_137840(a2, a5, 9, v17);
          sub_1B5B40(&a5[1].m128i_i32[2]);
          sub_6D0A0((__int64)"added user minsn %a(%d): %s\n", 0.0, a5->m128i_i64[0], (const char *)a5->m128i_u32[3]);
          break;
        }
        sub_2B4E70((__int64)"Please specify the operand size");
        v14 = (__int64)v30;
        if ( v30 )
        {
LABEL_17:
          *(_QWORD *)&v31 = 0;
          qfree(v14);
        }
      }
      else
      {
        sub_2B4E70((__int64)"Unacceptable operand type");
LABEL_28:
        v14 = (__int64)v30;
        if ( v30 )
          goto LABEL_17;
      }
    }
  }
  sub_11CDA0((__int64)v27);
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree((__int64)v28);
  }
  return v21;
}
