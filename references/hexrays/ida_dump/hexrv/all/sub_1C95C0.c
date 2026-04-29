__int64 __fastcall sub_1C95C0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 that; // rbx
  unsigned __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // r9
  char *v14; // rdi
  unsigned __int64 v15; // r14
  char *v16; // rax
  __int64 v17; // r9
  __int64 v18; // r10
  char *v19; // r13
  char *v20; // r11
  signed __int64 v21; // r8
  unsigned __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // [rsp-8h] [rbp-1C8h]
  signed __int64 v27; // [rsp+0h] [rbp-1C0h]
  __int64 v28; // [rsp+8h] [rbp-1B8h]
  unsigned __int64 v29; // [rsp+10h] [rbp-1B0h] BYREF
  __int128 v30; // [rsp+18h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-198h]
  __int64 v32; // [rsp+30h] [rbp-190h]
  __int64 v33; // [rsp+38h] [rbp-188h]
  char v34; // [rsp+40h] [rbp-180h] BYREF
  unsigned __int64 v35; // [rsp+180h] [rbp-40h] BYREF

  that = a2;
  v35 = __readfsqword(0x28u);
  v6 = (unsigned __int64 *)&v34;
  v30 = -1;
  v31 = -1;
  v32 = 0;
  v33 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v35 != v6 );
  if ( (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) == 0 )
    goto LABEL_5;
  while ( 1 )
  {
    that = next_that(that, a3, sub_1B3B30, 0);
LABEL_5:
    if ( that >= a3 )
      break;
    if ( (int)((__int64 (__fastcall *)(__int128 *, unsigned __int64, __int64, __int64, __int64, __int64, double, __int64, signed __int64, __int64, unsigned __int64))decode_insn)(
                &v30,
                that,
                v7,
                v8,
                v9,
                v10,
                0.0,
                v26,
                v27,
                v28,
                v29) > 0
      && (get_flags_ex(v31 + WORD1(v32), 4) & 0x10000) != 0 )
    {
      v29 = 0;
      result = sub_CBAB0(0x51u, &v29, &v30);
      if ( !result )
        return result;
      v12 = v29;
      if ( v29 )
      {
        v13 = a1[150];
        v14 = (char *)a1[149];
        v15 = that + WORD1(v32);
        if ( v13 && *(_QWORD *)&v14[16 * v13 - 16] >= v15 )
        {
          v16 = (char *)sub_1C8950(v14, (__int64)&v14[16 * v13], that + WORD1(v32));
          v19 = v16;
          if ( v20 != v16 && v15 == *(_QWORD *)v16 && v12 != *((_QWORD *)v16 + 1) )
          {
            if ( !under_debugger )
              sub_37DDE0(51735);
            BUG();
          }
          v21 = v16 - v14;
          if ( a1[151] < (unsigned __int64)(v17 + 1) )
          {
            v27 = v16 - v14;
            v24 = qvector_reserve(a1 + 149, v14, v17 + 1, 16);
            v25 = a1[150];
            v21 = v19 - v14;
            a1[149] = v24;
            v18 = 16 * v25;
            v19 = (char *)(v19 - v14 + v24);
          }
          memmove(v19 + 16, v19, v18 - v21);
          *(_QWORD *)v19 = v15;
          *((_QWORD *)v19 + 1) = v12;
          ++a1[150];
        }
        else
        {
          if ( a1[151] < (unsigned __int64)(v13 + 1) )
          {
            v23 = qvector_reserve(a1 + 149, a1[149], v13 + 1, 16);
            v13 = a1[150];
            a1[149] = v23;
            v14 = (char *)v23;
          }
          v22 = (unsigned __int64 *)&v14[16 * v13];
          *v22 = v15;
          v22[1] = v12;
          ++a1[150];
        }
      }
    }
  }
  return 1;
}
