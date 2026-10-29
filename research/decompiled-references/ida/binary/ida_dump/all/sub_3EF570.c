__int64 __fastcall sub_3EF570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, double a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v10; // r13
  size_t v11; // rax
  size_t v12; // r13
  size_t v13; // rbp
  __int64 v14; // rbp
  char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  char v18; // al
  const char *v19; // rsi
  const char *v20; // rdx
  unsigned int v21; // r13d
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rsi
  const __m128i *v26; // rsi
  int v27; // eax
  int v28; // eax
  int tinfo_size; // r15d
  __int64 v31; // [rsp+18h] [rbp-98h]
  __int64 v32; // [rsp+20h] [rbp-90h]
  __int64 v33; // [rsp+30h] [rbp-80h] BYREF
  _BYTE v34[8]; // [rsp+38h] [rbp-78h] BYREF
  const __m128i *v35; // [rsp+40h] [rbp-70h]
  __int64 v36; // [rsp+48h] [rbp-68h] BYREF
  int v37; // [rsp+50h] [rbp-60h]
  char *v38; // [rsp+58h] [rbp-58h]
  __int128 v39; // [rsp+60h] [rbp-50h]
  unsigned __int64 v40; // [rsp+70h] [rbp-40h]

  v6 = a2;
  v7 = a5;
  v40 = __readfsqword(0x28u);
  if ( !(unsigned int)get_named_type() )
  {
    v6 = a2 + 1;
    if ( !(unsigned int)get_named_type() )
      return 0;
  }
  if ( !(unsigned __int8)sub_11FD80(*(char **)(*(_QWORD *)(a3 + 72) + 24LL), &v33, 0) )
    return 0;
  v10 = a4 + 32 * v7;
  while ( *(_DWORD *)(a4 + 20) != (_DWORD)v33 )
  {
    a4 += 32;
    if ( a4 == v10 )
      goto LABEL_7;
  }
  tinfo_size = get_tinfo_size();
  if ( *(_DWORD *)(a4 + 16) != tinfo_size
    || (v21 = sub_3EAAC0(a3, *(_QWORD *)a4, *(_QWORD *)(a4 + 8), *(_BYTE *)(a4 + 24)), !(_BYTE)v21) )
  {
LABEL_7:
    sub_123A40((__int64)v34, *(unsigned __int8 **)(*(_QWORD *)(a3 + 72) + 24LL));
    v38 = nullptr;
    v39 = 0;
    v11 = strlen((const char *)v6);
    v12 = v11 + 1;
    v13 = v11;
    v38 = (char *)qvector_reserve();
    *(_QWORD *)&v39 = v12;
    memmove(v38, (const void *)v6, v13);
    v38[v13] = 0;
    v14 = v39;
    if ( (_QWORD)v39 )
    {
      v17 = v39 + 1;
      v16 = v39 + 2;
      v15 = v38;
      v14 = v39 - 1;
      if ( *((_QWORD *)&v39 + 1) >= (unsigned __int64)(v39 + 2) )
        goto LABEL_9;
    }
    else
    {
      v15 = v38;
      v16 = 3;
      v17 = 2;
      if ( *((_QWORD *)&v39 + 1) >= 3u )
      {
LABEL_9:
        *(_QWORD *)&v39 = v16;
        v15[v17] = 0;
        *(_WORD *)&v38[v14] = 15146;
        v18 = *(_BYTE *)v6;
        if ( *(_BYTE *)v6 == 95 )
          v18 = *(_BYTE *)(v6 + 1);
        v19 = "NtCurrentTeb";
        if ( v18 == 75 )
          v19 = "KeGetPcr";
        v20 = s1;
        if ( (_QWORD)v39 )
          v20 = v38;
        v21 = sub_3EAAC0(a3, (__int64)v19, (__int64)v20, 1);
        if ( (_BYTE)v21 )
        {
          v22 = j__qalloc_or_throw();
          v23 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v22 + 40) = 0;
          *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v22 + 56) = 0;
          *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v22 + 72) = 0;
          sub_330970(v22, v23);
          sub_11D890(v22, a3);
          *(_DWORD *)(a3 + 68) = *(_DWORD *)(v22 + 68);
          *(_DWORD *)(v22 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
          v24 = j__qalloc_or_throw();
          v25 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(v24 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v24 + 40) = 0;
          *(_QWORD *)(v24 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v24 + 56) = 0;
          *(_QWORD *)(v24 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v24 + 72) = 0;
          sub_330970(v24, v25);
          *(_DWORD *)v24 = 12;
          v26 = v35;
          *(_BYTE *)(v24 + 32) = 4;
          *(_QWORD *)(v24 + 40) = v22;
          v27 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
          *(_DWORD *)(v24 + 36) = v27;
          *(_DWORD *)(v24 + 68) = v27;
          sub_11D2F0(v24 + 48, v26, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL));
          *(_DWORD *)a3 = 2;
          v28 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 52LL);
          v36 = 0x200000001LL;
          v37 = v28;
          sub_125180(a3 + 32, (unsigned __int8 *)&v36);
          sub_11CDA0((__int64)&v36);
          *(_BYTE *)(a3 + 48) = 4;
          *(_QWORD *)(a3 + 56) = v24;
          *(_DWORD *)(a3 + 52) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
        }
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree();
        }
        sub_11CDA0((__int64)v34);
        return v21;
      }
    }
    v32 = v17;
    v31 = v16;
    v38 = (char *)qvector_reserve();
    v17 = v32;
    v15 = v38;
    v16 = v31;
    goto LABEL_9;
  }
  if ( tinfo_size != get_tinfo_size() )
  {
    if ( !under_debugger )
      sub_383060(0xC729u, a6);
    BUG();
  }
  return v21;
}
