void __fastcall sub_3BDAC0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r13
  unsigned __int64 *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax

  if ( a2 != -1 && *(_QWORD *)(a1 + 1024) != a2 && *(_BYTE *)(a1 + 1008) )
  {
    v4 = *(_QWORD *)(a1 + 1016);
    v6 = *(unsigned __int64 **)(v4 + 56);
    if ( v6 == (unsigned __int64 *)(*(_QWORD *)(v4 + 16) + 24LL * *(_QWORD *)(v4 + 24)) || a2 < *v6 || a2 >= v6[1] )
    {
      v7 = *(_QWORD **)(a1 + 968);
      v8 = (_QWORD *)(a1 + 960);
      if ( v7 )
      {
        do
        {
          while ( 1 )
          {
            v9 = v7[2];
            v10 = v7[3];
            if ( v7[4] < a2 )
              break;
            v8 = v7;
            v7 = (_QWORD *)v7[2];
            if ( !v9 )
              goto LABEL_12;
          }
          v7 = (_QWORD *)v7[3];
        }
        while ( v10 );
LABEL_12:
        if ( (_QWORD *)(a1 + 960) != v8 && a2 == v8[4] )
        {
          *(_QWORD *)(a1 + 1024) = a2;
          *(_QWORD *)(a1 + 1032) = -1;
          *(_QWORD *)(a1 + 1000) = v8;
          return;
        }
      }
      if ( a2 == *(_QWORD *)(a1 + 1208) )
      {
        v11 = *(_BYTE *)(a1 + 1216);
      }
      else
      {
        *(_QWORD *)(a1 + 1208) = a2;
        v11 = rangeset_t_find_range(a1 + 1120, a2) != 0;
        *(_BYTE *)(a1 + 1216) = v11;
      }
      if ( v11 )
      {
        *(_QWORD *)(a1 + 1024) = -1;
        *(_QWORD *)(a1 + 1032) = -1;
        *(_QWORD *)(a1 + 1000) = v8;
        return;
      }
      v4 = *(_QWORD *)(a1 + 1016);
    }
    v12 = sub_8B8E80(v4, a2);
    v13 = v12;
    if ( v12
      && ((v14 = *(_QWORD **)v4, v15 = v12 >> *(_DWORD *)(*(_QWORD *)v4 + 8LL), (_DWORD)v15 != *(_DWORD *)(v4 + 72))
        ? (*(_DWORD *)(v4 + 72) = v15,
           v16 = sub_8BCA60(v14, (unsigned int)v15, 1),
           v14 = *(_QWORD **)v4,
           *(_QWORD *)(v4 + 80) = v16)
        : (v16 = *(_QWORD *)(v4 + 80)),
          (v17 = (v13 & (*v14 - 1LL) & 0xFFFFFFFFFFFFFFFCLL) + v16) != 0) )
    {
      *(_QWORD *)(a1 + 1024) = a2;
      *(_QWORD *)(a1 + 1032) = v17;
    }
    else if ( !(unsigned __int8)sub_3FC5C0(a1) || !(unsigned __int8)sub_3FCFE0(a1, a2, a3) )
    {
      *(_QWORD *)(a1 + 1024) = a2;
      *(_QWORD *)(a1 + 1032) = 0;
    }
  }
}
