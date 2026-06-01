char __fastcall sub_1FBED60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r12

  sub_1FBEC00((__int64 *)a1, (_QWORD *)a2, a3, a4, a5, a6);
  v10 = *(_QWORD *)(a2 + 16);
  if ( (v10 & 4) == 0 || (v10 &= 0xFFFFFFFFFFFFFFF8LL, v6 = *(_QWORD *)v10, *(_QWORD *)(v10 + 8) == *(_QWORD *)v10) )
  {
    if ( (*(_BYTE *)(a2 + 29) & 3) == 0 )
    {
      v11 = *(_QWORD *)(a2 + 72);
      v10 = (__int64)sub_BAF470((__int64 *)(v11 + 64), v11, v6, v7, v8, v9);
      if ( v11 == v10 && *(char *)(a2 + 28) >= 0 && (*(_BYTE *)(a2 + 29) & 0x10) == 0 )
      {
        v10 = *(_QWORD *)(a2 + 8) & 7LL;
        if ( v10 != 4 )
        {
          LOBYTE(v10) = sub_1EA74C0(a2);
          if ( !(_BYTE)v10 && (*(_BYTE *)(a2 + 40) & 7) == 0 )
          {
            LODWORD(v10) = *(_DWORD *)(*(_QWORD *)a1 + 3488LL);
            *(_DWORD *)(a1 + 228) = v10;
          }
        }
      }
    }
    *(_DWORD *)(a1 + 224) = 51;
  }
  else
  {
    *(_DWORD *)(a1 + 224) = 51;
  }
  return v10;
}
