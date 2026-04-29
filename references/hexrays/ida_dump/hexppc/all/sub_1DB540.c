__int64 __fastcall sub_1DB540(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4, int a5, double a6)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbx
  int v17; // eax
  int v18; // r12d
  __int64 v19; // r13
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  void (*v23)(); // rax

  if ( *(int *)(a3 + 96) <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    do
    {
      if ( sub_60EF0(a4, v8) )
        v9 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + (v8 << 6) + 8) + v9 - *(_QWORD *)(*(_QWORD *)(a3 + 72) + (v8 << 6));
      ++v8;
    }
    while ( *(_DWORD *)(a3 + 96) > (int)v8 );
  }
  v10 = a2[101] + v9;
  a2[101] = v10;
  if ( (int)(*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 652LL) << 10) < v10 )
    return 4294967267LL;
  *(_QWORD *)(a1 + 920) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 336LL))(*(_QWORD *)(a1 + 1504));
  result = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, _QWORD *))(*a2 + 16LL))(a2, a3, a4);
  if ( !(_DWORD)result )
  {
    if ( !*(_QWORD *)(a1 + 8)
      || (v12 = sub_1CAFA0(a1), v12[4] == *(_QWORD *)(a1 + 88))
      && *((unsigned __int16 *)v12 + 20) == *(_QWORD *)(a1 + 96)
      && v12[7] == *(_QWORD *)(a1 + 104) )
    {
      sub_64590(a1, *(_QWORD *)(a1 + 40), 2);
      result = sub_1D33E0(a1, (__int64)a2, a3, a4, *(_QWORD **)(a1 + 8), a5, a6);
      if ( !(_DWORD)result )
      {
        v16 = 0;
        if ( *(int *)(a1 + 64) > 1 )
        {
          while ( 1 )
          {
            v18 = v16 + 1;
            v19 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * (v16 + 1));
            if ( !(unsigned __int8)sub_1D1A10(v19) )
              break;
            v17 = *(_DWORD *)(a1 + 64);
            if ( (int)v16 + 2 >= v17 )
              goto LABEL_20;
            ++v16;
            if ( v18 + 1 >= (unsigned int)v17 )
            {
              if ( !under_debugger )
                sub_37EEE0(52719);
              BUG();
            }
          }
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v19 + 32);
        }
LABEL_20:
        if ( !*(_QWORD *)(a1 + 8) || (result = sub_1DB3A0(a1, (__int64)a2, a5, v13, v14, v15), !(_DWORD)result) )
        {
          sub_1D15B0(a1);
          v23 = *(void (**)())(*a2 + 40LL);
          if ( v23 != nullsub_121 )
            ((void (__fastcall *)(_QWORD *))v23)(a2);
          *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 988LL) = *(_DWORD *)(a1 + 64);
          result = sub_339EC0(*(_QWORD *)(a1 + 1496), 3, a1, v20, v21, v22);
          if ( !(_DWORD)result )
          {
            result = sub_32CAC0(a1, 1);
            if ( (_DWORD)result )
              return 4294967263LL;
          }
        }
      }
    }
    else
    {
      return 4294967283LL;
    }
  }
  return result;
}
