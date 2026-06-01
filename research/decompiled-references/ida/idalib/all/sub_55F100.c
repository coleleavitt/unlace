__int64 __fastcall sub_55F100(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // edx
  unsigned __int8 v5; // al
  _BYTE *v7; // rax
  const char *v8; // r8
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // rax
  char *v12; // rbp
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // rdx
  int *v22; // rax
  int *v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned int v28; // r12d
  int v29; // r13d
  unsigned int v30; // r14d
  __int64 flags_by_size; // rax
  __int64 v32; // rax
  const char *v33; // rbp
  _BYTE *v34; // rax
  int v35; // eax
  __int64 v36; // rax
  const char *v37; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+8h] [rbp-40h]
  int v40[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v40 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_55CB40((_QWORD *)a1) )
    return sub_381B20(a1, nullptr);
  v2 = *(_QWORD *)(a1 + 248);
  if ( !v2 )
  {
    if ( *(_QWORD *)(a1 + 240) == -2 && *(_DWORD *)(a1 + 336) )
    {
      v7 = sub_39CE40(*(_QWORD **)(*(_QWORD *)(a1 + 200) + 1672LL));
      v8 = haystack;
      if ( *(_QWORD *)(a1 + 296) )
        v8 = *(const char **)(a1 + 288);
      sub_35CEC0(a1, 0x80000000LL, (__int64)&unk_2340AB0, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 1120LL), v8, v7);
    }
    else
    {
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(a1, &byte_22F0C30, 0xFFFFFFFFLL);
    }
    return sub_381B20(a1, nullptr);
  }
  if ( *(_BYTE *)(v2 + 100) == 12 )
    return sub_381B20(a1, nullptr);
  v3 = *(_QWORD *)(a1 + 240);
  if ( v3 == -2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 80LL))(*(_QWORD *)(a1 + 208)) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 72LL))(*(_QWORD *)(a1 + 208));
      sub_55E570(a1, v11);
    }
    else
    {
      sub_55B720((_QWORD *)a1);
    }
    return sub_381B20(a1, nullptr);
  }
  if ( v3 == -1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 80LL))(*(_QWORD *)(a1 + 208)) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
      sub_3804E0(a1, (__int64)"end of stack variables");
    }
    else
    {
      sub_55BDA0((__int64 *)a1);
    }
    return sub_381B20(a1, nullptr);
  }
  v4 = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 144) = v4 | 0x890;
  v5 = *(_BYTE *)(v2 + 100);
  if ( v5 == 45 )
  {
    if ( !*(_QWORD *)(a1 + 272) )
    {
      if ( !under_debugger )
        interr(3117);
LABEL_69:
      BUG();
    }
    v12 = *(char **)(*(_QWORD *)(a1 + 200) + 1240LL);
    if ( v12 )
    {
      v13 = *v12;
      if ( v13 > 0x7F )
        goto LABEL_30;
    }
    else
    {
      v13 = 61;
      v12 = "=";
    }
    v35 = ispunct(v13);
    v14 = 9;
    if ( v35 )
    {
LABEL_31:
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v12, v14);
      v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v15 == sub_35CB90 )
      {
        v16 = *(_QWORD *)(a1 + 32);
        if ( v16 )
        {
          v17 = v16 + 1;
          v18 = *(_QWORD *)(a1 + 32);
          --v16;
        }
        else
        {
          v18 = 1;
          v17 = 2;
        }
        v19 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v17 )
        {
          v36 = qvector_reserve(a1 + 24, v19, v17, 1);
          *(_QWORD *)(a1 + 24) = v36;
          v19 = v36;
        }
        *(_QWORD *)(a1 + 32) = v17;
        *(_BYTE *)(v19 + v16) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18) = 0;
      }
      else
      {
        v15((_QWORD *)a1, 32);
      }
      v20 = **(_QWORD **)(a1 + 248);
      if ( !v20 )
        sub_555E00();
      v21 = *(_QWORD *)(v20 + 32);
      if ( !v21 )
        goto LABEL_44;
      v22 = *(int **)(v20 + 24);
      v23 = &v22[v21];
      if ( v22 == v23 )
        goto LABEL_44;
      v24 = *(_QWORD *)(a1 + 240);
      v25 = 0;
      while ( 1 )
      {
        v26 = *v22;
        v27 = v25;
        v25 += v26;
        if ( v24 < v25 )
          break;
        if ( v23 == ++v22 )
          goto LABEL_44;
      }
      if ( v24 != v27 || (v28 = 23, v26 <= 1) )
      {
LABEL_44:
        v28 = 24;
        if ( (*(_BYTE *)(v20 + 52) & 0x60) == 0x20 )
          v28 = 30;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v28);
      if ( (*(_BYTE *)(v20 + 52) & 7) != 0 )
        v29 = 1 << ((*(_BYTE *)(v20 + 52) & 7) - 1);
      else
        v29 = (unsigned __int8)getinf(61);
      v30 = ((*(_DWORD *)(v20 + 48) & 0x800) == 0 ? 0x4000 : 0x2000) | (4 * ((unsigned int)sub_535940(v20) != 2) + 8);
      flags_by_size = get_flags_by_size(v29);
      sub_57E0B0(a1, *(_QWORD *)(a1 + 200), *(_QWORD *)(*(_QWORD *)(a1 + 272) + 48LL), v29, flags_by_size, v30);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v28);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
      return sub_381B20(a1, nullptr);
    }
LABEL_30:
    v14 = 32;
    goto LABEL_31;
  }
  if ( v5 > 0x2Du || (v5 & 0xEF) != 0xD )
  {
    if ( !under_debugger )
      interr(3118);
    goto LABEL_69;
  }
  v9 = *(_QWORD *)(a1 + 264);
  if ( v9 && ((v10 = *(_DWORD *)(v9 + 132), (v10 & 0x400) == 0) || v5 == 29) )
  {
    if ( (v10 & 0x20) != 0 )
    {
      sub_55AB80((_QWORD *)a1, (_QWORD *)v9);
    }
    else
    {
      sub_55DB00((__int64)&ptr, a1, *(_QWORD *)(a1 + 264));
      v37 = haystack;
      if ( v39 )
        v37 = (const char *)ptr;
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v37, 0xFFFFFFFFLL);
      if ( ptr )
      {
        v39 = 0;
        qfree(ptr);
      }
    }
  }
  else
  {
    v32 = *(_QWORD *)(a1 + 200);
    v33 = "__bit";
    if ( (v4 & 0x200000) == 0 )
      v33 = *(const char **)(v32 + 1152);
    v34 = sub_39CE40(*(_QWORD **)(v32 + 1672));
    sub_35CEC0(a1, 0xFFFFFFFFLL, (__int64)&unk_2340AD8, v33, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 1120LL), v34);
  }
  return sub_381B20(a1, nullptr);
}
