__int64 __fastcall sub_220E90(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 *v4; // rbx
  int v5; // r14d
  char tinfo_property; // al
  __int64 v7; // r13
  __int64 v8; // rdx
  int v9; // r15d
  __int64 *v10; // rdx
  signed int v11; // ebx
  int v13; // eax
  int v14; // r13d
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  char v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v4 = a3;
  v19 = __readfsqword(0x28u);
  v5 = a4;
  if ( !a3 )
  {
    v7 = *(_QWORD *)(a1 + 1504);
    if ( (*(_BYTE *)(v7 + 50) & 8) != 0 )
    {
      if ( a4 > 16 )
        goto LABEL_26;
    }
    else
    {
      v13 = 2 * *(_DWORD *)(v7 + 80);
      if ( a4 > v13 )
        goto LABEL_17;
    }
    if ( !sub_1163C0(a4) && !sub_116480(v5) )
    {
      v14 = sub_1163D0(v5);
LABEL_32:
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL);
      if ( (unsigned __int8)getinf(66) )
        LODWORD(v16) = (unsigned __int8)getinf(66);
      else
        v16 = *(_QWORD *)(v15 + 120);
      if ( v5 < (int)v16 && v14 > (int)v16 )
      {
        v8 = *(_QWORD *)(a1 + 1504);
        v5 = v16;
        v4 = nullptr;
        goto LABEL_3;
      }
LABEL_41:
      v8 = *(_QWORD *)(a1 + 1504);
      if ( v14 != v5 )
      {
        v5 = v14;
        v4 = nullptr;
      }
LABEL_3:
      v9 = *(_DWORD *)(v8 + 80);
      v10 = v4;
      v17 = a2;
      v11 = v5;
      v18 = 5;
      if ( !(unsigned __int8)sub_220B50(a1, (__int64)&v17, v10, v5) )
      {
        v11 = v5 / 2;
        if ( v5 > 1 )
          goto LABEL_7;
LABEL_18:
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && (v11 = 2 * v5, v9 >= 2 * v5) )
        {
          while ( 1 )
          {
            v17 = a2;
            v18 = 5;
            if ( (unsigned __int8)sub_220B50(a1, (__int64)&v17, nullptr, v11) )
              break;
            v11 *= 2;
            if ( v9 < v11 )
              return 0;
          }
        }
        else
        {
          return 0;
        }
      }
      return (unsigned int)v11;
    }
LABEL_14:
    v8 = *(_QWORD *)(a1 + 1504);
    goto LABEL_3;
  }
  tinfo_property = get_tinfo_property(*a3, 2);
  v7 = *(_QWORD *)(a1 + 1504);
  v8 = v7;
  if ( (tinfo_property & 0x2F) == 0xD )
    goto LABEL_3;
  if ( (*(_BYTE *)(v7 + 50) & 8) == 0 )
  {
    v13 = 2 * *(_DWORD *)(v7 + 80);
    if ( v5 <= v13 )
      goto LABEL_11;
LABEL_17:
    v8 = v7;
    v5 = v13;
    v4 = nullptr;
    goto LABEL_3;
  }
  if ( v5 <= 16 )
  {
LABEL_11:
    if ( ((get_tinfo_property(*v4, 2) & 0x2F) != 0xD || (*(_BYTE *)(v7 + 48) & 0x20) == 0)
      && !sub_1163C0(v5)
      && ((unsigned __int8)*v4 && (get_tinfo_property(*v4, 2) & 0xF) != 9 || !sub_116480(v5)) )
    {
      v14 = sub_1163D0(v5);
      if ( (unsigned __int8)*v4 && (get_tinfo_property(*v4, 2) & 0xF) != 9 )
        goto LABEL_41;
      goto LABEL_32;
    }
    goto LABEL_14;
  }
LABEL_26:
  v9 = *(_DWORD *)(v7 + 80);
  v17 = a2;
  v11 = 16;
  v18 = 5;
  if ( !(unsigned __int8)sub_220B50(a1, (__int64)&v17, nullptr, 16) )
  {
    v5 = 16;
    v11 = 8;
LABEL_7:
    while ( 1 )
    {
      v17 = a2;
      v18 = 5;
      if ( (unsigned __int8)sub_220B50(a1, (__int64)&v17, nullptr, v11) )
        break;
      v11 >>= 1;
      if ( !v11 )
        goto LABEL_18;
    }
  }
  return (unsigned int)v11;
}
