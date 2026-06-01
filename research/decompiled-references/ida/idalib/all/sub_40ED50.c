__int64 __fastcall sub_40ED50(_QWORD *a1, unsigned __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r15
  int v12; // eax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int8 reftype_by_size; // al
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( (a3 & 0xF00000) != 0x500000
    && (a3 & 0x600) != 0x200
    && *(_BYTE *)(a4 + 43)
    && (unsigned int)sub_3BDA80((__int64)a1, a2) == 8 )
  {
    v19 = 4;
    if ( *(_BYTE *)(a4 + 43) == 2 )
      v19 = 8;
    v8 = 0x100000000LL;
    if ( *(_DWORD *)(a1[3] + 24LL) == 8 )
      v8 = -1;
    if ( v8 - a2 >= v19 )
    {
      v9 = v19 + a2;
      v10 = a2;
      while ( (unsigned __int8)sub_3C0260(a1, v10) )
      {
        if ( ++v10 == v9 )
        {
          if ( v19 == 8 )
            v11 = sub_3BEF70(a1, a2);
          else
            v11 = (unsigned int)sub_3BEEF0(a1, a2);
          if ( v11 >= sub_631AD0(*a1, 23) && sub_631AD0(*a1, 24) >= v11 )
          {
            if ( (v12 = sub_631AD0(*a1, 5), v12 != 10) && (v12 != 11 || a4 == sub_505D70(a1 + 203, v11))
              || sub_41BA20(a1) == -1
              || (unsigned __int8)get_fixup(0, a2) )
            {
              v13 = a2 + 1;
              while ( (sub_3BE900(a1, v13, 4) & 0x1000) == 0 )
              {
                if ( v9 == ++v13 )
                {
                  v14 = sub_4E3030(a1, a2, v19, 0);
                  v15 = v14;
                  if ( v14 == -1 )
                    return 0;
                  if ( !sub_4E37A0(a1, v20, a2, v14, v11, (unsigned int)v19) )
                    return 0;
                  if ( (sub_3BE900(a1, v20[0], 4) & 0x600) == 0x200 )
                  {
                    v17 = sub_3C2650(a1, v20[0]);
                    v18 = v17;
                    if ( v17 != -1
                      && (~((unsigned __int16)sub_3BE900(a1, v17, 4) >> 8) & 6) == 0
                      && (!a5 || v18 + 1 != v20[0]) )
                    {
                      return 0;
                    }
                  }
                  if ( (debug & 1) != 0 )
                    sub_3879F0();
                  reftype_by_size = get_reftype_by_size(v19);
                  return sub_4E2930(a1, a2, 0, reftype_by_size, -1, v15, 0);
                }
              }
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
