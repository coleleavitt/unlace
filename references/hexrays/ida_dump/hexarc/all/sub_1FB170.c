__int64 __fastcall sub_1FB170(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _BYTE *v4; // rax
  __int64 v5; // r15
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  _DWORD *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v4 = *(_BYTE **)(a1 + 64);
  v17 = __readfsqword(0x28u);
  if ( (*v4 & 1) == 0 || !*(_DWORD *)(a1 + 72) )
    return *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 76) == 1 )
  {
    if ( !under_debugger )
      sub_37B760(50333);
    BUG();
  }
  v9 = (_DWORD *)sub_1FAA90((_QWORD *)a1, a2, 1);
  v13 = v9;
  if ( v9 )
  {
    if ( (unsigned int)(*v9 - 42) <= 0xC )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *((_BYTE *)v13 + 32) == 4 && (unsigned __int8)sub_119EE0(*((_BYTE **)v13 + 5), v14, 0, v10, v11, v12) )
            v13 = *((_DWORD **)v13 + 5);
          if ( *((_BYTE *)v13 + 48) != 4 || !(unsigned __int8)sub_119EE0(*((_BYTE **)v13 + 7), v14, 0, v10, v11, v12) )
            break;
          v13 = *((_DWORD **)v13 + 7);
        }
        if ( *((_BYTE *)v13 + 64) != 4 || !(unsigned __int8)sub_119EE0(*((_BYTE **)v13 + 9), v14, 0, v10, v11, v12) )
          break;
        v13 = *((_DWORD **)v13 + 9);
      }
    }
    v5 = *((_QWORD *)v13 + 3);
    if ( v5 + 1 != *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) )
      ++v5;
    if ( a4 && (*v13 == 4 || *v13 == 67 && v13[9] == v13[17]) && *((_BYTE *)v13 + 64) == 15 )
    {
      v15 = 0;
      v16 = 0;
      sub_328120(a2 + 24, &v15);
      if ( (unsigned __int8)sub_1BE260(*((int **)v13 + 9), (int)v13[17], (int *)&v15, *(int *)(a2 + 40)) )
        *a4 = v13 + 16;
      cleanup_argloc(&v15);
    }
    if ( (*((_BYTE *)v13 + 6) & 1) != 0 )
    {
      v15 = 0;
      v16 = 0;
      sub_328120(a2 + 24, &v15);
      v5 = sub_1E9800(*(_QWORD *)(a1 + 64), v5, (int *)&v15);
      cleanup_argloc(&v15);
    }
    if ( a3
      && !(unsigned __int8)sub_23B3F0(*(_QWORD *)(a1 + 64), *((_QWORD *)v13 + 3), v13 + 8, a3, 0)
      && !(unsigned __int8)sub_23B3F0(*(_QWORD *)(a1 + 64), *((_QWORD *)v13 + 3), v13 + 12, a3, 0) )
    {
      sub_23B3F0(*(_QWORD *)(a1 + 64), *((_QWORD *)v13 + 3), v13 + 16, a3, 0);
    }
    return v5;
  }
  return sub_32B470(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 32));
}
