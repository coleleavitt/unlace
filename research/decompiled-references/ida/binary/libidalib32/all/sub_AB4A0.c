unsigned __int64 __fastcall sub_AB4A0(__int64 a1, __int64 **a2, unsigned int a3)
{
  __int64 v3; // rax
  int v4; // r11d
  __int64 v5; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // r12
  char v8; // dl
  int v9; // eax
  int v11; // eax
  _QWORD *v12; // rdi
  __m128i *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-458h] BYREF
  __m128i v17; // [rsp+8h] [rbp-450h] BYREF
  _BYTE v18[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v19; // [rsp+428h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v3 = sub_A0850(a1, a3);
  if ( !*(_DWORD *)(v3 + 8) )
    return v19 - __readfsqword(0x28u);
  v5 = v3;
  v6 = (_DWORD *)sub_A0850(a1, v4 + 1);
  v7 = v6;
  if ( (dword_250AA4 & 1) == 0
    || !v6[2]
    || v6[3] != *(_DWORD *)(v5 + 12)
    || (v11 = v6[4], v11 == -1)
    || v11 != *(_DWORD *)(v5 + 16) )
  {
    sub_94360(*a2);
    v8 = is_mapped();
    v9 = *(_DWORD *)(v5 + 8);
    if ( v8 )
    {
      if ( (unsigned int)(v9 - 5) > 1 )
      {
        if ( *(_BYTE *)(TProgram::application + 352LL) )
          get_nice_colored_name();
        else
          sub_94360(*a2 + 3);
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
        sub_94360(*a2 + 3);
      sub_AAEA0(v5, v18, 1024);
      sub_9C320((__int64)(*a2 + 6), v18);
      goto LABEL_11;
    }
LABEL_17:
    if ( *(_DWORD *)(v5 + 16) != -1 )
      sub_94360(*a2 + 3);
    goto LABEL_11;
  }
  sub_9C320((__int64)*a2, "=");
  sub_9C320((__int64)(*a2 + 3), "=");
  sub_9C320((__int64)(*a2 + 6), "=");
LABEL_11:
  if ( v7[2] == 1
    && *(_DWORD *)(v5 + 8) == 1
    && (v12 = *(_QWORD **)(v5 + 24)) != nullptr
    && v7[3] != *(_DWORD *)(v5 + 12)
    && v12[4] == *(_DWORD *)(dbg + 64LL) )
  {
    v16 = 0;
    v17 = 0;
    sub_AA100(v12, &v16, 1);
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
    sub_AAEA0(v5, v18, 1024);
    sub_9C320((__int64)(*a2 + 9), v18);
  }
  return v19 - __readfsqword(0x28u);
}

