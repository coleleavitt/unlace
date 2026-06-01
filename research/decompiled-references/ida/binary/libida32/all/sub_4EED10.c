void __fastcall sub_4EED10(__int64 a1, __int64 a2, int a3, double a4, double a5, double a6)
{
  unsigned __int8 *v6; // rbx
  unsigned __int8 *i; // r12
  int v10; // edx
  unsigned int *v11; // rsi
  unsigned __int8 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rsi
  unsigned int v16; // edx
  int v17; // edx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int *v22; // rsi
  unsigned int **v23; // r15
  unsigned int *v24; // rdi
  unsigned int v25; // [rsp+0h] [rbp-48h]
  _QWORD *v26; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a2 + 24) )
  {
    v6 = *(unsigned __int8 **)(a1 + 88);
    for ( i = &v6[72 * *(_QWORD *)(a1 + 96)]; i != v6; v6 += 72 )
    {
      v10 = *v6;
      switch ( (char)v10 )
      {
        case 0:
        case 1:
          v11 = *((unsigned int **)v6 + 1);
          if ( v10 == a3 )
          {
            v25 = *v11;
            v23 = (unsigned int **)sub_4EF830(*(_QWORD *)(a2 + 24), *v11);
            v26 = *(_QWORD **)(a2 + 24);
            if ( v23 != (unsigned int **)(*v26 + 16LL * v26[1]) )
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
            sub_4EE3F0(a2, v11, a4, a5);
          }
          break;
        case 2:
          if ( a3 )
            v22 = *((unsigned int **)v6 + 4);
          else
            v22 = *((unsigned int **)v6 + 1);
          sub_4ED1D0(a2, v22);
          break;
        case 3:
          v15 = *((unsigned int *)v6 + 14);
          if ( a3 )
            v16 = *((_DWORD *)v6 + 15);
          else
            v16 = *((_DWORD *)v6 + 16);
          if ( (unsigned __int8)sub_4ECB10(a2, v15, v16) )
          {
            v18 = *(__int64 **)(a2 + 24);
            v19 = v18[1];
            v20 = *v18;
            if ( (unsigned int)v15 >= (unsigned int)v19 )
              v21 = 16 * v19 + v20;
            else
              v21 = 16 * v15 + v20;
            **(_DWORD **)v21 = v17;
            *(_BYTE *)(v21 + 12) = 1;
          }
          break;
        case 4:
          if ( a3 )
            v14 = *((_DWORD *)v6 + 15);
          else
            v14 = *((_DWORD *)v6 + 16);
          sub_4EEC40(a2, *((_DWORD *)v6 + 14), v14, a4, a5, a6);
          break;
        case 5:
          if ( a3 )
            v12 = v6[69];
          else
            v12 = v6[68];
          v13 = sub_4EF930(*(_QWORD *)(a2 + 24), *((unsigned int *)v6 + 16));
          if ( v13 != **(_QWORD **)(a2 + 24) + 16LL * *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) )
            *(_BYTE *)(v13 + 12) = v12;
          break;
        default:
          continue;
      }
    }
  }
}

