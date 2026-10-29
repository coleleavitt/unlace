__int64 __fastcall sub_21B4340(__int64 a1, _DWORD *a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  void (*v5)(void); // rax
  unsigned __int8 *v6; // rax
  void (*v7)(void); // rdx
  void (*v8)(void); // rdx
  const void *v9; // rax
  void *v10; // rax
  bool (__fastcall *v11)(__int64); // rax
  bool v12; // al
  const void *v13; // rax
  size_t v14; // rdx
  bool (__fastcall *v15)(_DWORD *, __int64); // rax
  bool (__fastcall *v16)(__int64); // rax
  bool v17; // al
  _DWORD *v18; // rdx
  bool v19; // al
  char *v20; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v21; // [rsp+10h] [rbp-88h] BYREF
  _DWORD *v22; // [rsp+18h] [rbp-80h]
  __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  char v24; // [rsp+28h] [rbp-70h]
  char *v25; // [rsp+30h] [rbp-68h] BYREF
  char v26; // [rsp+38h] [rbp-60h]
  void *s2; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h]
  char v29; // [rsp+50h] [rbp-48h]

  v22 = a2;
  v21 = a3;
  sub_21B3F90((bool *)&v23, &v21);
  if ( (v24 & 1) == 0 )
  {
    if ( (_BYTE)v23 )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 5;
      goto LABEL_3;
    }
    v5 = *(void (**)(void))(*(_QWORD *)v22 + 64LL);
    if ( (char *)v5 != (char *)sub_21B1110 )
      v5();
    v6 = v21;
    if ( v21[16] == 103 )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 4;
      goto LABEL_3;
    }
    v7 = *(void (**)(void))(*(_QWORD *)v22 + 64LL);
    if ( (char *)v7 != (char *)sub_21B1110 )
    {
      v7();
      v6 = v21;
    }
    if ( (__int16)__ROL2__(*((_WORD *)v6 + 6), 8) <= 0 )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 1;
      goto LABEL_3;
    }
    v8 = *(void (**)(void))(*(_QWORD *)v22 + 64LL);
    if ( (char *)v8 != (char *)sub_21B1110 )
    {
      v8();
      v6 = v21;
    }
    sub_21B2AF0((__int64)&v25, (__int64)a2, __ROL2__(*((_WORD *)v6 + 6), 8));
    v9 = v25;
    if ( (v26 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 8) |= 1u;
      v25 = nullptr;
      *(_QWORD *)a1 = v9;
LABEL_18:
      sub_21B33F0((__int64 *)&v25);
      goto LABEL_3;
    }
    v20 = v25;
    sub_21B2CC0((__int64)&s2, (__int64)&v21);
    if ( (v29 & 1) != 0 )
    {
      v10 = s2;
      *(_BYTE *)(a1 + 8) |= 1u;
      s2 = nullptr;
      *(_QWORD *)a1 = v10;
    }
    else
    {
      if ( v28 == 3 && *(_WORD *)s2 == 20308 && *((_BYTE *)s2 + 2) == 67 )
        goto LABEL_42;
      v11 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
      v12 = v11 == sub_21B1110 ? a2[2] == 12 : v11((__int64)a2);
      v13 = v12 ? sub_21B2E40(v25) : sub_21B2E10(v25);
      if ( v14 == v28 && (!v14 || !memcmp(v13, s2, v14)) )
        goto LABEL_42;
      v15 = *(bool (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a2 + 208LL);
      if ( v15 == sub_21B1680 )
      {
        v16 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
        if ( v16 == sub_21B1110 )
          v17 = a2[2] == 12;
        else
          v17 = v16((__int64)a2);
        v18 = v20 + 36;
        if ( v17 )
          v18 = v20 + 64;
        v19 = (*v18 & 0x40040000) != 0;
      }
      else
      {
        v19 = v15(a2, (__int64)v20);
      }
      if ( v19 || (*(unsigned __int8 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)a2 + 216LL))(a2, v20) )
      {
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 2;
        goto LABEL_21;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)a2 + 264LL))(a2, v20) )
      {
LABEL_42:
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 3;
      }
    }
LABEL_21:
    sub_111DFC0((__int64 *)&s2);
    goto LABEL_18;
  }
  v3 = v23;
  *(_BYTE *)(a1 + 8) |= 1u;
  v23 = 0;
  *(_QWORD *)a1 = v3;
LABEL_3:
  sub_12EBA60(&v23);
  return a1;
}
