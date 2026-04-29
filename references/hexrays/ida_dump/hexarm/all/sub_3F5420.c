__int64 __fastcall sub_3F5420(__int64 a1, double a2)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  char v6; // al
  const char *v7; // rcx
  const char *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // [rsp+8h] [rbp-58h] BYREF
  unsigned __int8 v13[24]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v2 + 80) != 8 )
    return *(unsigned int *)(v2 + 428);
  if ( (getinf(57) & 0xF) != 1 || *(_BYTE *)(a1 + 876) )
  {
    v2 = *(_QWORD *)(a1 + 832);
    return *(unsigned int *)(v2 + 428);
  }
  v12 = 0;
  v6 = getinf_flag(3, 2048);
  v7 = "struct _TEB *;";
  v8 = "NtCurrentTeb";
  if ( v6 )
  {
    v7 = "struct KPCR *;";
    v8 = "KeGetPcr";
  }
  if ( !(unsigned __int8)parse_decl(&v12, 0, 0, v7, 1) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8CAu, 0, a2);
    BUG();
  }
  v9 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v8, &v12, 0, 0, 1);
  v10 = *(_QWORD *)(v9 + 72);
  *(_QWORD *)v13 = 1;
  *(_DWORD *)(v10 + 280) |= 0x14u;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 428LL);
  *(_QWORD *)&v13[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v9 + 68)), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  v11 = sub_124BF0(v9, v13);
  sub_11C7E0((__int64)v13);
  sub_B4CD0(*(_QWORD **)(a1 + 16), (__int64)v11);
  sub_151110(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 832) + 712LL);
  clear_tinfo_t(&v12);
  return v3;
}
