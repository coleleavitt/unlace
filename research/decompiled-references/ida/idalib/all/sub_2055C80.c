__int64 __fastcall sub_2055C80(_QWORD *a1, __int64 *a2)
{
  _DWORD *v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 v11; // rdx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 *v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r12
  char v26; // al
  __int64 *v27; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v28; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v29[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (_DWORD *)*a1;
  v5 = (__int64 *)(*a1 + 280LL);
  if ( (unsigned __int8)sub_2052B70(v5, a2, &v27) )
  {
    v8 = v27[3];
    v9 = v27 + 3;
    if ( v8 )
      return v8;
    goto LABEL_14;
  }
  v11 = (unsigned int)v4[74];
  v28 = v27;
  v12 = 2 * v11;
  v13 = v4[72] + 1;
  v14 = (unsigned int)(3 * v11);
  v15 = (__int64 *)(unsigned int)(4 * v13);
  if ( (unsigned int)v15 < (unsigned int)v14 )
  {
    v14 = (unsigned int)(v11 - v4[73] - v13);
    v16 = (__int64 *)((unsigned int)v11 >> 3);
    if ( (unsigned int)v14 > (unsigned int)v16 )
      goto LABEL_6;
    v12 = v11;
  }
  sub_2055850((__int64)v5, v12, v11, v14, v6, v7);
  v16 = a2;
  v15 = v5;
  sub_2052B70(v5, a2, &v28);
  v13 = v4[72] + 1;
LABEL_6:
  v4[72] = v13;
  v17 = sub_21F90F0();
  v19 = sub_21F90D0(v15, v16, v18);
  v20 = v19;
  if ( v17 == v19 )
    sub_21FFCB0(v29, v19, 1);
  else
    sub_21FAF40(v29, v17, 1);
  v21 = v28;
  if ( *v28 != v29[0] || (*v28 == v20 ? (v26 = sub_2201080(v28, v29)) : (v26 = sub_21F96E0(v28, v29)), v21 = v28, !v26) )
    --v4[73];
  sub_9955A0(v29);
  if ( *v21 == v20 )
  {
    if ( *a2 == v20 )
    {
      sub_21FFEF0(v21, a2);
      goto LABEL_13;
    }
LABEL_19:
    if ( v21 != a2 )
    {
      sub_9955A0(v21);
      if ( v20 == *a2 )
        sub_21FFE60(v21, a2);
      else
        sub_21F97A0(v21, a2);
    }
    goto LABEL_13;
  }
  if ( *a2 == v20 )
    goto LABEL_19;
  sub_21F9550(v21, a2);
LABEL_13:
  v21[3] = 0;
  v9 = v21 + 3;
LABEL_14:
  v22 = sub_20C2FB0(a1, *a2);
  v8 = sub_20C9AC0(48, unk_2673580);
  sub_20CA190(v8, v22, 6);
  *(_DWORD *)(v8 + 4) &= 0x38000000u;
  v24 = v8 + 24;
  if ( *a2 == sub_21F90D0(v8, v22, v23) )
    sub_21FFE60(v24, a2);
  else
    sub_21F97A0(v24, a2);
  v25 = *v9;
  *v9 = v8;
  if ( v25 )
  {
    sub_9955A0((_QWORD *)(v25 + 24));
    sub_20CC0C0(v25);
    sub_20C9BF0(v25);
    return *v9;
  }
  return v8;
}
