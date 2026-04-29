__int64 __fastcall sub_6FD70(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, int, int); // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  int v13; // eax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // [rsp+0h] [rbp-68h]
  __int64 v17[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)a1;
  v17[3] = __readfsqword(0x28u);
  if ( (*(int (__fastcall **)(__int64, _QWORD))(v5 + 104))(a1, a4) <= 0 )
    return 0;
  while ( 2 )
  {
    v7 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a4, (unsigned int)v4);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v7, a4) )
      goto LABEL_11;
    v8 = *(__int64 (__fastcall **)(__int64, int, int))(*a2 + 8LL);
    if ( v8 != sub_6BA20 )
    {
      v13 = v8((__int64)a2, v7, a4);
      goto LABEL_17;
    }
    v9 = (_QWORD *)a2[1];
    if ( !v9 )
      goto LABEL_11;
    v10 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v10 )
    {
      v11 = 24;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(*v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      v11 = v10 + 24;
      if ( (int)v7 < *(_DWORD *)(v10 + 24) )
      {
LABEL_15:
        v10 = *(_QWORD *)(v10 + 8);
        goto LABEL_10;
      }
      if ( (_DWORD)v7 == *(_DWORD *)(v10 + 24) )
      {
        if ( (signed int)a4 < *(_DWORD *)(v10 + 28) )
          goto LABEL_15;
        if ( (signed int)a4 <= *(_DWORD *)(v10 + 28) )
          break;
      }
      v10 = *(_QWORD *)(v10 + 16);
LABEL_10:
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_11;
    }
    if ( v9 == (_QWORD *)v10 )
    {
LABEL_11:
      ++v4;
      goto LABEL_12;
    }
LABEL_21:
    v13 = *(_DWORD *)(v11 + 8);
LABEL_17:
    if ( v13 != 3 )
      goto LABEL_11;
    v17[0] = 0;
    v17[1] = 0;
    sub_64190(v17, a4);
    v14 = sub_6FC30(a1, v17, a3, v7);
    if ( !v14 )
    {
      qfree(v17[0]);
      ++v4;
LABEL_12:
      if ( v4 >= (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, a4) )
        return 0;
      continue;
    }
    break;
  }
  v15 = v14;
  qfree(v17[0]);
  return v15;
}
