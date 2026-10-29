__int64 __fastcall sub_7AA9A0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rax

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v3 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v3 + 56) & 4) != 0 )
  {
    v12 = sub_798D40(a1);
    sub_7A2D50(v3 + 40, v12);
  }
  v4 = *(_QWORD *)(v3 + 48);
  v5 = *(_QWORD *)(v3 + 40);
  v6 = 0;
  v7 = (v4 - v5) >> 3;
  while ( 1 )
  {
    v8 = v6;
    v9 = (__int64 *)(v5 + 8LL * v6);
    if ( a2 == (*v9 & 0xFFFFFFFFFFFFFFF8LL) )
      break;
    ++v6;
  }
  result = v7 - 1;
  v11 = v4 - 8;
  if ( v8 == v7 - 1 )
  {
    *(_QWORD *)(v3 + 48) = v11;
  }
  else
  {
    result = *(_QWORD *)(v4 - 8);
    *(_QWORD *)(v3 + 48) = v11;
    *v9 = result;
  }
  return result;
}

