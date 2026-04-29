unsigned __int64 __fastcall sub_68120(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v3 = a2;
  v12 = __readfsqword(0x28u);
  sub_631C0((__int64)a1, a2);
  v4 = a1[39];
  v11 = 0;
  if ( a2 < v4 )
  {
LABEL_9:
    a1[39] = v3;
    return v12 - __readfsqword(0x28u);
  }
  if ( v4 < a2 )
  {
    v6 = a1[38];
    v7 = a1[40];
    v8 = a1 + 38;
    if ( (unsigned __int64)&v11 < v6 || (unsigned __int64)&v11 >= v6 + 4 * v7 )
    {
      if ( v7 >= v3 || (v10 = qvector_reserve(v8, v6, v3, 4), v4 = a1[39], a1[38] = v10, v6 = v10, v4 < v3) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v6 + 4 * v4++) = 0;
          if ( v3 == v4 )
            break;
          v6 = a1[38];
        }
      }
    }
    else if ( v7 >= v3 || (v9 = qvector_reserve(v8, v6, v3, 4), v4 = a1[39], a1[38] = v9, v6 = v9, v4 < v3) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v6 + 4 * v4++) = 0;
        if ( v3 == v4 )
          break;
        v6 = a1[38];
      }
    }
    goto LABEL_9;
  }
  return v12 - __readfsqword(0x28u);
}
