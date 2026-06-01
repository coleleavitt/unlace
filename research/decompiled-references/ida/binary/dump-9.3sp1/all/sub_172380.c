__int64 __fastcall sub_172380(__int128 a1, __m128i a2, double a3, __m128i a4, double a5)
{
  bool v5; // zf
  int v6; // ebp
  unsigned int v7; // ebp
  int v9; // r13d
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // r12
  __int64 v24; // rbp
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r12
  char *v31; // rax
  __int64 v32; // r14
  __int64 v33; // r15
  char v34; // al
  __int64 v35; // rax
  const __m128i *v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+28h] [rbp-60h] BYREF
  __int64 v39; // [rsp+30h] [rbp-58h] BYREF
  __int64 v40; // [rsp+38h] [rbp-50h] BYREF
  __int64 v41[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a1 + 76) == 3;
  v41[1] = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_2;
  v24 = *(_QWORD *)(a1 + 56);
  if ( !v24 || *(_BYTE *)(v24 + 32) != 7 )
    goto LABEL_2;
  v25 = *(_QWORD *)(a1 + 64);
  v26 = *(_DWORD *)(v25 + 64);
  if ( *(_DWORD *)(a1 + 352) == 1 )
  {
    v35 = **(unsigned int **)(a1 + 344);
    if ( (unsigned int)v35 >= v26 )
      goto LABEL_62;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v35) + 76LL) == 5 )
      goto LABEL_2;
  }
  v27 = *(unsigned int *)(v24 + 40);
  if ( (unsigned int)v27 >= v26 )
    goto LABEL_62;
  v28 = *(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v27);
  v29 = sub_1120C0(v28, 0);
  v30 = v29;
  if ( v29 == v28 )
  {
LABEL_2:
    v6 = 0;
  }
  else
  {
    sub_168420(a1, v28, v29);
    *(_DWORD *)(v24 + 40) = *(_DWORD *)(v30 + 72);
    v6 = 1;
  }
  if ( sub_169220(a1) )
  {
    if ( (unsigned __int8)sub_1692A0(a1) )
      return 1;
    v6 = sub_16AC30(a1);
  }
  v9 = sub_16E830(a1);
  v10 = sub_16E950(a1);
  if ( (unsigned __int8)sub_112410(a1, &v38) )
  {
    v11 = *(_QWORD *)(a1 + 64);
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
    if ( (unsigned int)v12 < *(_DWORD *)(v11 + 64) )
    {
      *((_QWORD *)&a1 + 1) = sub_1682B0(&v39, &v40, a1, v38, *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v12));
      if ( *((_QWORD *)&a1 + 1) )
      {
        v13 = v39;
        v14 = v40;
        if ( *(_DWORD *)(v39 + 376) == 1 && *(_DWORD *)(v40 + 72) == **(_DWORD **)(v39 + 368) )
        {
          v37 = v40;
          v36 = (const __m128i *)v39;
          if ( (unsigned __int8)sub_16BE80((const __m128i *)a1, *((__int64 *)&a1 + 1), v39) )
            return 1;
          if ( (unsigned __int8)sub_16B930(a1, (__int64)v36) )
            return 1;
          if ( (unsigned __int8)sub_16BBE0(a1, (__int64)v36) )
            return 1;
          if ( (unsigned __int8)sub_16C1A0(a1, v36) )
            return 1;
          v34 = sub_16D050((__int64 *)a1, *((__int64 *)&a1 + 1), (__int64)v36);
          v13 = (__int64)v36;
          v14 = v37;
          if ( v34 )
            return 1;
        }
        if ( (unsigned __int8)sub_170090((__m128i *)a1, *((__int64 *)&a1 + 1), v13, v14) )
          return 1;
      }
      v15 = sub_11FD80((char *)(*(_QWORD *)(a1 + 56) + 48LL), v41, 0);
      *((_QWORD *)&a1 + 1) = v38;
      if ( v15 && !v41[0] )
      {
        if ( (unsigned __int8)sub_16DDA0(a1, v38) || (unsigned __int8)sub_16DFA0(a1, v38) )
          return 1;
      }
      else if ( (unsigned __int8)sub_16E0E0(a1) )
      {
        return 1;
      }
      *((_QWORD *)&a1 + 1) = v38;
      if ( (unsigned __int8)sub_16E400((_QWORD *)a1, v38) || (unsigned __int8)sub_169380(a1) )
        return 1;
      goto LABEL_19;
    }
LABEL_62:
    sub_167AF0(a1);
  }
  *((_QWORD *)&a1 + 1) = &v38;
  if ( (unsigned __int8)sub_1124A0(a1, &v38, v41, 0xFFFFFFFF, 0xFFFFFFFF) )
  {
    v31 = sub_1682B0(&v39, &v40, a1, v38, v41[0]);
    v32 = (__int64)v31;
    if ( v31 )
    {
      v33 = v39;
      if ( (unsigned __int8)sub_16D050((__int64 *)a1, (__int64)v31, v39)
        || (unsigned __int8)sub_16AEC0((const __m128i *)a1, v32, v33, v40) )
      {
        return 1;
      }
    }
    if ( (unsigned __int8)sub_16D2F0(a1, v38, v41[0]) )
      return 1;
    if ( (unsigned __int8)sub_16D710(a1, v38, v41[0]) )
      return 1;
    *((_QWORD *)&a1 + 1) = v38;
    if ( (unsigned __int8)sub_16DB20((__int64 *)a1, v38, v41[0]) )
      return 1;
  }
  if ( (unsigned __int8)sub_169380(a1) )
    return 1;
LABEL_19:
  if ( !(unsigned __int8)sub_169470((const __m128i *)a1, *((__int64 *)&a1 + 1), v16, v17, v18, v19)
    && !(unsigned __int8)sub_169BB0(a1)
    && !(unsigned __int8)sub_1698E0((const __m128i *)a1)
    && !(unsigned __int8)sub_169790(a1)
    && !(unsigned __int8)sub_16A3A0((const __m128i *)a1) )
  {
    *((_QWORD *)&a1 + 1) = *(_QWORD *)(a1 + 56);
    if ( !(unsigned __int8)sub_113B10((__int64 *)a1, *((__int64 *)&a1 + 1), 1)
      && !(unsigned __int8)sub_171440(a1)
      && !(unsigned __int8)sub_CE500(a1, a2, a3, a4, a5, *((__int64 *)&a1 + 1), v20, v21)
      && !(unsigned __int8)sub_170A20((_QWORD *)a1) )
    {
      v7 = v10 | v9 | v6;
      LOBYTE(v7) = sub_16EA60(a1) | v7;
      if ( !(_BYTE)v7 )
      {
        v22 = *(_QWORD *)(a1 + 480);
        v23 = *(_QWORD **)(v22 + 1088);
        if ( !(8LL * *(_QWORD *)(v22 + 1096)) )
          return v7;
        while ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v23 + 16LL))(*v23, a1) )
        {
          if ( ++v23 == (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 1088LL)
                                 + 8LL * *(_QWORD *)(*(_QWORD *)(a1 + 480) + 1096LL)) )
            return v7;
        }
      }
    }
  }
  return 1;
}
