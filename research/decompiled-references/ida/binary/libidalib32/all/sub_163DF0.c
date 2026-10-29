__int64 __fastcall sub_163DF0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v5; // r14
  __int64 *v6; // rdi
  __int64 v9; // rax
  __int128 v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned __int8 *)(a1 + 984);
  v11 = __readfsqword(0x28u);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *(_QWORD *)(a1 + 480) )
  {
    if ( *(_DWORD *)(a1 + 472) == 1 && (v5 = *(_QWORD *)(a1 + 848)) != 0 )
    {
      v6 = (__int64 *)qword_2532F8;
      if ( !qword_2532F8 )
      {
        v9 = operator new(0x18u);
        *(_QWORD *)v9 = 0;
        v6 = (__int64 *)v9;
        qword_2532F8 = v9;
        *(_OWORD *)(v9 + 8) = 0;
      }
      *(_QWORD *)&v10 = 0;
      *((_QWORD *)&v10 + 1) = a1;
      *(_QWORD *)(a2 + 32) = sub_15B020(v6, &v10);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 272LL))(v5, a2 + 8, a3);
    }
    else
    {
      return 0;
    }
    return v3;
  }
  sub_1582F0(a1);
  return sub_163EF0();
}

