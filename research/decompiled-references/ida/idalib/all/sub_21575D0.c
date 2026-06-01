__int64 __fastcall sub_21575D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  __int64 v5; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  char v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]

  v2 = 60;
  v3 = *a2;
  v4 = *(__int64 (**)())(*a2 + 104LL);
  if ( v4 != sub_2156B30 )
  {
    v2 = ((__int64 (__fastcall *)(_QWORD *))v4)(a2);
    v3 = *a2;
  }
  (*(void (__fastcall **)(__int64 *, _QWORD *))(v3 + 96))(&v10, a2);
  if ( (v11 & 1) != 0 )
  {
    v5 = v10;
    *(_BYTE *)(a1 + 8) |= 1u;
    v10 = 0;
    *(_QWORD *)a1 = v5;
  }
  else
  {
    if ( !(_BYTE)v10 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD *))(*a2 + 72LL))(&v12, a2);
      if ( (v13 & 1) != 0 )
      {
        v7 = v12;
        *(_BYTE *)(a1 + 8) |= 1u;
        v12 = 0;
        *(_QWORD *)a1 = v7;
        sub_A0AE70(&v12);
        goto LABEL_5;
      }
      v2 += v12;
      sub_A0AE70(&v12);
    }
    v8 = a2[2] + 2 * ((v2 != 0) + ((v2 - (unsigned __int64)(v2 != 0)) >> 1));
    sub_215DED0(&v12, a2[1]);
    v9 = v12 + v13;
    *(_BYTE *)(a1 + 8) &= ~1u;
    if ( v8 == v9 )
      *(_QWORD *)a1 = 0;
    else
      *(_QWORD *)a1 = v8;
  }
LABEL_5:
  sub_12EBA60(&v10);
  return a1;
}
