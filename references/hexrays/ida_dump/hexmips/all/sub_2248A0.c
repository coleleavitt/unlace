__int64 __fastcall sub_2248A0(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // r13d
  signed __int64 v9; // rbx
  unsigned int v10; // eax
  int v11; // eax
  int *v12; // r15
  int v13; // ebx
  int *v14; // r14
  int v15; // eax
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  signed __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a4;
  v6 = a1[22];
  v18[1] = __readfsqword(0x28u);
  if ( (_DWORD)v5 == -1 )
    v5 = 1;
  v7 = sub_1BF120((__int64)a1, &v17, v18, v6);
  if ( !(_BYTE)v7 || v17 > a3 )
    return 0;
  v8 = v7;
  v9 = a3 + v5;
  if ( v9 > v18[0] )
  {
    v10 = *(_DWORD *)(a2 + 72);
    if ( v10 <= 0x10 )
      v10 = getinf(99);
    if ( v10 != 176
      && v10 != 256
      && !(unsigned __int8)getinf_flag(67, 2)
      && v9 <= ((v18[0] + *(_DWORD *)(*(_QWORD *)(a2 + 1504) + 80LL) - 1) & -*(_DWORD *)(*(_QWORD *)(a2 + 1504) + 80LL)) )
    {
      v11 = sub_1BF140(a1);
      v12 = *(int **)(a2 + 456);
      v13 = v11;
      v14 = &v12[*(_QWORD *)(a2 + 464)];
      if ( v14 == v12 )
        return v8;
      while ( 1 )
      {
        v15 = sub_1BF140((_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * *v12));
        if ( v13 < v15 && a3 >= v15 )
          break;
        if ( v14 == ++v12 )
          return v8;
      }
    }
    return 0;
  }
  return v8;
}
