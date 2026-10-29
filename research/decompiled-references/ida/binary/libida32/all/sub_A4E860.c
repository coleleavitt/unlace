unsigned __int64 __fastcall sub_A4E860(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // esi
  _DWORD *v15; // r14
  unsigned int v16; // ebx
  unsigned __int64 result; // rax
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+8h] [rbp-50h]
  void *v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-40h]

  v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(v8 + 8) & 7LL | (*(__int64 *)(v8 + 8) >> 3) & 1;
  if ( v9 )
  {
    v7 = sub_F411C0(a2);
    v10 = v9;
  }
  else
  {
    v10 = a2 & 7;
    a2 &= 8u;
    if ( (_DWORD)a2 )
    {
      v10 |= *(_QWORD *)(v7 + 24);
      v7 = v8;
    }
  }
  v11 = sub_F3F310(v7, a2, v9, v8, a5);
  if ( (unsigned __int8)(*(_BYTE *)(v11 + 16) - 2) > 4u
    || (v12 = *(_QWORD *)(v11 + 32), v13 = sub_A4E860(a1, v12, a3), v13 == v12) )
  {
    *a3 = v10;
    return v7 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    *a3 |= v10;
    v14 = *(unsigned __int8 *)(v11 + 16);
    if ( (unsigned int)(v14 - 2) > 1 )
    {
      v18 = (*(_WORD *)(v11 + 18) >> 6) & 7;
      if ( (_BYTE)v14 == 5 )
      {
        return sub_A4E110((__int64)a1, v13, v18, 0);
      }
      else
      {
        v19 = *(_QWORD *)(v11 + 40);
        if ( (_BYTE)v14 == 6 )
          return sub_A4DD00(a1, v13, v19, v18, (*(_BYTE *)(v11 + 18) >> 3) & 7);
        else
          return sub_A4DE50((__int64)a1, v13, v19, v18, 0);
      }
    }
    else
    {
      v15 = nullptr;
      v16 = (*(_WORD *)(v11 + 18) >> 6) & 7;
      if ( (*(_BYTE *)(v11 + 19) & 2) != 0 )
        v15 = *(_DWORD **)(*(_QWORD *)(v11 + 40) + 16LL);
      v20 = v13;
      sub_A39D90((__int64)&v22, v11);
      result = sub_A4D230((__int64)a1, v20, (__int64)&v22, v15, v16, 0);
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
  return result;
}

