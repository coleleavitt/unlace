unsigned __int64 __fastcall sub_189B170(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v21[25]; // [rsp+10h] [rbp-C8h] BYREF

  v7 = *(_QWORD *)(a2 + 120);
  if ( v7 )
  {
    result = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !result )
      return result;
  }
  else
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), a3, a4, a5, a6);
    v19 = *(_QWORD *)(a2 + 120);
    result = v19 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( v19 )
        return result;
      sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), 0, v16, v17, v18);
      result = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
        return result;
    }
  }
  result = *(_QWORD *)result;
  if ( result )
  {
    result = sub_B8E970(result + 48);
    v12 = result;
    if ( result )
    {
      if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x32 )
      {
LABEL_6:
        if ( *(char *)(v12 + 28) >= 0 )
        {
          v13 = *(_QWORD *)(v12 + 40);
          if ( (v13 & 7) == 0 )
          {
            v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
            v20 = v14;
            if ( v14 )
            {
              v15 = sub_BAE3D0(a3, v14, v21, v9, v10, v11);
              if ( v15 )
              {
                sub_168B9F0((__int64)v21, a1, *(_DWORD *)(v12 + 24), 0xE83u, 0);
                sub_169D880((__int64)v21, (__int64 *)&v20);
                sub_15F7200(v21);
                sub_168B9F0((__int64)v21, a1, *(_DWORD *)(v15 + 24), 0x70u, 0);
                sub_15F7200(v21);
                sub_B88650(v12, 1);
              }
            }
          }
        }
        while ( 1 )
        {
          result = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v12 = result;
          if ( !result )
            break;
          if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x32 )
            goto LABEL_6;
        }
      }
      else
      {
        while ( 1 )
        {
          result = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v12 = result;
          if ( !result )
            break;
          if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x32 )
            goto LABEL_6;
        }
      }
    }
  }
  return result;
}
