__int64 __fastcall sub_252180(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int *v8; // rax
  int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned int v12; // r15d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  __int64 v19; // rdi
  bool v20; // bp
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  double v23; // [rsp+8h] [rbp-70h]
  unsigned __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v25[8]; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v26[88]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(int **)(a3 + 24);
  if ( !v8 )
  {
    v9 = -1;
LABEL_3:
    if ( *(_DWORD *)(a1 + 1444) == v9 )
    {
      v10 = sub_16746C0(a1 + 312, a2, a3);
    }
    else if ( *(_DWORD *)(a1 + 1452) == v9
           && (*(_BYTE *)(a2 + 20) & 1) == 0
           && *(_DWORD *)(a2 + 16) == 1
           && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, a2) )
    {
      if ( (unsigned __int8)sub_16256D0(a1 + 336, a3, &v24) )
      {
        v22 = sub_182D020(qword_1C7F2C0, a2);
        if ( v22 >= v24 )
        {
          if ( *(_QWORD *)(a1 + 1528) )
          {
            sub_2BC170();
            (*(void (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 3);
          }
        }
      }
      v21 = sub_182D020(qword_1C7F2C0, a2);
      v10 = sub_1625BE0(a1 + 336, v21, a3);
    }
    else if ( *(_DWORD *)(a1 + 1460) == v9 )
    {
      v24 = *(_QWORD *)(a1 + 376) + 24LL;
      sub_181A6B0(v25);
      v11 = *(_QWORD *)(a1 + 376) + 24LL;
      v23 = sub_184BE10(qword_1C7F2C0, a2);
      v12 = sub_15C5560(a1 + 368, a3);
      v17 = sub_15C5540((int)a1 + 368, a3, v13, v14, v15, v16);
      sub_181ABC0(v11, v25, v17, v12, v23);
      v10 = sub_15CC210(*(_QWORD *)(a1 + 376), v25);
      sub_182EF00(*(_QWORD *)(v24 + 728), v26);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 1528) )
      {
        sub_2BC170();
        (*(void (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 3);
      }
      v10 = 0;
    }
    goto LABEL_10;
  }
  v9 = *v8;
  if ( *v8 != 5 )
    goto LABEL_3;
  v19 = *(_QWORD *)(a1 + 304);
  v20 = v8[1] == 1;
  if ( !v19 )
  {
    sub_16669E0(a1 + 296);
    v19 = *(_QWORD *)(a1 + 304);
  }
  v10 = sub_166A700(v19, a2, v20, a4, a5, a6);
LABEL_10:
  sub_251FD0(a1, v10);
  return v10;
}

