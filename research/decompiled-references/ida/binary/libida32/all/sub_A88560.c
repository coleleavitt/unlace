__int16 __fastcall sub_A88560(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r12

  v3 = sub_F46EC0(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v3 )
  {
    v7 = *a2;
    v3 = *(_QWORD *)(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v8 = *(_QWORD *)v3;
    if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) == 13 )
    {
      LOWORD(v3) = (*(_WORD *)(v8 + 18) >> 3) & 0x1FF;
      if ( (_WORD)v3 == 445 )
      {
        if ( (unsigned int)sub_A884B0(a1, v7, v4, v5, v6) == 32 )
        {
          v3 = *(_QWORD *)(a1 + 18768);
          *a2 = v3;
          return v3;
        }
        LOWORD(v3) = (*(_WORD *)(v8 + 18) >> 3) & 0x1FF;
      }
      if ( (_WORD)v3 == 453 )
      {
        LODWORD(v3) = sub_A884B0(a1, *a2, v4, v5, v6);
        if ( (_DWORD)v3 == 32 )
        {
          v3 = *(_QWORD *)(a1 + 18720);
          *a2 = v3;
        }
      }
    }
  }
  return v3;
}

