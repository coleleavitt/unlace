__int64 __fastcall sub_C1D490(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = (unsigned int)*(unsigned __int8 *)(v4 + 16) - 25;
  if ( (unsigned int)v5 > 1 )
    return *(_QWORD *)(sub_F63050(v4, a2, v5, a4) + 24);
  else
    return *(_QWORD *)(v4 + 24);
}
