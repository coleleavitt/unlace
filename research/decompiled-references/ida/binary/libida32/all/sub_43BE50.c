__int64 __fastcall sub_43BE50(__m128i *a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // ebx
  __int64 v6; // r15
  _DWORD *v7; // rax
  unsigned int v9; // eax
  unsigned int v10; // r14d
  __int64 ea_name; // rax
  char *v12; // rdi
  int v13; // eax
  int v14; // r9d
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rsi
  const char *v18; // [rsp+0h] [rbp-D8h]
  char *v19; // [rsp+0h] [rbp-D8h]
  int v20; // [rsp+Ch] [rbp-CCh]
  unsigned int v21; // [rsp+18h] [rbp-C0h] BYREF
  int v22; // [rsp+1Ch] [rbp-BCh] BYREF
  char *s1; // [rsp+20h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-B0h]
  __int64 v25; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v26; // [rsp+40h] [rbp-98h]
  __int64 v27; // [rsp+48h] [rbp-90h]
  unsigned __int64 v28; // [rsp+50h] [rbp-88h]
  void *ptr; // [rsp+58h] [rbp-80h]
  __int128 v30; // [rsp+60h] [rbp-78h]
  __int128 v31; // [rsp+70h] [rbp-68h] BYREF
  void (__fastcall *v32)(__int128 *, __int128 *, __int64); // [rsp+80h] [rbp-58h]
  __int64 v33; // [rsp+88h] [rbp-50h]
  unsigned __int64 v34; // [rsp+98h] [rbp-40h]

  v3 = a2 + a3;
  v5 = a2;
  v34 = __readfsqword(0x28u);
  v6 = sub_4EE820(&a1[97], a2);
  v7 = (_DWORD *)sub_4EE820(&a1[97], v3 - 1);
  if ( v7 != (_DWORD *)v6 )
  {
    if ( !v6 )
      return 0;
    if ( !v7 )
      return 0;
    if ( (*(_BYTE *)(a1[1].m128i_i64[0] + 8) & 0x20) == 0 )
      return 0;
    if ( *v7 != *(_DWORD *)(v6 + 4) )
      return 0;
    v31 = 0;
    v32 = nullptr;
    v33 = 0;
    sub_3CC010((_DWORD)a1, *v7, 0);
    if ( !(unsigned __int8)sub_668550((int)a1) )
      return 0;
  }
  if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x600) != 0x200 )
    goto LABEL_9;
  v9 = sub_3BD5D0((__int64)a1, a2);
  v10 = v9;
  if ( (_DWORD)a2 == v9 || (get_flags_ex(v9, 4) & 0x4000) == 0 )
    goto LABEL_9;
  si128 = 0;
  s1 = nullptr;
  ea_name = get_ea_name(&s1, v10, 0, 0);
  v12 = s1;
  if ( ea_name <= 0 || !si128.m128i_i64[0] )
    goto LABEL_25;
  v18 = s1;
  v13 = strncmp(s1, "jpt_", 4u);
  LODWORD(v12) = (_DWORD)v18;
  v20 = 1;
  v15 = 4;
  if ( v13 )
  {
    v12 = (char *)v18;
    if ( strncmp(v18, "funcs_", 6u) )
      goto LABEL_25;
    v20 = 2;
    v15 = 6;
  }
  v16 = qsscanf(v15 + (int)v12, (int)"%a%n", (int)&v21, (int)&v22, v15, v14, v15);
  v12 = s1;
  if ( v16 != 1 || &v19[v22] != (char *)((si128.m128i_i64[0] == 0) + si128.m128i_i64[0] - 1) )
  {
LABEL_25:
    if ( v12 )
    {
      si128.m128i_i64[0] = 0;
      qfree(v12);
    }
    goto LABEL_9;
  }
  if ( s1 )
  {
    si128.m128i_i64[0] = 0;
    qfree(s1);
  }
  if ( v20 == 1 )
  {
    v26 = 0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
    s1 = (_BYTE *)(&loc_7FFFF8 + 8);
    v25 = 0;
    v27 = 0;
    v28 = 0xFFFFFFFF00000002LL;
    ptr = nullptr;
    v30 = 0;
    if ( get_switch_info(&s1, v21) <= 0
      || si128.m128i_i32[0] != v10
      || ((unsigned int)s1 & 0x800000) != 0 && (int)v28 > 1 && ((unsigned __int8)s1 & 0x10) != 0 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        qfree(ptr);
      }
      goto LABEL_9;
    }
    v17 = v21;
    sub_43B790(a1, v21, (__int64)&s1);
    del_switch_info(v21, v17);
    if ( ptr )
    {
      *(_QWORD *)&v30 = 0;
      qfree(ptr);
    }
  }
  sub_3A1A90(a1, v21, v21 + 1, 0x28u);
LABEL_9:
  if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, v5, 4) >> 8) & 6) == 0 )
    sub_4DBE60(a1, v5, 1);
  v31 = 0;
  v32 = nullptr;
  v33 = 0;
  sub_3CC010((_DWORD)a1, v5, 2);
  if ( v32 )
    v32(&v31, &v31, 3);
  sub_39F720((__int64)a1, v5, v3, 0x1Eu);
  return 1;
}

