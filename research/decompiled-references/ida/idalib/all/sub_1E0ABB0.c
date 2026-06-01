__int64 __fastcall sub_1E0ABB0(__int64 a1, __int64 **a2)
{
  __int64 v3; // r14
  void (__fastcall *v4)(__int64, __int64 (__fastcall ***)(), _QWORD *, __int64); // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdi
  int v11; // r14d
  _BYTE *v12; // rax
  size_t v13; // rdx
  _QWORD v15[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+10h] [rbp-78h] BYREF
  int v17; // [rsp+18h] [rbp-70h]
  __int128 v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  char v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+3Ch] [rbp-4Ch]
  __int64 v22; // [rsp+40h] [rbp-48h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  v22 = a1;
  v18 = 0;
  v16 = &off_2BEBE68;
  v17 = 0;
  v20 = 0;
  v21 = 1;
  v19 = 0;
  sub_227B8B0(&v16, 0, 0, 0);
  v3 = **a2;
  v4 = *(void (__fastcall **)(__int64, __int64 (__fastcall ***)(), _QWORD *, __int64))(*(_QWORD *)v3 + 96LL);
  v15[0] = sub_16043A0((_QWORD *)a2[1][31], (_QWORD *)a2[1][30], v5, v6, v7, v8);
  v15[1] = v9;
  v4(v3, &v16, v15, 1);
  if ( (unsigned __int8)sub_224A960() )
  {
    v10 = a2[1][34];
    v11 = *(_DWORD *)(**a2 + 24);
    if ( v11 < 0 )
    {
      v11 = sub_10212A0(v10, v11);
      v10 = a2[1][34];
    }
    v12 = (_BYTE *)sub_101FA90(v10, v11);
    sub_99BDC0((_QWORD *)(a1 + 32), 0, *(_QWORD *)(a1 + 40), v12, v13);
    *(_DWORD *)(a1 + 64) = sub_1022880(a2[1][34], v11, nullptr);
  }
  v16 = &off_2BEBE68;
  sub_227B7A0(&v16);
  return a1;
}
