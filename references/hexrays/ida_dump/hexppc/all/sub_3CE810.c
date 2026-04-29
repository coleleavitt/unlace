void __fastcall sub_3CE810(_QWORD *a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a3 & 7;
  if ( v4 <= 2 )
  {
    v5 = a3 >> 3;
    if ( v4 - 1 <= 1 )
    {
      v7 = (__int64 *)(a1[17] + 24 * v5);
      v8 = *v7;
      if ( *(_QWORD *)(a2 + 8) == -1 )
        *(_QWORD *)(a2 + 8) = sub_3CAEA0(*v7, a1[8], a4);
      v9 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 == -1 )
      {
        if ( *(_BYTE *)v8 != 4 || (v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL), *(_QWORD *)a2 = v10, v10 == -1) )
        {
          if ( *(_BYTE *)v8 == 2
            && (unsigned __int8)is_mapped(**(_QWORD **)(v8 + 8))
            && a1[3]
            && rangeset_t_find_range(a1 + 2, **(_QWORD **)(v8 + 8)) )
          {
            v11 = **(_QWORD **)(v8 + 8);
            *(_QWORD *)a2 = v11;
            if ( v11 != -1 )
              return;
          }
          else
          {
            *(_QWORD *)a2 = -1;
          }
          if ( v4 == 2 )
            v9 = *(_QWORD *)(v8 + 16);
          *(_QWORD *)a2 = v9;
        }
      }
    }
    else
    {
      *(_DWORD *)(a2 + 16) = v5;
      v6 = a1[8];
      if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 64) )
        sub_3CAE80(a4, (__int64)a1, a2);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 528) + 8LL * (unsigned int)v5) + 32LL);
    }
  }
}
