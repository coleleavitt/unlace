__int64 __fastcall sub_6A9D70(__int64 *a1, int a2, unsigned int a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rsi
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v3 = *a1;
  v9 = __readfsqword(0x28u);
  v5 = sub_3B90A0(*(_QWORD **)(v3 + 1480), a2);
  v6 = *a1;
  v8 = v5;
  return sub_79B840(&v8, v6, a3, 109);
}

