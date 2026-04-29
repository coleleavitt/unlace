__int64 __fastcall sub_269A30(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r15
  int v6; // r12d
  __int64 v7; // rbx
  int tinfo_size; // ebp
  __int64 v9; // rdi
  int v10; // eax
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a3;
  v13[1] = __readfsqword(0x28u);
  if ( a3 != a2 )
  {
    while ( (unsigned int)(*(_DWORD *)(v4 + 8) - 59) <= 1
         && (!*a4 || !(unsigned __int8)sub_326300(*(_QWORD *)a1, v4 + 48, a4)) )
    {
      v7 = *(_QWORD *)(v4 + 24);
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v4 + 48), 0);
      if ( *(_DWORD *)(v4 + 8) == 60 )
      {
        v9 = *(_QWORD *)(v7 + 48);
        v13[0] = 0;
        v13[0] = get_tinfo_property(v9, 10);
      }
      else
      {
        v13[0] = 0;
        copy_tinfo_t(v13, v7 + 48);
      }
      v6 = get_tinfo_size(0, v13[0], 0);
      clear_tinfo_t(v13);
      if ( tinfo_size != v6 )
        break;
      if ( *(_DWORD *)(v4 + 8) == 60 )
      {
        v10 = *(_DWORD *)(a1 + 440);
        if ( v10 <= 0 )
        {
          if ( !under_debugger )
            sub_37EEE0(50968);
          BUG();
        }
        *(_DWORD *)(a1 + 440) = v10 - 1;
      }
      *(_QWORD *)(v4 + 24) = 0;
      if ( v4 )
      {
        sub_2519B0(v4);
        clear_tinfo_t(v4 + 48);
        j__qfree(v4);
      }
      if ( a2 == v7 )
        return v7;
      v4 = v7;
    }
  }
  return v4;
}
