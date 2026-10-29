__int64 __fastcall sub_CFD0D0(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  void **v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int8 **v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax
  unsigned __int64 i; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int8 **v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-130h]
  __int64 v23; // [rsp+18h] [rbp-120h] BYREF
  void *v24; // [rsp+20h] [rbp-118h] BYREF
  signed __int64 v25; // [rsp+28h] [rbp-110h]
  __int64 v26; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v27[6]; // [rsp+40h] [rbp-F8h] BYREF
  int v28; // [rsp+58h] [rbp-E0h]
  unsigned int v29[6]; // [rsp+70h] [rbp-C8h] BYREF
  int v30; // [rsp+88h] [rbp-B0h]
  void *v31[2]; // [rsp+A0h] [rbp-98h] BYREF
  _DWORD v32[8]; // [rsp+B0h] [rbp-88h] BYREF
  _DWORD v33[26]; // [rsp+D0h] [rbp-68h] BYREF

  sub_CE52D0((__int64)v27, *(_QWORD *)(a1 + 176));
  sub_CE52D0((__int64)v29, *(_QWORD *)(a1 + 176));
  v4 = sub_E00420(v27, v29);
  if ( !(_BYTE)v4 )
  {
    v6 = v4;
    if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 8) != 0 )
    {
      v23 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      v13 = (unsigned __int8 **)sub_E0FE60(a1, &v23, 2468, 0);
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E052E0(&v24, v27, v14);
      if ( v13 )
      {
        sub_AC84E0(v13, v24, v25);
        v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E052E0(v31, v29, v15);
        sub_AC84E0(v13, (_BYTE *)v31[0], (signed __int64)v31[1]);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E052E0(v31, v29, v17);
      }
      if ( v31[0] != v32 )
        operator delete(v31[0]);
      if ( v24 != &v26 )
        operator delete(v24);
      goto LABEL_26;
    }
  }
  LOBYTE(v5) = sub_CDA1B0((__int64)v27, (__int64)v29);
  v6 = v5;
  if ( (_BYTE)v5 )
  {
    *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = 0;
    goto LABEL_26;
  }
  sub_DFF4A0(v31, v27);
  v7 = (__int64)v29;
  sub_DFF4A0(v33, v29);
  if ( v32[2] == 2 || (v8 = sub_CDA220((__int64)v31)) == 0 || (v7 = *(unsigned int *)(v8 + 20), (_DWORD)v7) )
  {
    if ( v33[6] == 2 || (v9 = sub_CDA220((__int64)v33)) == 0 || (v10 = (void **)v33, *(_DWORD *)(v9 + 20)) )
    {
      sub_DFF560(v33);
      sub_DFF560(v31);
      if ( v28 )
      {
        v11 = sub_CDA6B0((__int64)v27);
      }
      else
      {
        if ( *(_QWORD *)v27 != 0xFFFFFFFFLL )
        {
          v11 = sub_CDA8F0(v27);
          if ( !v30 )
          {
LABEL_12:
            if ( *(_QWORD *)v29 == 0xFFFFFFFFLL )
              v12 = (unsigned int)sub_CDA8B0((__int64)v29);
            else
              v12 = sub_CDA8F0(v29);
            goto LABEL_17;
          }
LABEL_16:
          v12 = sub_CDA6B0((__int64)v29);
LABEL_17:
          *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v11 - v12;
          v6 = 1;
          goto LABEL_26;
        }
        v11 = (unsigned int)sub_CDA8B0((__int64)v27);
      }
      if ( !v30 )
        goto LABEL_12;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = v31;
  }
  for ( i = sub_CDA510((__int64)v10, v7); ; i = *(_QWORD *)(v19 + 32) )
  {
    v19 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v19 + 16) - 2) > 4u )
      break;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  LODWORD(v25) = 1;
  v24 = nullptr;
  v22 = sub_A4D230(v20, i, (__int64)&v24, nullptr, 0, 0);
  if ( (unsigned int)v25 > 0x40 && v24 )
    operator delete[](v24);
  v24 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v21 = (unsigned __int8 **)sub_E0FE60(a1, &v24, 2477, 0);
  if ( v21 )
    sub_AC60B0(v21, v22, 8u);
  sub_DFF560(v33);
  sub_DFF560(v31);
LABEL_26:
  sub_DFF560(v29);
  sub_DFF560(v27);
  return v6;
}

