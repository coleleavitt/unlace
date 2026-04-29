unsigned __int64 __fastcall sub_65CE0(__int64 *a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD), char a3)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rbp
  int v7; // ebx
  _DWORD *v8; // rcx
  _DWORD *v9; // rax
  unsigned int *v10; // rdi
  __int64 v11; // rcx
  __int128 v12; // rax
  unsigned int *v13; // rsi
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v3 = (unsigned int *)a1[1];
  v4 = (unsigned int *)*a1;
  v17 = __readfsqword(0x28u);
  v15 = 0;
  v3 = (unsigned int *)(4LL * (_QWORD)v3);
  v16 = 0;
  if ( v3 )
  {
    do
    {
      v7 = (**a2)(a2, *v4, 0);
      if ( v7 == -1 )
      {
        if ( a3 )
        {
          if ( !under_debugger )
            sub_3835A0(51920);
          BUG();
        }
      }
      else
      {
        v8 = (_DWORD *)(v15 + 4 * v16);
        if ( (_DWORD *)v15 == v8 )
          goto LABEL_16;
        v9 = (_DWORD *)v15;
        while ( v7 != *v9 )
        {
          if ( v8 == ++v9 )
            goto LABEL_16;
        }
        if ( v9 == v8 )
        {
LABEL_16:
          if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
          {
            v15 = qvector_reserve(&v15, v15, v16 + 1, 4);
            v8 = (_DWORD *)(v15 + 4 * v16);
          }
          *v8 = v7;
          *(_QWORD *)&v16 = v16 + 1;
        }
      }
      v10 = (unsigned int *)*a1;
      ++v4;
    }
    while ( v4 != (unsigned int *)(*a1 + 4 * a1[1]) );
    v11 = v15;
    v12 = v16;
  }
  else
  {
    v12 = 0u;
    v10 = v4;
    v11 = 0;
  }
  v13 = (unsigned int *)a1[2];
  *a1 = v11;
  *(_OWORD *)(a1 + 1) = v12;
  v15 = (__int64)v10;
  *((_QWORD *)&v16 + 1) = v13;
  if ( v10 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v10);
  }
  return v17 - __readfsqword(0x28u);
}
