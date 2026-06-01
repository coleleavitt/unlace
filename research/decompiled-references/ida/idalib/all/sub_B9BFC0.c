__int64 __fastcall sub_B9BFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax

  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  if ( (**(_BYTE **)(a1 + 128) & 1) != 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9),
        v6 = *(_QWORD *)(a1 + 128),
        (*(_BYTE *)(v6 + 9) & 1) != 0)
    || (result = 1, (*(_BYTE *)(v6 + 10) & 0x20) != 0) && (result = sub_B96D80(a1), !(_BYTE)result) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 8) != 0 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v10, v11, v12, v13);
      return (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) == 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
