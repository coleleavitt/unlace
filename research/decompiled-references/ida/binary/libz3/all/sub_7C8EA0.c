__int64 __fastcall sub_7C8EA0(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, __m128i a5)
{
  __int64 v5; // r15
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  void *v12; // rbp
  _BYTE v14[16]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v15[72]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a1 + 96;
  sub_168DDF0(v14, a1 + 96, *(_QWORD *)(a2 + 16));
  if ( a4
    || *(_WORD *)(a2 + 4)
    || (v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(*(_QWORD *)(a1 + 88), a2),
        v9 == -2) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v8 )
    {
      switch ( *(_DWORD *)(v8 + 4) )
      {
        case 0:
          goto LABEL_14;
        case 1:
          goto LABEL_10;
        case 2:
          if ( *(_WORD *)(a2 + 4) || !(unsigned __int8)sub_168E4C0(v5) )
            v11 = sub_7C80B0(a1, a2, a4, a3, a5);
          else
LABEL_14:
            v11 = sub_7C7560(a1, a2, (__int64)v14, a4, a3, a5);
          goto LABEL_11;
        case 3:
          if ( *(_WORD *)(a2 + 4) || !(unsigned __int8)sub_168E4C0(v5) )
            v11 = sub_7C7DB0(a1, a2, a4, a3, a5);
          else
LABEL_10:
            v11 = sub_7C7340(a1, a2, (__int64)v14, a4, a3, a5);
          goto LABEL_11;
        case 4:
          if ( *(_WORD *)(a2 + 4) || !(unsigned __int8)sub_168E4C0(v5) )
            v11 = sub_7C8610(a1, a2, a4, a3, a5);
          else
            v11 = sub_7C7830(a1, a2, (__int64)v14, a4, a3, a5);
LABEL_11:
          v10 = v11;
          goto LABEL_12;
        default:
          break;
      }
    }
    sub_1872CE0("");
    sub_1873130(114, 70);
  }
  v10 = v9 ^ 1;
  if ( !a3 )
    v10 = v9;
LABEL_12:
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v12, v15);
  return v10;
}

