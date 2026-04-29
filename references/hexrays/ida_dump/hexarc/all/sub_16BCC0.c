__int64 __fastcall sub_16BCC0(__int128 a1, __m128i a2, double a3, __m128i a4, double a5)
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
  v27 = sub_10BA00(v26, 0);
  v28 = v27;
  if ( v27 == v26 )
  {
LABEL_2:
    v6 = 0;
  }
  else
  {
    sub_161D60(a1, v26, v27);
    *(_DWORD *)(v22 + 40) = *(_DWORD *)(v28 + 72);
    v6 = 1;
  }
  if ( sub_162B60(a1) )
  {
    if ( (unsigned __int8)sub_162BE0(a1) )
      return 1;
    v6 = sub_164570(a1);
  }
  v9 = sub_168170(a1);
  v10 = sub_168290(a1);
  if ( (unsigned __int8)sub_10BD50(a1, &v36) )
  {
    v11 = *(_QWORD *)(a1 + 64);
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
    if ( (unsigned int)v12 < *(_DWORD *)(v11 + 64) )
    {
      *((_QWORD *)&a1 + 1) = sub_161BF0(&v37, &v38, a1, v36, *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v12));
      if ( *((_QWORD *)&a1 + 1) )
      {
        v13 = v37;
        v14 = v38;
        if ( *(_DWORD *)(v37 + 376) == 1 && *(_DWORD *)(v38 + 72) == **(_DWORD **)(v37 + 368) )
        {
          v35 = v38;
          v34 = (const __m128i *)v37;
          if ( (unsigned __int8)sub_1657C0((const __m128i *)a1, *((__int64 *)&a1 + 1), v37) )
            return 1;
          if ( (unsigned __int8)sub_165270(a1, (__int64)v34) )
            return 1;
          if ( (unsigned __int8)sub_165520(a1, (__int64)v34) )
            return 1;
          if ( (unsigned __int8)sub_165AE0(a1, v34) )
            return 1;
          v32 = sub_166990((__int64 *)a1, *((__int64 *)&a1 + 1), (__int64)v34);
          v13 = (__int64)v34;
          v14 = v35;
          if ( v32 )
            return 1;
        }
        if ( (unsigned __int8)sub_1699D0((__m128i *)a1, *((__int64 *)&a1 + 1), v13, v14) )
          return 1;
      }
      v15 = sub_1196C0((char *)(*(_QWORD *)(a1 + 56) + 48LL), v39, 0);
      *((_QWORD *)&a1 + 1) = v36;
      if ( v15 && !v39[0] )
      {
        if ( (unsigned __int8)sub_1676E0(a1, v36) || (unsigned __int8)sub_1678E0(a1, v36) )
          return 1;
      }
      else if ( (unsigned __int8)sub_167A20(a1) )
      {
        return 1;
      }
      *((_QWORD *)&a1 + 1) = v36;
      if ( (unsigned __int8)sub_167D40((_QWORD *)a1, v36) || (unsigned __int8)sub_162CC0(a1) )
        return 1;
      goto LABEL_19;
    }
LABEL_62:
    sub_161430(a1);
  }
  *((_QWORD *)&a1 + 1) = &v36;
  if ( (unsigned __int8)sub_10BDE0(a1, &v36, v39, 0xFFFFFFFF, 0xFFFFFFFF) )
  {
    v29 = sub_161BF0(&v37, &v38, a1, v36, v39[0]);
    v30 = (__int64)v29;
    if ( v29 )
    {
      v31 = v37;
      if ( (unsigned __int8)sub_166990((__int64 *)a1, (__int64)v29, v37)
        || (unsigned __int8)sub_164800((const __m128i *)a1, v30, v31, v38) )
      {
        return 1;
      }
    }
    if ( (unsigned __int8)sub_166C30(a1, v36, v39[0]) )
      return 1;
    if ( (unsigned __int8)sub_167050(a1, v36, v39[0]) )
      return 1;
    *((_QWORD *)&a1 + 1) = v36;
    if ( (unsigned __int8)sub_167460((__int64 *)a1, v36, v39[0]) )
      return 1;
  }
  if ( (unsigned __int8)sub_162CC0(a1) )
    return 1;
LABEL_19:
  if ( !(unsigned __int8)sub_162DB0((const __m128i *)a1, *((__int64 *)&a1 + 1), v16, v17, v18, v19)
    && !(unsigned __int8)sub_1634F0(a1)
    && !(unsigned __int8)sub_163220((const __m128i *)a1)
    && !(unsigned __int8)sub_1630D0(a1)
    && !(unsigned __int8)sub_163CE0((const __m128i *)a1)
    && !(unsigned __int8)sub_10D450((__int64 *)a1, *(_QWORD *)(a1 + 56), 1)
    && !(unsigned __int8)sub_16AD80(a1)
    && !(unsigned __int8)sub_C7E40((_QWORD *)a1, a2, a3, a4, a5)
    && !(unsigned __int8)sub_16A360((_QWORD *)a1) )
  {
    v7 = v10 | v9 | v6;
    LOBYTE(v7) = sub_1683A0(a1) | v7;
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
