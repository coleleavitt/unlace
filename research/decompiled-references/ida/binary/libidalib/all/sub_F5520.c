__int64 __fastcall sub_F5520(__int64 a1, __int64 a2, __int64 a3, __int16 a4, int a5, unsigned int a6)
{
  const __m128i *v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v14; // rax
  __int64 v15; // r15
  int flags; // eax
  __int64 i; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  _QWORD *v22; // rax
  int v24; // [rsp+14h] [rbp-C4h]
  __int64 (**v25)(); // [rsp+20h] [rbp-B8h] BYREF
  int v26; // [rsp+28h] [rbp-B0h]
  __int64 v27; // [rsp+30h] [rbp-A8h]
  __int64 v28; // [rsp+40h] [rbp-98h]
  __int128 v29; // [rsp+48h] [rbp-90h]
  __m128i v30; // [rsp+60h] [rbp-78h] BYREF
  __m128i v31; // [rsp+70h] [rbp-68h]
  __int64 v32; // [rsp+80h] [rbp-58h]
  __int64 (***v33)(); // [rsp+88h] [rbp-50h]
  unsigned __int64 v34; // [rsp+98h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v27 = a3;
  v26 = a4;
  v25 = off_230E18;
  if ( sub_F5000(a3) == -1 && *(_BYTE *)(a1 + 773) )
    idaplace_t__adjust();
  v9 = (const __m128i *)sub_15D8F0(a1 + 440);
  v33 = &v25;
  v30 = _mm_loadu_si128(v9);
  v10 = _mm_loadu_si128(v9 + 1);
  v11 = v9[2].m128i_i64[0];
  v31 = v10;
  v32 = v11;
  v33 = (__int64 (***)())idaplace_t__clone();
  if ( a5 >= 0 )
    v31.m128i_i16[7] = a5;
  v12 = sub_15EB60(a1, a2, &v30, a6);
  if ( v12 == 1 )
  {
    v14 = sub_F5490(a1, *(_QWORD *)(a2 + 40));
    v24 = -1;
    v15 = v14;
    if ( *(_BYTE *)(a1 + 773) )
    {
      if ( a3 != v14 && a4 )
      {
        flags = get_flags_ex();
        if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
          clr_abits();
        v29 = 0;
        v28 = 0;
        generate_disassembly();
        if ( (_QWORD)v29 )
        {
          for ( i = 0; ; ++i )
          {
            addr_from_tag();
            if ( a3 != -1 )
            {
              v18 = i - 1;
              goto LABEL_20;
            }
            if ( i + 1 >= (unsigned __int64)v29 )
              break;
          }
          v18 = i;
        }
        else
        {
          v18 = -1;
        }
LABEL_20:
        if ( v15 != -1 )
          v24 = v18;
        v19 = v28;
        if ( v28 )
        {
          v20 = v29;
          if ( (_QWORD)v29 )
          {
            v21 = 0;
            do
            {
              v22 = (_QWORD *)(v19 + 24 * v21);
              if ( *v22 )
              {
                v22[1] = 0;
                qfree();
                v19 = v28;
              }
              ++v21;
            }
            while ( v20 != v21 );
          }
          *(_QWORD *)&v29 = 0;
          qfree();
        }
        if ( v24 != -1 )
          *(_DWORD *)(*(_QWORD *)(a2 + 40) + 8LL) = v24;
      }
    }
  }
  if ( v33 )
    qfree();
  return v12;
}

