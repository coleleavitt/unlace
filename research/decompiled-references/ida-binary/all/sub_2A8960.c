__int64 __fastcall sub_2A8960(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r9d
  __int64 v5; // r8
  unsigned int v6; // r13d
  int v7; // ebp
  _UNKNOWN **v8; // rbx
  __int64 v10; // rdi
  __int64 (*v11)(); // rax
  char v12; // al
  unsigned int v13; // [rsp+Ch] [rbp-4Ch]
  __int64 v14; // [rsp+10h] [rbp-48h]
  __int64 v15; // [rsp+18h] [rbp-40h]

  v2 = (int)a2;
  v3 = a2;
  v5 = 4LL * (int)a2;
  v6 = 0;
  v7 = 1;
  v8 = (_UNKNOWN **)&unk_8BA600;
  while ( 2 )
  {
    switch ( *(_DWORD *)v8 )
    {
      case 1:
      case 4:
      case 5:
        goto LABEL_4;
      case 2:
      case 7:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL) + v2) & 1) == 0 )
          goto LABEL_5;
        goto LABEL_4;
      case 6:
        if ( v3 != (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + v5) & 0x7FFFFFFF) )
          goto LABEL_4;
        goto LABEL_5;
      case 8:
        v10 = *(_QWORD *)(a1 + 8);
        v11 = *(__int64 (**)())(*(_QWORD *)v10 + 328LL);
        if ( v11 == proxim_graph_t__::vfunc_41 )
          goto LABEL_5;
        v15 = v5;
        v14 = v2;
        v13 = v3;
        v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 (*)()))v11)(
                v10,
                v3,
                v2,
                proxim_graph_t__::vfunc_41);
        v3 = v13;
        v2 = v14;
        v5 = v15;
        if ( !v12 )
          goto LABEL_5;
LABEL_4:
        v6 |= v7;
LABEL_5:
        v8 += 5;
        v7 *= 2;
        if ( v8 != &off_8BA718 )
          continue;
        return v6;
      default:
        sub_16B930((__int64)"interr: unknown node title button %d", *(_DWORD *)v8);
    }
  }
}
