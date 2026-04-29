__int64 __fastcall sub_11DBF0(int *a1, _DWORD *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebp
  int v5; // eax
  int *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rt2
  int v13; // eax
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v5 = *a1;
  v15 = __readfsqword(0x28u);
  if ( v5 == 22 )
  {
    v4 = sub_14DA70(a1, &v14);
    if ( (_BYTE)v4 )
    {
      if ( a3 )
        *a3 = a1 + 8;
      if ( a2 )
        *a2 = v14;
    }
  }
  else
  {
    if ( v5 != 14 )
      return 0;
    if ( *((_BYTE *)a1 + 48) == 2 )
    {
      if ( a3 )
        *a3 = a1 + 8;
      v9 = a1 + 12;
    }
    else
    {
      if ( *((_BYTE *)a1 + 32) != 2 )
        return 0;
      if ( a3 )
        *a3 = a1 + 12;
      v9 = a1 + 8;
    }
    v10 = sub_325150(*(_QWORD *)(*((_QWORD *)v9 + 1) + 16LL), (unsigned int)v9[1], (unsigned __int64)a4 >> 63);
    if ( !a4 )
      return 0;
    LOBYTE(v4) = v10 != 0x8000000000000000LL || a4 != -1;
    if ( !(_BYTE)v4 )
      return 0;
    v12 = v10 % a4;
    v11 = v10 / a4;
    if ( v12 || !v11 || (v11 & (v11 - 1)) != 0 )
      return 0;
    v13 = log2ceil(v11);
    if ( a2 )
      *a2 = v13;
  }
  return v4;
}
