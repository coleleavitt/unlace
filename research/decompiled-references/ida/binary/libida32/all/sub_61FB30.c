__int64 __fastcall sub_61FB30(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 *v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // edx

  v4 = a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = *(__int64 **)(v5 + 1480);
  if ( a3 )
  {
    if ( (unsigned int)(a3 - 1) <= 1 )
      goto LABEL_3;
  }
  else
  {
    if ( (sub_3B9AA0(*(_QWORD *)(v5 + 1480), a2, 4) & 0x2000) == 0 )
      goto LABEL_3;
    v11 = sub_3B90A0(v6, a2);
    v12 = netnode_supnext(v11, (unsigned int)(*(_DWORD *)(a1 + 40) - 1), 83);
    v13 = *(_DWORD *)(a1 + 40);
    if ( v13 == 1000 && v12 > 0xBB7 )
    {
      sub_3CA820(*v6, a2, 0x2000);
LABEL_3:
      while ( 1 )
      {
        v4 = a3 == 2
           ? sub_3BCA60(v6, v4, 0, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_3948C0, nullptr)
           : sub_3BC980(v6, v4, 0xFFFFFFFF, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_3948C0, nullptr);
        if ( v4 == -1 )
          break;
        if ( (sub_3B9AA0((__int64)v6, v4, 4) & 0x2000) != 0 )
        {
          v7 = sub_3B90A0(v6, v4);
          v8 = netnode_supnext(v7, (unsigned int)(*(_DWORD *)(a1 + 40) - 1), 83);
          v9 = *(_DWORD *)(a1 + 40);
          if ( v9 == 1000 && v8 > 0xBB7 )
          {
            sub_3CA820(*v6, v4, 0x2000);
          }
          else if ( v8 < v9 + 1000 )
          {
            return v4;
          }
        }
      }
      return -1;
    }
    if ( v12 >= v13 + 1000 )
      goto LABEL_3;
  }
  if ( a2 != -1 )
    return v4;
  return -1;
}

