__int64 __fastcall sub_3678E0(_DWORD *a1, __int64 a2)
{
  int v2; // edx
  unsigned int v3; // eax
  __int64 v5; // rsi
  int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v2 = a1[18];
  v3 = a1[2];
  v8 = __readfsqword(0x28u);
  v5 = (unsigned int)a1[10];
  v7 = v2;
  *(_DWORD *)(a2 + 8) = (unsigned __int8)netnode_supset(v3, v5, &v7, 4, 65);
  return 0;
}

