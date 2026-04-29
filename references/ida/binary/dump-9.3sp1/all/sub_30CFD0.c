char __fastcall sub_30CFD0(__int128 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const __m128i *v7; // r13
  char result; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  unsigned int *v15; // rbx
  unsigned int *v16; // r12
  char v18; // [rsp+18h] [rbp-78h]
  __int64 v19; // [rsp+20h] [rbp-70h] BYREF
  __int64 v20; // [rsp+28h] [rbp-68h] BYREF
  _BYTE v21[4]; // [rsp+30h] [rbp-60h] BYREF
  int v22; // [rsp+34h] [rbp-5Ch]
  _BYTE v23[4]; // [rsp+40h] [rbp-50h] BYREF
  int v24; // [rsp+44h] [rbp-4Ch]
  unsigned __int64 v25; // [rsp+58h] [rbp-38h]

  v7 = *((const __m128i **)&a1 + 1);
  v25 = __readfsqword(0x28u);
  result = sub_1255D0((unsigned __int8 *)a3, a1, a5, 0);
  if ( !result && a2 && a4 )
  {
    sub_123A40((__int64)v21, (unsigned __int8 *)a3, v10, v11);
    *((_QWORD *)&a1 + 1) = v21;
    v19 = a2;
    sub_30CBB0(a1, &v19, (__int64)v7);
    if ( v22 > 1 )
      sub_1279B0((unsigned __int64)v21, a1, *(_QWORD *)(v19 + 24), 1);
    sub_123A40((__int64)v23, (unsigned __int8 *)a5, v12, v13);
    v20 = a4;
    *((_QWORD *)&a1 + 1) = v23;
    sub_30CBB0(a1, &v20, (__int64)v7);
    if ( v24 > 1 )
      sub_1279B0((unsigned __int64)v23, a1, *(_QWORD *)(v20 + 24), 1);
    v14 = sub_12EA80(a1, v7, v19, (__int64)v21, v20, (__int64)v23, 0);
    if ( v14 )
      goto LABEL_14;
    if ( !v7 || *(_BYTE *)a3 != 4 || *(_BYTE *)a5 != 4 )
      goto LABEL_12;
    v15 = *(unsigned int **)(a5 + 8);
    v16 = *(unsigned int **)(a3 + 8);
    if ( sub_131FD0(v7, a2, (__int64)v16, a4, v15) )
LABEL_14:
      v14 = 1;
    else
      v14 = sub_131FD0(v7, a4, (__int64)v15, a2, v16);
LABEL_12:
    v18 = v14;
    sub_11CDA0((__int64)v23);
    sub_11CDA0((__int64)v21);
    return v18;
  }
  return result;
}
