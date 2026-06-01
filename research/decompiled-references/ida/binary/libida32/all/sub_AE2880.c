__int64 __fastcall sub_AE2880(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // [rsp+0h] [rbp-2Ch]
  void *v16; // [rsp+4h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+Ch] [rbp-20h]

  result = *(_QWORD *)(a1 + 48);
  if ( !BYTE4(result) )
  {
    v6 = *(_QWORD **)(a1 + 40);
    if ( *(_BYTE *)(a1 + 39) )
    {
      if ( v6 )
      {
        sub_C19F20(&v16, v6, a2, 0);
        LODWORD(v7) = (_DWORD)v16;
        if ( v17 > 0x40 )
          v7 = *(_QWORD *)v16;
        result = (unsigned int)v7
               * (unsigned int)sub_A73FE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
        if ( v17 > 0x40 )
        {
          if ( v16 )
          {
            v15 = result;
            operator delete[](v16);
            return v15;
          }
        }
      }
      else
      {
        return sub_A3F1A0(a2);
      }
    }
    else
    {
      v8 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFF0LL);
      v9 = *v8;
      if ( (unsigned int)*(unsigned __int8 *)(*v8 + 16) - 43 <= 1
        || (v14 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v14 <= 1)
        && (v9 = sub_F3F310(*v8, v6, v14, a4)) != 0 )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v9 + 32);
          if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
            break;
          v9 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
          v11 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 43;
          if ( (unsigned int)v11 > 1 )
            v9 = sub_F3F310(v9, v6, v11, a4);
        }
        v8 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v12 = v8[1];
      if ( (v12 & 8) != 0 && (*((_BYTE *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
      {
        return sub_A73FE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
      }
      else
      {
        v13 = sub_A74330(a2, *v8);
        return v13 * (unsigned int)sub_A73FE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
      }
    }
  }
  return result;
}

