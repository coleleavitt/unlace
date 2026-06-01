unsigned __int64 __fastcall sub_40A410(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  void (__fastcall *v16)(__int64, _QWORD, __int64 *); // rcx
  __int64 fixup_handler; // rbp
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // [rsp-10h] [rbp-78h]
  __int64 v22; // [rsp-8h] [rbp-70h]
  unsigned __int64 v23; // [rsp+0h] [rbp-68h]
  unsigned int v24; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-50h]
  __int64 v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v29 = __readfsqword(0x28u);
  v5 = a4;
  if ( a2 == -1 && !a4 )
  {
    v24 = a3;
    v19 = *(_DWORD *)sub_4EEBF0(a1 + 194);
    v20 = sub_4EEB90(a1 + 194, 0xFFFFFFFFLL);
    v4 = v19 - v24;
    a3 = v19;
    v5 = *(_DWORD *)(v20 + 4) - v19;
  }
  if ( a1[300] )
  {
    v6 = *(_DWORD *)(a1[298] + 32);
    if ( v6 != -1 )
    {
      v23 = __PAIR64__(a3, v4);
      LODWORD(v25) = v5;
      while ( 1 )
      {
        v26 = 0;
        v27 = 0xFFFFFFFF00000000LL;
        v28 = 0;
        if ( !(unsigned __int8)get_fixup(&v26, v6) )
        {
          if ( !under_debugger )
            interr(516);
          BUG();
        }
        fixup_handler = get_fixup_handler((unsigned __int16)v26);
        if ( !fixup_handler )
          goto LABEL_14;
        if ( (v26 & 0x100000000LL) != 0 )
          break;
        if ( HIDWORD(v27) == -1 )
        {
          v8 = v28;
          v7 = 0;
          goto LABEL_20;
        }
        v7 = 16 * sel2para(HIDWORD(v27));
        v8 = v7 + v28;
        if ( (v26 & 0x100000000LL) != 0 )
          goto LABEL_8;
LABEL_20:
        v10 = sub_665E90(a1, v8, (unsigned int)v23, HIDWORD(v23), (unsigned int)v25, 0, 0);
        v11 = v21;
        v12 = v22;
        if ( v10 != v8 )
          goto LABEL_10;
LABEL_14:
        v6 = sub_4087C0((__int64)a1, v6);
        if ( v6 == -1 )
          return v29 - __readfsqword(0x28u);
      }
      v7 = v27;
      v8 = v27 + v28;
LABEL_8:
      v9 = sub_665E90(a1, v7, (unsigned int)v23, HIDWORD(v23), (unsigned int)v25, 0, 0);
      if ( v9 != v7 )
      {
        LODWORD(v27) = v9;
        HIDWORD(v25) = v9;
        v10 = sub_665E90(a1, v8, (unsigned int)v23, HIDWORD(v23), (unsigned int)v25, 0, 0);
        v7 = HIDWORD(v25);
LABEL_10:
        v15 = v10 - v7;
        if ( v15 != (_DWORD)v28 )
        {
          v16 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(fixup_handler + 48);
          LODWORD(v28) = v15;
          if ( v16 )
            v16(fixup_handler, v6, &v26);
          else
            sub_407100(a1[3], fixup_handler, v6, v15, SHIDWORD(v28));
        }
        ((void (__fastcall *)(_QWORD, __int64 *, __int64, __int64, __int64, __int64, unsigned __int64, __int64))set_fixup)(
          v6,
          &v26,
          v11,
          v12,
          v13,
          v14,
          v23,
          v25);
        goto LABEL_14;
      }
      goto LABEL_20;
    }
  }
  return v29 - __readfsqword(0x28u);
}

