bool __fastcall sub_1547A0(__int64 a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v7; // r14
  _DWORD *v8; // r15
  int v10; // eax
  bool result; // al
  _DWORD *v12; // rax
  __int64 v13; // rsi
  unsigned __int8 *v14; // r13
  __int64 v15; // rsi
  char v16; // al
  int v17; // eax
  _BYTE *v18; // rax
  __int64 v19; // rcx
  unsigned __int8 *v20; // [rsp+0h] [rbp-E8h]
  char v21; // [rsp+0h] [rbp-E8h]
  unsigned __int8 *v22; // [rsp+10h] [rbp-D8h]
  unsigned __int8 *v23; // [rsp+10h] [rbp-D8h]
  __int64 v24; // [rsp+10h] [rbp-D8h]
  unsigned __int8 *v25; // [rsp+18h] [rbp-D0h]
  __int64 v26; // [rsp+20h] [rbp-C8h]
  __int64 v27; // [rsp+28h] [rbp-C0h]
  char v28[16]; // [rsp+30h] [rbp-B8h] BYREF
  char v29[16]; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD v30[8]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v32[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v33[11]; // [rsp+90h] [rbp-58h] BYREF

  v7 = *(_DWORD **)(a1 + 40);
  v8 = *(_DWORD **)(a1 + 56);
  v33[3] = __readfsqword(0x28u);
  v10 = *v8;
  if ( *v7 == a3 && a4 == v10 )
  {
    v12 = v8;
    v8 = v7;
    v7 = v12;
  }
  else
  {
    result = *v7 == a4 && a3 == v10;
    if ( !result )
      return result;
  }
  if ( ((v8[1] & 0x10) != 0) == ((v7[1] & 0x10) != 0) )
  {
    if ( (unsigned int)(a4 - 32) > 1 )
    {
      if ( !under_debugger )
        sub_383060(50491);
      BUG();
    }
    v13 = *((_QWORD *)v8 + 3);
    v31[1] = 0;
    v31[0] = 0xFFFFFFFF00000000LL;
    v32[0] = 0xFFFFFFFF00000000LL;
    v33[0] = 0xFFFFFFFF00000000LL;
    v32[1] = 0;
    v33[1] = 0;
    sub_330970(v30, v13);
    if ( a3 == 29 )
    {
      v30[0] = 40;
      sub_125180((__int64)v31, (unsigned __int8 *)v8 + 32);
      sub_120A10((__int64)v32, a2, 0, v8[9], *((_QWORD *)v8 + 3), 0);
      HIDWORD(v33[0]) = 1;
      v17 = v8[1];
      v8 = v30;
      v30[1] = v17;
    }
    v20 = (unsigned __int8 *)(v8 + 8);
    if ( sub_125B60((unsigned __int8 *)v8 + 32, (__int64)(v7 + 8), 0) )
    {
      v14 = (unsigned __int8 *)(v8 + 12);
      if ( sub_125B60((unsigned __int8 *)v8 + 48, (__int64)(v7 + 12), 0) )
        goto LABEL_24;
    }
    else
    {
      v14 = (unsigned __int8 *)(v8 + 12);
    }
    v25 = v14;
    if ( sub_125B60(v14, (__int64)(v7 + 8), 0) && sub_125B60(v20, (__int64)(v7 + 12), 0) )
      goto LABEL_24;
    if ( *((_BYTE *)v8 + 48) == 2 && *((_BYTE *)v7 + 48) == 2 )
    {
      v26 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v8 + 7) + 16LL), (unsigned int)v8[13], 0);
      v23 = sub_14DA80(v28, v20);
      v27 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL), (unsigned int)v7[13], 0);
      v18 = sub_14DA80(v29, (_BYTE *)v7 + 32);
      if ( sub_125B60(v23, (__int64)v18, 0) )
      {
        if ( sub_32ABC0(*(_QWORD *)v29 + v26 - *(_QWORD *)v28, (unsigned int)v7[13], 0) == v27 )
          goto LABEL_24;
      }
    }
    if ( *((_BYTE *)v8 + 32) == 4
      && **((_DWORD **)v8 + 5) == 13
      && (v24 = *((_QWORD *)v8 + 5), (unsigned __int8)sub_11FD80((char *)v14, v29, 0))
      && (v19 = v24, !*(_QWORD *)v29) )
    {
      v22 = (unsigned __int8 *)(v24 + 32);
      v25 = (unsigned __int8 *)(v19 + 48);
    }
    else
    {
      v22 = (unsigned __int8 *)(v8 + 8);
    }
    v15 = (__int64)(v7 + 12);
    if ( sub_125B60(v22, (__int64)(v7 + 8), 0) )
    {
      if ( sub_125B60(v25, v15, 0) )
        goto LABEL_24;
      v15 = (__int64)(v7 + 12);
    }
    if ( !sub_125B60(v22, v15, 0) || !sub_125B60(v25, (__int64)(v7 + 8), 0) )
    {
      v16 = 0;
LABEL_21:
      v21 = v16;
      sub_11CDA0((__int64)v33);
      sub_11CDA0((__int64)v32);
      sub_11CDA0((__int64)v31);
      return v21;
    }
LABEL_24:
    if ( a5 )
    {
      *(_DWORD *)a1 = a5;
      *(_DWORD *)(a1 + 4) = v8[1];
      sub_123A40((__int64)v28, v14);
      sub_123A40((__int64)v29, v20);
      sub_11CA10((char *)(a1 + 48), v28);
      sub_11CA10((char *)(a1 + 32), v29);
      sub_11CDA0((__int64)v29);
      sub_11CDA0((__int64)v28);
    }
    v16 = 1;
    goto LABEL_21;
  }
  return 0;
}
