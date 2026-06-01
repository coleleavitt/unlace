void __fastcall sub_E3A080(__int64 a1, __int64 a2)
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
        v3 = sub_FFDE50(*(_QWORD *)(a1 + 1224), a2),
        v4 = sub_FFD560(*(_QWORD *)(a1 + 1224), (unsigned int)a2),
        LODWORD(a2) = v4,
        v3 == v4) )
  {
    sub_E399F0(a1, a2, 1);
  }
  else
  {
    v7[0] = v3;
    v8 = a1;
    v5 = j__strlen("spellingLoc");
    sub_2206E30(a1 + 1048, "spellingLoc", v5);
    sub_2205CB0(a1 + 1048);
    sub_E3A060((__int64)v7);
    sub_2205E20(a1 + 1048);
    sub_2205EB0(a1 + 1048);
    v7[0] = v4;
    v7[1] = v2;
    v8 = a1;
    v6 = j__strlen("expansionLoc");
    sub_2206E30(a1 + 1048, "expansionLoc", v6);
    sub_2205CB0(a1 + 1048);
    sub_E39FC0((__int64)v7);
    sub_2205E20(a1 + 1048);
    sub_2205EB0(a1 + 1048);
  }
}

