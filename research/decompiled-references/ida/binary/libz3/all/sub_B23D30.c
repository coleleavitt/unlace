__int64 __fastcall sub_B23D30(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r9
  unsigned int v4; // r14d
  unsigned int *v5; // rbx
  __int64 v6; // rax
  unsigned int *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 *v13; // rbx
  __int64 v14; // r12

  v4 = sub_162B070(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 16LL));
  if ( (_BYTE)v4 )
  {
    v5 = a2 + 8;
    v6 = 2LL * a2[6];
    v7 = &a2[v6 + 8];
    if ( v6 * 4 )
    {
      do
      {
        v5 += 2;
        sub_B6F780(*(_QWORD *)(a1 + 16));
      }
      while ( v7 != v5 );
    }
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(v8 + 8656);
    if ( !v9 || (v10 = *a2, (unsigned int)v10 >= *(_DWORD *)(v9 - 4)) || !*(_QWORD *)(v9 + 8 * v10) )
    {
      sub_B68280(v8, a2, 0, 0, 1, v3);
      v8 = *(_QWORD *)(a1 + 16);
    }
    if ( !(unsigned int)sub_8E7030(v8) && !*((_WORD *)a2 + 2) )
    {
      v11 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v11 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) == *v11 && !v11[1] )
        {
          v13 = (__int64 *)sub_186B270(0x20u);
          v14 = sub_186B270(0x28u);
          sub_162B3B0(v14, *(_QWORD *)(a1 + 64), a2);
          *v13 = v14;
          v13[1] = 0;
          v13[2] = 0;
          v13[3] = 0;
          sub_B23930(a1, (__int64)v13);
        }
      }
    }
  }
  return v4;
}

