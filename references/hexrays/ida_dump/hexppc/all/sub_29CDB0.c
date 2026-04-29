unsigned __int64 __fastcall sub_29CDB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  char tinfo_property; // al
  char v5; // al
  int v6; // eax
  bool v7; // cc
  __int64 v8; // r13
  __int64 v10; // rbp
  int v11; // r13d
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // [rsp+18h] [rbp-70h]
  unsigned int v17[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = a1 + 32;
    if ( a2 != a1 + 32 )
    {
      v16 = a1 + 16;
      while ( 1 )
      {
        v3 = *(_DWORD *)(a1 + 28);
        if ( *(_DWORD *)(v2 + 28) < v3 )
        {
LABEL_26:
          v10 = v2 + 16;
LABEL_21:
          v17[0] = 0;
          sub_29BAF0((__int64)v17, (unsigned int *)v2);
          v18 = 0;
          copy_tinfo_t(&v18, v10);
          v8 = v2 + 32;
          v19 = *(_QWORD *)(v2 + 24);
          v13 = (v2 - a1) >> 5;
          if ( v2 - a1 > 0 )
          {
            do
            {
              v14 = v2;
              v2 -= 32;
              sub_29BAF0(v14, (unsigned int *)v2);
              copy_tinfo_t(v14 + 16, v14 - 16);
              *(_DWORD *)(v14 + 24) = *(_DWORD *)(v14 - 8);
              *(_DWORD *)(v14 + 28) = *(_DWORD *)(v14 - 4);
              --v13;
            }
            while ( v13 );
          }
          sub_29BAF0(a1, v17);
          copy_tinfo_t(v16, &v18);
          *(_QWORD *)(a1 + 24) = v19;
          clear_tinfo_t(&v18);
          sub_29AFB0((__int64)v17);
          goto LABEL_16;
        }
        if ( *(_DWORD *)(v2 + 28) <= v3 )
          break;
LABEL_15:
        v8 = v2 + 32;
        sub_29CBB0(v2);
LABEL_16:
        v2 = v8;
        if ( a2 == v8 )
          return v20 - __readfsqword(0x28u);
      }
      tinfo_property = get_tinfo_property(*(_QWORD *)(v2 + 16), 2);
      if ( (tinfo_property & 0x3E) == 0
        || (tinfo_property & 0xFu) > 8 && (tinfo_property & 0x3F) != 0x2D
        || (get_tinfo_property(*(_QWORD *)(a1 + 16), 2) & 0x3F) != 0x2D )
      {
        v5 = get_tinfo_property(*(_QWORD *)(a1 + 16), 2);
        if ( (v5 & 0x3E) == 0 || (v5 & 0xFu) > 8 && (v5 & 0x3F) != 0x2D )
        {
LABEL_12:
          v6 = *(_DWORD *)(a1 + 24);
          v7 = *(_DWORD *)(v2 + 24) <= v6;
          if ( *(_DWORD *)(v2 + 24) < v6 )
            goto LABEL_26;
          goto LABEL_13;
        }
        if ( (get_tinfo_property(*(_QWORD *)(v2 + 16), 2) & 0x3F) != 0x2D )
        {
          v15 = *(_DWORD *)(a1 + 24);
          v7 = *(_DWORD *)(v2 + 24) <= v15;
          if ( *(_DWORD *)(v2 + 24) < v15 )
            goto LABEL_26;
LABEL_13:
          if ( v7 && (int)sub_29AA70(v2, a1) < 0 )
            goto LABEL_26;
          goto LABEL_15;
        }
      }
      v10 = v2 + 16;
      v11 = score_tinfo(v2 + 16);
      v12 = score_tinfo(v16);
      if ( v11 > v12 )
        goto LABEL_15;
      if ( v11 < v12 )
        goto LABEL_21;
      goto LABEL_12;
    }
  }
  return v20 - __readfsqword(0x28u);
}
