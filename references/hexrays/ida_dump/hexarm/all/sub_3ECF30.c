__int64 __fastcall sub_3ECF30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, double a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v10; // r15
  __int64 v11; // r13
  size_t v12; // rax
  size_t v13; // r13
  size_t v14; // rbp
  __int64 v15; // rbp
  char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // al
  const char *v20; // rsi
  const char *v21; // rdx
  unsigned int v22; // r13d
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rsi
  const __m128i *v27; // rsi
  int v28; // eax
  int v29; // eax
  int tinfo_size; // r15d
  __int64 v32; // rsi
  __int64 v33; // [rsp+18h] [rbp-98h]
  __int64 v34; // [rsp+20h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-80h] BYREF
  _BYTE v36[8]; // [rsp+38h] [rbp-78h] BYREF
  const __m128i *v37; // [rsp+40h] [rbp-70h]
  __int64 v38; // [rsp+48h] [rbp-68h] BYREF
  int v39; // [rsp+50h] [rbp-60h]
  char *v40; // [rsp+58h] [rbp-58h] BYREF
  __int128 v41; // [rsp+60h] [rbp-50h]
  unsigned __int64 v42; // [rsp+70h] [rbp-40h]

  v6 = a2;
  v7 = a5;
  v42 = __readfsqword(0x28u);
  if ( !(unsigned int)get_named_type(0, a2, 1, 0, 0, 0, 0, 0, 0) )
  {
    v6 = a2 + 1;
    if ( !(unsigned int)get_named_type(0, a2 + 1, 1, 0, 0, 0, 0, 0, 0) )
      return 0;
  }
  v10 = *(_QWORD *)(a3 + 72);
  if ( !(unsigned __int8)sub_11F7C0(*(char **)(v10 + 24), &v35, 0) )
    return 0;
  v11 = a4 + 32 * v7;
  while ( *(_DWORD *)(a4 + 20) != (_DWORD)v35 )
  {
    a4 += 32;
    if ( a4 == v11 )
      goto LABEL_7;
  }
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v10 + 72), 0);
  if ( *(_DWORD *)(a4 + 16) != tinfo_size
    || (v22 = sub_3EA5C0(a3, *(_QWORD *)a4, *(_QWORD *)(a4 + 8), *(_BYTE *)(a4 + 24)), !(_BYTE)v22) )
  {
LABEL_7:
    sub_123480((__int64)v36, *(unsigned __int8 **)(*(_QWORD *)(a3 + 72) + 24LL));
    v40 = nullptr;
    v41 = 0;
    v12 = strlen((const char *)v6);
    v13 = v12 + 1;
    v14 = v12;
    v40 = (char *)qvector_reserve(&v40, 0, v12 + 1, 1);
    *(_QWORD *)&v41 = v13;
    memmove(v40, (const void *)v6, v14);
    v40[v14] = 0;
    v15 = v41;
    if ( (_QWORD)v41 )
    {
      v18 = v41 + 1;
      v17 = v41 + 2;
      v16 = v40;
      v15 = v41 - 1;
      if ( *((_QWORD *)&v41 + 1) >= (unsigned __int64)(v41 + 2) )
        goto LABEL_9;
    }
    else
    {
      v16 = v40;
      v17 = 3;
      v18 = 2;
      if ( *((_QWORD *)&v41 + 1) >= 3u )
      {
LABEL_9:
        *(_QWORD *)&v41 = v17;
        v16[v18] = 0;
        *(_WORD *)&v40[v15] = 15146;
        v19 = *(_BYTE *)v6;
        if ( *(_BYTE *)v6 == 95 )
          v19 = *(_BYTE *)(v6 + 1);
        v20 = "NtCurrentTeb";
        if ( v19 == 75 )
          v20 = "KeGetPcr";
        v21 = s1;
        if ( (_QWORD)v41 )
          v21 = v40;
        v22 = sub_3EA5C0(a3, (__int64)v20, (__int64)v21, 1);
        if ( (_BYTE)v22 )
        {
          v23 = j__qalloc_or_throw(80);
          v24 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 40) = 0;
          *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 56) = 0;
          *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 72) = 0;
          sub_330C90(v23, v24);
          sub_11D2D0(v23, a3);
          *(_DWORD *)(a3 + 68) = *(_DWORD *)(v23 + 68);
          *(_DWORD *)(v23 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
          v25 = j__qalloc_or_throw(80);
          v26 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(v25 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v25 + 40) = 0;
          *(_QWORD *)(v25 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v25 + 56) = 0;
          *(_QWORD *)(v25 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v25 + 72) = 0;
          sub_330C90(v25, v26);
          *(_DWORD *)v25 = 12;
          v27 = v37;
          *(_BYTE *)(v25 + 32) = 4;
          *(_QWORD *)(v25 + 40) = v23;
          v28 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
          *(_DWORD *)(v25 + 36) = v28;
          *(_DWORD *)(v25 + 68) = v28;
          sub_11CD30(v25 + 48, v27, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL));
          *(_DWORD *)a3 = 2;
          v29 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 52LL);
          v38 = 0x200000001LL;
          v39 = v29;
          sub_124BC0(a3 + 32, (unsigned __int8 *)&v38);
          sub_11C7E0((__int64)&v38);
          *(_BYTE *)(a3 + 48) = 4;
          *(_QWORD *)(a3 + 56) = v25;
          *(_DWORD *)(a3 + 52) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
        }
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v40);
        }
        sub_11C7E0((__int64)v36);
        return v22;
      }
    }
    v34 = v18;
    v33 = v17;
    v40 = (char *)qvector_reserve(&v40, v16, v17, 1);
    v18 = v34;
    v16 = v40;
    v17 = v33;
    goto LABEL_9;
  }
  v32 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + 72LL);
  if ( tinfo_size != get_tinfo_size(0, v32, 0) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC729u, v32, a6);
    BUG();
  }
  return v22;
}
