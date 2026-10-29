__int64 __fastcall sub_447310(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rax
  _BYTE *v5; // rbx
  int v7; // [rsp+Ch] [rbp-FCh] BYREF
  _DWORD v8[56]; // [rsp+10h] [rbp-F8h] BYREF

  sub_4AE1A0(qword_65A7C0);
  v2 = 0;
  v3 = sub_4ADC90(a1, &v7);
  if ( v3 != -1 )
  {
    v4 = sub_4445F0(0, (__int64)environ[v3], -1, v8);
    v5 = (_BYTE *)(v7 + v4);
    if ( *v5 == 61 )
    {
      sub_49EDC0(a2);
      sub_49EDE0(a2, v5 + 1, 0xFFFFFFFFLL);
      v2 = *a2;
    }
    else
    {
      v2 = 0;
    }
    sub_49F100(v8);
  }
  sub_4AE230(qword_65A7C0);
  return v2;
}

