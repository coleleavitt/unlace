__int64 __fastcall sub_3051F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = sub_4CD6B0(a2, 0);
  if ( (unsigned __int8)sub_4B7300(v4) )
    v4 = *(_QWORD *)(v4 + 40);
  result = sub_30EDB0(qword_8CD748);
  if ( v4 == result && *(_DWORD *)(a3 + 40) != 2 )
    *(_BYTE *)(a2 + 44) = 1;
  return result;
}
