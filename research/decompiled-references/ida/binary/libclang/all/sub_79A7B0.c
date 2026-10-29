__int64 __fastcall sub_79A7B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  bool v10; // sf
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (*v19)(); // rdx

  result = *(_QWORD *)(a1 + 16);
  v5 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 4) != 0 )
  {
    if ( a2 == *(_QWORD *)(v5 + 8) )
      return result;
    *(_QWORD *)(v5 + 8) = a2;
    if ( *(char *)(a1 + 29) < 0 )
      return result;
    goto LABEL_12;
  }
  if ( a2 != v5 )
  {
    v6 = a1;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v6 = sub_793320(a1);
    v7 = *(_QWORD **)(v6 + 88);
    v8 = v7[274];
    v7[284] += 16LL;
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7[275] >= v9 + 16 && v8 )
      v7[274] = v9 + 16;
    else
      v9 = sub_792ED0((__int64)(v7 + 274), 16, 3);
    *(_QWORD *)v9 = v5;
    *(_QWORD *)(v9 + 8) = a2;
    result = v9 | 4;
    v10 = *(char *)(a1 + 29) < 0;
    *(_QWORD *)(a1 + 16) = result;
    if ( !v10 )
    {
LABEL_12:
      v11 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !a2 )
        goto LABEL_24;
      result = sub_79A2E0(a2);
      v12 = *(_QWORD *)(result + 8) & 7LL;
      if ( (*(_QWORD *)(result + 8) & 7) == 0 )
        goto LABEL_24;
      if ( *(char *)(result + 29) >= 0 )
        goto LABEL_18;
      if ( (*(_BYTE *)(result + 28) & 0x7F) != 0 )
        result = sub_793320(result);
      result = *(_QWORD *)(*(_QWORD *)(result + 88) + 2160LL);
      if ( (*(_BYTE *)(result + 193) & 0x70) != 0 || (*(_BYTE *)(result + 20) & 0x20) != 0 )
      {
LABEL_18:
        v13 = v11 | v12;
        *(_QWORD *)(a1 + 8) = v13;
        if ( (v13 & 7) != 0 )
        {
          v14 = sub_79A2E0(a2);
          v15 = v14;
          v16 = *(_QWORD *)(v14 + 8) & 7LL;
          if ( *(char *)(v14 + 29) < 0 )
          {
            result = 0;
            if ( v16 )
            {
              v17 = v15;
              if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0 )
                v17 = sub_793320(v15);
              v18 = *(_QWORD *)(*(_QWORD *)(v17 + 88) + 18200LL);
              v19 = *(__int64 (**)())(*(_QWORD *)v18 + 104LL);
              result = 0;
              if ( v19 != sub_792D90 )
                result = ((__int64 (__fastcall *)(__int64, _QWORD))v19)(v18, *(unsigned __int16 *)(v15 - 2));
            }
          }
          else if ( v16 )
          {
            result = *(_QWORD *)(v14 - 8);
          }
          else
          {
            result = 0;
          }
          *(_QWORD *)(a1 - 8) = result;
        }
      }
      else
      {
LABEL_24:
        *(_QWORD *)(a1 + 8) = v11;
      }
    }
  }
  return result;
}

