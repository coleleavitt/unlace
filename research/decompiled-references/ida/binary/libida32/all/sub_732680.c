__int64 __fastcall sub_732680(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  unsigned int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 56);
  v8 = __readfsqword(0x28u);
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, unsigned int *, __int64))(a1 + 8))(v5, a2, &v7, 4) == 4 )
  {
    *a3 = v7;
    return 0;
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-((*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), a2) != 0);
  }
}

