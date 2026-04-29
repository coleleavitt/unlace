unsigned __int64 __fastcall sub_118BA0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 i; // rbp
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rbp

  switch ( *(_BYTE *)a1 )
  {
    case 2:
    case 5:
    case 9:
    case 0xD:
      v2 = *(_QWORD *)(a1 + 8);
      if ( v2 )
        goto LABEL_3;
      break;
    case 3:
    case 0xB:
      qfree(*(_QWORD *)(a1 + 8));
      break;
    case 4:
      v16 = *(_QWORD *)(a1 + 8);
      if ( v16 )
      {
        sub_118BA0(v16 + 64);
        sub_118BA0(v16 + 48);
        sub_118BA0(v16 + 32);
        j__qfree(v16);
      }
      break;
    case 8:
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
      {
        sub_B6F20(*(_QWORD **)(a1 + 8));
        j__qfree(v4);
      }
      break;
    case 0xA:
      v12 = *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        sub_118BA0(*(_QWORD *)(a1 + 8));
        j__qfree(v12);
      }
      break;
    case 0xC:
      v5 = *(__int64 **)(a1 + 8);
      if ( v5 )
      {
        v6 = v5[3];
        if ( v6 )
        {
          v5[4] = 0;
          qfree(v6);
        }
        v7 = *v5;
        if ( *v5 )
        {
          v8 = v5[1];
          if ( v8 )
          {
            for ( i = 0; i != v8; ++i )
            {
              v10 = (__int64 *)(v7 + 24 * i);
              v11 = *v10;
              if ( *v10 )
              {
                v10[1] = 0;
                qfree(v11);
                v7 = *v5;
              }
            }
          }
          v5[1] = 0;
          qfree(v7);
        }
        j__qfree(v5);
      }
      break;
    case 0xE:
      v15 = *(_QWORD *)(a1 + 8);
      if ( v15 )
      {
        sub_118BA0(v15 + 16);
        sub_118BA0(v15);
        v2 = v15;
LABEL_3:
        j__qfree(v2);
      }
      break;
    case 0xF:
      v13 = *(_QWORD *)(a1 + 8);
      if ( v13 )
      {
        clear_tinfo_t(v13 + 48);
        v14 = *(_QWORD *)(v13 + 24);
        if ( v14 )
        {
          *(_QWORD *)(v13 + 32) = 0;
          qfree(v14);
        }
        cleanup_argloc(v13);
        qfree(v13);
      }
      break;
    default:
      break;
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
  return 0xFFFFFFFF00000000LL;
}
