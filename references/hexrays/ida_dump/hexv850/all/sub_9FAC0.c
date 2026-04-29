_QWORD *__fastcall sub_9FAC0(__int64 a1, __int64 a2, _QWORD *a3)
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
    return nullptr;
  }
  if ( (*(_BYTE *)(a2 + 32) & 0xFB) != 1 )
    return nullptr;
  v5 = *(_DWORD *)(a2 + 36);
  if ( v5 <= 1 )
    return nullptr;
  v14 = *(_DWORD *)(a2 + 36) & 1;
  if ( (v5 & 1) != 0 )
    return nullptr;
  v6 = v5 >> 1;
  if ( !(unsigned __int8)sub_117EC0(v6) )
    return nullptr;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_11EE80(v16, a2 + 32);
  sub_11EE80(v17, a2 + 32);
  if ( (unsigned __int8)sub_1226F0(v16, v11, v6, 0) && (unsigned __int8)sub_122C90(v17, v11, v6, 0) )
  {
    v15 = sub_9D310(v16, a3);
    v7 = sub_9D310(v17, a3);
    if ( v15 )
    {
      if ( !v7 )
        goto LABEL_14;
    }
    else if ( v7 )
    {
      v14 = 1;
LABEL_14:
      sub_11EE80(v18, a2 + 64);
      sub_11EE80(v19, a2 + 64);
      if ( (unsigned __int8)sub_1226F0(v18, v11, v6, 1) && (unsigned __int8)sub_122C90(v19, v11, v6, 1) )
      {
        v8 = 16LL * (v14 ^ 1);
        sub_117E50(a2 + 32, &v16[v8]);
        sub_117E50(a2 + 64, &v18[v8]);
        v9 = sub_9E680(a1, a2, 61, 0, 0, (__int64)&v18[16 * v14]);
      }
      else
      {
        v9 = nullptr;
      }
      v12 = v9;
      sub_1181E0(v19);
      sub_1181E0(v18);
      v10 = v12;
      goto LABEL_19;
    }
  }
  v10 = nullptr;
LABEL_19:
  v13 = v10;
  sub_1181E0(v17);
  sub_1181E0(v16);
  return v13;
}
