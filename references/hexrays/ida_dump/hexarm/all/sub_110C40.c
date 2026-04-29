__int64 __fastcall sub_110C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // r14
  int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v15; // [rsp+8h] [rbp-B8h]
  __int64 v16; // [rsp+10h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+18h] [rbp-A8h]
  _DWORD *v18; // [rsp+20h] [rbp-A0h]
  __int64 v19; // [rsp+28h] [rbp-98h]
  __int64 v20; // [rsp+30h] [rbp-90h]
  __int64 v21; // [rsp+38h] [rbp-88h]
  int v22; // [rsp+40h] [rbp-80h]
  __int64 v23; // [rsp+50h] [rbp-70h] BYREF
  __int64 v24; // [rsp+58h] [rbp-68h]
  _DWORD *v25; // [rsp+60h] [rbp-60h]
  __int64 v26; // [rsp+68h] [rbp-58h]
  __int64 v27; // [rsp+70h] [rbp-50h]
  __int64 v28; // [rsp+78h] [rbp-48h]
  int v29; // [rsp+80h] [rbp-40h]
  unsigned __int64 v30; // [rsp+88h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 4) != *(_DWORD *)(a4 + 4) )
    return 0;
  if ( (a5 & 0x20) != 0 && (unsigned __int8)sub_11F7C0(a4, 0, 1) && (unsigned __int8)sub_11F7C0(a3, 0, 1) )
    return 4;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( (unsigned __int8)sub_1255A0(a3, a4, 0) )
    return 0;
  v10 = a5 & 2;
  if ( !v10 )
    goto LABEL_14;
  if ( (unsigned __int8)sub_11F7C0(a4, &v23, 0) && !v23 )
    return 4;
  if ( (unsigned __int8)sub_130600(a1, a2, a3, a2, a4, 0) )
    return 2 * (unsigned int)(*(_BYTE *)a4 != 1) + 3;
  sub_123480(&v23, a3);
  if ( !(unsigned __int8)sub_12C750(&v23, v9, 1)
    || !(unsigned __int8)sub_12E4C0(v9, a1, a2, a4, a2, (unsigned int)&v23, 2) )
  {
    sub_11C7E0(&v23);
LABEL_14:
    v11 = *(_QWORD *)(a1 + 64);
    v16 = a1;
    v17 = a2;
    v18 = nullptr;
    v19 = a4;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    if ( !(unsigned __int8)sub_129BA0(v11, &v16, 1) )
      return 0;
    if ( v16 != a1 )
      goto LABEL_16;
    if ( !(unsigned __int8)sub_30DCB0(v9, a1, v17, v18, a2, a3) )
    {
      if ( v16 == a1 && *v18 == 11 )
      {
        sub_123480(&v23, v18 + 8);
        v13 = *(unsigned int *)(a3 + 4);
        if ( HIDWORD(v23) == (_DWORD)v13 + *(_DWORD *)(a4 + 4)
          && (unsigned __int8)sub_12A590(&v23, v9, v13, 1)
          && (unsigned __int8)sub_12E4C0(v9, a1, a2, a3, v17, (unsigned int)&v23, 0) )
        {
          sub_11C7E0(&v23);
          return 5;
        }
        sub_11C7E0(&v23);
      }
LABEL_16:
      if ( v10 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        v23 = a1;
        v24 = a2;
        v25 = nullptr;
        v26 = a3;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        if ( (unsigned __int8)sub_129BA0(v12, &v23, 1) )
        {
          if ( v23 == v16 && *v18 == 2 && *v25 == 2 && (unsigned __int8)sub_131DB0(v16, v24, v25, v17, v18, 0) )
            return 5;
        }
      }
      return 0;
    }
    return 4;
  }
  v15 = 2 * (*(_BYTE *)a3 != 1) + 3;
  sub_11C7E0(&v23);
  return v15;
}
