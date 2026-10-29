__int64 __fastcall sub_19B4DA0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, __m128 a6, __m128 a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned int v22; // r12d
  bool v23; // al
  __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+8h] [rbp-40h]
  char v26; // [rsp+10h] [rbp-38h]

  v11 = sub_19A7C30(a2, a3, a4, a5, a6, a7);
  if ( v11 == 1 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 16) = 1;
    *(_BYTE *)(a1 + 18) = 0;
  }
  else
  {
    v15 = 0;
    v16 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v16;
    if ( v16 )
      v15 = (unsigned int)sub_C00A40(v16, a3, 0, v12, v13);
    v18 = sub_19B4A30(a2, v17, v15, 0, 0, 0, a6, a7);
    *(_QWORD *)a1 = a3;
    *(_QWORD *)(a1 + 8) = v18;
    *(_BYTE *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 18) = 0;
    if ( a5 == 1 )
    {
      v21 = v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( v21 )
      {
        sub_C3EB00((__int64)&v24, v21, *(_QWORD *)(a2 + 248), nullptr, v19, v20);
        if ( v26 )
        {
          v22 = v25;
          if ( v25 <= 0x40 )
            v23 = v24 == 0;
          else
            v23 = v22 == (unsigned int)sub_2206780(&v24);
          *(_BYTE *)(a1 + 18) = 1;
          *(_BYTE *)(a1 + 17) = !v23;
        }
        sub_98E4B0((__int64)&v24);
      }
    }
  }
  return a1;
}
