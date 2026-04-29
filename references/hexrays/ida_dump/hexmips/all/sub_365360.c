__int64 __fastcall sub_365360(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned int v4; // r15d
  __int64 i; // r12
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v14; // rax

  v2 = *(_DWORD *)(a2 + 8) - 1;
  if ( v2 >= 0 )
  {
    v4 = 0;
    for ( i = 96LL * (unsigned int)v2; ; i -= 96 )
    {
      v8 = i + *(_QWORD *)a2;
      if ( *(_QWORD *)(v8 + 16) != *(_QWORD *)(a1 + 8) )
        goto LABEL_10;
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 == 1 )
      {
        if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(v8 + 8) - *(_QWORD *)(a2 + 40) )
          goto LABEL_10;
        if ( *(_QWORD *)(v8 + 64) > 1u )
        {
LABEL_6:
          v7 = *(_QWORD *)(v8 + 24);
          *(_DWORD *)(v8 + 88) = 0;
          if ( v7 )
          {
            *(_QWORD *)(v8 + 32) = 0;
            qfree(v7);
            *(_QWORD *)(v8 + 24) = 0;
            *(_QWORD *)(v8 + 40) = 0;
          }
          clear_tinfo_t(v8 + 48);
          goto LABEL_9;
        }
      }
      else
      {
        v6 = *(_QWORD *)(v8 + 80);
        if ( v6 == -1 )
        {
          v6 = 2;
          if ( v9 != 4 )
          {
            v6 = 1;
            if ( v9 == 2 )
            {
              v14 = **(_QWORD **)(v8 + 8) + 24LL * *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) - 24;
              v6 = *(unsigned __int16 *)(v14 + 18) + *(unsigned __int16 *)(v14 + 16);
            }
          }
        }
        if ( (unsigned int)sub_364DC0(*(_QWORD **)(a1 + 16), (int *)(i + *(_QWORD *)a2), v6) == -1 )
          goto LABEL_10;
        if ( *(_QWORD *)(v8 + 64) > 1u )
          goto LABEL_6;
      }
      v10 = (_QWORD *)(i + *(_QWORD *)a2);
      v11 = v10[7];
      if ( v11 )
      {
        v10[8] = 0;
        qfree(v11);
      }
      clear_tinfo_t(v10 + 6);
      v12 = v10[3];
      if ( v12 )
      {
        v10[4] = 0;
        qfree(v12);
      }
      cleanup_argloc(v10);
      memmove(v10, v10 + 12, *(_QWORD *)a2 + 96LL * *(_QWORD *)(a2 + 8) - (_QWORD)v10 - 96);
      --*(_QWORD *)(a2 + 8);
LABEL_9:
      v4 = 1;
LABEL_10:
      if ( --v2 == -1 )
        return v4;
    }
  }
  return 0;
}
