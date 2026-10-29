unsigned __int64 __fastcall sub_ABAE0(__int64 a1, __int64 **a2, unsigned int a3)
{
  __int64 v3; // rax
  int v4; // r11d
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  char v8; // dl
  int v9; // eax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __m128i *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-458h] BYREF
  __m128i v17; // [rsp+8h] [rbp-450h] BYREF
  _BYTE v18[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v19; // [rsp+428h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v3 = sub_A0A20(a1, a3);
  if ( !*(_DWORD *)(v3 + 8) )
    return v19 - __readfsqword(0x28u);
  v5 = v3;
  v6 = sub_A0A20(a1, v4 + 1);
  v7 = v6;
  if ( (dword_251B24 & 1) == 0
    || !*(_DWORD *)(v6 + 8)
    || *(_DWORD *)(v6 + 12) != *(_DWORD *)(v5 + 12)
    || (v11 = *(_QWORD *)(v6 + 16), v11 == -1)
    || v11 != *(_QWORD *)(v5 + 16) )
  {
    sub_94440(*a2);
    v8 = is_mapped();
    v9 = *(_DWORD *)(v5 + 8);
    if ( v8 )
    {
      if ( (unsigned int)(v9 - 5) > 1 )
      {
        if ( *(_BYTE *)(TProgram::application + 352LL) )
          get_nice_colored_name();
        else
          sub_94440(*a2 + 3);
        v16 = 0;
        v17 = 0;
        generate_disasm_line();
        qstr2user();
        goto LABEL_11;
      }
    }
    else if ( v9 != 5 && v9 != 6 )
    {
      goto LABEL_17;
    }
    if ( *(_QWORD *)(v5 + 24) )
    {
      if ( *(_BYTE *)(TProgram::application + 352LL) )
        get_nice_colored_name();
      else
        sub_94440(*a2 + 3);
      sub_AB4E0(v5, v18, 1024);
      sub_9C440((__int64)(*a2 + 6), v18);
      goto LABEL_11;
    }
LABEL_17:
    if ( *(_QWORD *)(v5 + 16) != -1 )
      sub_94440(*a2 + 3);
    goto LABEL_11;
  }
  sub_9C440((__int64)*a2, "=");
  sub_9C440((__int64)(*a2 + 3), "=");
  sub_9C440((__int64)(*a2 + 6), "=");
LABEL_11:
  if ( *(_DWORD *)(v7 + 8) == 1
    && *(_DWORD *)(v5 + 8) == 1
    && (v12 = *(_QWORD **)(v5 + 24)) != nullptr
    && *(_DWORD *)(v7 + 12) != *(_DWORD *)(v5 + 12)
    && v12[4] == *(_DWORD *)(dbg + 64LL) )
  {
    v16 = 0;
    v17 = 0;
    sub_AA740(v12, &v16, 1);
    v13 = (__m128i *)*a2;
    v14 = (*a2)[9];
    v15 = (*a2)[11];
    v13[4].m128i_i64[1] = v16;
    v13[5] = _mm_loadu_si128(&v17);
    v16 = v14;
    v17.m128i_i64[1] = v15;
    if ( v14 )
    {
      v17.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    sub_AB4E0(v5, v18, 1024);
    sub_9C440((__int64)(*a2 + 9), v18);
  }
  return v19 - __readfsqword(0x28u);
}

