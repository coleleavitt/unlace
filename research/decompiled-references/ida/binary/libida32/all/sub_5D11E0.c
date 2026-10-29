__int64 __fastcall sub_5D11E0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 392);
  if ( v1 )
    *(_QWORD *)(a1 + 392) = v1 - 1;
  sub_5D10F0((_QWORD *)a1, *(unsigned __int8 *)(a1 + 741) + 1LL);
  return 0;
}

