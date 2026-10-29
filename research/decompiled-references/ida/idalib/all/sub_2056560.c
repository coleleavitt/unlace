__int64 __fastcall sub_2056560(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rbp
  __int64 v9; // rbx
  __int64 v11; // rdx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // r12
  char v26; // al
  __int64 *v27; // [rsp+8h] [rbp-C0h]
  __int64 v29; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v31[4]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v32; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v33[3]; // [rsp+58h] [rbp-70h] BYREF
  int v34; // [rsp+70h] [rbp-58h]
  char v35; // [rsp+74h] [rbp-54h]
  _QWORD v36[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = *a1;
  v32 = a2;
  v5 = sub_21F90D0(a1, a2, a3);
  if ( *a3 == v5 )
    sub_21FFE60(v33, a3);
  else
    sub_21F97A0(v33, a3);
  if ( (unsigned __int8)sub_2052D20((__int64 *)(v4 + 304), (int *)&v32, &v29) )
  {
    v8 = (__int64 *)(v29 + 32);
    goto LABEL_5;
  }
  v11 = *(unsigned int *)(v4 + 320);
  v30 = v29;
  v12 = 2 * v11;
  v13 = *(_DWORD *)(v4 + 312) + 1;
  v14 = (unsigned int)(3 * v11);
  if ( 4 * v13 < (unsigned int)v14 )
  {
    v14 = (unsigned int)(v11 - *(_DWORD *)(v4 + 316) - v13);
    if ( (unsigned int)v14 > (unsigned int)v11 >> 3 )
      goto LABEL_9;
    v12 = v11;
  }
  sub_2055F00(v4 + 304, v12, v11, v14, v6, v7);
  sub_2052D20((__int64 *)(v4 + 304), (int *)&v32, &v30);
  v13 = *(_DWORD *)(v4 + 312) + 1;
LABEL_9:
  *(_DWORD *)(v4 + 312) = v13;
  v15 = sub_21F90F0();
  if ( v5 == v15 )
    sub_21FFCB0(v31, v5, 1);
  else
    sub_21FAF40(v31, v15, 1);
  v35 = 1;
  v34 = -1;
  if ( v5 == v31[0] )
    sub_21FFED0(v36, v31);
  else
    sub_21F97D0(v36, v31);
  sub_9955A0(v31);
  v17 = v30;
  v27 = (__int64 *)(v30 + 8);
  if ( *(_DWORD *)v30 != v34
    || *(_BYTE *)(v30 + 4) != v35
    || (v26 = sub_2051060(v27, v36, v16), v17 = v30, v27 = (__int64 *)(v30 + 8), !v26) )
  {
    --*(_DWORD *)(v4 + 316);
  }
  sub_9955A0(v36);
  *(_DWORD *)v17 = v32;
  *(_BYTE *)(v17 + 4) = BYTE4(v32);
  if ( v5 == *(_QWORD *)(v17 + 8) )
  {
    if ( v5 == v33[0] )
    {
      if ( v27 != v33 )
      {
        sub_A4F010((__int64)v27);
        sub_21FFED0(v27, v33);
      }
      goto LABEL_18;
    }
  }
  else if ( v5 != v33[0] )
  {
    sub_21F9590(v27, v33);
LABEL_18:
    *(_QWORD *)(v17 + 32) = 0;
    v8 = (__int64 *)(v17 + 32);
    goto LABEL_5;
  }
  if ( v27 == v33 )
    goto LABEL_18;
  sub_9955A0(v27);
  if ( v5 == v33[0] )
  {
    sub_21FFED0(v27, v33);
    goto LABEL_18;
  }
  sub_21F97D0(v27, v33);
  v8 = (__int64 *)(v17 + 32);
  *(_QWORD *)(v17 + 32) = 0;
LABEL_5:
  sub_9955A0(v33);
  v9 = *v8;
  if ( !*v8 )
  {
    v18 = sub_20C2FB0(a1, *a3);
    v23 = sub_20C5270(v18, a2, v19, v20, v21, v22);
    v9 = sub_20C9AC0(48, unk_2673580);
    sub_20CA190(v9, v23, 6);
    *(_DWORD *)(v9 + 4) &= 0x38000000u;
    v24 = v9 + 24;
    if ( v5 == *a3 )
      sub_21FFE60(v24, a3);
    else
      sub_21F97A0(v24, a3);
    v25 = *v8;
    *v8 = v9;
    if ( v25 )
    {
      sub_9955A0((_QWORD *)(v25 + 24));
      sub_20CC0C0(v25);
      sub_20C9BF0(v25);
      return *v8;
    }
  }
  return v9;
}
