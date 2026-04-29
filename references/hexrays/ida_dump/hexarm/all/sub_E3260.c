unsigned __int64 __fastcall sub_E3260(__int64 *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  bool v4; // zf
  int v6; // r15d
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // eax
  __int64 v14; // [rsp+8h] [rbp-58h]
  __int64 v15[3]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]

  v4 = a4[1] == 0;
  v16 = __readfsqword(0x28u);
  v14 = *(_QWORD *)(a2[8] + 1504LL);
  if ( !v4 )
  {
    v6 = 0;
    v7 = 0;
    v8 = (_QWORD *)(*(_QWORD *)(a2[60] + 776LL) + 128LL);
    while ( !sub_64330(v8, *(_DWORD *)(*a4 + 4 * v7)) )
    {
      v7 = ++v6;
      if ( (unsigned __int64)v6 >= a4[1] )
        return v16 - __readfsqword(0x28u);
    }
    v9 = a2[7];
    v15[0] = 0;
    v15[1] = 0;
    sub_DDA40(v15, (__int64)a2, v9, a3, 0, 0, v8);
    v10 = 0;
    if ( !(unsigned __int8)sub_64280(v15) )
    {
      while ( v10 <= (int)sub_64600(v15) )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(
                v14,
                *(unsigned int *)(*a4 + 4LL * v10));
        sub_63880(a1, *(_DWORD *)(*a4 + 4LL * v10++), v11);
      }
    }
    qfree(v15[0]);
  }
  return v16 - __readfsqword(0x28u);
}
