__int64 __fastcall sub_F43F90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx

  v5 = a1;
  if ( ((unsigned int)*(unsigned __int8 *)(a1 + 16) - 35 <= 1
     || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
     && (v5 = sub_F3F130(a1)) != 0)
    && sub_9A4000(v5, a2, a3, a4, a5) )
  {
    return v5;
  }
  else
  {
    return 0;
  }
}

