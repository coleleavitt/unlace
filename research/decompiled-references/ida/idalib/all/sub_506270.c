void __fastcall sub_506270(__int64 a1, __int64 a2, int a3, double a4, double a5, double a6)
{
  unsigned __int8 *v7; // rbx
  unsigned __int8 *i; // r12
  int v10; // edx
  unsigned __int64 *v11; // rsi
  unsigned __int8 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 *v22; // rsi
  unsigned __int64 **v23; // r15
  unsigned __int64 *v24; // rdi
  unsigned __int64 v25; // [rsp+0h] [rbp-48h]
  _QWORD *v26; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a2 + 32) )
  {
    v7 = *(unsigned __int8 **)(a1 + 88);
    for ( i = &v7[88 * *(_QWORD *)(a1 + 96)]; i != v7; v7 += 88 )
    {
      v10 = *v7;
      switch ( (char)v10 )
      {
        case 0:
        case 1:
          v11 = *((unsigned __int64 **)v7 + 1);
          if ( v10 == a3 )
          {
            v25 = *v11;
            v23 = (unsigned __int64 **)sub_506E00(*(_QWORD *)(a2 + 32), *v11);
            v26 = *(_QWORD **)(a2 + 32);
            if ( v23 != (unsigned __int64 **)(*v26 + 16LL * v26[1]) )
            {
              v24 = *v23;
              if ( v25 >= **v23 && v25 < v24[1] )
              {
                qfree(v24);
                memmove(v23, v23 + 2, *v26 + 16LL * v26[1]-- - (_QWORD)v23 - 16);
                v26[3] = v23;
              }
            }
          }
          else
          {
            sub_505940(a2, v11, a4, a5);
          }
          break;
        case 2:
          if ( a3 )
            v22 = *((unsigned __int64 **)v7 + 4);
          else
            v22 = *((unsigned __int64 **)v7 + 1);
          sub_504700(a2, v22);
          break;
        case 3:
          v15 = *((unsigned int *)v7 + 14);
          if ( a3 )
            v16 = *((_QWORD *)v7 + 8);
          else
            v16 = *((_QWORD *)v7 + 9);
          if ( (unsigned __int8)sub_504020(a2, v15, v16) )
          {
            v18 = *(__int64 **)(a2 + 32);
            v19 = v18[1];
            v20 = *v18;
            if ( (unsigned int)v15 >= (unsigned int)v19 )
              v21 = 16 * v19 + v20;
            else
              v21 = 16 * v15 + v20;
            **(_QWORD **)v21 = v17;
            *(_BYTE *)(v21 + 12) = 1;
          }
          break;
        case 4:
          if ( a3 )
            v14 = *((_QWORD *)v7 + 8);
          else
            v14 = *((_QWORD *)v7 + 9);
          sub_5061A0(a2, *((_DWORD *)v7 + 14), v14, a4, a5, a6);
          break;
        case 5:
          if ( a3 )
            v12 = v7[81];
          else
            v12 = v7[80];
          v13 = sub_506F10(*(_QWORD *)(a2 + 32), *((_QWORD *)v7 + 9));
          if ( v13 != **(_QWORD **)(a2 + 32) + 16LL * *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) )
            *(_BYTE *)(v13 + 12) = v12;
          break;
        default:
          continue;
      }
    }
  }
}
