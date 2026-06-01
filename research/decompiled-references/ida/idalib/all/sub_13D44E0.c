__int64 __fastcall sub_13D44E0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int8 *v10; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 *v15[17]; // [rsp+0h] [rbp-88h] BYREF

  v4 = *a3;
  if ( v4 == 63 || v4 == 92 )
  {
    v13 = sub_13D1690(a1, a3, a2);
    v4 = v13;
    v5 = &a3[HIDWORD(v13)];
  }
  else
  {
    v5 = a3 + 1;
  }
  if ( v4 == 62 )
  {
LABEL_19:
    v8 = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a2 + 4) = (_DWORD)v5 - v8;
    *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v5 - (int)v8);
    *(_WORD *)(a2 + 16) = 16;
    *(_QWORD *)(a1 + 152) = v5;
    *(_QWORD *)(a2 + 8) = v8;
    return 1;
  }
  v6 = 0;
  while ( 2 )
  {
    if ( v4 == 92 )
    {
      while ( 1 )
      {
        v4 = *v5;
        if ( *v5 == 63 || v4 == 92 )
        {
          v12 = sub_13D1690(a1, v5, a2);
          v5 += HIDWORD(v12);
          v4 = v12;
          goto LABEL_7;
        }
        ++v5;
        if ( (byte_2411740[2 * v4] & 2) != 0 )
          goto LABEL_25;
LABEL_8:
        if ( !v4 )
        {
          v6 = (__int64)(v5 - 1);
          if ( v5 - 1 == *(unsigned __int8 **)(a1 + 120) )
            goto LABEL_25;
          v7 = *(_QWORD *)(a1 + 8);
          if ( v7 )
          {
            if ( *(_QWORD *)(v7 + 760)
              && *(_DWORD *)(a1 + 128) + (_DWORD)v6 - *(_DWORD *)(a1 + 112) == *(_DWORD *)(v7 + 772) )
            {
              sub_13D40B0(a1, (const char *)a3, (unsigned __int64)(v5 - 1), 1u);
              v14 = *(_QWORD *)(a1 + 120);
              *(_QWORD *)(a1 + 152) = v14;
              *(_DWORD *)(a2 + 4) = v6 - v14;
              *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v6 - (int)v14);
              *(_WORD *)(a2 + 16) = 0;
              *(_QWORD *)(a1 + 152) = v6;
              return 1;
            }
          }
        }
        v4 = *v5;
        if ( *v5 != 63 && v4 != 92 )
          break;
        v9 = sub_13D1690(a1, v5, a2);
        v5 += HIDWORD(v9);
        v4 = v9;
        if ( (_BYTE)v9 == 62 )
          goto LABEL_16;
        if ( (_BYTE)v9 != 92 )
          goto LABEL_7;
      }
      ++v5;
      if ( v4 != 62 )
        continue;
LABEL_16:
      if ( v6 && !*(_BYTE *)(a1 + 26) )
      {
        sub_13D1530((__int64)v15, a1, v6, 1280);
        sub_AE9DF0(v15, 1, 2u);
        sub_AEA040((__int64)v15);
      }
      goto LABEL_19;
    }
    break;
  }
LABEL_7:
  if ( (byte_2411740[2 * v4] & 2) == 0 )
    goto LABEL_8;
LABEL_25:
  v10 = &a3[-*(_QWORD *)(a1 + 152)];
  *(_DWORD *)(a2 + 4) = (_DWORD)v10;
  *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v10);
  *(_WORD *)(a2 + 16) = 47;
  *(_QWORD *)(a1 + 152) = a3;
  return 1;
}
