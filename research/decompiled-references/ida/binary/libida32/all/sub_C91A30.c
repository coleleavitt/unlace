__int64 __fastcall sub_C91A30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rdx

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 57 > 1 )
  {
    v7 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
    if ( (unsigned int)v7 > 1 )
      BUG();
    v5 = sub_F3F310(*v4, v4, v7, a4);
  }
  return sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v5 + 32));
}

