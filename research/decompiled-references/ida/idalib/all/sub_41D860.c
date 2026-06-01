unsigned __int64 __fastcall sub_41D860(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  void (__fastcall *v15)(__int64, unsigned __int64, __int64 *); // rax
  __int64 fixup_handler; // rbp
  __int64 *v19; // rax
  __int64 v20; // [rsp-8h] [rbp-90h]
  __int64 v21; // [rsp+0h] [rbp-88h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+10h] [rbp-78h]
  __int64 v24; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v21 = a2;
  v22 = a3;
  v23 = a4;
  v29 = __readfsqword(0x28u);
  if ( a2 == -1 && !a4 )
  {
    v19 = (__int64 *)sub_506150(a1 + 203);
    v21 = *(_QWORD *)(a1[3] + 16LL) & (*v19 - a3);
    v22 = *v19;
    v23 = *(_QWORD *)(a1[3] + 16LL) & (*(_QWORD *)(sub_5060F0(a1 + 203, -1) + 8) - v22);
  }
  if ( a1[314] )
  {
    v5 = *(_QWORD *)(a1[312] + 32LL);
    if ( v5 != -1 )
    {
      while ( 1 )
      {
        v25 = 0;
        v27 = 0;
        v28 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
        if ( !(unsigned __int8)get_fixup(&v25, v5) )
        {
          if ( !under_debugger )
            interr(516);
          BUG();
        }
        fixup_handler = get_fixup_handler(v25);
        if ( !fixup_handler )
          goto LABEL_16;
        if ( (v25 & 0x100000000LL) != 0 )
          break;
        if ( si128.m128i_i64[1] == -1 )
        {
          v6 = 0;
          v7 = v27 & *(_QWORD *)(a1[3] + 16LL);
          goto LABEL_22;
        }
        v6 = 16 * sel2para(si128.m128i_i64[1]);
        v7 = (v6 + v27) & *(_QWORD *)(a1[3] + 16LL);
        if ( (v25 & 0x100000000LL) != 0 )
          goto LABEL_8;
LABEL_22:
        v10 = sub_684CE0((_DWORD)a1, v7, v21, v22, v23, 0, 0);
        v9 = v20;
        if ( v10 != v7 )
          goto LABEL_10;
LABEL_16:
        v5 = sub_41BA40((__int64)a1, v5);
        if ( v5 == -1 )
          return v29 - __readfsqword(0x28u);
      }
      v6 = si128.m128i_i64[0];
      v7 = (si128.m128i_i64[0] + v27) & *(_QWORD *)(a1[3] + 16LL);
LABEL_8:
      v8 = sub_684CE0((_DWORD)a1, v6, v21, v22, v23, 0, 0);
      if ( v8 != v6 )
      {
        si128.m128i_i64[0] = v8;
        v24 = v8;
        v6 = v8;
        v10 = sub_684CE0((_DWORD)a1, v7, v21, v22, v23, 0, 0);
LABEL_10:
        v13 = a1[3];
        v14 = v10 - v6;
        if ( *(_DWORD *)(v13 + 24) != 8 )
          v14 = (int)v14;
        if ( v27 != v14 )
        {
          v15 = *(void (__fastcall **)(__int64, unsigned __int64, __int64 *))(fixup_handler + 48);
          v27 = v14;
          if ( v15 )
            v15(fixup_handler, v5, &v25);
          else
            sub_41A4A0(v13, fixup_handler, v5, v14, v28);
        }
        ((void (__fastcall *)(unsigned __int64, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))set_fixup)(
          v5,
          &v25,
          v9,
          v14,
          v11,
          v12,
          v21,
          v22,
          v23,
          v24);
        goto LABEL_16;
      }
      goto LABEL_22;
    }
  }
  return v29 - __readfsqword(0x28u);
}
