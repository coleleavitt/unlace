unsigned __int64 __fastcall sub_1AF4410(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r14d
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  char v20; // dl
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx

  if ( a2 )
  {
    sub_15F2480(*a1);
    v8 = a1[1];
    v9 = *(unsigned int *)(v8 + 344);
    if ( (_DWORD)v9 )
    {
      v14 = *(_QWORD *)(v8 + 336) + 6776 * v9 - 6776;
      if ( *(_QWORD *)(v14 + 6768) == *(_QWORD *)(v8 + 328) )
      {
        v15 = *(_DWORD *)(v14 + 8);
        v16 = *(_DWORD *)(v8 + 27504);
        if ( v15 > v16 )
        {
          v17 = v15;
          v18 = v16;
          if ( v15 != (unsigned __int64)v16 )
          {
            v19 = *(_QWORD *)v14 + 1688 * (v15 - (unsigned __int64)v16 - 1);
            if ( v19 )
            {
              v20 = *(_BYTE *)(v19 + 1106);
              if ( v20 )
                goto LABEL_12;
            }
          }
        }
        if ( v16 < v15 )
        {
          v20 = 0;
          v17 = v15;
          v18 = v16;
LABEL_12:
          if ( (unsigned __int64)(v17 - v18) <= 1
            || (v21 = *(_QWORD *)v14 + 1688 * (v17 - v18 - 2)) == 0
            || (*(_BYTE *)(v21 + 1106) |= v20, v22 = a1[1], v23 = *(unsigned int *)(v22 + 344), (_DWORD)v23)
            && (v14 = *(_QWORD *)(v22 + 336) + 6776 * v23 - 6776, *(_QWORD *)(v14 + 6768) == *(_QWORD *)(v22 + 328))
            && (v17 = *(unsigned int *)(v14 + 8),
                v18 = *(unsigned int *)(v22 + 27504),
                (unsigned int)v18 < (unsigned int)v17) )
          {
            v24 = v17 - v18;
            if ( v24 )
            {
              v25 = *(_QWORD *)v14 + 1688 * (v24 - 1);
              if ( v25 )
              {
                v10 = 1;
                if ( *(_BYTE *)(v25 + 1106) )
                  goto LABEL_4;
              }
            }
          }
        }
      }
    }
    v10 = 0;
LABEL_4:
    v11 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_F01550(v11, a3, a4, a2, v10, v12);
  }
  return 1;
}
