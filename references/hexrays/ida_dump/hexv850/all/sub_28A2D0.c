__int64 __fastcall sub_28A2D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebp
  __int64 v7; // r14
  __int64 v8; // r13
  char tinfo_property; // al
  __int64 v10; // rax
  int v11; // ecx
  int v12; // edi
  int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // [rsp+Ch] [rbp-6Ch]
  __int64 v17; // [rsp+10h] [rbp-68h] BYREF
  __int128 v18; // [rsp+18h] [rbp-60h] BYREF
  signed int v19; // [rsp+28h] [rbp-50h]
  int v20; // [rsp+2Ch] [rbp-4Ch]
  int v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 21 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      if ( sub_27F1E0(*(_QWORD *)(a1[2] + 8 * v2 - 8), a2) )
      {
        v7 = *(_QWORD *)(a2 + 24);
        v8 = *(_QWORD *)(a2 + 32);
        if ( *(_DWORD *)(v7 + 8) == 61 )
        {
LABEL_9:
          v18 = 0;
          v4 = sub_289690((__int64)a1, v8, (__int64)&v17, a2);
          if ( !(_BYTE)v4 )
            goto LABEL_23;
          tinfo_property = get_tinfo_property(*((_QWORD *)&v18 + 1), 2);
          if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 || (unsigned __int64)v19 > 8 )
            goto LABEL_23;
          if ( *(_BYTE *)(a1[9] + 145LL) )
          {
            if ( v19 == v21 * (v20 + 1) )
              goto LABEL_23;
          }
          else if ( !v20 )
          {
            goto LABEL_23;
          }
          v16 = v21;
          v10 = sub_250670(*(__int64 **)(v7 + 24), (_QWORD *)(v7 + 48));
          v11 = 8 * v16;
          if ( (unsigned __int64)(8 * v16) > 0x3F || (v10 & (-1LL << v11)) == 0 )
          {
            v12 = v20;
            if ( *(_BYTE *)(a1[9] + 145LL) )
              v12 = v19 / v16 - v20 - 1;
            v13 = v12 * v11;
            v14 = v10 << v13;
            v15 = 0;
            if ( (unsigned __int64)v13 < 0x40 )
              v15 = v14;
            sub_23B660(v7, *(_QWORD *)(a1[8] + 216LL), a1[8], v15, v19, 2u);
            sub_289C50((__int64)a1, v8, &v17);
            sub_23EE00(a2, *(_QWORD *)(a1[9] + 112LL), 0);
            goto LABEL_24;
          }
LABEL_23:
          v4 = 0;
LABEL_24:
          clear_tinfo_t((char *)&v18 + 8);
          clear_tinfo_t(&v18);
          return v4;
        }
        if ( *(_DWORD *)(v8 + 8) == 61 )
        {
          v8 = *(_QWORD *)(a2 + 24);
          v7 = *(_QWORD *)(a2 + 32);
          goto LABEL_9;
        }
      }
    }
  }
  return 0;
}
