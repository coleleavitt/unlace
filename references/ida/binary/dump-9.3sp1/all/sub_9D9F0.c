__int64 __fastcall sub_9D9F0(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int8 a9)
{
  bool v10; // zf
  unsigned __int8 v11; // r11
  _DWORD *v14; // r8
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int8 v19; // r11
  __int64 v20; // r15
  char v21; // al
  __int64 v22; // rsi
  unsigned int v23; // r13d
  char v25; // al
  char v26; // r11
  unsigned int v27; // eax
  int v28; // eax
  char v29; // [rsp+Ch] [rbp-D4h]
  int v30; // [rsp+18h] [rbp-C8h]
  unsigned __int8 v31; // [rsp+18h] [rbp-C8h]
  int v32; // [rsp+20h] [rbp-C0h]
  unsigned __int8 v33; // [rsp+20h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-98h] BYREF
  _DWORD v39[8]; // [rsp+50h] [rbp-90h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-70h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-60h] BYREF
  _QWORD v42[10]; // [rsp+90h] [rbp-50h] BYREF

  v10 = *a4 == 14;
  v42[3] = __readfsqword(0x28u);
  v11 = a9;
  if ( !v10 )
    return 0;
  if ( *(_DWORD *)a8 != 11 )
    return 0;
  if ( *(_BYTE *)(a8 + 32) != 4 )
    return 0;
  v14 = *(_DWORD **)(a8 + 40);
  if ( !v14 || *v14 != 14 )
    return 0;
  v15 = (int)a4;
  v35 = 0;
  v36 = 0;
  if ( a6 )
  {
    v32 = (int)v14;
    v16 = sub_1328E0(a1, a5, a6, a7, (_DWORD)v14, (unsigned int)&v36, (__int64)&v35, 2);
    LODWORD(v14) = v32;
    v30 = v16;
    v11 = a9;
    if ( !v16 )
      return 0;
  }
  else
  {
    v30 = 0;
  }
  v33 = v11;
  v17 = sub_1328E0(a1, a3, v15, a7, (_DWORD)v14, (unsigned int)&v38, (__int64)&v37, v11 == 0 ? 2 : 6);
  if ( !v17 )
    return 0;
  v18 = *(_QWORD *)(a1 + 480);
  v19 = v33;
  v20 = *(_QWORD *)(v18 + 112);
  if ( !a6 )
  {
    v35 = v17;
    goto LABEL_12;
  }
  if ( !(unsigned __int8)sub_12EA80(*(_QWORD *)(v18 + 112), a1, a7, v30, a7, v37, 1) )
    return 0;
  v21 = sub_12EA80(v20, a1, a7, v17, a7, v35, 1);
  v19 = v33;
  if ( !v21 )
    return 0;
LABEL_12:
  v22 = *(_QWORD *)(a2 + 24);
  v31 = v19;
  v40[0] = 0xFFFFFFFF00000000LL;
  v41[0] = 0xFFFFFFFF00000000LL;
  v42[0] = 0xFFFFFFFF00000000LL;
  v40[1] = 0;
  v41[1] = 0;
  v42[1] = 0;
  sub_330970(v39, v22);
  v39[0] = 14;
  sub_125180(v40);
  if ( (unsigned __int8)sub_12AB50(v40, v20, *(unsigned int *)(v38 + 4), 0) )
  {
    sub_1571F0(a1, a2, v40, a2, v38, 0);
    sub_125180(v41);
    if ( a6 )
    {
      v25 = sub_132E20(a1, a2, (unsigned int)v41, a7, v36, 0);
      v26 = v31;
      if ( !v25 )
        goto LABEL_13;
    }
    else
    {
      sub_1207E0(v41, v20, 9 - (unsigned int)v31, *(_QWORD *)(a2 + 24), HIDWORD(v40[0]));
      v26 = v31;
    }
    v29 = v26;
    sub_125180(v42);
    if ( (unsigned __int8)sub_126F10(v42, v20, (unsigned int)-*(_DWORD *)(a2 + 36)) )
    {
      LOBYTE(v27) = sub_95A00(a1, a2, (__int64)v39, a7, v35, v37, v29);
      v23 = v27;
      if ( (_BYTE)v27 )
      {
        sub_179140(a1, a2);
        sub_93C10(a1, a2, (__int64)v39);
        sub_1253A0(a2, v39);
        v28 = *(_DWORD *)(a1 + 24);
        BYTE1(v28) &= ~2u;
        LOBYTE(v28) = v28 | 0x80;
        *(_DWORD *)(a1 + 24) = v28;
        sub_11D5D0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
        sub_992D0(a1, a2);
        goto LABEL_14;
      }
    }
  }
LABEL_13:
  v23 = 0;
LABEL_14:
  sub_11CDA0(v42);
  sub_11CDA0(v41);
  sub_11CDA0(v40);
  return v23;
}
