__int64 __fastcall sub_3FBBB0(_QWORD *a1, __int64 a2, int a3, __int64 a4, char a5)
{
  int v8; // r15d
  unsigned int v9; // r14d
  unsigned int v10; // r14d
  int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // r13d
  unsigned __int8 reftype_by_size; // al
  unsigned int v16; // eax
  unsigned int v17; // r14d
  unsigned int v18; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (a3 & 0xF00000) != 0x500000
    && (a3 & 0x600) != 0x200
    && *(_BYTE *)(a4 + 23)
    && (unsigned int)sub_3B8DF0((__int64)a1, a2) == 8
    && *(_BYTE *)(a4 + 23) != 2
    && (unsigned int)a2 <= 0xFFFFFFFB )
  {
    v8 = a2 + 4;
    v9 = a2;
    while ( (unsigned __int8)sub_3BB2F0((__int64)a1, v9) )
    {
      if ( ++v9 == v8 )
      {
        v10 = sub_3BA060(a1, a2);
        if ( v10 >= (unsigned int)sub_614FB0(*a1, 23) && v10 <= (unsigned int)sub_614FB0(*a1, 24) )
        {
          if ( (v11 = sub_614FB0(*a1, 5), v11 != 10) && (v11 != 11 || a4 == sub_4EE820(a1 + 194, v10))
            || (unsigned int)sub_408790(a1) == -1
            || (unsigned __int8)get_fixup(0, (unsigned int)a2) )
          {
            v12 = a2 + 1;
            while ( (sub_3B9AA0((__int64)a1, v12, 4) & 0x1000) == 0 )
            {
              if ( ++v12 == v8 )
              {
                v13 = sub_4CB840(a1, (unsigned int)a2, 4, 0);
                v14 = v13;
                if ( v13 == -1 )
                  return 0;
                if ( !(unsigned int)sub_4CBF10(a1, &v18, (unsigned int)a2, v13, v10, 4) )
                  return 0;
                if ( (sub_3B9AA0((__int64)a1, v18, 4) & 0x600) == 0x200 )
                {
                  v16 = sub_3BD5D0((__int64)a1, v18);
                  v17 = v16;
                  if ( v16 != -1
                    && (~((unsigned __int16)sub_3B9AA0((__int64)a1, v16, 4) >> 8) & 6) == 0
                    && (!a5 || v17 + 1 != v18) )
                  {
                    return 0;
                  }
                }
                if ( (debug & 1) != 0 )
                  sub_383DA0();
                reftype_by_size = get_reftype_by_size(4);
                return sub_4CB1B0(a1, (unsigned int)a2, 0, reftype_by_size, 0xFFFFFFFFLL, v14, 0);
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

