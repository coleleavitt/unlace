__int64 __fastcall sub_28FEF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // r14
  int tinfo_size; // eax
  __int64 v15; // r9
  char tinfo_property; // al
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // r12
  int v19; // eax
  __int64 v20; // r9
  int v21; // ebp
  int v22; // eax
  int radix; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  unsigned int v25; // [rsp+14h] [rbp-54h]
  int v26; // [rsp+18h] [rbp-50h]
  _BYTE v27[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v28 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v4 + 8 * v3 - 8);
  LOBYTE(v6) = sub_251850(a2, v5);
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_37DDE0(50626);
    BUG();
  }
  v7 = v6;
  v8 = *(int *)(v5 + 8);
  if ( (unsigned int)v8 <= 0x45 && (*((_BYTE *)&off_4B2D60 + 16 * v8 + 11) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 48);
    if ( (unsigned int)get_tinfo_property(v10, 3) == 2 )
    {
      v11 = *(_QWORD *)(a2 + 24);
      if ( (*(_BYTE *)(v11 + 13) & 0x20) == 0
        || !(unsigned __int8)is_stroff(*(_QWORD *)(v11 + 40), (unsigned int)*(char *)(v11 + 12))
        && (v10 = *(_QWORD *)(v11 + 40), !(unsigned __int8)is_enum(v10, (unsigned int)*(char *)(v11 + 12))) )
      {
        if ( *(_DWORD *)(a2 + 8) != 61 )
          sub_27A0D0(v10);
        v12 = a2 + 48;
        v13 = sub_250E30(*(__int64 **)(a2 + 24), (_QWORD *)(a2 + 48));
        if ( v13 >= 0 )
        {
          radix = get_radix(
                    *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL),
                    (unsigned int)*(char *)(*(_QWORD *)(a2 + 24) + 12LL));
          tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
          v25 = tinfo_size;
          v26 = tinfo_size;
          if ( (unsigned __int64)tinfo_size <= 8
            && !(unsigned __int8)sub_25C990(*(_QWORD **)(a2 + 24), *(_QWORD *)(a1 + 72), tinfo_size, radix) )
          {
            v15 = *(_QWORD *)(v5 + 24);
            if ( a2 == v15 )
              v15 = *(_QWORD *)(v5 + 32);
            v24 = v15;
            tinfo_property = get_tinfo_property(*(_QWORD *)(v15 + 48), 2);
            if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
            {
              v17 = (unsigned int)(8 * v26 - 1);
              v18 = _bittest64(&v13, v17);
              if ( (unsigned __int64)(int)v17 >= 0x40 )
                v18 = 0;
              sub_327180(v27, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v25, 1);
              v19 = sub_2816C0(a1, a2, v25, v18, 0);
              v20 = v24;
              v21 = v19;
              if ( v19 )
              {
                if ( *(_DWORD *)(v24 + 8) == 48 )
                {
                  v22 = sub_28F800(a1, v24);
                  v20 = v24;
                  if ( v22 )
                    goto LABEL_24;
                }
                if ( v21 == 2 || (unsigned __int8)sub_279E20(*(_QWORD *)(a1 + 72), v20 + 48, (__int64)v27, v12, 0) )
                {
                  v7 = 0;
LABEL_24:
                  clear_tinfo_t(v27);
                  return v7;
                }
              }
              copy_tinfo_t(v12, v27);
              if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
                *(_DWORD *)(a1 + 8) |= 8u;
              goto LABEL_24;
            }
          }
        }
      }
    }
  }
  return 0;
}
