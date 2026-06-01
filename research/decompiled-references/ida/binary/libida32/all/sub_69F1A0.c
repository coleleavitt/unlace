unsigned __int64 __fastcall sub_69F1A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r12
  unsigned __int64 result; // rax
  unsigned int v7; // esi
  __int64 v8; // r13

  v3 = 32 * a3;
  v5 = 32 * a3 + *(_QWORD *)(a1 + 32);
  result = *(_BYTE *)(a1 + 28) & 0x2F;
  v7 = *(_DWORD *)(v5 + 24);
  if ( (_BYTE)result == 13 )
  {
    result = sub_69AB60(a2, v7, *(_QWORD *)(a1 + 136) + (a3 << 7));
    v8 = *(_QWORD *)(a1 + 32) + v3;
    v7 = *(_DWORD *)(v8 + 24);
    v5 = v8;
  }
  if ( v7 != -1 )
  {
    result = sub_69E890(*(__int64 **)(*(_QWORD *)a2 + 1480LL), v7, 1);
    *(_DWORD *)(v5 + 24) = -1;
  }
  return result;
}

