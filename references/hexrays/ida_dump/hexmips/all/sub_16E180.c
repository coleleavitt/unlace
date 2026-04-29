__int64 __fastcall sub_16E180(__int128 a1, __m128i a2, double a3, __m128i a4, double a5)
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
  __int64 v20; // rax
  _QWORD *v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r12
  char *v29; // rax
  __int64 v30; // r14
  __int64 v31; // r15
  char v32; // al
  __int64 v33; // rax
  const __m128i *v34; // [rsp+10h] [rbp-78h]
  __int64 v35; // [rsp+18h] [rbp-70h]
  __int64 v36; // [rsp+28h] [rbp-60h] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h] BYREF
  __int64 v39[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a1 + 76) == 3;
  v39[1] = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_2;
  v22 = *(_QWORD *)(a1 + 56);
  if ( !v22 || *(_BYTE *)(v22 + 32) != 7 )
    goto LABEL_2;
  v23 = *(_QWORD *)(a1 + 64);
  v24 = *(_DWORD *)(v23 + 64);
  if ( *(_DWORD *)(a1 + 352) == 1 )
  {
    v33 = **(unsigned int **)(a1 + 344);
    if ( (unsigned int)v33 >= v24 )
      goto LABEL_62;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 528) + 8 * v33) + 76LL) == 5 )
      goto LABEL_2;
  }
  v25 = *(unsigned int *)(v22 + 40);
  if ( (unsigned int)v25 >= v24 )
    goto LABEL_62;
  v26 = *(_QWORD *)(*(_QWORD *)(v23 + 528) + 8 * v25);
  v27 = sub_10DEC0(v26, 0);
  v28 = v27;
  if ( v27 == v26 )
  {
LABEL_2:
    v6 = 0;
  }
  else
  {
    sub_164220(a1, v26, v27);
    *(_DWORD *)(v22 + 40) = *(_DWORD *)(v28 + 72);
    v6 = 1;
  }
  if ( sub_165020(a1) )
  {
    if ( (unsigned __int8)sub_1650A0(a1) )
      return 1;
    v6 = sub_166A30(a1);
  }
  v9 = sub_16A630(a1);
  v10 = sub_16A750(a1);
  if ( (unsigned __int8)sub_10E210(a1, &v36) )
  {
    v11 = *(_QWORD *)(a1 + 64);
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
    if ( (unsigned int)v12 < *(_DWORD *)(v11 + 64) )
    {
      *((_QWORD *)&a1 + 1) = sub_1640B0(&v37, &v38, a1, v36, *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v12));
      if ( *((_QWORD *)&a1 + 1) )
      {
        v13 = v37;
        v14 = v38;
        if ( *(_DWORD *)(v37 + 376) == 1 && *(_DWORD *)(v38 + 72) == **(_DWORD **)(v37 + 368) )
        {
          v35 = v38;
          v34 = (const __m128i *)v37;
          if ( (unsigned __int8)sub_167C80((const __m128i *)a1, *((__int64 *)&a1 + 1), v37) )
            return 1;
          if ( (unsigned __int8)sub_167730(a1, (__int64)v34) )
            return 1;
          if ( (unsigned __int8)sub_1679E0(a1, (__int64)v34) )
            return 1;
          if ( (unsigned __int8)sub_167FA0(a1, v34) )
            return 1;
          v32 = sub_168E50((__int64 *)a1, *((__int64 *)&a1 + 1), (__int64)v34);
          v13 = (__int64)v34;
          v14 = v35;
          if ( v32 )
            return 1;
        }
        if ( (unsigned __int8)sub_16BE90((__m128i *)a1, *((__int64 *)&a1 + 1), v13, v14) )
          return 1;
      }
      v15 = sub_11BB80((char *)(*(_QWORD *)(a1 + 56) + 48LL), v39, 0);
      *((_QWORD *)&a1 + 1) = v36;
      if ( v15 && !v39[0] )
      {
        if ( (unsigned __int8)sub_169BA0(a1, v36) || (unsigned __int8)sub_169DA0(a1, v36) )
          return 1;
      }
      else if ( (unsigned __int8)sub_169EE0(a1) )
      {
        return 1;
      }
      *((_QWORD *)&a1 + 1) = v36;
      if ( (unsigned __int8)sub_16A200((_QWORD *)a1, v36) || (unsigned __int8)sub_165180(a1) )
        return 1;
      goto LABEL_19;
    }
LABEL_62:
    sub_1638F0(a1);
  }
  *((_QWORD *)&a1 + 1) = &v36;
  if ( (unsigned __int8)sub_10E2A0(a1, &v36, v39, 0xFFFFFFFF, 0xFFFFFFFF) )
  {
    v29 = sub_1640B0(&v37, &v38, a1, v36, v39[0]);
    v30 = (__int64)v29;
    if ( v29 )
    {
      v31 = v37;
      if ( (unsigned __int8)sub_168E50((__int64 *)a1, (__int64)v29, v37)
        || (unsigned __int8)sub_166CC0((const __m128i *)a1, v30, v31, v38) )
      {
        return 1;
      }
    }
    if ( (unsigned __int8)sub_1690F0(a1, v36, v39[0]) )
      return 1;
    if ( (unsigned __int8)sub_169510(a1, v36, v39[0]) )
      return 1;
    *((_QWORD *)&a1 + 1) = v36;
    if ( (unsigned __int8)sub_169920((__int64 *)a1, v36, v39[0]) )
      return 1;
  }
  if ( (unsigned __int8)sub_165180(a1) )
    return 1;
LABEL_19:
  if ( !(unsigned __int8)sub_165270((const __m128i *)a1, *((__int64 *)&a1 + 1), v16, v17, v18, v19)
    && !(unsigned __int8)sub_1659B0(a1)
    && !(unsigned __int8)sub_1656E0((const __m128i *)a1)
    && !(unsigned __int8)sub_165590(a1)
    && !(unsigned __int8)sub_1661A0((const __m128i *)a1)
    && !(unsigned __int8)sub_10F910((__int64 *)a1, *(_QWORD *)(a1 + 56), 1)
    && !(unsigned __int8)sub_16D240(a1)
    && !(unsigned __int8)sub_CA300((_QWORD *)a1, a2, a3, a4, a5)
    && !(unsigned __int8)sub_16C820((_QWORD *)a1) )
  {
    v7 = v10 | v9 | v6;
    LOBYTE(v7) = sub_16A860(a1) | v7;
    if ( !(_BYTE)v7 )
    {
      v20 = *(_QWORD *)(a1 + 480);
      v21 = *(_QWORD **)(v20 + 1088);
      if ( !(8LL * *(_QWORD *)(v20 + 1096)) )
        return v7;
      while ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v21 + 16LL))(*v21, a1) )
      {
        if ( ++v21 == (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 1088LL)
                               + 8LL * *(_QWORD *)(*(_QWORD *)(a1 + 480) + 1096LL)) )
          return v7;
      }
    }
  }
  return 1;
}
