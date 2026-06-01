void __fastcall sub_9167D0(_QWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax

  if ( !*((_WORD *)a2 + 2) )
  {
    v2 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v2 )
    {
      if ( *v2 == 1 && v2[1] == 1 )
      {
        if ( (v4 = (_QWORD *)a1[2], a2 != *(unsigned int **)(v4[13] + 864LL))
          && ((v5 = v4[1104]) == 0
           || (v6 = *a2, (unsigned int)v6 >= *(_DWORD *)(v5 - 4))
           || *(_DWORD *)(v5 + 4 * v6) == 0x7FFFFFFF)
          || (unsigned int)sub_8E80A0(v4, a2) == 1 )
        {
          sub_15D3050(a1[1], a2, a1[8]);
        }
      }
    }
  }
}

