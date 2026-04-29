__int64 __fastcall sub_3ADDF0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  int v9; // eax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 59) <= 1 && *(_DWORD *)(a2 + 32) == *(_QWORD *)(a1 + 80) )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v10[0] = 0;
    v10[0] = get_tinfo_property(*(_QWORD *)(v3 + 48), 10);
    set_tinfo_property(v10, 6, 64);
    if ( (unsigned __int8)compare_tinfo(v10[0], *(_QWORD *)(a1 + 88), 0) )
    {
      v4 = **(_QWORD ***)(a1 + 64);
      if ( v4 )
      {
        v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v5 )
        {
          while ( (*(_BYTE *)v5 & 2) == 0 )
          {
            while ( 1 )
            {
              v6 = *(_QWORD *)(v5 + 24);
              if ( a2 >= v6 )
                break;
              v5 = *(_QWORD *)(v5 + 8);
              if ( (*(_BYTE *)v5 & 2) != 0 )
                goto LABEL_10;
            }
            if ( v6 >= a2 )
            {
              if ( (_QWORD *)v5 == v4 )
                break;
              goto LABEL_12;
            }
            v5 = *(_QWORD *)(v5 + 16);
          }
        }
        else
        {
LABEL_12:
          v7 = v5 + 24;
          v8 = sub_3ADCC0(*(__int64 **)(a1 + 72));
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(v7 + 8);
          v9 = *(_DWORD *)(v7 + 16);
          *(_QWORD *)v8 = a2;
          *(_DWORD *)(v8 + 24) = v9;
          *(_DWORD *)(v8 + 28) = sub_3ABBF0((__int64 *)(a1 + 16), a2, 0);
        }
      }
    }
LABEL_10:
    clear_tinfo_t(v10);
  }
  return 0;
}
