__int64 __fastcall sub_3E4930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v9; // r13
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // rbp
  __int64 v13; // rbp
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // al
  const char *v18; // rsi
  const char *v19; // rdx
  unsigned int v20; // r13d
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rsi
  const __m128i *v25; // rsi
  int v26; // eax
  int v27; // eax
  int tinfo_size; // r15d
  __int64 v30; // [rsp+18h] [rbp-98h]
  __int64 v31; // [rsp+20h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-80h] BYREF
  _BYTE v33[8]; // [rsp+38h] [rbp-78h] BYREF
  const __m128i *v34; // [rsp+40h] [rbp-70h]
  __int64 v35; // [rsp+48h] [rbp-68h] BYREF
  int v36; // [rsp+50h] [rbp-60h]
  char *v37; // [rsp+58h] [rbp-58h]
  __int128 v38; // [rsp+60h] [rbp-50h]
  unsigned __int64 v39; // [rsp+70h] [rbp-40h]

  v5 = a2;
  v6 = a5;
  v39 = __readfsqword(0x28u);
  if ( !(unsigned int)get_named_type() )
  {
    v5 = a2 + 1;
    if ( !(unsigned int)get_named_type() )
      return 0;
  }
  if ( !(unsigned __int8)sub_11D940(*(char **)(*(_QWORD *)(a3 + 72) + 24LL), &v32, 0) )
    return 0;
  v9 = a4 + 32 * v6;
  while ( *(_DWORD *)(a4 + 20) != (_DWORD)v32 )
  {
    a4 += 32;
    if ( a4 == v9 )
      goto LABEL_7;
  }
  tinfo_size = get_tinfo_size();
  if ( *(_DWORD *)(a4 + 16) != tinfo_size
    || (v20 = sub_3DFE50(a3, *(_QWORD *)a4, *(_QWORD *)(a4 + 8), *(_BYTE *)(a4 + 24)), !(_BYTE)v20) )
  {
LABEL_7:
    sub_121540((__int64)v33, *(unsigned __int8 **)(*(_QWORD *)(a3 + 72) + 24LL));
    v37 = 0;
    v38 = 0;
    v10 = strlen((const char *)v5);
    v11 = v10 + 1;
    v12 = v10;
    v37 = (char *)qvector_reserve();
    *(_QWORD *)&v38 = v11;
    memmove(v37, (const void *)v5, v12);
    v37[v12] = 0;
    v13 = v38;
    if ( (_QWORD)v38 )
    {
      v16 = v38 + 1;
      v15 = v38 + 2;
      v14 = v37;
      v13 = v38 - 1;
      if ( *((_QWORD *)&v38 + 1) >= (unsigned __int64)(v38 + 2) )
        goto LABEL_9;
    }
    else
    {
      v14 = v37;
      v15 = 3;
      v16 = 2;
      if ( *((_QWORD *)&v38 + 1) >= 3u )
      {
LABEL_9:
        *(_QWORD *)&v38 = v15;
        v14[v16] = 0;
        *(_WORD *)&v37[v13] = 15146;
        v17 = *(_BYTE *)v5;
        if ( *(_BYTE *)v5 == 95 )
          v17 = *(_BYTE *)(v5 + 1);
        v18 = "NtCurrentTeb";
        if ( v17 == 75 )
          v18 = "KeGetPcr";
        v19 = s1;
        if ( (_QWORD)v38 )
          v19 = v37;
        v20 = sub_3DFE50(a3, (__int64)v18, (__int64)v19, 1);
        if ( (_BYTE)v20 )
        {
          v21 = j__qalloc_or_throw();
          v22 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v21 + 40) = 0;
          *(_QWORD *)(v21 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v21 + 56) = 0;
          *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v21 + 72) = 0;
          sub_32D4D0(v21, v22);
          sub_11B450(v21, a3);
          *(_DWORD *)(a3 + 68) = *(_DWORD *)(v21 + 68);
          *(_DWORD *)(v21 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
          v23 = j__qalloc_or_throw();
          v24 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 40) = 0;
          *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 56) = 0;
          *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 72) = 0;
          sub_32D4D0(v23, v24);
          *(_DWORD *)v23 = 12;
          v25 = v34;
          *(_BYTE *)(v23 + 32) = 4;
          *(_QWORD *)(v23 + 40) = v21;
          v26 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
          *(_DWORD *)(v23 + 36) = v26;
          *(_DWORD *)(v23 + 68) = v26;
          sub_11AEB0(v23 + 48, v25, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL));
          *(_DWORD *)a3 = 2;
          v27 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 52LL);
          v35 = 0x200000001LL;
          v36 = v27;
          sub_122C80(a3 + 32, (unsigned __int8 *)&v35);
          sub_11A960((__int64)&v35);
          *(_BYTE *)(a3 + 48) = 4;
          *(_QWORD *)(a3 + 56) = v23;
          *(_DWORD *)(a3 + 52) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
        }
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree();
        }
        sub_11A960((__int64)v33);
        return v20;
      }
    }
    v31 = v16;
    v30 = v15;
    v37 = (char *)qvector_reserve();
    v16 = v31;
    v14 = v37;
    v15 = v30;
    goto LABEL_9;
  }
  if ( tinfo_size != get_tinfo_size() )
  {
    if ( !under_debugger )
      sub_37EA20(50985);
    BUG();
  }
  return v20;
}
