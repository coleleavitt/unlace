void __fastcall sub_3C8530(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = a3 & 7;
  if ( v3 <= 2 )
  {
    v4 = a3 >> 3;
    if ( v3 - 1 <= 1 )
    {
      v6 = a1[17];
      v7 = *(_QWORD *)(v6 + 8 * v4);
      if ( a2[1] == -1 )
        a2[1] = sub_3C5340(*(unsigned __int8 **)(v6 + 8 * v4), a1[8]);
      v8 = *a2;
      if ( *a2 == -1 )
      {
        if ( *(_BYTE *)v7 != 4 || (v9 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL), *a2 = v9, v9 == -1) )
        {
          if ( *(_BYTE *)v7 == 2 && (unsigned __int8)is_mapped() && a1[3] && rangeset_t_find_range() )
          {
            v10 = **(_QWORD **)(v7 + 8);
            *a2 = v10;
            if ( v10 != -1 )
              return;
          }
          else
          {
            *a2 = -1;
          }
          if ( v3 == 2 )
            v8 = *(_QWORD *)(v7 + 16);
          *a2 = v8;
        }
      }
    }
    else
    {
      *((_DWORD *)a2 + 4) = v4;
      v5 = a1[8];
      if ( (unsigned int)v4 >= *(_DWORD *)(v5 + 64) )
        sub_3C5320();
      a2[1] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * (unsigned int)v4) + 32LL);
    }
  }
}
