bool __fastcall sub_1547A0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  _DWORD *v7; // r14
  _DWORD *v8; // r15
  int v10; // eax
  bool result; // al
  _DWORD *v12; // rax
  __int64 v13; // rsi
  unsigned __int8 *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // al
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _BYTE *v22; // rax
  __int64 v23; // rcx
  unsigned __int8 *v24; // [rsp+0h] [rbp-E8h]
  char v25; // [rsp+0h] [rbp-E8h]
  unsigned __int8 *v26; // [rsp+10h] [rbp-D8h]
  unsigned __int8 *v27; // [rsp+10h] [rbp-D8h]
  __int64 v28; // [rsp+10h] [rbp-D8h]
  unsigned __int8 *v29; // [rsp+18h] [rbp-D0h]
  __int64 v30; // [rsp+20h] [rbp-C8h]
  __int64 v31; // [rsp+28h] [rbp-C0h]
  char v32[16]; // [rsp+30h] [rbp-B8h] BYREF
  char v33[16]; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD v34[8]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v37[11]; // [rsp+90h] [rbp-58h] BYREF

  v7 = *(_DWORD **)(a1 + 40);
  v8 = *(_DWORD **)(a1 + 56);
  v37[3] = __readfsqword(0x28u);
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
    v35[1] = 0;
    v35[0] = 0xFFFFFFFF00000000LL;
    v36[0] = 0xFFFFFFFF00000000LL;
    v37[0] = 0xFFFFFFFF00000000LL;
    v36[1] = 0;
    v37[1] = 0;
    sub_330970(v34, v13);
    if ( a3 == 29 )
    {
      v34[0] = 40;
      sub_125180((__int64)v35, (unsigned __int8 *)v8 + 32);
      sub_120A10((__int64)v36, a2, 0, v8[9], *((_QWORD *)v8 + 3), 0);
      HIDWORD(v37[0]) = 1;
      v19 = v8[1];
      v8 = v34;
      v34[1] = v19;
    }
    v24 = (unsigned __int8 *)(v8 + 8);
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
    v29 = v14;
    if ( sub_125B60(v14, (__int64)(v7 + 8), 0) && sub_125B60(v24, (__int64)(v7 + 12), 0) )
      goto LABEL_24;
    if ( *((_BYTE *)v8 + 48) == 2 && *((_BYTE *)v7 + 48) == 2 )
    {
      v30 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v8 + 7) + 16LL), (unsigned int)v8[13], 0);
      v27 = sub_14DA80(v32, v24);
      v31 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL), (unsigned int)v7[13], 0);
      v22 = sub_14DA80(v33, (_BYTE *)v7 + 32);
      if ( sub_125B60(v27, (__int64)v22, 0) )
      {
        if ( sub_32ABC0(*(_QWORD *)v33 + v30 - *(_QWORD *)v32, (unsigned int)v7[13], 0) == v31 )
          goto LABEL_24;
      }
    }
    if ( *((_BYTE *)v8 + 32) == 4
      && **((_DWORD **)v8 + 5) == 13
      && (v28 = *((_QWORD *)v8 + 5), (unsigned __int8)sub_11FD80((char *)v14, v33, 0))
      && (v23 = v28, !*(_QWORD *)v33) )
    {
      v26 = (unsigned __int8 *)(v28 + 32);
      v29 = (unsigned __int8 *)(v23 + 48);
    }
    else
    {
      v26 = (unsigned __int8 *)(v8 + 8);
    }
    v15 = (__int64)(v7 + 12);
    if ( sub_125B60(v26, (__int64)(v7 + 8), 0) )
    {
      if ( sub_125B60(v29, v15, 0) )
        goto LABEL_24;
      v15 = (__int64)(v7 + 12);
    }
    if ( !sub_125B60(v26, v15, 0) || !sub_125B60(v29, (__int64)(v7 + 8), 0) )
    {
      v18 = 0;
LABEL_21:
      v25 = v18;
      sub_11CDA0((__int64)v37);
      sub_11CDA0((__int64)v36);
      sub_11CDA0((__int64)v35);
      return v25;
    }
LABEL_24:
    if ( a5 )
    {
      *(_DWORD *)a1 = a5;
      *(_DWORD *)(a1 + 4) = v8[1];
      sub_123A40((__int64)v32, v14, v16, v17);
      sub_123A40((__int64)v33, v24, v20, v21);
      sub_11CA10((char *)(a1 + 48), v32);
      sub_11CA10((char *)(a1 + 32), v33);
      sub_11CDA0((__int64)v33);
      sub_11CDA0((__int64)v32);
    }
    v18 = 1;
    goto LABEL_21;
  }
  return 0;
}
