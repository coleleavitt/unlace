__int64 __fastcall sub_20D8550(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  size_t v6; // rax
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v3 + 8) == 8
    && (v6 = j__strlen("char"), v7 = *(_QWORD *)(v3 + 24), v8[0] = *(_QWORD *)(v3 + 16), v8[1] = v7, v6 == v8[0])
    && !sub_FD4B10((__int64)v8, v6, "char") )
  {
    return sub_20D8110(a3, a2);
  }
  else
  {
    return 0;
  }
}
