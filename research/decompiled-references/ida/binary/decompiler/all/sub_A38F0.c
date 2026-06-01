_QWORD *__fastcall sub_A38F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // r12d
  unsigned int v6; // r12d
  char v7; // al
  __int64 v8; // r12
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // [rsp+8h] [rbp-B0h]
  _QWORD *v12; // [rsp+8h] [rbp-B0h]
  _QWORD *v13; // [rsp+8h] [rbp-B0h]
  int v14; // [rsp+14h] [rbp-A4h]
  char v15; // [rsp+20h] [rbp-98h]
  char v16[16]; // [rsp+30h] [rbp-88h] BYREF
  char v17[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v18[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v19[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 5) & 8) != 0
    || *(_DWORD *)a2 != 4 && (*(_DWORD *)a2 != 67 || *(_DWORD *)(a2 + 36) != *(_DWORD *)(a2 + 68)) )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a2 + 32) & 0xFB) != 1 )
    return 0;
  v5 = *(_DWORD *)(a2 + 36);
  if ( v5 <= 1 )
    return 0;
  v14 = *(_DWORD *)(a2 + 36) & 1;
  if ( (v5 & 1) != 0 )
    return 0;
  v6 = v5 >> 1;
  if ( !(unsigned __int8)sub_11A640(v6) )
    return 0;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_121540(v16, a2 + 32);
  sub_121540(v17, a2 + 32);
  if ( (unsigned __int8)sub_124DA0(v16, v11, v6, 0) && (unsigned __int8)sub_125340(v17, v11, v6, 0) )
  {
    v15 = sub_A1150(v16, a3);
    v7 = sub_A1150(v17, a3);
    if ( v15 )
    {
      if ( !v7 )
        goto LABEL_14;
    }
    else if ( v7 )
    {
      v14 = 1;
LABEL_14:
      sub_121540(v18, a2 + 64);
      sub_121540(v19, a2 + 64);
      if ( (unsigned __int8)sub_124DA0(v18, v11, v6, 1) && (unsigned __int8)sub_125340(v19, v11, v6, 1) )
      {
        v8 = 16LL * (v14 ^ 1);
        sub_11A5D0(a2 + 32, &v16[v8]);
        sub_11A5D0(a2 + 64, &v18[v8]);
        v9 = sub_A24B0(a1, a2, 61, 0, 0, (__int64)&v18[16 * v14]);
      }
      else
      {
        v9 = 0;
      }
      v12 = v9;
      sub_11A960(v19);
      sub_11A960(v18);
      v10 = v12;
      goto LABEL_19;
    }
  }
  v10 = 0;
LABEL_19:
  v13 = v10;
  sub_11A960(v17);
  sub_11A960(v16);
  return v13;
}
