unsigned __int64 __fastcall sub_6DA5F0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r15
  __int16 v11; // r8
  int v12; // edx
  unsigned int v13; // ebx
  unsigned __int8 v14; // al
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 result; // rax
  __int64 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  void *v21; // [rsp+10h] [rbp-48h] BYREF
  int v22; // [rsp+18h] [rbp-40h]

  v4 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL);
  if ( (v5 & 7) != 0 || (v5 & 8) != 0 )
  {
    v4 = sub_B0CF30(a2, a2);
    v7 = v6;
  }
  else
  {
    v7 = a2 & 7;
    if ( (a2 & 8) != 0 )
    {
      v7 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
      v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  v8 = sub_B0D320(v4);
  if ( (unsigned __int8)(*(_BYTE *)(v8 + 16) - 2) > 4u
    || (v18 = *(_QWORD *)(v8 + 32), v9 = sub_6DA5F0(a1, v18, a3), v10 = v9, v9 == v18) )
  {
    *a3 = v7;
    return v4 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    *a3 |= v7;
    v11 = *(_WORD *)(v8 + 18) >> 6;
    v12 = *(unsigned __int8 *)(v8 + 16);
    v13 = v11 & 7;
    if ( (unsigned int)(v12 - 2) > 1 )
    {
      if ( (_BYTE)v12 == 5 )
      {
        return sub_6C5C30(a1, v9, v11 & 7, 0);
      }
      else if ( (_BYTE)v12 == 6 )
      {
        return sub_6C5920(a1, v9, *(_QWORD *)(v8 + 40), v11 & 7, (*(_BYTE *)(v8 + 18) >> 3) & 7, *(_QWORD *)(v8 + 48));
      }
      else
      {
        return sub_6D9640(a1, v9, *(_QWORD *)(v8 + 40), v11 & 7, 0, 0);
      }
    }
    else
    {
      v14 = *(_BYTE *)(v8 + 19);
      v15 = *(_QWORD *)(v8 + 40);
      if ( (v14 & 2) != 0 )
      {
        v16 = *(_QWORD *)(v15 + 16);
        v22 = *(_DWORD *)(v15 + 8);
        if ( (unsigned int)v22 > 0x40 )
        {
          v20 = v16;
          sub_2585B30(&v21);
          v16 = v20;
        }
        else
        {
          v21 = *(void **)v15;
        }
      }
      else
      {
        v22 = 8 * ((v14 >> 2) & 0x1F);
        if ( v22 > 64 )
          sub_2585A50(&v21, v15, 0);
        else
          v21 = (void *)v15;
        v16 = 0;
      }
      result = sub_6C55D0(a1, v10, (__int64)&v21, v16, v13, 0);
      if ( (unsigned int)v22 > 0x40 )
      {
        if ( v21 )
        {
          v19 = result;
          operator delete[](v21);
          return v19;
        }
      }
    }
  }
  return result;
}

