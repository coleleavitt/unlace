_BOOL8 __fastcall sub_118560(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  bool v8; // zf
  __int64 v13; // rsi
  __int64 v16; // rdi
  char v17; // al
  _DWORD *v18; // r15
  _DWORD *v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  int *v25; // r9
  char v26; // al
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // [rsp+8h] [rbp-60h]
  _DWORD *v38; // [rsp+18h] [rbp-50h]
  __int64 v39[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_DWORD *)a6 == 12;
  v39[1] = __readfsqword(0x28u);
  if ( !v8 )
    return 0;
  v13 = a1[1];
  v38 = (_DWORD *)(a6 + 48);
  v36 = (_DWORD *)(a6 + 32);
  v16 = *(_QWORD *)(*(_QWORD *)(v13 + 480) + 112LL);
  if ( a2 == 12 )
  {
    if ( (unsigned __int8)sub_30D9F0(v16, v13, a7, a8, a5, a6 + 32) )
      goto LABEL_5;
    if ( (unsigned __int8)sub_30D9F0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a5, v38) )
      goto LABEL_18;
    v26 = sub_30D9F0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a3, a4);
LABEL_22:
    if ( !v26 )
      goto LABEL_7;
    if ( *(_BYTE *)(a6 + 32) != 4 || **(_DWORD **)(a6 + 40) != 11 )
      goto LABEL_5;
    goto LABEL_18;
  }
  if ( (unsigned __int8)sub_30D8F0(v16, v13, a7, a8, a5, v36) )
  {
LABEL_5:
    v17 = sub_117F20((__int64)a1, a5, v36, (__int64)v38, a7, a8);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_30D8F0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a5, v38) )
  {
    v26 = sub_30D8F0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a3, a4);
    goto LABEL_22;
  }
LABEL_18:
  v17 = sub_117F20((__int64)a1, a5, v38, (__int64)v36, a7, a8);
LABEL_6:
  if ( !v17 )
  {
LABEL_7:
    if ( *(_BYTE *)a4 != 4 )
      return 0;
    v18 = *(_DWORD **)(a4 + 8);
    if ( *v18 != 12 || !v18 )
      return 0;
    v19 = v18 + 8;
    if ( (unsigned __int8)sub_30D9F0(*a1, a1[1], a7, a8, a3, v18 + 8) )
    {
      v20 = a1[10];
      v21 = a1[11];
      v22 = (__int64)(v18 + 12);
      v39[0] = v22;
      v23 = a1[9];
      if ( v21 < v20 + 1 )
      {
        v33 = qvector_reserve((__int64)(a1 + 9), v23, v20 + 1, 8);
        a1[9] = v33;
        v23 = v33;
        v20 = a1[10];
      }
      *(_QWORD *)(v23 + 8 * v20) = v22;
    }
    else
    {
      if ( !(unsigned __int8)sub_30D9F0(*a1, a1[1], a7, a8, a3, v18 + 12) )
        return 0;
      v27 = a1[10];
      v28 = a1[9];
      v39[0] = (__int64)(v18 + 8);
      v29 = a1[11];
      v30 = (__int64)(a1 + 9);
      v31 = v27;
      v32 = v27 + 1;
      if ( (unsigned __int64)v39 < v28 || (unsigned __int64)v39 >= v28 + 8 * v29 )
      {
        if ( v29 < v32 )
        {
          v34 = qvector_reserve(v30, v28, v32, 8);
          v31 = a1[10];
          a1[9] = v34;
          v28 = v34;
        }
        *(_QWORD *)(v28 + 8 * v31) = v19;
      }
      else
      {
        if ( v29 < v32 )
        {
          v35 = qvector_reserve(v30, v28, v32, 8);
          a1[9] = v35;
          v28 = v35;
          v27 = a1[10];
        }
        *(_QWORD *)(v28 + 8 * v27) = v19;
      }
    }
    ++a1[10];
    v24 = a1[1];
    v39[0] = a5;
    v25 = (int *)sub_129440(v24, v38, v39, 1);
    return v25 && (unsigned __int8)sub_117FD0(a1, 0, v39[0], (int)v38, v39[0], v25, a7, a8);
  }
  return 1;
}
