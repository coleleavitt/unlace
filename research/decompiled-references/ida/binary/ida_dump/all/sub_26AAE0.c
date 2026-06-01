bool __fastcall sub_26AAE0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  int v6; // ebx
  int v7; // ecx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // rax
  __int128 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rax

  if ( a3 <= 0 )
  {
    if ( !under_debugger )
      sub_383060(52483);
    BUG();
  }
  v3 = *a2;
  v4 = a2[3];
  v6 = a3;
  v7 = *(_DWORD *)(*a2 + 8LL);
  if ( v7 != 65 )
  {
    if ( !(v4 % a3) )
      return 1;
    if ( v7 != 34 )
    {
      if ( v7 == 37 )
      {
        v8 = *(_QWORD *)(v3 + 24);
        if ( *(_DWORD *)(v8 + 8) == 61 || (v8 = *(_QWORD *)(v3 + 32), *(_DWORD *)(v8 + 8) == 61) )
        {
          if ( v8 )
          {
            v9 = sub_255A30(*(__int64 **)(v8 + 24));
            v10 = a2[3];
            if ( (!v9 || !v10 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) / v9 >= v10) && !((__int64)(v10 * v9) % v6) )
            {
              a2[3] = v10 * v9;
              v11 = *(_QWORD *)(v3 + 24);
              if ( v11 == v8 )
                v11 = *(_QWORD *)(v3 + 32);
              goto LABEL_21;
            }
          }
        }
      }
      return 0;
    }
    v12 = *(_QWORD *)(v3 + 32);
    if ( *(_DWORD *)(v12 + 8) == 61 )
    {
      v13 = sub_255A30(*(__int64 **)(v12 + 24));
      v14 = v13;
      if ( (unsigned __int64)v13 > 0x3F || (v15 = a2[3]) == 0 )
      {
        v17 = 0;
LABEL_20:
        a2[3] = v17;
        v11 = *(_QWORD *)(v3 + 24);
LABEL_21:
        *a2 = v11;
        return 1;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) >> v14 >= v15 )
      {
        v16 = (__int64)(v15 << v14);
        v17 = v16;
        if ( !(unsigned __int64)(v16 % v6) )
          goto LABEL_20;
      }
    }
    return 0;
  }
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 432LL) + 104LL * *(int *)(v3 + 32) + 96) * v4;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) == 8 )
    return v19 % a3 == 0;
  else
    return (int)v19 % a3 == 0;
}
