void __fastcall sub_1E6D380(__int64 *a1, __int64 a2, __int64 *a3, double a4)
{
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 (*v11)(); // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rdi
  unsigned int v22; // edi
  unsigned int v23; // esi
  unsigned __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  bool v30; // cc
  unsigned __int64 v31; // rax
  unsigned int v32; // [rsp+Ch] [rbp-FCh] BYREF
  unsigned int v33; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+14h] [rbp-F4h]
  int v35; // [rsp+1Ch] [rbp-ECh]
  void *v36; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-E0h]
  char v38; // [rsp+2Ch] [rbp-DCh]
  __int64 v39; // [rsp+30h] [rbp-D8h] BYREF
  int v40; // [rsp+38h] [rbp-D0h]
  _BYTE v41[184]; // [rsp+50h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(a3[31] + 17448);
  v8 = *(__int64 (**)())(*(_QWORD *)v7 + 584LL);
  if ( v8 == sub_A55EE0 || !((unsigned __int8 (__fastcall *)(__int64, const char *, __int64))v8)(v7, "zve32x", 6) )
  {
    sub_168B9F0((__int64)v41, a3 + 1, *(_DWORD *)(a2 + 24), 0xC9Eu, 0);
    v9 = sub_15DD120((__int64)v41, a2);
    if ( *(_BYTE *)(v9 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v9 + 32), (__int64)"'zve32x'", 1u);
    }
    else if ( *(_BYTE *)(v9 + 132) )
    {
      sub_1E63E10(v9, (__int64)"'zve32x'");
    }
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(a3[31] + 17448);
  v11 = *(__int64 (**)())(*(_QWORD *)v10 + 280LL);
  if ( v11 == sub_A55EB0
    || (v34 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v11)(v10, a3[29], 0, 0),
        v35 = v15,
        (_BYTE)v15 != 1)
    || !(_DWORD)v34
    || (_DWORD)v34 != HIDWORD(v34) )
  {
    sub_168B9F0((__int64)v41, a3 + 1, *(_DWORD *)(a2 + 24), 0xC95u, 0);
    sub_15DD120((__int64)v41, a2);
    sub_15F7200(v41);
    *(_BYTE *)(a2 + 58) |= 1u;
    return;
  }
  if ( *(_WORD *)(a2 + 56) != 1 )
  {
    sub_168B9F0((__int64)v41, a3 + 1, *(_DWORD *)(a2 + 24), 0xCAAu, 0);
    v27 = sub_15DD120((__int64)v41, a2);
    LODWORD(v39) = 1;
    sub_1587D10(v27, (int *)&v39);
LABEL_5:
    sub_15F7200(v41);
    *(_BYTE *)(a2 + 58) |= 1u;
    return;
  }
  v38 = 1;
  v37 = 32;
  v36 = nullptr;
  if ( (unsigned __int8)sub_1E6CDD0((__int64)a3, a2, (__int64)&v36, a4, v12, v13, v14) )
  {
    if ( sub_F58410(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      LODWORD(v16) = (_DWORD)v36;
      if ( v37 > 0x40 )
        v16 = *(_QWORD *)v36;
      v32 = v16;
      sub_A649E0(
        (__int64)&v39,
        (_QWORD *)a3[31],
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      v17 = (_QWORD *)a3[31];
      v18 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
      v33 = v40 * v34;
      v19 = sub_F58440(*v18, v17);
      v20 = sub_A97D20(a3[31], *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
      v21 = a3[31];
      if ( v39 == *(_QWORD *)(v21 + 18640) )
      {
        v31 = sub_A97D20(v21, *(_QWORD *)(*(_QWORD *)(v21 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
        if ( v32 < v31 )
        {
          v22 = v32;
          v23 = v33;
          v24 = v32 - 1;
          if ( (unsigned int)v24 > 3 )
          {
            LODWORD(v24) = 1;
            v25 = 8;
          }
          else
          {
            v25 = dword_266C250[v24];
            LODWORD(v24) = 1;
          }
        }
        else
        {
          v22 = v32;
          v23 = v33;
          v24 = v32 / v31;
          v25 = 9;
        }
      }
      else
      {
        v22 = v32;
        v23 = v20 * v33;
        LODWORD(v24) = v32 / v20;
        v33 = v23;
        v25 = 8;
      }
      if ( v23 == v22 )
      {
        v29 = sub_A70300(a3[31], v19, v24, v25);
        v30 = v37 <= 0x40;
        *a1 = v29;
        if ( v30 )
          return;
        goto LABEL_23;
      }
      sub_168B9F0((__int64)v41, a3 + 1, *(_DWORD *)(a2 + 24), 0xC5Du, 0);
      v26 = sub_1588370((__int64)v41, &v32);
      sub_1588370(v26, &v33);
      sub_15F7200(v41);
      *(_BYTE *)(a2 + 58) |= 1u;
    }
    else
    {
      sub_168B9F0((__int64)v41, a3 + 1, *(_DWORD *)(a2 + 24), 0xC76u, 0);
      v28 = sub_15DD120((__int64)v41, a2);
      sub_1605D30(v28, a1);
      sub_15F7200(v41);
      *(_BYTE *)(a2 + 58) |= 1u;
    }
  }
  if ( v37 <= 0x40 )
    return;
LABEL_23:
  if ( v36 )
    operator delete[](v36);
}
