__int64 __fastcall sub_4170E0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 192LL);
  if ( !result )
  {
    v2 = operator new(0x30u);
    *(_DWORD *)(v2 + 8) = 0;
    *(_QWORD *)(v2 + 24) = v2 + 8;
    *(_QWORD *)(v2 + 32) = v2 + 8;
    v3 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v2 + 16) = 0;
    *(_QWORD *)(v2 + 40) = 0;
    *(_QWORD *)(v3 + 192) = v2;
    return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 192LL);
  }
  return result;
}
