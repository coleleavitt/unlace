__int64 __fastcall sub_214E660(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // r9
  __int64 v13; // rdi
  void (*v14)(); // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // [rsp+4h] [rbp-A4h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-A0h] BYREF
  unsigned int v20; // [rsp+Ch] [rbp-9Ch] BYREF
  __int128 v21; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v22[4]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v23; // [rsp+40h] [rbp-68h]
  _QWORD v24[4]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v25; // [rsp+70h] [rbp-38h]

  if ( (unsigned __int8)sub_214DA70(a1, &v18, &v19, &v20, a5, a6) )
    return 1;
  v9 = *(_QWORD *)(a1 + 8);
  v21 = 0;
  v10 = *(_QWORD *)(v9 + 48);
  if ( *(_DWORD *)v10 == 2 && *(_QWORD *)(v10 + 16) == 11 )
  {
    v17 = *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)v17 == 0x737265765F6B6473LL && *(_WORD *)(v17 + 8) == 28521 && *(_BYTE *)(v17 + 10) == 110 )
    {
      if ( !(unsigned __int8)sub_214D980(a1, (__int64)&v21) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        goto LABEL_3;
      }
      return 1;
    }
  }
LABEL_3:
  v11 = sub_21544B0(v9);
  if ( (_BYTE)v11 )
  {
    v22[2] = a2;
    v23 = 1283;
    v16 = *(_QWORD *)(a1 + 8);
    v22[0] = " in '";
    v24[0] = v22;
    v22[3] = a3;
    v24[2] = "' directive";
    v25 = 770;
    return (unsigned int)sub_2153C30(v16, v24);
  }
  else
  {
    sub_214CC60(a1, a2, a3, 0, 0, a4, 5);
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v14 = *(void (**)())(*(_QWORD *)v13 + 248LL);
    if ( v14 != nullsub_1405 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD))v14)(
        v13,
        0,
        v18,
        v19,
        v20,
        v12,
        v21,
        *((_QWORD *)&v21 + 1));
    return v11;
  }
}
