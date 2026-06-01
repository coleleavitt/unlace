char __fastcall sub_1FBF770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 *v15; // rax

  v7 = (unsigned __int64 *)(a2 + 48);
  if ( !a2 )
    v7 = nullptr;
  sub_1FB86E0((__int64 *)a1, v7, a3, a4, a5, a6);
  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 64), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_WORD *)(a2 + 30) & 0x3FFF);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 72), *(_QWORD *)(a1 + 24));
  v8 = sub_A62BD0(*(_QWORD *)(a1 + 8), a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), v8, *(_QWORD *)(a1 + 24));
  v13 = *(_QWORD *)(a2 + 16);
  if ( (v13 & 4) == 0 || (v15 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF8LL), v10 = *v15, v15[1] == *v15) )
  {
    v14 = *(_QWORD *)(a2 + 56);
    v15 = (__int64 *)sub_1FB4AA0((unsigned __int64 *)(v14 + 48), v14, v9, v10, v11, v12);
    if ( (__int64 *)v14 == v15 && (*(_BYTE *)(a2 + 29) & 1) == 0 )
    {
      LOBYTE(v15) = sub_1EA74C0(a2);
      if ( !(_BYTE)v15 && (*(_BYTE *)(a2 + 40) & 7) == 0 )
      {
        LODWORD(v15) = *(_DWORD *)(*(_QWORD *)a1 + 3544LL);
        *(_DWORD *)(a1 + 228) = (_DWORD)v15;
      }
    }
    *(_DWORD *)(a1 + 224) = 92;
  }
  else
  {
    *(_DWORD *)(a1 + 224) = 92;
  }
  return (char)v15;
}
