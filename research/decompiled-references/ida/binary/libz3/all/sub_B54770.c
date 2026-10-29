_DWORD *__fastcall sub_B54770(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r12
  _DWORD *v5; // rax
  __int64 v6; // r13
  _DWORD *result; // rax
  __int64 v8; // r13
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rbp
  void *v14; // r12
  __int64 v15; // rax
  void *v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r12
  bool v20; // zf
  char v21; // al
  __int64 v22; // r8
  int v23; // r9d
  const __m128i *v24; // r14
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbp
  __int64 v36; // [rsp+0h] [rbp-C8h]
  int v37[2]; // [rsp+10h] [rbp-B8h]
  int v38[2]; // [rsp+10h] [rbp-B8h]
  __int64 v39; // [rsp+18h] [rbp-B0h]
  unsigned int v40; // [rsp+2Ch] [rbp-9Ch] BYREF
  int v41[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v42; // [rsp+38h] [rbp-90h]
  int v43[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v44[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v45; // [rsp+60h] [rbp-68h] BYREF
  __int64 v46; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v47[88]; // [rsp+70h] [rbp-58h] BYREF

  v3 = a1[173];
  v4 = *(_QWORD *)(v3 + 8) + 24LL;
  v5 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v5 && *(_DWORD *)(v3 + 16) == *v5 && !v5[1]
    || (v6 = a1[173], (result = *(_DWORD **)(sub_15D1F10(a2) + 24)) != nullptr)
    && *(_DWORD *)(v6 + 16) == *result
    && result[1] == 1 )
  {
    if ( *(_WORD *)(a2 + 4)
      || (result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
      || *(_DWORD *)(a1[173] + 16LL) != *result
      || result[1] != 37 )
    {
      v36 = a1[3];
      sub_D56BF0(&v45, a1 + 9, a2);
      v8 = v45;
      if ( v45 && !*(_DWORD *)(v45 + 8) )
        sub_15D7BC0(v46, v45);
      v45 = v4;
      sub_181A6B0(&v46);
      if ( (unsigned __int8)sub_15C5390(*(_QWORD *)(a1[173] + 8LL), a2, &v40) )
      {
        v12 = a1[3];
        memset(v43, 0, sizeof(v43));
        v13 = a1[174];
        *(_QWORD *)v37 = v12;
        v14 = qword_1C7F2C0;
        v44[0] = 1;
        v44[1] = 0;
        if ( v40 > 0x7FFFFFFE )
          sub_182C550(qword_1C7F2C0, v43);
        else
          v43[0] = v40;
        sub_182CBA0(v14, v44);
        BYTE4(v44[0]) &= ~1u;
        LODWORD(v44[0]) = 1;
        v15 = sub_1674520(v13, v43, 3);
        v16 = qword_1C7F2C0;
        v17 = v15;
        sub_182CBA0(qword_1C7F2C0, v43);
        sub_182CBA0(v16, v44);
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v18 = sub_15E1B70(a1[3]);
        v19 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        sub_B52AB0((__int64)a1, v18);
        if ( v17 )
        {
          v20 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(*(_QWORD *)v37, v17);
        }
LABEL_23:
        result = (_DWORD *)sub_182EF00(*(_QWORD *)(v45 + 728), v47);
        if ( v19 )
        {
          v20 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v20 )
            result = (_DWORD *)sub_15D7BC0(v36, v19);
        }
        goto LABEL_26;
      }
      v21 = sub_15C4FC0(*(_QWORD *)(a1[173] + 8LL), a2, (unsigned int)&v46, v9, v10, v11);
      *(_QWORD *)v38 = a1[3];
      if ( v21 )
      {
        sub_B53280((__int64 *)v43, (__int64)a1, a2, a1[3], v22, v23);
        v24 = *(const __m128i **)v43;
        v39 = a1[3];
        if ( *(_QWORD *)v43 )
          ++*(_DWORD *)(*(_QWORD *)v43 + 8LL);
        *(__m128i *)v43 = _mm_loadu_si128(v24 + 2);
        v44[0] = v24[3].m128i_i64[0];
        v25 = sub_15E1AF0(*(_QWORD *)(a1[174] + 8LL));
        v26 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        v27 = sub_15E1B70(a1[3]);
        v19 = v27;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        sub_B52AB0((__int64)a1, v27);
        sub_B537F0((__int64 *)v41, a1);
        sub_B52AB0((__int64)a1, *(__int64 *)v41);
        v28 = *(_QWORD *)v41;
        if ( *(_QWORD *)v41 )
        {
          v29 = v42;
          v20 = (*(_DWORD *)(*(_QWORD *)v41 + 8LL))-- == 1;
          if ( v20 )
            sub_15D7BC0(v29, v28);
        }
        v30 = sub_15E1B70(a1[3]);
        sub_B52AB0((__int64)a1, v30);
        v20 = v24->m128i_i32[2]-- == 1;
        if ( v20 )
          sub_15D7BC0(v39, v24);
        if ( v26 )
        {
          v20 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(*(_QWORD *)v38, v26);
        }
        v20 = v24->m128i_i32[2]-- == 1;
        if ( v20 )
          sub_15D7BC0(*(_QWORD *)v38, v24);
        goto LABEL_23;
      }
      v31 = sub_15D1F10(a2);
      sub_D56E90(v43, a1 + 9, v8, v31);
      v32 = sub_15E1B70(v38[0]);
      v33 = *(_QWORD *)v43;
      v34 = *(_QWORD *)&v43[2];
      v35 = v32;
      if ( v32 )
      {
        ++*(_DWORD *)(v32 + 8);
        if ( !v33 )
        {
          sub_B52AB0((__int64)a1, v32);
LABEL_51:
          v20 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(*(_QWORD *)v38, v35);
          goto LABEL_53;
        }
      }
      else if ( !*(_QWORD *)v43 )
      {
        sub_B52AB0((__int64)a1, 0);
LABEL_53:
        result = (_DWORD *)sub_182EF00(*(_QWORD *)(v45 + 728), v47);
LABEL_26:
        if ( v8 )
        {
          v20 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v20 )
            return (_DWORD *)sub_15D7BC0(v36, v8);
        }
        return result;
      }
      v20 = (*(_DWORD *)(v33 + 8))-- == 1;
      if ( v20 )
        sub_15D7BC0(v34, v33);
      sub_B52AB0((__int64)a1, v35);
      if ( !v35 )
        goto LABEL_53;
      goto LABEL_51;
    }
  }
  return result;
}

