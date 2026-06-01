unsigned __int64 __fastcall sub_B7FD70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 112);
    *(_QWORD *)(a1 + 112) = v8;
    v9 = (unsigned __int64)sub_7053D0((__int64 *)(v8 + 104), v8, a3, a4, a5, a6);
    v10 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 104) = v9 & 0xFFFFFFFFFFFFFFFCLL;
    a4 = *(_WORD *)(a1 + 30) & 0x3FFF;
    a3 = (unsigned int)a4 | *(_WORD *)(v9 + 30) & 0x26;
    *(_WORD *)(a1 + 30) = a4 | *(_WORD *)(v9 + 30) & 0x26 | *(_WORD *)(a1 + 30) & 0xC000;
  }
  else
  {
    *(_QWORD *)(a1 + 112) = a1;
    v10 = a1;
  }
  result = *(_QWORD *)(v10 + 104);
  if ( (result & 1) != 0 || (result & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v14 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 && (result &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
      *(_QWORD *)(result + 16) = a1;
    else
      v14 = a1 & 0xFFFFFFFFFFFFFFFALL;
    v12 = v14 | 1;
    *(_QWORD *)(v10 + 104) = v12;
    v13 = *(_QWORD *)(a1 + 152);
    if ( !v13 )
      goto LABEL_6;
  }
  else
  {
    result = sub_6E2500((_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), a1, a3, a4, a5, a6) | 1;
    *(_QWORD *)(v10 + 104) = result;
    v13 = *(_QWORD *)(a1 + 152);
    if ( !v13 )
      goto LABEL_6;
  }
  if ( (v13 & 6) != 0 )
    goto LABEL_6;
  v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = v15;
  if ( !v15 )
    goto LABEL_6;
  result = *(_BYTE *)(v15 + 28) & 0x7F;
  if ( (_BYTE)result != 71 )
    goto LABEL_6;
  if ( a2 )
  {
    v17 = *(_QWORD *)(a2 + 152);
    if ( v17 )
    {
      if ( (v17 & 6) == 0 )
      {
        v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v18 )
        {
          v12 = *(_BYTE *)(v18 + 28) & 0x7F;
          if ( (_BYTE)v12 == 71 )
          {
            v19 = *(_QWORD *)(v18 + 72);
            *(_QWORD *)(v15 + 72) = v19;
            v20 = *(_QWORD *)(v19 + 64);
            if ( (v20 & 1) != 0 || (v23 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL), (v20 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
            {
              v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
            }
            else
            {
              v25 = *(_QWORD *)(v19 + 64) & 2LL;
              v22 = (unsigned __int64)v23;
              if ( !(_DWORD)v25 )
              {
LABEL_27:
                *(_QWORD *)(v15 + 64) = v23;
                a4 = *(_WORD *)(v15 + 30) & 0x3FFF;
                v12 = (unsigned int)a4 | *(_WORD *)(v22 + 30) & 0x26;
                *(_WORD *)(v15 + 30) = a4 | *(_WORD *)(v22 + 30) & 0x26 | *(_WORD *)(v15 + 30) & 0xC000;
                result = *(_QWORD *)(v19 + 64);
                if ( (result & 1) != 0 )
                  goto LABEL_28;
LABEL_35:
                if ( (result & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                {
                  result = sub_6E2500((_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), v15, v12, a4, a5, a6) | 1;
                  *(_QWORD *)(v19 + 64) = result;
                  goto LABEL_6;
                }
                goto LABEL_28;
              }
              v21 = sub_6E2500(v23, v19, v25, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
              *(_QWORD *)(v19 + 64) = v21 | 1;
            }
            v26[0] = v21;
            v22 = sub_B7BB70(v26);
            v19 = *(_QWORD *)(v15 + 72);
            v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v19 = v15;
  *(_QWORD *)(v15 + 72) = v15;
  result = *(_QWORD *)(v15 + 64);
  if ( (result & 1) == 0 )
    goto LABEL_35;
LABEL_28:
  v24 = result & 0xFFFFFFFFFFFFFFFELL;
  if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( result )
    {
      *(_QWORD *)(result + 16) = v15;
      v16 = v24;
    }
  }
  *(_QWORD *)(v19 + 64) = v16 | 1;
LABEL_6:
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 82) & 1) != 0 )
      *(_BYTE *)(a1 + 82) |= 1u;
  }
  return result;
}
