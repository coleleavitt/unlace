__int64 __fastcall sub_417AB0(const char **a1, const char **a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // eax
  __int64 result; // rax
  const char *v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // esi
  __int64 v10; // rsi
  unsigned int v11; // esi
  _QWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  const char *v22; // xmm1_8
  const char *v23; // xmm0_8
  _BOOL4 v24; // edx
  bool v25; // al
  __int64 v26; // rax
  unsigned int v27; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD *v28; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+1Ch] [rbp-2Ch] BYREF
  _QWORD v30[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a3 + 4);
  switch ( v4 )
  {
    case 0:
      v27 = 0;
      v5 = strcmp(*a1, *a2);
LABEL_3:
      v27 = v5;
      goto LABEL_4;
    case 8:
      v27 = 0;
      v5 = sub_49C640(*a1, *a2);
      goto LABEL_3;
    case 4:
      v27 = 0;
      v5 = sub_417890((unsigned __int8 *)*a1, (unsigned __int8 *)*a2);
      goto LABEL_3;
    case 1:
      v24 = (__int64)*a1 >= (__int64)*a2;
      v25 = (__int64)*a1 <= (__int64)*a2;
      goto LABEL_21;
    case 2:
      v22 = *a1;
      v23 = *a2;
      v24 = *(double *)&v22 >= *(double *)&v23;
      v25 = *(double *)&v23 >= *(double *)&v22;
LABEL_21:
      v27 = v24 - v25;
      goto LABEL_4;
  }
  v27 = 0;
  result = 0;
  if ( *(_DWORD *)(a3 + 48) )
    return result;
  v7 = *a2;
  v30[0] = *a1;
  v30[1] = v7;
  v8 = *(_QWORD *)(a3 + 8);
  if ( *(_UNKNOWN ***)(v8 + 24) == &off_655E20 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 8LL);
    v29 = v9;
  }
  else
  {
    sub_46FB10(*(_QWORD *)(a3 + 40), *(_QWORD *)(a3 + 8), &v29);
    v8 = *(_QWORD *)(a3 + 8);
    v9 = v29;
  }
  sub_46F620(*(_QWORD *)(a3 + 40), v8, v9 - 2, 2, 2, v30);
  v10 = *(_QWORD *)(a3 + 8);
  if ( *(_UNKNOWN ***)(v10 + 24) == &off_655E20 )
  {
    v26 = *(_QWORD *)(v10 + 32);
    v11 = *(_DWORD *)(v26 + 8);
    v12 = (_QWORD *)(v26 + 16);
    v28 = (_QWORD *)(v26 + 16);
    v29 = v11;
  }
  else
  {
    sub_46FD90(*(_QWORD *)(a3 + 40), v10, &v29, &v28);
    v11 = v29;
    v12 = v28;
  }
  v13 = sub_409D20(*(_QWORD *)(a3 + 40), v11, v12, 0);
  *(_DWORD *)(a3 + 48) = v13;
  if ( v13 )
  {
    sub_40BD40(*(_QWORD *)(a3 + 40), (__int64)"\n    (-compare command)", v14, v15, v16, v17);
    return 0;
  }
  v18 = sub_48B5D0(*(_QWORD *)(a3 + 40));
  if ( (unsigned int)sub_47C180(*(_QWORD *)(a3 + 40), v18, &v27) )
  {
    sub_48B350(*(_QWORD *)(a3 + 40));
    sub_48B710(*(_QWORD *)(a3 + 40), (unsigned int)"-compare command returned non-integer result", 0, v19, v20, v21);
    *(_DWORD *)(a3 + 48) = 1;
    return 0;
  }
LABEL_4:
  if ( !*(_DWORD *)a3 )
    return -v27;
  return v27;
}

