__int64 __fastcall sub_B9640(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  int *v11; // rdi
  int v12; // ebp
  int v13; // esi
  __int64 v14; // rdx
  _QWORD v16[5]; // [rsp+0h] [rbp-78h] BYREF
  char v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 320);
  if ( *(_QWORD *)(v6 + 1840) )
  {
    v8 = 0;
    v16[0] = &off_4AFB88;
    v9 = 0;
    memset(&v16[1], 0, 32);
    v17 = 0;
    v18 = a2;
    do
    {
      v10 = 88 * v9;
      v11 = (int *)(88 * v9 + *(_QWORD *)(v6 + 1832));
      v12 = *v11;
      if ( *v11 )
      {
        v13 = -v12;
        if ( v12 > 0 )
          v13 = *v11;
        if ( (sub_B9430(a1, v13) == 0) == v12 < 0
          && (unsigned int)sub_119D40(*(_QWORD *)(v6 + 1832) + v10 + 8, v16, v14, a4, a5, a6) )
        {
          return 1;
        }
      }
      else if ( (unsigned int)sub_119D40(v11 + 2, v16, 5 * v9, a4, a5, a6) )
      {
        return 1;
      }
      v9 = ++v8;
    }
    while ( (unsigned __int64)v8 < *(_QWORD *)(v6 + 1840) );
  }
  return 0;
}
