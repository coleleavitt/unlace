__int64 __fastcall sub_E2B860(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[0] = a2;
  result = sub_E19FF0((__int64 *)a1, a2);
  if ( !(_BYTE)result )
  {
    switch ( sub_EFEE00(v7) )
    {
      case 0LL:
      case 3LL:
      case 7LL:
        v3 = sub_EFEE90(v7, 0);
        if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x44 )
          sub_E146C0((__int64 *)(a1 + 8), (_DWORD *)(a1 + 36), *(_DWORD *)(v3 + 64) & 0xFFFFF, *(_WORD *)(v3 + 66) >> 4);
        else
          sub_E2DBE0(a1, v3, 0);
        goto LABEL_5;
      case 4LL:
        v5 = (_QWORD *)sub_EFF230(v7);
        v6 = v5[1];
        if ( v6 >= 0xFFFFFFFFFFFFFFD3LL )
          v6 = 0;
        sub_E2B5E0((__int64 *)a1, *v5 & 0xFFFFFFFFFFFFFFF8LL, 0);
        sub_E15750(*(_QWORD *)(a1 + 8), v6);
        goto LABEL_5;
      case 5LL:
        v4 = sub_EFF190(v7);
        return sub_E2B860(a1, *(_QWORD *)(v4 + 16));
      case 6LL:
        sub_971800(*(_QWORD *)(a1 + 8), "_SUBSTPACK_");
        goto LABEL_5;
      default:
LABEL_5:
        result = (__int64)sub_E17E00((_DWORD *)a1, v7[0]);
        break;
    }
  }
  return result;
}

