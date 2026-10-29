__int64 __fastcall sub_E4CD40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rbx
  __int64 v14; // rdi
  _BYTE *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9

  v2 = a2;
  v4 = sub_B97010(a2);
  v6 = (__int64 *)(v4 + 8 * v5);
  if ( (__int64 *)v4 != v6 )
  {
    v7 = (__int64 *)v4;
    do
    {
      a2 = *v7++;
      sub_E4E440(a1, a2);
    }
    while ( v6 != v7 );
  }
  v8 = sub_B96FB0(v2);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 23) & 0x40) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 20) & 0x1FFFFFFF;
      v13 = *(unsigned __int16 **)(v8 + 8 * v9 + 24);
      if ( v13 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 2320LL) + 212LL) > 0x9Fu )
        {
          v14 = a1[1];
          v15 = *(_BYTE **)(v14 + 32);
          if ( (unsigned __int64)v15 >= *(_QWORD *)(v14 + 24) )
          {
            sub_227BA10(v14, 81);
          }
          else
          {
            *(_QWORD *)(v14 + 32) = v15 + 1;
            *v15 = 81;
          }
          a2 = (__int64)v13;
          sub_E486B0((__int64)a1, v13, (unsigned __int16 *)0xFFFFFFFFLL, 0, v11, v12);
        }
      }
    }
  }
  v16 = (__int64 *)(**(_QWORD **)(*(_QWORD *)(v2 + 128) + 136LL) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *v16;
  if ( *(_BYTE *)(*v16 + 16) != 26 )
    v17 = sub_F63050(*v16, a2, v9, v10);
  v18 = sub_B9BF20(v2, a2);
  return sub_E4BE20((__int64)a1, v17, 0, v18, v19, v20);
}
