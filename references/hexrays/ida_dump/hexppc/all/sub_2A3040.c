__int64 __fastcall sub_2A3040(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  char v4; // r13
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  int v10; // eax
  char v11; // al
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  __int64 tinfo_property; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (*(_DWORD *)(a2[4] + 32) & 3) != 0 )
    return v19 - __readfsqword(0x28u);
  v3 = a2[3];
  v4 = 0;
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 > 0x3C )
  {
    if ( v8 == 65 )
    {
      v9 = a2[3];
      goto LABEL_20;
    }
  }
  else
  {
    if ( v8 > 0x3A )
    {
      if ( (unsigned __int8)sub_296720(*a1, v3 + 48, a3, 0) )
      {
        copy_tinfo_t(a2[3] + 48, a3);
        v13 = *(_QWORD *)(v3 + 24);
        v17 = 0;
        copy_tinfo_t(&v17, v13 + 48);
        if ( *(_DWORD *)(v3 + 8) == 60 )
        {
          tinfo_property = 0;
          tinfo_property = get_tinfo_property(v17, 9);
          copy_tinfo_t(&v17, &tinfo_property);
          clear_tinfo_t(&tinfo_property);
          if ( !(_BYTE)v17 )
          {
            if ( !under_debugger )
              sub_37EEE0(50473);
            BUG();
          }
        }
        clear_tinfo_t(&v17);
      }
      return v19 - __readfsqword(0x28u);
    }
    if ( v8 == 51 )
    {
      v9 = a2[3];
      do
      {
        v9 = *(_QWORD *)(v9 + 24);
        v10 = *(_DWORD *)(v9 + 8);
      }
      while ( v10 == 51 );
      if ( v10 == 48 )
      {
        v12 = a2[3];
        v4 = 1;
        goto LABEL_28;
      }
      if ( (unsigned int)(v10 - 35) <= 1 && *(_DWORD *)(*(_QWORD *)(v9 + 24) + 8LL) == 48 )
      {
        v11 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 48LL), 2);
        if ( (v11 & 0x3E) != 0 && (v11 & 0xFu) <= 8 )
        {
          v12 = a2[3];
          if ( *(_DWORD *)(v9 + 8) != 65 )
          {
            v4 = 1;
            goto LABEL_28;
          }
          v15 = *a1;
LABEL_23:
          if ( !(unsigned __int8)sub_296720(v15, v12 + 48, a3, 0) )
            return v19 - __readfsqword(0x28u);
          v12 = a2[3];
LABEL_28:
          copy_tinfo_t(v12 + 48, a3);
          v16 = *a2;
          if ( *a2 == -1 )
            goto LABEL_31;
          if ( *(_DWORD *)(v3 + 8) == 51 )
          {
            sub_2A2D70((__int64)a1, v16, (_QWORD *)(v3 + 48), v4);
LABEL_31:
            while ( *(_DWORD *)(v3 + 8) == 51 )
            {
              sub_328210(&tinfo_property, *(_QWORD *)(*a1 + 112), v3 + 48);
              copy_tinfo_t(*(_QWORD *)(v3 + 24) + 48LL, &tinfo_property);
              clear_tinfo_t(&tinfo_property);
              v3 = *(_QWORD *)(v3 + 24);
            }
          }
          return v19 - __readfsqword(0x28u);
        }
      }
LABEL_20:
      if ( *(_DWORD *)(v9 + 8) != 65
        || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 432LL) + 104LL * *(int *)(v9 + 32) + 24) & 2) != 0 )
      {
        return v19 - __readfsqword(0x28u);
      }
      v15 = *a1;
      v12 = a2[3];
      goto LABEL_23;
    }
  }
  if ( !(unsigned __int8)sub_296720(*a1, v3 + 48, a3, 0) )
    return v19 - __readfsqword(0x28u);
  return copy_tinfo_t(a2[3] + 48, a3);
}
