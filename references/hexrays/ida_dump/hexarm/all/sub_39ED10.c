__int64 __fastcall sub_39ED10(__int64 a1, __m128 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 *v11; // rbp
  __int64 *v12; // r14
  __m128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  int v17; // [rsp+8h] [rbp-50h]
  __m128 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+20h] [rbp-38h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v16, &callui, a5, a6, a7);
  v7 = v16;
  v8 = sub_38A180(a1);
  if ( v8 )
    goto LABEL_2;
  if ( !sub_3BED80(v7) )
    return v20 - __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 1008);
  v11 = *(__int64 **)(v10 + 40);
  v12 = &v11[*(_QWORD *)(v10 + 48)];
  if ( v11 != v12 )
  {
    while ( 1 )
    {
      v8 = *v11;
      if ( *v11 )
      {
        if ( (unsigned __int8)sub_38A0C0(*v11, v7) )
          break;
      }
      if ( v12 == ++v11 )
        goto LABEL_10;
    }
LABEL_2:
    if ( (int)sub_33D600(
                0,
                (__int64)"AUTOHIDE REGISTRY\n"
                         "HIDECANCEL\n"
                         "Copying pseudocode to disassembly listing will destroy\n"
                         "existing anterior and posterior comments.\n"
                         "Do you want to continue?") > 0 )
    {
      sub_39E480(v8, a2);
      return sub_38C740(v8, 7);
    }
    return v20 - __readfsqword(0x28u);
  }
LABEL_10:
  if ( (int)sub_33D600(
              0,
              (__int64)"AUTOHIDE REGISTRY\n"
                       "HIDECANCEL\n"
                       "Copying pseudocode to disassembly listing will destroy\n"
                       "existing anterior and posterior comments.\n"
                       "Do you want to continue?") <= 0 )
    return v20 - __readfsqword(0x28u);
  v13 = (__m128)_mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  v17 = 0;
  v16 = 0xFFFFFFFFLL;
  v19 = -1;
  v18 = v13;
  v14 = sub_394E20((__int64)&v16, 0x18u, 0, 0);
  v15 = v14;
  if ( !v14 )
    return v20 - __readfsqword(0x28u);
  sub_39E480(v14, v13);
  return sub_38A320(*(_QWORD *)(v15 + 16));
}
