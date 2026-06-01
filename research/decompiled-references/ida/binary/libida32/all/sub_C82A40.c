__int64 __fastcall sub_C82A40(_QWORD *a1, unsigned int a2, int *a3, _QWORD *a4, _BYTE *a5, __int64 *a6)
{
  __int64 v10; // rbp
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r9
  __int64 v20; // r15
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r14
  bool v23; // cf
  int v24; // eax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rsi
  __int64 v27; // rsi
  int v28; // esi
  __int64 v29; // rsi
  unsigned int v30; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int8 v31; // [rsp+17h] [rbp-41h] BYREF
  _QWORD v32[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = (__int64)(a1 + 55);
  v30 = a2;
  v31 = 1;
  sub_C7BEC0(a1 + 55, &v30, &v31);
  if ( (*a6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v32[0] = a1[56] - a1[55];
    sub_C7C0D0((__int64)(a1 + 58), v32, a6);
  }
  v12 = a1[56];
  v13 = a1[55];
  v14 = a1[56] - v13;
  if ( v14 + 4 <= 0xFFFFFFFF )
  {
    v16 = v14 + 7;
    v17 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v17 + 8;
    if ( v14 < v17 + 8 )
    {
      sub_C7BD20(v10, v18 - v14);
      v12 = a1[56];
      v13 = a1[55];
      v14 = v12 - v13;
      v19 = v12 - v13 + 4;
    }
    else
    {
      if ( v14 <= v17 + 8 || v12 == v13 + v18 )
      {
        v28 = *a3;
        v22 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        *(_DWORD *)(v13 + v17) = v28;
        v21 = (v16 & 0xFFFFFFFFFFFFFFF8LL) + 8;
        v20 = a1[47];
        v23 = v21 < v14;
        if ( v21 > v14 )
        {
LABEL_12:
          sub_C7BD20(v10, v21 - v14);
          goto LABEL_13;
        }
LABEL_20:
        if ( v23 )
        {
          v29 = v13 + v21;
          if ( v29 != v12 )
            a1[56] = v29;
        }
LABEL_13:
        v24 = sub_E099F0(v20, *a4);
        v12 = a1[56];
        v13 = a1[55];
        *(_DWORD *)(v13 + v22) = v24;
        result = 0;
        v14 = v12 - v13;
        if ( (unsigned __int64)(v12 - v13 + 1) > 0xFFFFFFFF )
          return result;
        goto LABEL_14;
      }
      a1[56] = v13 + v18;
      v19 = v17 + 12;
      v14 = v17 + 8;
      v12 = v13 + v18;
    }
    *(_DWORD *)(v13 + v17) = *a3;
    v20 = a1[47];
    if ( v19 > 0xFFFFFFFF )
      goto LABEL_4;
    v21 = ((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    v22 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v23 = v21 < v14;
    if ( v21 > v14 )
      goto LABEL_12;
    goto LABEL_20;
  }
LABEL_4:
  v31 = 0;
  result = 0;
  if ( v14 + 1 > 0xFFFFFFFF )
    return result;
LABEL_14:
  v25 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v26 = v25 + 8;
  if ( v25 + 8 > v14 )
  {
    sub_C7BD20(v10, v26 - v14);
    *(_BYTE *)(a1[55] + v25) = *a5;
    return v31;
  }
  else
  {
    if ( v25 + 8 < v14 )
    {
      v27 = v13 + v26;
      if ( v27 != v12 )
        a1[56] = v27;
    }
    *(_BYTE *)(v13 + v25) = *a5;
    return v31;
  }
}

