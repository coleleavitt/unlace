__int64 __fastcall sub_3307C0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rdi
  unsigned __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  int v15; // edx
  __int64 result; // rax
  int v17; // r12d
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 that; // rbx
  unsigned __int64 v24; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 v25; // [rsp+8h] [rbp-190h] BYREF
  __int128 v26; // [rsp+10h] [rbp-188h] BYREF
  __int64 v27; // [rsp+20h] [rbp-178h]
  __int64 v28; // [rsp+28h] [rbp-170h]
  __int64 v29; // [rsp+30h] [rbp-168h]
  char v30; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int64 v31; // [rsp+178h] [rbp-20h] BYREF

  v31 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, (__int64 *)&v24, &v25) )
  {
    v17 = sub_22EDE0(
            (int)"~A~nalyze",
            (int)"~F~orce",
            (int)"~C~ancel",
            1,
            (int)"Perform analysis or force conversion of the selected bytes to instruction(s)?");
    if ( v17 == -1 )
      return 0;
    v18 = v25;
    v19 = v24;
    if ( v24 < v25 )
    {
      do
      {
        v20 = v19++;
        clr_abits(v20, 0x10000000);
      }
      while ( v19 < v18 );
      v18 = v25;
      v19 = v24;
    }
    if ( (unsigned int)sub_32F3B0(
                         v19,
                         v18 - v19,
                         (__int64)"ICON WARNING\nAUTOHIDE DATABASE\nUndefine already existing code/data?",
                         1536,
                         nullptr,
                         nullptr) == -1 )
    {
      return 0;
    }
    else
    {
      sub_1FDB10(a1, a2, a3, a4, v21, v22, a7, a8, v19, (const char *)(v18 - v19));
      that = v24;
      if ( v17 == 1 )
      {
        return (unsigned int)plan_and_wait(v24, v25, 1) != 0;
      }
      else
      {
        while ( that != -1 )
        {
          create_insn(that, 0);
          that = next_that(that, v25, 0, 0);
        }
        return 1;
      }
    }
  }
  else
  {
    v27 = -1;
    v28 = 0;
    v8 = xmmword_8CC810;
    v26 = -1;
    v9 = (unsigned __int64 *)&v30;
    v29 = 0;
    v24 = xmmword_8CC810;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 5;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *(v9 - 2) = 0;
    }
    while ( &v31 != v9 );
    clr_abits(v8, 0x10000000);
    v14 = (int)decode_insn(&v26, v24, v10, v11, v12, v13, 0.0);
    v15 = sub_32F3B0(
            v24,
            v14,
            (__int64)"ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to code?",
            1536,
            nullptr,
            nullptr);
    result = 0;
    if ( v15 == 1 )
      return (int)auto_recreate_insn(v24) > 0;
  }
  return result;
}
