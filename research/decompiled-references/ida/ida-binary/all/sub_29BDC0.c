unsigned __int64 __fastcall sub_29BDC0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int64 v5; // rbx
  _BYTE *v7; // rbp
  _BYTE *v8; // r14
  const char *v9; // rax
  char v10; // cl
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BYTE *v14; // rdi
  __int64 v15; // rsi
  int v16; // ecx
  int v17; // eax
  __int64 (__fastcall *v18)(__int64); // rax
  int v19; // eax
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v5 = (unsigned __int64)&a2[a3];
  if ( a2 >= &a2[a3] )
    goto LABEL_25;
  v7 = a2;
  v8 = a2;
  v9 = "g:";
  if ( a2 == (_BYTE *)(v5 - 1) )
  {
LABEL_22:
    *(_BYTE *)(v5 - 1) = 0;
    v8 = (_BYTE *)(v5 - 1);
  }
  else
  {
    while ( 1 )
    {
      v10 = *v9++;
      *v8 = v10;
      if ( !v10 )
        break;
      if ( ++v8 == (_BYTE *)(v5 - 1) )
        goto LABEL_22;
    }
  }
  v22 = a1;
  v23 = 0;
  v11 = node_iterator_goup(&v22);
  v13 = *(_QWORD *)v11;
  LODWORD(v11) = *(_DWORD *)(v11 + 8);
  v22 = v13;
  v23 = v11;
  while ( 1 )
  {
    v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    v19 = v18 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v18(a1);
    v16 = v23;
    if ( v19 == v23 && a1 == v22 )
      break;
    a2 = *(_BYTE **)(a1 + 80);
    if ( *(int *)&a2[4 * v23] < 0 )
    {
      if ( v8 == v7 )
      {
        v15 = a3;
        v14 = v7;
      }
      else
      {
        if ( (unsigned __int64)v8 >= v5 )
        {
          if ( !under_debugger )
          {
            interr(518, a2, v12, v23, a5);
LABEL_25:
            if ( !under_debugger )
              interr(520, a2, a3, a4, a5);
          }
          BUG();
        }
        v14 = v8 + 1;
        *v8 = 44;
        if ( (unsigned __int64)(v8 + 1) >= v5 )
        {
          *(_BYTE *)(v5 - 1) = 0;
          v14 = (_BYTE *)(v5 - 1);
          v15 = 1;
        }
        else
        {
          v15 = v5 - (_QWORD)v14;
        }
      }
      a5 = qsnprintf(v14, v15, "%d", v16);
      v16 = v23;
      v8 = &v14[v17];
    }
    v23 = v16 + 1;
    node_iterator_goup(&v22);
  }
  return v24 - __readfsqword(0x28u);
}
