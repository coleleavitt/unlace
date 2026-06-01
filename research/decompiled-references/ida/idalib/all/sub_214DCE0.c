__int64 __fastcall sub_214DCE0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  unsigned int v16; // r15d
  char v17; // r8
  __int64 v18; // rdi
  _DWORD **v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rdi
  void (*v26)(); // r9
  __int64 v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // [rsp+14h] [rbp-94h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-90h] BYREF
  unsigned int v31; // [rsp+1Ch] [rbp-8Ch] BYREF
  __int64 v32; // [rsp+20h] [rbp-88h] BYREF
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int128 v34; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v35[4]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v36; // [rsp+60h] [rbp-48h]

  v8 = *(_QWORD *)(a1 + 8);
  v32 = 0;
  v33 = 0;
  v9 = sub_2153C00(v8);
  v10 = &v32;
  v11 = sub_2124B50(v9);
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 160LL))(*(_QWORD *)(a1 + 8), &v32);
  if ( (_BYTE)v12 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v35[0] = "platform name expected";
    v36 = 259;
    return sub_21543E0(v13, v35, 0, 0);
  }
  v15 = v33;
  if ( v33 == 7 )
  {
    if ( *(_DWORD *)v32 == 1852534389 && *(_WORD *)(v32 + 4) == 30575 )
      LOBYTE(v12) = *(_BYTE *)(v32 + 6) == 110;
LABEL_6:
    v16 = 0;
    goto LABEL_7;
  }
  if ( v33 != 5 )
  {
    if ( v33 == 3 )
    {
      v10 = (_QWORD *)(&dword_0 + 1);
      if ( *(_WORD *)v32 == 28521 && *(_BYTE *)(v32 + 2) == 115 )
      {
        v12 = 1;
        v16 = 2;
      }
      else
      {
        v16 = 0;
      }
LABEL_15:
      if ( v33 == 8 && !(_BYTE)v12 )
      {
        if ( *(_QWORD *)v32 == 0x736F656764697262LL )
        {
          v12 = 1;
          v16 = 5;
        }
        goto LABEL_19;
      }
      goto LABEL_29;
    }
    if ( v33 == 4 )
    {
      v10 = (_QWORD *)(&dword_0 + 1);
      LOBYTE(v12) = *(_DWORD *)v32 == 1936684660;
      v16 = 3 * (unsigned __int8)v12;
LABEL_29:
      v17 = (unsigned __int8)v10 | v12;
      goto LABEL_30;
    }
    goto LABEL_6;
  }
  v16 = 1;
  if ( *(_DWORD *)v32 == 1868783981 && *(_BYTE *)(v32 + 4) == 115 )
    v12 = 1;
