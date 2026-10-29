__int64 __fastcall sub_CCBA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int16 v9; // ax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-30h]
  void *v22; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-20h]

  v6 = *(_QWORD *)a1;
  if ( (v6 & 2) != 0 && (v7 = v6 & 0xFFFFFFFFFFFFFFFCLL, (v6 & 0xFFFFFFFFFFFFFFFCLL) != 0) )
  {
    v9 = *(_WORD *)v7 & 0x1FF;
    if ( v9 == 106
      || v9 == 92
      && (v10 = *(_QWORD *)(sub_C709D0(v6 & 0xFFFFFFFFFFFFFFFCLL, a2) + 40), (v10 & 7) == 0)
      && (v11 = v10 & 0xFFFFFFFFFFFFFFF8LL) != 0
      && (v12 = *(_QWORD *)(v11 + 16), *(_DWORD *)v12 == 9)
      && *(_QWORD *)(v12 + 16) == 0x6F7461636F6C6C61LL
      && *(_BYTE *)(v12 + 24) == 114
      && (v15 = *(_QWORD *)(sub_C709A0(v7) + 40), (v15 & 7) == 0)
      && (v16 = v15 & 0xFFFFFFFFFFFFFFF8LL) != 0
      && (v17 = *(_QWORD *)(v16 + 16), *(_DWORD *)v17 == 8)
      && (a3 = 0x657461636F6C6C61LL, *(_QWORD *)(v17 + 16) == 0x657461636F6C6C61LL) )
    {
      result = sub_F44710(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
      v18 = result;
      if ( *(_BYTE *)(a1 + 60) )
      {
        v19 = *(_DWORD *)(a1 + 20);
        v20 = 0;
        if ( v19 != -1 )
          v20 = v19 / *(_DWORD *)(a1 + 16);
        v23 = 64;
        v22 = (void *)v20;
        result = sub_A4D230(a2, v18, (__int64)&v22, nullptr, 0, 0);
        if ( v23 > 0x40 )
        {
          if ( v22 )
          {
            v21 = result;
            operator delete[](v22);
            return v21;
          }
        }
      }
    }
    else
    {
      return *(_QWORD *)(v7 + 8);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8);
    if ( v14 )
      return v14 & 0xFFFFFFFFFFFFFFF0LL;
    else
      return sub_CC8800((__int64 *)a1);
  }
  return result;
}

