__int64 __fastcall sub_8EB470(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // r13d
  __int64 v6; // r14
  _QWORD *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned int v15; // r12d
  __int64 *v16; // rax
  __int64 v17; // r13
  void *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v22; // [rsp+8h] [rbp-A0h]
  __int64 v23; // [rsp+10h] [rbp-98h]
  void *v24; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-80h]
  char v26; // [rsp+2Ch] [rbp-7Ch]
  void *v27; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-70h]
  void *v29; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-60h]
  __int64 v31[11]; // [rsp+50h] [rbp-58h] BYREF

  v4 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v4;
  v6 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a4;
  v22 = a1 + 384;
  v23 = *(_QWORD *)(a1 + 792);
  v8 = (_QWORD *)sub_A1A5A0(v6, 24);
  v9 = *v8;
  v11 = v8;
  v14 = sub_2575D20(v6, 24, v10);
  if ( v9 == v14 )
    sub_257D000(v31, v11, v12, v13);
  else
    sub_2576960(v31, v11);
  sub_A1A5E0(v6, 24);
  v25 = a2;
  if ( a2 > 0x40 )
    sub_2585A50(&v24, 0, 0);
  else
    v24 = nullptr;
  v26 = 1;
  v15 = sub_2580E00(v31, &v24, 0, &v29);
  if ( (v15 & 1) == 0 )
    goto LABEL_12;
  v16 = v31;
  if ( v31[0] == v14 )
    v16 = (__int64 *)v31[1];
  if ( (*((_BYTE *)v16 + 20) & 7u) <= 1 )
  {
LABEL_12:
    v17 = *(_QWORD *)(a1 + 568);
    v28 = v25;
    if ( v25 > 0x40 )
    {
      sub_2585B30(&v27);
      v30 = v28;
      if ( v28 > 0x40 )
      {
        sub_2585B30(&v29);
LABEL_15:
        v19 = sub_A1A4E0(v17, 16);
        v20 = v30;
        v30 = 0;
        *(_DWORD *)(v19 + 8) = v20;
        *(_QWORD *)v19 = v29;
        if ( v28 > 0x40 && v27 )
          operator delete[](v27);
        v4 = sub_9DBAE0(v22, v23, v31, v15, a3);
        goto LABEL_19;
      }
      v18 = v27;
    }
    else
    {
      v18 = v24;
      v30 = v25;
      v27 = v24;
    }
    v29 = v18;
    goto LABEL_15;
  }
  v4 = sub_8E50E0(v22, v23, v31);
LABEL_19:
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  sub_5FF3B0(v31);
  return v4;
}

