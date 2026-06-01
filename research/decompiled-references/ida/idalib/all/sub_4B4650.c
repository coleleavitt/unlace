__int64 __fastcall sub_4B4650(__int64 a1, __int64 a2, int a3, const __m128i *a4)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 *v8; // r13
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  unsigned int v12; // eax
  int v13; // eax
  __m128i v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v4 = a1;
  v5 = (int)a2;
  v16 = __readfsqword(0x28u);
  if ( (unsigned int)get_undo_state() == 2 && !*(_BYTE *)(a1 + 168) && !errorexit )
  {
    if ( (_DWORD)a2 == 1 )
    {
      if ( a3 != 1087 )
      {
        a2 = 16;
        a1 = 45;
        v13 = (unsigned __int8)getinf_flag(45, 16) == 0 ? 24 : 27;
        if ( a3 <= 20 || a3 > v13 )
        {
LABEL_23:
          *(_BYTE *)(v4 + 168) = 1;
          sub_4B3580(
            (int)"Bad event detected during undo: idx=%d event=%d\n"
                 "Please tell us about your last actions before this error.",
            (unsigned int)v5,
            (unsigned int)a3);
        }
      }
    }
    else if ( (_DWORD)a2 == 8 )
    {
      if ( a3 != 44 )
        goto LABEL_23;
    }
    else if ( (_DWORD)a2 || (unsigned int)(a3 - 85) > 1 )
    {
      goto LABEL_23;
    }
  }
  if ( (get_merge_state(a1, a2) & 2) != 0 && !sub_458170(v5, (unsigned int)a3) )
    return 0;
  v8 = *(__int64 **)(v4 + 8 * v5);
  if ( v8 )
  {
    while ( 1 )
    {
      v14 = _mm_loadu_si128(a4);
      v15 = a4[1].m128i_i64[0];
      if ( *((_BYTE *)v8 + 28) )
        break;
      v10 = v8[1];
      v11 = **(__int64 (__fastcall ***)(__int64, __int64))v10;
      if ( v11 != sub_4B3650 )
      {
        result = ((__int64 (__fastcall *)(__int64, _QWORD, __m128i *))v11)(v10, a3, &v14);
LABEL_6:
        if ( result )
          return result;
        goto LABEL_7;
      }
      v12 = *(_DWORD *)(v10 + 16);
      if ( v12 <= 8 && (v12 != 1 || a3 != 23) )
        sub_368890();
LABEL_7:
      v8 = (__int64 *)*v8;
      if ( !v8 )
        return 0;
    }
    result = ((__int64 (__fastcall *)(__int64, _QWORD, __m128i *))v8[1])(v8[2], (unsigned int)a3, &v14);
    goto LABEL_6;
  }
  return 0;
}
