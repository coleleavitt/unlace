void __fastcall sub_180B920(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 *v17; // rbp
  int v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // edx
  char *v22; // r15
  int v23; // eax
  int v24; // edx
  size_t n; // [rsp+10h] [rbp-E8h]
  char *s1; // [rsp+18h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-D0h] BYREF
  char *s; // [rsp+30h] [rbp-C8h] BYREF
  int v29; // [rsp+38h] [rbp-C0h]

  if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 && (unsigned int)sub_15D8710((__int64)a3) == 2 )
  {
    v16 = a3[1].m128i_i32[2];
    if ( v16 < 0 )
    {
      v17 = (__int64 *)a1[34];
      while ( 1 )
      {
        v18 = sub_1021B90((__int64)v17, v16);
        sub_1022900((__int64)&s, v17, v18, 1);
        if ( !s )
          break;
        s1 = s;
        n = j__strlen(s);
        if ( n != j__strlen("<scratch space>") || n && memcmp(s1, "<scratch space>", n) )
          break;
        v21 = v16;
        do
        {
          if ( v16 < 0 )
          {
            if ( (unsigned __int8)sub_1020490((__int64)v17, v16, nullptr) )
            {
              v16 = sub_10205A0((__int64)v17, v16);
            }
            else
            {
              s = (char *)sub_101FC50((__int64)v17, v16);
              v16 = (int)s;
              v29 = v24;
            }
            if ( v16 >= 0 )
              v21 = v16;
            else
              v21 = sub_1021B90((__int64)v17, v16);
          }
          sub_1022900((__int64)&s, v17, v21, 1);
          v22 = s;
          if ( !s || strlen(s) != 15 )
            break;
          if ( *(_QWORD *)v22 == 0x686374617263733CLL
            && *((_DWORD *)v22 + 2) == 1634759456
            && *((_WORD *)v22 + 6) == 25955 )
          {
            v23 = 0;
            if ( v22[14] == 62 )
              continue;
          }
          v23 = 1;
          v21 = v16;
        }
        while ( !v23 );
        if ( v16 >= 0 )
          goto LABEL_16;
      }
      v19 = sub_1021B90((__int64)v17, v16);
      if ( !v19 || (v20 = sub_1021680((__int64)v17, v19)) == 0 || v20 == 3 )
      {
LABEL_16:
        v16 = a3[1].m128i_i32[2];
        goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      sub_168B9F0((__int64)&s, a1 + 1, v16, 0x1AB5u, 0);
      v27 = a3[1].m128i_i64[1];
      sub_1587DB0((__int64)&s, &v27);
      sub_15F7200(&s);
    }
  }
  v9 = (_QWORD *)a1[31];
  v10 = v9[294];
  v9[304] += 40LL;
  v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9[295] >= (unsigned __int64)&v11[2].m128i_u64[1] && v10 )
    v9[294] = (char *)v11 + 40;
  else
    v11 = (__m128i *)sub_986170((__int64)(v9 + 294), 40, 40, 3, a5, a6);
  sub_B0EB70(v11, a1[31], a3);
  sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
}
