__int64 __fastcall sub_824B30(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        _BYTE *a8,
        _BYTE *a9)
{
  __int64 v12; // r15
  unsigned int v13; // ecx
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  int v18; // esi
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned int v23; // [rsp+Ch] [rbp-4Ch]
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v24[0] = a2;
  v24[1] = a3;
  *a7 = sub_69F240(v24);
  if ( a5 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v15 = *(_QWORD *)(*a7 & 0xFFFFFFFFFFFFFFF0LL);
      v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)(v16 - 2) > 4u )
      {
        v18 = *(unsigned __int8 *)(v15 + 16);
        if ( (_BYTE)v16 == 14 )
        {
          if ( (_BYTE)v18 != 14 )
            v15 = sub_B0D320(v15);
          *a7 = *(_QWORD *)(v15 + 32);
          *a6 = 2;
          *a8 = 1;
        }
        else if ( (unsigned int)(v18 - 56) <= 1
               || (unsigned int)(v16 - 56) <= 1 && (v23 = v13, v20 = sub_B0D320(v15), v13 = v23, (v15 = v20) != 0) )
        {
          *a7 = *(_QWORD *)(v15 + 32);
          *a6 = *(unsigned int *)(v15 + 20);
          *a8 = 1;
        }
        else
        {
          v21 = *(_QWORD *)(a4 + 8 * v12) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(a4 + 8 * v12) <= 7u || (*(_BYTE *)(v21 + 28) & 0x7Fu) - 47 > 2 )
          {
            *a6 = 0;
            *a8 = 0;
            goto LABEL_8;
          }
          *a7 = *(_QWORD *)(v21 + 48);
          *a6 = 0;
          *a8 = 0;
        }
      }
      else
      {
        v17 = sub_6D9A50(a1, *a7);
        *a7 = *(_QWORD *)(v17 + 32);
        *a8 = 1;
        if ( (unsigned int)*(unsigned __int8 *)(v17 + 16) - 2 <= 1 )
        {
          v14 = *(_QWORD **)(v17 + 40);
          if ( (*(_BYTE *)(v17 + 19) & 2) != 0 )
          {
            if ( *((_DWORD *)v14 + 2) <= 0x40u )
              v14 = (_QWORD *)*v14;
            else
              v14 = *(_QWORD **)*v14;
          }
          *a6 = v14;
        }
        else
        {
          *a9 = 1;
          *a6 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v13 = v12 + 1;
LABEL_8:
      if ( a5 == ++v12 )
        return v13;
    }
  }
  return 0;
}

