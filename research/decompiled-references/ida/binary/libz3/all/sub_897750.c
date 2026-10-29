__int64 __fastcall sub_897750(__int64 a1, __int64 a2, _QWORD *a3)
{
  bool v3; // zf
  _DWORD *v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  _DWORD *v8; // rax
  char v9; // al
  __int16 v10; // dx
  _DWORD *v11; // rax
  unsigned int v12; // r12d
  void *v13; // rbx
  __int64 v15; // rdx
  char v16; // [rsp+Eh] [rbp-4Ah] BYREF
  char v17; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v18[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_WORD *)(a2 + 4) == 0;
  v18[0] = 0;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  if ( !v3 )
    goto LABEL_27;
  v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v4 || *v4 != 5 || v4[1] != 9 || *(_DWORD *)(a2 + 24) != 2 )
    goto LABEL_27;
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 32);
  if ( !*(_WORD *)(v5 + 4) )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
    if ( v8 )
    {
      if ( *v8 == 5 && !v8[1] )
      {
        v6 = *(_QWORD *)(a2 + 40);
        v5 = *(_QWORD *)(a2 + 32);
      }
    }
  }
  v9 = sub_1666AE0(a1 + 112, v6, v18, &v16);
  v10 = *(_WORD *)(v5 + 4);
  if ( !v9
    || (v18[0] & 0x100000000LL) != 0
    || LODWORD(v18[0]) != -1
    || (v19[0] & 0x100000000LL) != 0
    || LODWORD(v19[0]) != 1 )
  {
    if ( !v10 )
    {
      v11 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( v11 )
      {
        if ( *v11 == 5 && v11[1] == 8 )
        {
          v15 = v5;
          v5 = v6;
          v6 = v15;
LABEL_18:
          if ( v11[1] == 8
            && *(_DWORD *)(v6 + 24) == 1
            && (unsigned __int8)sub_1666AE0(a1 + 112, *(_QWORD *)(v6 + 32), v18, &v17)
            && (v18[0] & 0x100000000LL) == 0
            && LODWORD(v18[0]) == 1
            && (v19[0] & 0x100000000LL) == 0
            && LODWORD(v19[0]) == 1
            && !*(_WORD *)(v5 + 4) )
          {
            goto LABEL_26;
          }
LABEL_27:
          v12 = 0;
          goto LABEL_28;
        }
      }
    }
LABEL_15:
    if ( *(_WORD *)(v6 + 4) )
      goto LABEL_27;
    v11 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( !v11 || *v11 != 5 )
      goto LABEL_27;
    goto LABEL_18;
  }
  if ( v10 )
    goto LABEL_15;
LABEL_26:
  *a3 = v5;
  v12 = 1;
LABEL_28:
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  sub_182CBA0(v13, v19);
  return v12;
}

