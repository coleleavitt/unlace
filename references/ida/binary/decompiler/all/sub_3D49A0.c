__int64 __fastcall sub_3D49A0(__int64 a1, __int64 *a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rdx
  __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // ecx
  char v15; // al
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 (**v19)(); // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+8h] [rbp-30h]
  __int64 v21; // [rsp+10h] [rbp-28h]
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 16);
  v22 = __readfsqword(0x28u);
  v8 = *a2;
  v9 = *(_QWORD **)(v6 + 872);
  v10 = &v9[*(_QWORD *)(v6 + 880)];
  if ( v9 == v10 )
  {
LABEL_5:
    if ( sub_3B97C0(a2[11], v8) )
    {
      v11 = sub_3CC1C0(*(_QWORD **)(a1 + 16), 3, -1, 0);
      LODWORD(v20) = -1;
      v12 = (__int64)v11;
      v13 = a2[11];
      v14 = *(_DWORD *)(v12 + 56);
      v19 = off_4E59D8;
      v21 = v13;
      v15 = sub_3D4570(v12, &v19, 0, v14, a3, a4, a5, a6);
      v17 = *(_QWORD *)(a1 + 16);
      if ( v15 )
        callui(
          174,
          *(_QWORD *)v12,
          (*(_DWORD *)(*(_QWORD *)v17 + 720LL) << 16) | 0x104u,
          0,
          &callui,
          v16,
          v19,
          v20,
          v21,
          v22);
      else
        sub_3CBBA0(v17);
    }
  }
  else
  {
    while ( !*v9 || v8 != *(_QWORD *)*v9 )
    {
      if ( v10 == ++v9 )
        goto LABEL_5;
    }
  }
  return 0;
}
