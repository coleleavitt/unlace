unsigned __int64 __fastcall sub_55B720(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rsi
  unsigned __int8 v3; // dl
  const char *v4; // rsi
  void *v5; // rdi
  char *v7; // rsi
  __int64 v8; // rax
  __int64 tinfo_size; // r14
  __int64 tinfo_property; // rax
  __int64 v11; // r12
  _BYTE *v12; // rax
  __int64 *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rax
  int tinfo_pdata; // eax
  const char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 (__fastcall *v20)(_QWORD *, char); // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(_QWORD *, char); // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(_QWORD *, char); // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // rsi
  const char *v34; // rsi
  void (__fastcall *v35)(_QWORD *, _BYTE *, _QWORD); // r14
  _BYTE *v36; // rax
  _BYTE *v37; // r9
  const char *v38; // r8
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r12
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  void *v46; // [rsp+0h] [rbp-70h] BYREF
  __int128 v47; // [rsp+8h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v49; // [rsp+28h] [rbp-48h]
  unsigned __int64 v50; // [rsp+38h] [rbp-38h]

  v1 = a1[31];
  v50 = __readfsqword(0x28u);
  v46 = nullptr;
  v2 = *(_QWORD *)(v1 + 88);
  v47 = 0;
  if ( v2 > 0xFF )
  {
    tinfo_pdata = get_tinfo_pdata(&v46, v2, 5);
    if ( tinfo_pdata )
    {
      v17 = haystack;
      if ( (_QWORD)v47 )
        v17 = (const char *)v46;
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 184LL))(
        a1,
        v17,
        8 * (unsigned int)(tinfo_pdata != 1) + 4);
    }
    v1 = a1[31];
  }
  *((_DWORD *)a1 + 36) |= 0x810u;
  v3 = *(_BYTE *)(v1 + 100);
  ptr = nullptr;
  v49 = 0;
  if ( v3 == 45 )
  {
    (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "enum", 32);
    v13 = (__int64 *)a1[31];
    if ( *((_BYTE *)v13 + 102) )
      goto LABEL_23;
    v18 = *v13;
    v19 = v18;
    if ( !v18 )
      sub_555E00();
    if ( (unsigned __int8)sub_660A00(v18, &ptr) || (*(_BYTE *)(v19 + 52) & 0x10) != 0 )
    {
      v20 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v20 == sub_35CB90 )
      {
        v21 = a1[4];
        v22 = 2;
        if ( v21 )
          v22 = v21-- + 1;
        v23 = a1[3];
        if ( a1[5] < v22 )
        {
          v44 = qvector_reserve(a1 + 3, v23, v22, 1);
          a1[3] = v44;
          v23 = v44;
        }
        a1[4] = v22;
        *(_BYTE *)(v23 + v21) = 32;
        *(_BYTE *)(a1[3] + v21 + 1) = 0;
      }
      else
      {
        v20(a1, 32);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 4);
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(a1[25] + 1120LL), 0);
      if ( (*(_BYTE *)(v19 + 52) & 0x10) != 0 )
      {
        v24 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v24 == sub_35CB90 )
        {
          v25 = a1[4];
          v26 = 2;
          v27 = v25;
          if ( v25 )
          {
            v26 = v25 + 1;
            v27 = v25 - 1;
          }
          v28 = a1[3];
          if ( a1[5] < v26 )
          {
            v45 = qvector_reserve(a1 + 3, v28, v26, 1);
            a1[3] = v45;
            v28 = v45;
          }
          a1[4] = v26;
          *(_BYTE *)(v28 + v27) = 32;
          *(_BYTE *)(a1[3] + v27 + 1) = 0;
        }
        else
        {
          v24(a1, 32);
        }
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "__bitmask", 0);
      }
      if ( (unsigned __int64)v49 > 1 )
      {
        v29 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v29 == sub_35CB90 )
        {
          v30 = a1[4];
          v31 = 2;
          v32 = v30;
          if ( v30 )
          {
            v31 = v30 + 1;
            v32 = v30 - 1;
          }
          v33 = a1[3];
          if ( a1[5] < v31 )
          {
            v43 = qvector_reserve(a1 + 3, v33, v31, 1);
            a1[3] = v43;
            v33 = v43;
          }
          a1[4] = v31;
          *(_BYTE *)(v33 + v32) = 32;
          *(_BYTE *)(a1[3] + v32 + 1) = 0;
        }
        else
        {
          v29(a1, 32);
        }
        v34 = haystack;
        if ( (_QWORD)v49 )
          v34 = (const char *)ptr;
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, v34, 0);
      }
      v35 = *(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(*a1 + 56LL);
      v36 = sub_39CE40(*(_QWORD **)(a1[25] + 1672LL));
      v35(a1, v36, 0);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
    }
  }
  else
  {
    if ( v3 > 0x2Du )
    {
      if ( v3 != 61 )
      {
LABEL_5:
        if ( !under_debugger )
          interr(3100);
        BUG();
      }
      print_tinfo((unsigned int)&ptr, 0, 0, 0, 2106, v1 + 88, 0, 0);
      v4 = haystack;
      if ( (_QWORD)v49 )
        v4 = (const char *)ptr;
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 136LL))(a1, v4, 0xFFFFFFFFLL);
      if ( ptr )
      {
        *(_QWORD *)&v49 = 0;
        qfree(ptr);
      }
      v5 = v46;
      if ( v46 )
        goto LABEL_13;
      return v50 - __readfsqword(0x28u);
    }
    if ( (v3 & 0xEF) != 0xD )
      goto LABEL_5;
    v7 = (char *)"union";
    if ( v3 == 13 )
      v7 = "struct";
    (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v7, 32);
  }
  v8 = a1[31];
  if ( *(_BYTE *)(v8 + 102) )
  {
LABEL_23:
    v14 = sub_39CE40(*(_QWORD **)(a1[25] + 1672LL));
    sub_35CD40((__int64)a1, (__int64)&unk_23409E0, *(_QWORD *)(a1[25] + 1120LL), v14);
    goto LABEL_24;
  }
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v8 + 88), 0);
  tinfo_property = get_tinfo_property(*(_QWORD *)(a1[31] + 88LL), 286);
  v11 = tinfo_property;
  if ( tinfo_size == -1 )
  {
    if ( tinfo_property )
    {
      v12 = sub_39CE40(*(_QWORD **)(a1[25] + 1672LL));
      sub_35CD40((__int64)a1, (__int64)&unk_22D5D31, *(_QWORD *)(a1[25] + 1120LL), v12);
    }
  }
  else
  {
    v37 = sub_39CE40(*(_QWORD **)(a1[25] + 1672LL));
    v38 = ";variable_size";
    if ( !v11 )
      v38 = &byte_22F0C30;
    sub_35CD40((__int64)a1, (__int64)&unk_22D5D17, *(_QWORD *)(a1[25] + 1120LL), tinfo_size, v38, v37, v46);
  }
LABEL_24:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
  v15 = a1[31];
  if ( !*(_BYTE *)(v15 + 102) && *(_BYTE *)(v15 + 100) == 13 )
  {
    v39 = *(__int64 **)v15;
    if ( !v39 )
      sub_555DE0();
    v40 = *v39;
    v41 = *v39 + 144 * v39[1];
    if ( v41 != *v39 )
    {
      do
      {
        v42 = v40;
        if ( (*(_BYTE *)(v40 + 132) & 0x20) == 0 )
          break;
        sub_55AB80(a1, (_QWORD *)v40);
        v40 = v42 + 144;
      }
      while ( v42 + 144 != v41 );
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v49 = 0;
    qfree(ptr);
  }
  v5 = v46;
  if ( v46 )
  {
LABEL_13:
    *(_QWORD *)&v47 = 0;
    qfree(v5);
  }
  return v50 - __readfsqword(0x28u);
}