LABEL_7:
  LOBYTE(v10) = v33 != 11;
  if ( v33 != 7 || (_BYTE)v12 )
    goto LABEL_15;
  if ( *(_DWORD *)v32 == 1668571511 && *(_WORD *)(v32 + 4) == 28520 && *(_BYTE *)(v32 + 6) == 115 )
  {
    v16 = 4;
    v12 = 1;
LABEL_31:
    if ( !((unsigned __int8)v12 | (v33 != 12)) )
    {
      if ( *(_QWORD *)v32 == 0x6C756D6973736F69LL && *(_DWORD *)(v32 + 8) == 1919906913 )
      {
        v16 = 7;
        v12 = 1;
        goto LABEL_21;
      }
LABEL_20:
      if ( !((unsigned __int8)v12 | (v33 != 16)) )
      {
        v15 = *(_QWORD *)v32 ^ 0x73736F6863746177LL;
        if ( !(v15 | *(_QWORD *)(v32 + 8) ^ 0x726F74616C756D69LL) )
        {
          v12 = 1;
          v16 = 9;
          goto LABEL_23;
        }
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v17 = v33 != 11;
LABEL_30:
  if ( v17 )
    goto LABEL_31;
  if ( *(_QWORD *)v32 == 0x6C6174614363616DLL && *(_WORD *)(v32 + 8) == 29561 && *(_BYTE *)(v32 + 10) == 116 )
  {
    v12 = 1;
    v16 = 6;
    goto LABEL_20;
  }
LABEL_19:
  if ( (unsigned __int8)v12 | (v33 != 13) )
    goto LABEL_20;
  if ( *(_QWORD *)v32 == 0x756D6973736F7674LL && *(_DWORD *)(v32 + 8) == 1869898092 && *(_BYTE *)(v32 + 12) == 114 )
  {
    v12 = 1;
    v16 = 8;
    goto LABEL_22;
  }
LABEL_21:
  LOBYTE(v15) = v33 != 9;
  v15 = v12 | (unsigned int)v15;
  if ( !(_BYTE)v15 )
  {
    v15 = 0x696B726576697264LL;
    if ( *(_QWORD *)v32 == 0x696B726576697264LL && *(_BYTE *)(v32 + 8) == 116 )
    {
      v16 = 10;
      goto LABEL_38;
    }
    goto LABEL_23;
  }
LABEL_22:
  if ( !((unsigned __int8)v12 | (v33 != 4)) )
  {
    if ( *(_DWORD *)v32 == 1936683640 )
    {
      v16 = 11;
      goto LABEL_38;
    }
    goto LABEL_24;
  }
LABEL_23:
  v10 = (__int64 *)(v12 | (unsigned int)v10);
  if ( !(_BYTE)v10 )
  {
    if ( *(_QWORD *)v32 != 0x616C756D69737278LL )
      goto LABEL_26;
    if ( *(_WORD *)(v32 + 8) != 28532 )
      goto LABEL_26;
    v16 = 12;
    if ( *(_BYTE *)(v32 + 10) != 114 )
      goto LABEL_26;
    goto LABEL_38;
  }
LABEL_24:
  if ( !(_BYTE)v12 || !v16 )
  {
LABEL_26:
    v18 = *(_QWORD *)(a1 + 8);
    v35[0] = "unknown platform name";
    v36 = 259;
    return sub_2153E90(v18, v11, v35, 0, 0);
  }
LABEL_38:
  v19 = *(_DWORD ***)(a1 + 8);
  if ( *v19[6] != 26 )
  {
    v36 = 259;
    v35[0] = "version number required, comma expected";
    return sub_21543E0(v19, v35, 0, 0);
  }
  (*((void (__fastcall **)(_DWORD **, __int64 *, __int64, __int64))*v19 + 19))(v19, v10, v15, v32);
  if ( (unsigned __int8)sub_214DA70(a1, &v29, &v30, &v31, v20, v21) )
    return 1;
  v22 = *(_QWORD *)(a1 + 8);
  v34 = 0;
  v23 = *(_QWORD *)(v22 + 48);
  if ( *(_DWORD *)v23 == 2 && *(_QWORD *)(v23 + 16) == 11 )
  {
    v28 = *(_QWORD *)(v23 + 8);
    if ( *(_QWORD *)v28 == 0x737265765F6B6473LL && *(_WORD *)(v28 + 8) == 28521 && *(_BYTE *)(v28 + 10) == 110 )
    {
      if ( !(unsigned __int8)sub_214D980(a1, (__int64)&v34) )
      {
        v22 = *(_QWORD *)(a1 + 8);
        goto LABEL_61;
      }
      return 1;
    }
  }
LABEL_61:
  if ( (unsigned __int8)sub_21544B0(v22) )
  {
    v36 = 259;
    v27 = *(_QWORD *)(a1 + 8);
    v35[0] = " in '.build_version' directive";
    return sub_2153C30(v27, v35);
  }
  else
  {
    switch ( v16 )
    {
      case 1u:
        v24 = 9;
        break;
      case 2u:
      case 6u:
        v24 = 5;
        break;
      case 3u:
        v24 = 27;
        break;
      case 4u:
        v24 = 28;
        break;
      case 5u:
      case 7u:
      case 8u:
      case 9u:
      case 0xBu:
        v24 = 31;
        break;
      case 0xAu:
        v24 = 30;
        break;
    }
    sub_214CC60(a1, a2, a3, v32, v33, a4, v24);
    result = 0;
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v26 = *(void (**)())(*(_QWORD *)v25 + 256LL);
    if ( v26 != nullsub_1406 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, void (*)(), _QWORD, _QWORD))v26)(
        v25,
        v16,
        v29,
        v30,
        v31,
        v26,
        v34,
        *((_QWORD *)&v34 + 1));
      return 0;
    }
  }
  return result;
}
