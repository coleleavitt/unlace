__int64 __fastcall sub_300110(__int64 a1, __int64 a2)
{
  void *v3; // rbp
  int v4; // eax
  __int64 v5; // rbp
  __int64 (__fastcall *v6)(); // rax
  void *v7; // rdi
  int v8; // eax
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rbx
  void *v13; // [rsp+8h] [rbp-80h]
  _QWORD v14[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-68h] BYREF
  int v16; // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+34h] [rbp-54h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  int v19; // [rsp+40h] [rbp-48h] BYREF
  char v20; // [rsp+44h] [rbp-44h]
  __int64 v21; // [rsp+48h] [rbp-40h]

  v14[0] = 0;
  v14[1] = 0;
  v3 = qword_1C7F2C0;
  v15[0] = 1;
  v15[1] = 0;
  if ( (*(_BYTE *)(a2 + 116) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v14, a2 + 112);
  else
    LODWORD(v14[0]) = *(_DWORD *)(a2 + 112);
  if ( (*(_BYTE *)(a2 + 132) & 1) != 0 )
  {
    sub_182C690(v3, v15, a2 + 128);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 128);
    BYTE4(v15[0]) &= ~1u;
    LODWORD(v15[0]) = v4;
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 32LL);
    if ( v6 != sub_304180 )
    {
      ((void (__fastcall *)(int *, _QWORD))v6)(&v16, *(_QWORD *)(a2 + 24));
      goto LABEL_10;
    }
    v17 &= 0xFCu;
    v7 = qword_1C7F2C0;
    v20 &= 0xFCu;
    v16 = 0;
    v18 = 0;
    v19 = 1;
    v21 = 0;
    if ( (*(_BYTE *)(v5 + 108) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v16, v5 + 104);
      if ( (*(_BYTE *)(v5 + 124) & 1) == 0 )
        goto LABEL_9;
    }
    else
    {
      v16 = *(_DWORD *)(v5 + 104);
      if ( (*(_BYTE *)(v5 + 124) & 1) == 0 )
      {
LABEL_9:
        v8 = *(_DWORD *)(v5 + 120);
        v20 &= ~1u;
        v19 = v8;
LABEL_10:
        v9 = qword_1C7F2C0;
        if ( (v20 & 1) != 0 || v19 != 1 || (v15[0] & 0x100000000LL) != 0 || LODWORD(v15[0]) != 1 )
        {
          if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, &v16, v14) )
          {
LABEL_17:
            v9 = qword_1C7F2C0;
LABEL_18:
            sub_182CBA0(v9, &v16);
            sub_182CBA0(v9, &v19);
            goto LABEL_19;
          }
        }
        else
        {
          if ( (v17 & 1) == 0 && (v14[0] & 0x100000000LL) == 0 )
          {
            if ( v16 >= SLODWORD(v14[0]) )
              goto LABEL_18;
            LODWORD(v14[0]) = v16;
            BYTE4(v14[0]) &= ~1u;
            goto LABEL_16;
          }
          if ( (int)sub_182C7B0(qword_1C7F2C0, &v16, v14) >= 0 )
            goto LABEL_17;
        }
        v10 = qword_1C7F2C0;
        if ( (v17 & 1) != 0 )
        {
          v13 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v14, &v16);
          v10 = v13;
        }
        else
        {
          BYTE4(v14[0]) &= ~1u;
          LODWORD(v14[0]) = v16;
        }
        if ( (v20 & 1) != 0 )
        {
          sub_182C690(v10, v15, &v19);
          v9 = qword_1C7F2C0;
          goto LABEL_18;
        }
LABEL_16:
        BYTE4(v15[0]) &= ~1u;
        LODWORD(v15[0]) = v19;
        goto LABEL_17;
      }
    }
    sub_182C690(v7, &v19, v5 + 120);
    goto LABEL_10;
  }
LABEL_19:
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(**(_QWORD **)(a2 + 8) + 104LL))(
    a1,
    *(_QWORD *)(a2 + 8),
    *(unsigned int *)(a2 + 16),
    v14);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v11, v15);
  return a1;
}

