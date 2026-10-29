__int64 __fastcall sub_1DF1C0(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, int a5)
{
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rbx
  int v18; // eax
  int v19; // r12d
  __int64 v20; // r13
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  void (*v24)(); // rax

  if ( *(int *)(a3 + 96) <= 0 )
  {
    v8 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( sub_64930(a4, v7) )
        v8 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + (v7 << 6) + 8) + v8 - *(_QWORD *)(*(_QWORD *)(a3 + 72) + (v7 << 6));
      ++v7;
    }
    while ( *(_DWORD *)(a3 + 96) > (int)v7 );
  }
  v9 = a2[101] + v8;
  a2[101] = v9;
  if ( (int)(*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 652LL) << 10) < v9 )
    return 4294967267LL;
  *(_QWORD *)(a1 + 920) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 336LL))(*(_QWORD *)(a1 + 1504));
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))(*a2 + 16LL))(a2, a3, a4);
  if ( !(_DWORD)result )
  {
    if ( !*(_QWORD *)(a1 + 8)
      || (v12 = sub_1CE9E0(a1), v12[4] == *(_QWORD *)(a1 + 88))
      && *((unsigned __int16 *)v12 + 20) == *(_QWORD *)(a1 + 96)
      && (v11 = *(_QWORD *)(a1 + 104), v12[7] == v11) )
    {
      sub_67FD0(a1, *(_QWORD *)(a1 + 40), 2, v11);
      result = sub_1D7070(a1, (__int64)a2, a3, a4, *(_QWORD **)(a1 + 8), a5);
      if ( !(_DWORD)result )
      {
        v17 = 0;
        if ( *(int *)(a1 + 64) > 1 )
        {
          while ( 1 )
          {
            v19 = v17 + 1;
            v20 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * (v17 + 1));
            if ( !(unsigned __int8)sub_1D55D0(v20) )
              break;
            v18 = *(_DWORD *)(a1 + 64);
            if ( (int)v17 + 2 >= v18 )
              goto LABEL_20;
            ++v17;
            if ( v19 + 1 >= (unsigned int)v18 )
            {
              if ( !under_debugger )
                sub_383060(52719);
              BUG();
            }
          }
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v20 + 32);
        }
LABEL_20:
        if ( !*(_QWORD *)(a1 + 8) || (result = sub_1DF020(a1, (__int64)a2, a5, v14, v15, v16), !(_DWORD)result) )
        {
          sub_1D5170(a1, (__int64)a2, v13, v14);
          v24 = *(void (**)())(*a2 + 40LL);
          if ( v24 != nullsub_121 )
            ((void (__fastcall *)(_QWORD *))v24)(a2);
          *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 988LL) = *(_DWORD *)(a1 + 64);
          result = sub_33E140(*(_QWORD *)(a1 + 1496), 3, a1, v21, v22, v23);
          if ( !(_DWORD)result )
          {
            result = sub_330F20(a1, 1);
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
