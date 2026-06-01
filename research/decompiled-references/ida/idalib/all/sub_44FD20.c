__int64 __fastcall sub_44FD20(__m128i *a1, char *a2, __int64 a3)
{
  char *v3; // r13
  __int64 v6; // r15
  _QWORD *v7; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 ea_name; // rax
  char *v12; // rdi
  int v13; // eax
  int v14; // r9d
  __int64 v15; // r8
  int v16; // eax
  void *v17; // rsi
  const char *v18; // [rsp+0h] [rbp-108h]
  char *v19; // [rsp+0h] [rbp-108h]
  int v20; // [rsp+Ch] [rbp-FCh]
  int v21; // [rsp+14h] [rbp-F4h] BYREF
  void *v22; // [rsp+18h] [rbp-F0h] BYREF
  char *s1; // [rsp+20h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-E0h]
  __int128 v25; // [rsp+38h] [rbp-D0h]
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  __int64 v32; // [rsp+78h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-88h]
  __int128 v34; // [rsp+88h] [rbp-80h]
  __int128 v35; // [rsp+A0h] [rbp-68h] BYREF
  void (__fastcall *v36)(__int128 *, __int128 *, __int64); // [rsp+B0h] [rbp-58h]
  __int64 v37; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+C8h] [rbp-40h]

  v3 = &a2[a3];
  v38 = __readfsqword(0x28u);
  v6 = sub_505D70(&a1[101].m128i_u64[1], a2);
  v7 = (_QWORD *)sub_505D70(&a1[101].m128i_u64[1], v3 - 1);
  if ( v7 != (_QWORD *)v6 )
  {
    if ( !v6 )
      return 0;
    if ( !v7 )
      return 0;
    if ( (*(_BYTE *)(a1[1].m128i_i64[0] + 8) & 0x20) == 0 )
      return 0;
    if ( *v7 != *(_QWORD *)(v6 + 8) )
      return 0;
    v35 = 0;
    v36 = nullptr;
    v37 = 0;
    sub_3D19E0((_DWORD)a1, *v7);
    if ( !(unsigned __int8)sub_687700((int)a1) )
      return 0;
  }
  if ( (sub_3BE900(a1, (unsigned __int64)a2, 4) & 0x600) != 0x200 )
    goto LABEL_9;
  v9 = sub_3C2650(a1, (unsigned __int64)a2);
  v10 = v9;
  if ( a2 == (char *)v9 || (get_flags_ex(v9, 4) & 0x4000) == 0 )
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
  v19 = (char *)v15;
  v16 = qsscanf((int)v15 + (int)v12, (unsigned int)"%a%n", (unsigned int)&v22, (unsigned int)&v21, v15, v14);
  v12 = s1;
  if ( v16 != 1 || &v19[v21] != (char *)((si128.m128i_i64[0] == 0) + si128.m128i_i64[0] - 1) )
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
    s1 = (char *)&loc_800000;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    v25 = -1;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0xFFFFFFFFLL;
    v30 = 0;
    v31 = 2;
    v32 = -1;
    ptr = nullptr;
    v34 = 0;
    if ( get_switch_info(&s1, v22) <= 0
      || si128.m128i_i64[0] != v10
      || ((unsigned int)s1 & 0x800000) != 0 && (int)v31 > 1 && ((unsigned __int8)s1 & 0x10) != 0 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v34 = 0;
        qfree(ptr);
      }
      goto LABEL_9;
    }
    v17 = v22;
    sub_44F630(a1, v22, (__int64)&s1);
    del_switch_info(v22, v17);
    if ( ptr )
    {
      *(_QWORD *)&v34 = 0;
      qfree(ptr);
    }
  }
  sub_3A61A0(a1, (unsigned __int64)v22, (unsigned __int64)v22 + 1, 0x28u);
LABEL_9:
  if ( (~((unsigned __int16)sub_3BE900(a1, (unsigned __int64)a2, 4) >> 8) & 6) == 0 )
    sub_4F3480(a1, a2, 1);
  v36 = nullptr;
  v35 = 0;
  v37 = 0;
  sub_3D19E0((_DWORD)a1, (_DWORD)a2);
  if ( v36 )
    v36(&v35, &v35, 3);
  sub_3A4190((__int64)a1, a2, v3, 0x1Eu);
  return 1;
}
