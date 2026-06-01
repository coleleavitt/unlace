__int64 __fastcall sub_3E3220(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)a2;
  if ( a3 < *(_QWORD *)a2
    && v3 - a3 <= 0x3F
    && *(_BYTE *)(a2 + 8) == 21
    && (v6 = a3, v5 = sub_3C1F00(a1, a3), a3 = v6, v3 == v5) )
  {
    return sub_3E1CA0(a1, a2, v6);
  }
  else
  {
    return sub_3E1E80(a1, (unsigned __int64 *)a2, a3);
  }
}
