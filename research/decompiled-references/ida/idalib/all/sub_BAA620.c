_QWORD *__fastcall sub_BAA620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx

  v6 = *(_QWORD *)(a1 + 88);
  if ( (((unsigned __int8)v6 | (unsigned __int8)(v6 >> 1)) & 1) != 0 )
    return nullptr;
  else
    return sub_A79820((__int64 *)(a1 + 88), a1, v6, a4, a5, a6);
}
