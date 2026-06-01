__int64 __fastcall sub_179BE20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx

  while ( 1 )
  {
    v4 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    v5 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 43 <= 1 )
      goto LABEL_2;
    v6 = a1;
    v10 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v15 = (unsigned int)(v10 - 43);
    if ( (unsigned int)v15 <= 1 )
    {
      v5 = sub_F63050(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v10, v15);
      if ( v5 )
      {
LABEL_2:
        while ( 1 )
        {
          v6 = *(_QWORD *)(v5 + 32);
          if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
            v5 = *(_QWORD *)v7;
            v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v7 + 16LL) - 43;
            if ( (unsigned int)v8 <= 1 )
              break;
            v9 = sub_F63050(v5, a2, v8, a4);
            v6 = *(_QWORD *)(v9 + 32);
            if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
              goto LABEL_5;
          }
        }
LABEL_5:
        v4 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
      }
      LODWORD(v10) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
    if ( (unsigned int)(v10 - 25) <= 1 )
      return 0;
    if ( !sub_F56AE0(v6, a2) )
      return 1;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
      return 0;
    a1 = sub_F68450(*v4, (__int64)a2, v12, v13, v14);
  }
}
