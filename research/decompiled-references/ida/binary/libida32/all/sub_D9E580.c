__int64 __fastcall sub_D9E580(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rdx
  _QWORD *v10; // rdi
  _QWORD **v11; // rdi
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdi
  char v18; // al
  __int64 v19; // rax
  unsigned __int8 **v20; // rax
  unsigned __int8 **v21; // r12
  __int64 v22; // rax
  unsigned __int8 **v23; // rax
  __int64 v24; // [rsp+0h] [rbp-28h] BYREF
  __int64 v25[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (__int64)a2;
  v6 = *(_QWORD **)(a1 + 24);
  v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 96LL);
  if ( v7 != sub_CCC500 )
    goto LABEL_20;
  v8 = (_QWORD *)v6[3];
  v9 = *(__int64 (**)(void))(*v8 + 96LL);
  if ( (char *)v9 != (char *)v7 )
  {
LABEL_19:
    result = v9();
    goto LABEL_6;
  }
  v10 = (_QWORD *)v8[3];
  v7 = *(__int64 (__fastcall **)(__int64))(*v10 + 96LL);
  if ( (char *)v7 != (char *)v9 )
  {
LABEL_20:
    result = ((__int64 (*)(void))v7)();
    goto LABEL_6;
  }
  v11 = (_QWORD **)v10[3];
  v9 = (__int64 (*)(void))(*v11)[12];
  if ( (char *)v9 != (char *)v7 )
    goto LABEL_19;
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 96LL))(v11[3]);
LABEL_6:
  if ( *(_QWORD *)(result + 8) )
  {
    v24 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 8) == 0 )
      return sub_E0FE60(a1, &v24, 108, 0);
    result = *(_BYTE *)(a3 + 28) & 0x7F;
    v15 = (unsigned int)(unsigned __int8)result - 40;
    if ( (unsigned int)v15 <= 6 )
    {
      v16 = *(_QWORD *)(a3 + 48);
      if ( (v16 & 1) != 0 || (v15 = v16 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(v15 + 8) & 1) != 0) )
      {
        a2 = v25;
        if ( !sub_B593E0(a3, v25) )
          return sub_D9E4F0(a1, v3, (unsigned int *)a3);
        result = *(_BYTE *)(a3 + 28) & 0x7F;
      }
    }
    if ( (_BYTE)result != 50 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      v18 = *(_BYTE *)(v17 + 16);
      switch ( v18 )
      {
        case 13:
          if ( (((*(_WORD *)(v17 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            goto LABEL_15;
          break;
        case 47:
          v22 = sub_F3D1D0(v17, a2, v15, v13, v14);
          if ( (*(_BYTE *)(v22 + 74) & 1) == 0 && (*(_QWORD *)(v22 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_15;
          break;
        case 10:
          break;
        default:
LABEL_15:
          v19 = sub_E0E500(a1);
          v20 = (unsigned __int8 **)sub_E0FE60(a1, &v24, (unsigned int)((*(_BYTE *)(v19 + 1) & 0x10) == 0) + 2430, 1);
          v21 = v20;
          if ( v20 )
          {
            sub_AC60B0(v20, a3, 0xAu);
            sub_AC60B0(v21, *(_QWORD *)(a3 + 48), 8u);
          }
          return sub_E10070(a1, *(unsigned int *)(a3 + 24), 103);
      }
      v23 = (unsigned __int8 **)sub_E0FE60(a1, &v24, 2429, 1);
      if ( v23 )
        sub_AC60B0(v23, a3, 0xAu);
      return sub_E10070(a1, *(unsigned int *)(a3 + 24), 103);
    }
  }
  return result;
}

