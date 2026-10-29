__int64 __fastcall sub_732710(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 56);
  v7[1] = __readfsqword(0x28u);
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *, __int64))(a1 + 8))(v5, a2, v7, 8) == 8 )
  {
    *a3 = v7[0];
    return 0;
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-((*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), a2) != 0);
  }
}

