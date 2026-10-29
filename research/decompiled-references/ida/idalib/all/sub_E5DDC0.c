void __fastcall sub_E5DDC0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // r14d
  int v4; // r13d
  size_t v5; // rax
  size_t v6; // rax
  _DWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]

  if ( (int)a2 >= 0
    || (v2 = a2,
        v3 = sub_1021B90(*(_QWORD *)(a1 + 1224), a2),
        v4 = sub_10212A0(*(_QWORD *)(a1 + 1224), (unsigned int)a2),
        LODWORD(a2) = v4,
        v3 == v4) )
  {
    sub_E5D730(a1, a2, 1);
  }
  else
  {
    v7[0] = v3;
    v8 = a1;
    v5 = j__strlen("spellingLoc");
    sub_222AB70(a1 + 1048, "spellingLoc", v5);
    sub_22299F0(a1 + 1048);
    sub_E5DDA0((__int64)v7);
    sub_2229B60(a1 + 1048);
    sub_2229BF0(a1 + 1048);
    v7[0] = v4;
    v7[1] = v2;
    v8 = a1;
    v6 = j__strlen("expansionLoc");
    sub_222AB70(a1 + 1048, "expansionLoc", v6);
    sub_22299F0(a1 + 1048);
    sub_E5DD00((__int64)v7);
    sub_2229B60(a1 + 1048);
    sub_2229BF0(a1 + 1048);
  }
}
