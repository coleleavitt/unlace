__int64 __fastcall sub_963400(__int64 *a1, char a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-20h]

  v5 = *a1;
  v6 = *(_QWORD *)(v5 + 1512);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 48);
    if ( v7 )
    {
      v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v10 = sub_A56D30(v5, v6, a3);
      v5 = *a1;
      v8 = v10;
    }
  }
  else
  {
    v8 = *(_QWORD *)(v5 + 19160);
  }
  result = sub_ECAC60(24, v5, 8);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x28;
  if ( unk_2CAD564 )
  {
    v11 = result;
    sub_EC5E10(40);
    result = v11;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v8;
  *(_BYTE *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = 0;
  return result;
}

