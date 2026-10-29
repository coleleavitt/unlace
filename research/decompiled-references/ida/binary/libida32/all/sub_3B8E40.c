void __fastcall sub_3B8E40(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v4; // r13
  unsigned int *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax

  if ( a2 != -1 && *(_DWORD *)(a1 + 1016) != a2 && *(_BYTE *)(a1 + 1000) )
  {
    v4 = *(_QWORD *)(a1 + 1008);
    v6 = *(unsigned int **)(v4 + 48);
    if ( v6 == (unsigned int *)(*(_QWORD *)(v4 + 16) + 16LL * *(_QWORD *)(v4 + 24)) || a2 < *v6 || a2 >= v6[1] )
    {
      v7 = *(_QWORD *)(a1 + 960);
      v8 = a1 + 952;
      if ( v7 )
      {
        do
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v7 + 16);
            v10 = *(_QWORD *)(v7 + 24);
            if ( *(_DWORD *)(v7 + 32) < a2 )
              break;
            v8 = v7;
            v7 = *(_QWORD *)(v7 + 16);
            if ( !v9 )
              goto LABEL_12;
          }
          v7 = *(_QWORD *)(v7 + 24);
        }
        while ( v10 );
LABEL_12:
        if ( a1 + 952 != v8 && a2 == *(_DWORD *)(v8 + 32) )
        {
          *(_DWORD *)(a1 + 1016) = a2;
          *(_QWORD *)(a1 + 1024) = -1;
          *(_QWORD *)(a1 + 992) = v8;
          return;
        }
      }
      if ( a2 == *(_DWORD *)(a1 + 1196) )
      {
        v11 = *(_BYTE *)(a1 + 1200);
      }
      else
      {
        *(_DWORD *)(a1 + 1196) = a2;
        v11 = rangeset_t_find_range(a1 + 1112, a2) != 0;
        *(_BYTE *)(a1 + 1200) = v11;
      }
      if ( v11 )
      {
        *(_DWORD *)(a1 + 1016) = -1;
        *(_QWORD *)(a1 + 1024) = -1;
        *(_QWORD *)(a1 + 992) = v8;
        return;
      }
      v4 = *(_QWORD *)(a1 + 1008);
    }
    v12 = sub_8954D0(v4, a2);
    v13 = v12;
    if ( v12
      && ((v14 = *(_QWORD **)v4, v15 = v12 >> *(_DWORD *)(*(_QWORD *)v4 + 8LL), (_DWORD)v15 != *(_DWORD *)(v4 + 64))
        ? (*(_DWORD *)(v4 + 64) = v15,
           v16 = sub_898D20(v14, (unsigned int)v15, 1),
           v14 = *(_QWORD **)v4,
           *(_QWORD *)(v4 + 72) = v16)
        : (v16 = *(_QWORD *)(v4 + 72)),
          (v17 = (v13 & (*v14 - 1LL) & 0xFFFFFFFFFFFFFFFCLL) + v16) != 0) )
    {
      *(_DWORD *)(a1 + 1016) = a2;
      *(_QWORD *)(a1 + 1024) = v17;
    }
    else if ( !(unsigned __int8)sub_3E9680(a1) || !(unsigned __int8)sub_3EA0A0(a1, a2, a3) )
    {
      *(_DWORD *)(a1 + 1016) = a2;
      *(_QWORD *)(a1 + 1024) = 0;
    }
  }
}

