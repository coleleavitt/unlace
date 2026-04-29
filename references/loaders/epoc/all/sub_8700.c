__int64 __fastcall sub_8700(__int64 a1, __int64 *a2, int *a3, int a4)
{
  int v4; // eax
  __int64 v6; // rax
  int v8; // r13d
  __int64 v10; // rsi
  int v11; // ebx
  __int64 v12; // rax
  _UNKNOWN **v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int128 v15; // [rsp+10h] [rbp-48h]
  int v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v4 = *a3;
  v17 = __readfsqword(0x28u);
  if ( v4 == 13 )
  {
    v6 = *(_QWORD *)(a1 + 104);
    v8 = *(_DWORD *)(a1 + 88);
    v10 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v6 + 1) )
    {
      v12 = qvector_reserve(a1 + 96, v10, v6 + 1, 4);
      *(_QWORD *)(a1 + 96) = v12;
      v10 = v12;
      v6 = *(_QWORD *)(a1 + 104);
    }
    *(_DWORD *)(v10 + 4 * v6) = v8;
    ++*(_QWORD *)(a1 + 104);
    v14 = 0;
    v13 = &off_129A0;
    v16 = 0;
    v15 = 0;
    while ( a2[3] < (unsigned __int64)a4 && !(unsigned int)sub_7DE0(&v13, a2, 0) )
      ;
    v11 = v16;
    v13 = &off_12D18;
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
    *(_DWORD *)(a1 + 88) += v11;
  }
  else if ( v4 == 31 )
  {
    ++*(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 84) = 0;
  }
  return 0;
}
